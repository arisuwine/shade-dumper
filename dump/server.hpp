#pragma once
#include <cstdint>

namespace offsets {
    namespace server {
        // Local Type Scope
        enum class CLogicBranchList__LogicBranchListenerLastState_t : std::uint32_t {
            LOGIC_BRANCH_LISTENER_NOT_INIT  = 0x0,
            LOGIC_BRANCH_LISTENER_ALL_TRUE  = 0x1,
            LOGIC_BRANCH_LISTENER_ALL_FALSE = 0x2,
            LOGIC_BRANCH_LISTENER_MIXED     = 0x3
        };

        // Local Type Scope
        enum class CFuncMover__Move_t : std::uint32_t {
            MOVE_LOOP        = 0x0,
            MOVE_OSCILLATE   = 0x1,
            MOVE_STOP_AT_END = 0x2
        };

        // Local Type Scope
        enum class CFuncRotator__Rotate_t : std::uint32_t {
            ROTATE_LOOP                          = 0x0,
            ROTATE_OSCILLATE                     = 0x1,
            ROTATE_STOP_AT_END                   = 0x2,
            ROTATE_LOOK_AT_TARGET                = 0x3,
            ROTATE_LOOK_AT_TARGET_ONLY_YAW       = 0x4,
            ROTATE_RETURN_TO_INITIAL_ORIENTATION = 0x5
        };

        // Local Type Scope
        enum class PulseBestOutflowRules_t : std::uint32_t {
            SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0,
            SORT_BY_OUTFLOW_INDEX            = 0x1
        };

        // Local Type Scope
        enum class CPhysicsProp__CrateType_t : std::uint32_t {
            CRATE_SPECIFIC_ITEM = 0x0,
            CRATE_TYPE_COUNT    = 0x1
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

        // Local Type Scope
        enum class CFuncMover__FollowConstraint_t : std::uint32_t {
            FOLLOW_CONSTRAINT_DISTANCE = 0x0,
            FOLLOW_CONSTRAINT_SPRING   = 0x1
        };

        // Local Type Scope
        enum class CFuncMover__FollowEntityDirection_t : std::uint32_t {
            FOLLOW_ENTITY_BIDIRECTIONAL = 0x0,
            FOLLOW_ENTITY_FORWARD       = 0x1,
            FOLLOW_ENTITY_REVERSE       = 0x2
        };

        // Local Type Scope
        enum class CFuncMover__TransitionToPathNodeAction_t : std::uint32_t {
            TRANSITION_TO_PATH_NODE_ACTION_NONE          = 0x0,
            TRANSITION_TO_PATH_NODE_ACTION_START_FORWARD = 0x1,
            TRANSITION_TO_PATH_NODE_ACTION_START_REVERSE = 0x2,
            TRANSITION_TO_PATH_NODE_TRANSITIONING        = 0x3
        };

        // Local Type Scope
        enum class CFuncMover__OrientationUpdate_t : std::uint32_t {
            ORIENTATION_FORWARD_PATH                                    = 0x0,
            ORIENTATION_FORWARD_PATH_AND_FIXED_PITCH                    = 0x1,
            ORIENTATION_FORWARD_PATH_AND_UP_CONTROL_POINT               = 0x2,
            ORIENTATION_MATCH_CONTROL_POINT                             = 0x3,
            ORIENTATION_FIXED                                           = 0x4,
            ORIENTATION_FACE_PLAYER                                     = 0x5,
            ORIENTATION_FORWARD_MOVEMENT_DIRECTION                      = 0x6,
            ORIENTATION_FORWARD_MOVEMENT_DIRECTION_AND_UP_CONTROL_POINT = 0x7,
            ORIENTATION_FACE_ENTITY                                     = 0x8
        };

        enum class PropDoorRotatingOpenDirection_e : std::uint32_t {
            DOOR_ROTATING_OPEN_BOTH_WAYS = 0x0,
            DOOR_ROTATING_OPEN_FORWARD   = 0x1,
            DOOR_ROTATING_OPEN_BACKWARD  = 0x2
        };

        enum class PulseCollisionGroup_t : std::uint32_t {
            DEFAULT = 0x0
        };

        enum class SceneOnPlayerDeath_t : std::uint32_t {
            SCENE_ONPLAYERDEATH_DO_NOTHING = 0x0,
            SCENE_ONPLAYERDEATH_CANCEL     = 0x1
        };

        enum class LessonPanelLayoutFileTypes_t : std::uint32_t {
            LAYOUT_HAND_DEFAULT  = 0x0,
            LAYOUT_WORLD_DEFAULT = 0x1,
            LAYOUT_CUSTOM        = 0x2
        };

        enum class TimelineCompression_t : std::uint32_t {
            TIMELINE_COMPRESSION_SUM                = 0x0,
            TIMELINE_COMPRESSION_COUNT_PER_INTERVAL = 0x1,
            TIMELINE_COMPRESSION_AVERAGE            = 0x2,
            TIMELINE_COMPRESSION_AVERAGE_BLEND      = 0x3,
            TIMELINE_COMPRESSION_TOTAL              = 0x4
        };

        enum class SubclassVDataChangeType_t : std::uint32_t {
            SUBCLASS_VDATA_CREATED          = 0x0,
            SUBCLASS_VDATA_SUBCLASS_CHANGED = 0x1,
            SUBCLASS_VDATA_RELOADED         = 0x2
        };

        enum class C4LightEffect_t : std::uint32_t {
            eLightEffectNone            = 0x0,
            eLightEffectDropped         = 0x1,
            eLightEffectThirdPersonHeld = 0x2
        };

        enum class StanceType_t : std::uint32_t {
            STANCE_CURRENT   = 0xFFFFFFFF,
            STANCE_DEFAULT   = 0x0,
            STANCE_CROUCHING = 0x1,
            STANCE_PRONE     = 0x2,
            NUM_STANCES      = 0x3
        };

        enum class Explosions : std::uint32_t {
            expRandom     = 0x0,
            expDirected   = 0x1,
            expUsePrecise = 0x2
        };

        enum class PreviewCharacterMode : std::uint32_t {
            INVALID           = 0xFFFFFFFF,
            DIORAMA           = 0x0,
            MAIN_MENU         = 0x1,
            BUY_MENU          = 0x2,
            TEAM_SELECT       = 0x3,
            END_OF_MATCH      = 0x4,
            INVENTORY_INSPECT = 0x5,
            WALKING           = 0x6,
            TEAM_INTRO        = 0x7,
            WINGMAN_INTRO     = 0x8,
            BANNER            = 0x9
        };

        enum class ObserverInterpState_t : std::uint32_t {
            OBSERVER_INTERP_NONE      = 0x0,
            OBSERVER_INTERP_STARTING  = 0x1,
            OBSERVER_INTERP_TRAVELING = 0x2,
            OBSERVER_INTERP_SETTLING  = 0x3
        };

        enum class WorldTextPanelOrientation_t : std::uint32_t {
            WORLDTEXT_ORIENTATION_DEFAULT          = 0x0,
            WORLDTEXT_ORIENTATION_FACEUSER         = 0x1,
            WORLDTEXT_ORIENTATION_FACEUSER_UPRIGHT = 0x2
        };

        enum class EDestructibleParts_DestroyParameterFlags : std::uint32_t {
            None                          = 0x0,
            GenerateBreakpieces           = 0x1,
            SetBodyGroupAndCollisionState = 0x2,
            EnableFlinches                = 0x4,
            ForceDamageApply              = 0x8,
            IgnoreKillEntityFlag          = 0x10,
            IgnoreHealthCheck             = 0x20,
            Default                       = 0x7
        };

        enum class WorldTextPanelHorizontalAlign_t : std::uint32_t {
            WORLDTEXT_HORIZONTAL_ALIGN_LEFT   = 0x0,
            WORLDTEXT_HORIZONTAL_ALIGN_CENTER = 0x1,
            WORLDTEXT_HORIZONTAL_ALIGN_RIGHT  = 0x2
        };

        enum class SequenceFinishNotifyState_t : std::uint8_t {
            eDoNotNotify        = 0x0,
            eNotifyWhenFinished = 0x1,
            eNotifyTriggered    = 0x2
        };

        enum class SoundEventStartType_t : std::uint32_t {
            SOUNDEVENT_START_PLAYER = 0x0,
            SOUNDEVENT_START_WORLD  = 0x1,
            SOUNDEVENT_START_ENTITY = 0x2
        };

        enum class AnimGraphDebugDrawType_t : std::uint32_t {
            None        = 0x0,
            WsPosition  = 0x1,
            MsPosition  = 0x2,
            WsDirection = 0x3,
            MsDirection = 0x4
        };

        enum class TrainOrientationType_t : std::uint32_t {
            TrainOrientation_Fixed         = 0x0,
            TrainOrientation_AtPathTracks  = 0x1,
            TrainOrientation_LinearBlend   = 0x2,
            TrainOrientation_EaseInEaseOut = 0x3
        };

        enum class CSWeaponCategory : std::uint32_t {
            WEAPONCATEGORY_OTHER     = 0x0,
            WEAPONCATEGORY_MELEE     = 0x1,
            WEAPONCATEGORY_SECONDARY = 0x2,
            WEAPONCATEGORY_SMG       = 0x3,
            WEAPONCATEGORY_RIFLE     = 0x4,
            WEAPONCATEGORY_HEAVY     = 0x5,
            WEAPONCATEGORY_COUNT     = 0x6
        };

        enum class BeginDeathLifeStateTransition_t : std::uint8_t {
            TRANSITION_TO_LIFESTATE_DYING = 0x0,
            TRANSITION_TO_LIFESTATE_DEAD  = 0x1
        };

        enum class PointOrientGoalDirectionType_t : std::uint32_t {
            eAbsOrigin   = 0x0,
            eCenter      = 0x1,
            eHead        = 0x2,
            eForward     = 0x3,
            eEyesForward = 0x4
        };

        enum class ItemFlagTypes_t : std::uint8_t {
            ITEM_FLAG_NONE                    = 0x0,
            ITEM_FLAG_CAN_SELECT_WITHOUT_AMMO = 0x1,
            ITEM_FLAG_NOAUTORELOAD            = 0x2,
            ITEM_FLAG_NOAUTOSWITCHEMPTY       = 0x4,
            ITEM_FLAG_LIMITINWORLD            = 0x8,
            ITEM_FLAG_EXHAUSTIBLE             = 0x10,
            ITEM_FLAG_DOHITLOCATIONDMG        = 0x20,
            ITEM_FLAG_NOAMMOPICKUPS           = 0x40,
            ITEM_FLAG_NOITEMPICKUP            = 0x80
        };

        enum class SurroundingBoundsType_t : std::uint8_t {
            USE_OBB_COLLISION_BOUNDS              = 0x0,
            USE_BEST_COLLISION_BOUNDS             = 0x1,
            USE_HITBOXES                          = 0x2,
            USE_SPECIFIED_BOUNDS                  = 0x3,
            USE_GAME_CODE                         = 0x4,
            USE_ROTATION_EXPANDED_BOUNDS          = 0x5,
            USE_ROTATION_EXPANDED_ORIENTED_BOUNDS = 0x6,
            USE_COLLISION_BOUNDS_NEVER_VPHYSICS   = 0x7,
            USE_ROTATION_EXPANDED_SEQUENCE_BOUNDS = 0x8,
            SURROUNDING_TYPE_BIT_COUNT            = 0x3
        };

        enum class LifeState_t : std::uint32_t {
            LIFE_ALIVE       = 0x0,
            LIFE_DYING       = 0x1,
            LIFE_DEAD        = 0x2,
            LIFE_RESPAWNABLE = 0x3,
            LIFE_RESPAWNING  = 0x4,
            NUM_LIFESTATES   = 0x5
        };

        enum class PointOrientConstraint_t : std::uint32_t {
            eNone           = 0x0,
            ePreserveUpAxis = 0x1
        };

        enum class NPCFollowFormation_t : std::uint32_t {
            Default      = 0xFFFFFFFF,
            CloseCircle  = 0x0,
            WideCircle   = 0x1,
            MediumCircle = 0x5,
            Sidekick     = 0x6
        };

        enum class AnimationAlgorithm_t : std::uint8_t {
            eInvalid             = 0xFF,
            eNone                = 0x0,
            eSequence            = 0x1,
            eAnimGraph2          = 0x2,
            eAnimGraph2Secondary = 0x3,
            eAnimGraph1          = 0x4,
            eCount               = 0x5
        };

        enum class CSWeaponMode : std::uint32_t {
            Primary_Mode   = 0x0,
            Secondary_Mode = 0x1,
            WeaponMode_MAX = 0x2
        };

        enum class OnFrame : std::uint8_t {
            ONFRAME_UNKNOWN = 0x0,
            ONFRAME_TRUE    = 0x1,
            ONFRAME_FALSE   = 0x2
        };

        enum class Materials : std::uint32_t {
            matGlass            = 0x0,
            matWood             = 0x1,
            matMetal            = 0x2,
            matFlesh            = 0x3,
            matCinderBlock      = 0x4,
            matCeilingTile      = 0x5,
            matComputer         = 0x6,
            matUnbreakableGlass = 0x7,
            matRocks            = 0x8,
            matWeb              = 0x9,
            matNone             = 0xA,
            matLastMaterial     = 0xB
        };

        enum class BloodType : std::uint32_t {
            None         = 0xFFFFFFFF,
            ColorRed     = 0x0,
            ColorYellow  = 0x1,
            ColorGreen   = 0x2,
            ColorRedLVL2 = 0x3,
            ColorRedLVL3 = 0x4,
            ColorRedLVL4 = 0x5,
            ColorRedLVL5 = 0x6,
            ColorRedLVL6 = 0x7
        };

        enum class NavScope_t : std::uint8_t {
            eGround  = 0x0,
            eAir     = 0x1,
            eCount   = 0x2,
            eFirst   = 0x0,
            eInvalid = 0xFF
        };

        enum class BreakableContentsType_t : std::uint32_t {
            BC_DEFAULT                  = 0x0,
            BC_EMPTY                    = 0x1,
            BC_PROP_GROUP_OVERRIDE      = 0x2,
            BC_PARTICLE_SYSTEM_OVERRIDE = 0x3
        };

        enum class AnimLoopMode_t : std::uint32_t {
            ANIM_LOOP_MODE_INVALID               = 0xFFFFFFFF,
            ANIM_LOOP_MODE_NOT_LOOPING           = 0x0,
            ANIM_LOOP_MODE_LOOPING               = 0x1,
            ANIM_LOOP_MODE_USE_SEQUENCE_SETTINGS = 0x2,
            ANIM_LOOP_MODE_COUNT                 = 0x3
        };

        enum class Class_T : std::uint32_t {
            CLASS_NONE                = 0x0,
            CLASS_PLAYER              = 0x1,
            CLASS_PLAYER_ALLY         = 0x2,
            CLASS_C4_FOR_RADAR        = 0x3,
            CLASS_FOOT_CONTACT_SHADOW = 0x4,
            CLASS_WEAPON              = 0x5,
            CLASS_WATER_SPLASHER      = 0x6,
            CLASS_HUDMODEL_WEAPON     = 0x7,
            CLASS_HUDMODEL_ARMS       = 0x8,
            CLASS_HUDMODEL_ADDON      = 0x9,
            CLASS_WORLDMODEL_GLOVES   = 0xA,
            CLASS_DOOR                = 0xB,
            CLASS_PLANTED_C4          = 0xC,
            NUM_CLASSIFY_CLASSES      = 0xD
        };

        enum class filter_t : std::uint32_t {
            FILTER_AND = 0x0,
            FILTER_OR  = 0x1
        };

        enum class CSWeaponSilencerType : std::uint32_t {
            WEAPONSILENCER_NONE       = 0x0,
            WEAPONSILENCER_DETACHABLE = 0x1,
            WEAPONSILENCER_INTEGRATED = 0x2
        };

        enum class EProceduralRagdollWeightIndexPropagationMethod : std::uint32_t {
            Bone            = 0x0,
            BoneAndChildren = 0x1
        };

        enum class BaseExplosionTypes_t : std::uint32_t {
            EXPLOSION_TYPE_DEFAULT         = 0x0,
            EXPLOSION_TYPE_GRENADE         = 0x1,
            EXPLOSION_TYPE_MOLOTOV         = 0x2,
            EXPLOSION_TYPE_FIREWORKS       = 0x3,
            EXPLOSION_TYPE_GASCAN          = 0x4,
            EXPLOSION_TYPE_GASCYLINDER     = 0x5,
            EXPLOSION_TYPE_EXPLOSIVEBARREL = 0x6,
            EXPLOSION_TYPE_ELECTRICAL      = 0x7,
            EXPLOSION_TYPE_EMP             = 0x8,
            EXPLOSION_TYPE_SHRAPNEL        = 0x9,
            EXPLOSION_TYPE_SMOKEGRENADE    = 0xA,
            EXPLOSION_TYPE_FLASHBANG       = 0xB,
            EXPLOSION_TYPE_TRIPMINE        = 0xC,
            EXPLOSION_TYPE_ICE             = 0xD,
            EXPLOSION_TYPE_NONE            = 0xE,
            EXPLOSION_TYPE_CUSTOM          = 0xF,
            EXPLOSION_TYPE_COUNT           = 0x10
        };

        enum class GameAnimEventIndex_t : std::uint32_t {
            AE_EMPTY                              = 0x0,
            AE_CL_PLAYSOUND                       = 0x1,
            AE_CL_PLAYSOUND_ATTACHMENT            = 0x2,
            AE_CL_PLAYSOUND_POSITION              = 0x3,
            AE_SV_PLAYSOUND                       = 0x4,
            AE_CL_STOPSOUND                       = 0x5,
            AE_CL_PLAYSOUND_LOOPING               = 0x6,
            AE_CL_CREATE_PARTICLE_EFFECT          = 0x7,
            AE_CL_STOP_PARTICLE_EFFECT            = 0x8,
            AE_CL_CREATE_PARTICLE_EFFECT_CFG      = 0x9,
            AE_SV_CREATE_PARTICLE_EFFECT_CFG      = 0xA,
            AE_SV_STOP_PARTICLE_EFFECT            = 0xB,
            AE_FOOTSTEP                           = 0xC,
            AE_CL_STOP_RAGDOLL_CONTROL            = 0xD,
            AE_CL_ENABLE_BODYGROUP                = 0xE,
            AE_CL_DISABLE_BODYGROUP               = 0xF,
            AE_BODYGROUP_SET_VALUE                = 0x10,
            AE_WEAPON_PERFORM_ATTACK              = 0x11,
            AE_FIRE_INPUT                         = 0x12,
            AE_CL_CLOTH_ATTR                      = 0x13,
            AE_CL_CLOTH_GROUND_OFFSET             = 0x14,
            AE_CL_CLOTH_STIFFEN                   = 0x15,
            AE_CL_CLOTH_EFFECT                    = 0x16,
            AE_CL_CREATE_ANIM_SCOPE_PROP          = 0x17,
            AE_SV_IKLOCK                          = 0x18,
            AE_PULSE_GRAPH                        = 0x19,
            AE_DISABLE_PLATFORM                   = 0x1A,
            AE_ENABLE_PLATFORM_PLAYER_FOLLOWS_YAW = 0x1B,
            AE_ENABLE_PLATFORM_PLAYER_IGNORES_YAW = 0x1C,
            AE_DESTRUCTIBLE_PART_DESTROY          = 0x1D,
            AE_CL_WEAPON_TRANSITION_INTO_HAND     = 0x1E,
            AE_SV_ATTACH_SILENCER_COMPLETE        = 0x1F,
            AE_SV_DETACH_SILENCER_COMPLETE        = 0x20,
            AE_CL_EJECT_MAG                       = 0x21,
            AE_WPN_COMPLETE_RELOAD                = 0x22,
            AE_WPN_HEALTHSHOT_INJECT              = 0x23,
            AE_GRENADE_THROW_COMPLETE             = 0x24
        };

        enum class FixAngleSet_t : std::uint8_t {
            None     = 0x0,
            Absolute = 0x1,
            Relative = 0x2
        };

        enum class IChoreoServices__ScriptState_t : std::uint32_t {
            SCRIPT_PLAYING      = 0x0,
            SCRIPT_WAIT         = 0x1,
            SCRIPT_POST_IDLE    = 0x2,
            SCRIPT_CLEANUP      = 0x3,
            SCRIPT_MOVE_TO_MARK = 0x4
        };

        enum class Touch_t : std::uint32_t {
            touch_none                         = 0x0,
            touch_player_only                  = 0x1,
            touch_npc_only                     = 0x2,
            touch_player_or_npc                = 0x3,
            touch_player_or_npc_or_physicsprop = 0x4
        };

        enum class TrainVelocityType_t : std::uint32_t {
            TrainVelocity_Instantaneous = 0x0,
            TrainVelocity_LinearBlend   = 0x1,
            TrainVelocity_EaseInEaseOut = 0x2
        };

        enum class CSWeaponType : std::uint32_t {
            WEAPONTYPE_KNIFE         = 0x0,
            WEAPONTYPE_PISTOL        = 0x1,
            WEAPONTYPE_SUBMACHINEGUN = 0x2,
            WEAPONTYPE_RIFLE         = 0x3,
            WEAPONTYPE_SHOTGUN       = 0x4,
            WEAPONTYPE_SNIPER_RIFLE  = 0x5,
            WEAPONTYPE_MACHINEGUN    = 0x6,
            WEAPONTYPE_C4            = 0x7,
            WEAPONTYPE_TASER         = 0x8,
            WEAPONTYPE_GRENADE       = 0x9,
            WEAPONTYPE_EQUIPMENT     = 0xA,
            WEAPONTYPE_STACKABLEITEM = 0xB,
            WEAPONTYPE_UNKNOWN       = 0xC
        };

        enum class NavScopeFlags_t : std::uint8_t {
            eGround = 0x1,
            eAir    = 0x2,
            eAll    = 0x3,
            eNone   = 0x0
        };

        enum class EntFinderMethod_t : std::uint32_t {
            ENT_FIND_METHOD_NEAREST  = 0x0,
            ENT_FIND_METHOD_FARTHEST = 0x1,
            ENT_FIND_METHOD_RANDOM   = 0x2
        };

        enum class TestInputOutputCombinationsEnum_t : std::uint32_t {
            ZERO = 0x0,
            ONE  = 0x1,
            TWO  = 0x2
        };

        enum class PropDoorRotatingSpawnPos_t : std::uint32_t {
            DOOR_SPAWN_CLOSED       = 0x0,
            DOOR_SPAWN_OPEN_FORWARD = 0x1,
            DOOR_SPAWN_OPEN_BACK    = 0x2,
            DOOR_SPAWN_AJAR         = 0x3
        };

        enum class ShardSolid_t : std::uint8_t {
            SHARD_SOLID  = 0x0,
            SHARD_DEBRIS = 0x1
        };

        enum class EntityPlatformTypes_t : std::uint8_t {
            ENTITY_NOT_PLATFORM                = 0x0,
            ENTITY_PLATFORM_PLAYER_FOLLOWS_YAW = 0x1,
            ENTITY_PLATFORM_PLAYER_IGNORES_YAW = 0x2
        };

        enum class PulseNPCCondition_t : std::uint32_t {
            COND_SEE_PLAYER      = 0x1,
            COND_LOST_PLAYER     = 0x2,
            COND_HEAR_PLAYER     = 0x3,
            COND_PLAYER_PUSHING  = 0x4,
            COND_NO_PRIMARY_AMMO = 0x5
        };

        enum class RenderMode_t : std::uint8_t {
            kRenderNormal     = 0x0,
            kRenderTransAlpha = 0x1,
            kRenderNone       = 0x2,
            kRenderModeCount  = 0x3
        };

        enum class ForcedCrouchState_t : std::uint32_t {
            FORCEDCROUCH_NONE       = 0x0,
            FORCEDCROUCH_CROUCHED   = 0x1,
            FORCEDCROUCH_UNCROUCHED = 0x2
        };

        enum class PerformanceMode_t : std::uint32_t {
            PM_NORMAL  = 0x0,
            PM_NO_GIBS = 0x1
        };

        enum class TOGGLE_STATE : std::uint32_t {
            TS_AT_TOP     = 0x0,
            TS_AT_BOTTOM  = 0x1,
            TS_GOING_UP   = 0x2,
            TS_GOING_DOWN = 0x3,
            DOOR_OPEN     = 0x0,
            DOOR_CLOSED   = 0x1,
            DOOR_OPENING  = 0x2,
            DOOR_CLOSING  = 0x3
        };

        enum class loadout_slot_t : std::uint32_t {
            LOADOUT_SLOT_PROMOTED              = 0xFFFFFFFE,
            LOADOUT_SLOT_INVALID               = 0xFFFFFFFF,
            LOADOUT_SLOT_MELEE                 = 0x0,
            LOADOUT_SLOT_C4                    = 0x1,
            LOADOUT_SLOT_FIRST_AUTO_BUY_WEAPON = 0x0,
            LOADOUT_SLOT_LAST_AUTO_BUY_WEAPON  = 0x1,
            LOADOUT_SLOT_SECONDARY0            = 0x2,
            LOADOUT_SLOT_SECONDARY1            = 0x3,
            LOADOUT_SLOT_SECONDARY2            = 0x4,
            LOADOUT_SLOT_SECONDARY3            = 0x5,
            LOADOUT_SLOT_SECONDARY4            = 0x6,
            LOADOUT_SLOT_SECONDARY5            = 0x7,
            LOADOUT_SLOT_SMG0                  = 0x8,
            LOADOUT_SLOT_SMG1                  = 0x9,
            LOADOUT_SLOT_SMG2                  = 0xA,
            LOADOUT_SLOT_SMG3                  = 0xB,
            LOADOUT_SLOT_SMG4                  = 0xC,
            LOADOUT_SLOT_SMG5                  = 0xD,
            LOADOUT_SLOT_RIFLE0                = 0xE,
            LOADOUT_SLOT_RIFLE1                = 0xF,
            LOADOUT_SLOT_RIFLE2                = 0x10,
            LOADOUT_SLOT_RIFLE3                = 0x11,
            LOADOUT_SLOT_RIFLE4                = 0x12,
            LOADOUT_SLOT_RIFLE5                = 0x13,
            LOADOUT_SLOT_HEAVY0                = 0x14,
            LOADOUT_SLOT_HEAVY1                = 0x15,
            LOADOUT_SLOT_HEAVY2                = 0x16,
            LOADOUT_SLOT_HEAVY3                = 0x17,
            LOADOUT_SLOT_HEAVY4                = 0x18,
            LOADOUT_SLOT_HEAVY5                = 0x19,
            LOADOUT_SLOT_FIRST_WHEEL_WEAPON    = 0x2,
            LOADOUT_SLOT_LAST_WHEEL_WEAPON     = 0x19,
            LOADOUT_SLOT_FIRST_PRIMARY_WEAPON  = 0x8,
            LOADOUT_SLOT_LAST_PRIMARY_WEAPON   = 0x19,
            LOADOUT_SLOT_FIRST_WHEEL_GRENADE   = 0x1A,
            LOADOUT_SLOT_GRENADE0              = 0x1A,
            LOADOUT_SLOT_GRENADE1              = 0x1B,
            LOADOUT_SLOT_GRENADE2              = 0x1C,
            LOADOUT_SLOT_GRENADE3              = 0x1D,
            LOADOUT_SLOT_GRENADE4              = 0x1E,
            LOADOUT_SLOT_GRENADE5              = 0x1F,
            LOADOUT_SLOT_LAST_WHEEL_GRENADE    = 0x1F,
            LOADOUT_SLOT_EQUIPMENT0            = 0x20,
            LOADOUT_SLOT_EQUIPMENT1            = 0x21,
            LOADOUT_SLOT_EQUIPMENT2            = 0x22,
            LOADOUT_SLOT_EQUIPMENT3            = 0x23,
            LOADOUT_SLOT_EQUIPMENT4            = 0x24,
            LOADOUT_SLOT_EQUIPMENT5            = 0x25,
            LOADOUT_SLOT_FIRST_WHEEL_EQUIPMENT = 0x20,
            LOADOUT_SLOT_LAST_WHEEL_EQUIPMENT  = 0x25,
            LOADOUT_SLOT_CLOTHING_CUSTOMPLAYER = 0x26,
            LOADOUT_SLOT_CLOTHING_CUSTOMHEAD   = 0x27,
            LOADOUT_SLOT_CLOTHING_FACEMASK     = 0x28,
            LOADOUT_SLOT_CLOTHING_HANDS        = 0x29,
            LOADOUT_SLOT_FIRST_COSMETIC        = 0x29,
            LOADOUT_SLOT_LAST_COSMETIC         = 0x29,
            LOADOUT_SLOT_CLOTHING_EYEWEAR      = 0x2A,
            LOADOUT_SLOT_CLOTHING_HAT          = 0x2B,
            LOADOUT_SLOT_CLOTHING_LOWERBODY    = 0x2C,
            LOADOUT_SLOT_CLOTHING_TORSO        = 0x2D,
            LOADOUT_SLOT_CLOTHING_APPEARANCE   = 0x2E,
            LOADOUT_SLOT_MISC0                 = 0x2F,
            LOADOUT_SLOT_MISC1                 = 0x30,
            LOADOUT_SLOT_MISC2                 = 0x31,
            LOADOUT_SLOT_MISC3                 = 0x32,
            LOADOUT_SLOT_MISC4                 = 0x33,
            LOADOUT_SLOT_MISC5                 = 0x34,
            LOADOUT_SLOT_MISC6                 = 0x35,
            LOADOUT_SLOT_MUSICKIT              = 0x36,
            LOADOUT_SLOT_FLAIR0                = 0x37,
            LOADOUT_SLOT_SPRAY0                = 0x38,
            LOADOUT_SLOT_FIRST_ALL_CHARACTER   = 0x36,
            LOADOUT_SLOT_LAST_ALL_CHARACTER    = 0x38,
            LOADOUT_SLOT_COUNT                 = 0x39
        };

        enum class EDestructiblePartDamagePassThroughType : std::uint32_t {
            Normal                = 0x0,
            Absorb                = 0x1,
            InvincibleAbsorb      = 0x2,
            InvinciblePassthrough = 0x3
        };

        enum class NavAttributeEnum : std::uint64_t {
            NAV_MESH_AVOID              = 0x80,
            NAV_MESH_STAIRS             = 0x1000,
            NAV_MESH_NON_ZUP            = 0x8000,
            NAV_MESH_CROUCH_HEIGHT      = 0x10000,
            NAV_MESH_NON_ZUP_TRANSITION = 0x20000,
            NAV_MESH_CRAWL_HEIGHT       = 0x40000,
            NAV_MESH_CROUCH             = 0x10000,
            NAV_MESH_JUMP               = 0x2,
            NAV_MESH_NO_JUMP            = 0x8,
            NAV_MESH_STOP               = 0x10,
            NAV_MESH_RUN                = 0x20,
            NAV_MESH_WALK               = 0x40,
            NAV_MESH_TRANSIENT          = 0x100,
            NAV_MESH_DONT_HIDE          = 0x200,
            NAV_MESH_STAND              = 0x400,
            NAV_MESH_NO_HOSTAGES        = 0x800,
            NAV_MESH_NO_MERGE           = 0x2000,
            NAV_MESH_OBSTACLE_TOP       = 0x4000,
            NAV_ATTR_FIRST_GAME_INDEX   = 0x13,
            NAV_ATTR_LAST_INDEX         = 0x3F
        };

        enum class MoveLinearAuthoredPos_t : std::uint32_t {
            MOVELINEAR_AUTHORED_AT_START_POSITION  = 0x0,
            MOVELINEAR_AUTHORED_AT_OPEN_POSITION   = 0x1,
            MOVELINEAR_AUTHORED_AT_CLOSED_POSITION = 0x2
        };

        enum class ValueRemapperMomentumType_t : std::uint32_t {
            MomentumType_None                    = 0x0,
            MomentumType_Friction                = 0x1,
            MomentumType_SpringTowardSnapValue   = 0x2,
            MomentumType_SpringAwayFromSnapValue = 0x3
        };

        enum class Hull_t : std::uint32_t {
            HULL_HUMAN          = 0x0,
            HULL_SMALL_CENTERED = 0x1,
            HULL_WIDE_HUMAN     = 0x2,
            HULL_TINY           = 0x3,
            HULL_MEDIUM         = 0x4,
            HULL_TINY_CENTERED  = 0x5,
            HULL_LARGE          = 0x6,
            HULL_LARGE_CENTERED = 0x7,
            HULL_MEDIUM_TALL    = 0x8,
            HULL_SMALL          = 0x9,
            NUM_HULLS           = 0xA,
            HULL_NONE           = 0xB
        };

        enum class ExternalAnimGraphInactiveBehavior_t : std::uint8_t {
            eNone            = 0x0,
            eUnbind          = 0x1,
            eUnbindAndDelete = 0x2
        };

        enum class BodySectionAuthority_t : std::uint32_t {
            eNone      = 0x0,
            eLowerBody = 0x1,
            eUpperBody = 0x2,
            eFullBody  = 0x3
        };

        enum class ESceneRequestState_t : std::uint32_t {
            INACTIVE = 0x0,
            ACTIVE   = 0x1
        };

        enum class PreviewWeaponState : std::uint32_t {
            DROPPED   = 0x0,
            HOLSTERED = 0x1,
            DEPLOYED  = 0x2,
            PLANTED   = 0x3,
            INSPECT   = 0x4,
            ICON      = 0x5
        };

        enum class EInButtonState : std::uint32_t {
            IN_BUTTON_UP              = 0x0,
            IN_BUTTON_DOWN            = 0x1,
            IN_BUTTON_DOWN_UP         = 0x2,
            IN_BUTTON_UP_DOWN         = 0x3,
            IN_BUTTON_UP_DOWN_UP      = 0x4,
            IN_BUTTON_DOWN_UP_DOWN    = 0x5,
            IN_BUTTON_DOWN_UP_DOWN_UP = 0x6,
            IN_BUTTON_UP_DOWN_UP_DOWN = 0x7,
            IN_BUTTON_STATE_COUNT     = 0x8
        };

        enum class BeamClipStyle_t : std::uint32_t {
            kNOCLIP                = 0x0,
            kGEOCLIP               = 0x1,
            kMODELCLIP             = 0x2,
            kBEAMCLIPSTYLE_NUMBITS = 0x2
        };

        enum class WeaponAttackType_t : std::uint32_t {
            eInvalid   = 0xFFFFFFFF,
            ePrimary   = 0x0,
            eSecondary = 0x1,
            eCount     = 0x2
        };

        enum class CDebugOverlayFilterTextType_t : std::uint32_t {
            FILTER_TEXT_NONE = 0x0,
            MATCH            = 0x1,
            HIERARCHY        = 0x2,
            COUNT            = 0x3
        };

        enum class CSPlayerBlockingUseAction_t : std::uint32_t {
            k_CSPlayerBlockingUseAction_None                    = 0x0,
            k_CSPlayerBlockingUseAction_DefusingDefault         = 0x1,
            k_CSPlayerBlockingUseAction_DefusingWithKit         = 0x2,
            k_CSPlayerBlockingUseAction_HostageGrabbing         = 0x3,
            k_CSPlayerBlockingUseAction_HostageDropping         = 0x4,
            k_CSPlayerBlockingUseAction_MapLongUseEntity_Pickup = 0x5,
            k_CSPlayerBlockingUseAction_MapLongUseEntity_Place  = 0x6,
            k_CSPlayerBlockingUseAction_MaxCount                = 0x7
        };

        enum class ShatterDamageCause : std::uint8_t {
            SHATTERDAMAGE_BULLET    = 0x0,
            SHATTERDAMAGE_MELEE     = 0x1,
            SHATTERDAMAGE_THROWN    = 0x2,
            SHATTERDAMAGE_SCRIPT    = 0x3,
            SHATTERDAMAGE_EXPLOSIVE = 0x4
        };

        enum class ScriptedOnDeath_t : std::uint32_t {
            SS_ONDEATH_NOT_APPLICABLE = 0xFFFFFFFF,
            SS_ONDEATH_UNDEFINED      = 0x0,
            SS_ONDEATH_RAGDOLL        = 0x1,
            SS_ONDEATH_ANIMATED_DEATH = 0x2
        };

        enum class CSWeaponNameID : std::uint32_t {
            WEAPONID_GLOCK                 = 0x0,
            WEAPONID_HKP2000               = 0x1,
            WEAPONID_CZ75A                 = 0x2,
            WEAPONID_ELITE                 = 0x3,
            WEAPONID_DEAGLE                = 0x4,
            WEAPONID_FIVESEVEN             = 0x5,
            WEAPONID_P250                  = 0x6,
            WEAPONID_REVOLVER              = 0x7,
            WEAPONID_TEC9                  = 0x8,
            WEAPONID_USP_SILENCER          = 0x9,
            WEAPONID_AK47                  = 0xA,
            WEAPONID_M4A1                  = 0xB,
            WEAPONID_M4A1_SILENCER         = 0xC,
            WEAPONID_FAMAS                 = 0xD,
            WEAPONID_GALILAR               = 0xE,
            WEAPONID_AUG                   = 0xF,
            WEAPONID_SG556                 = 0x10,
            WEAPONID_BIZON                 = 0x11,
            WEAPONID_MAC10                 = 0x12,
            WEAPONID_MP5SD                 = 0x13,
            WEAPONID_MP7                   = 0x14,
            WEAPONID_MP9                   = 0x15,
            WEAPONID_P90                   = 0x16,
            WEAPONID_UMP45                 = 0x17,
            WEAPONID_MAG7                  = 0x18,
            WEAPONID_NOVA                  = 0x19,
            WEAPONID_SAWEDOFF              = 0x1A,
            WEAPONID_XM1014                = 0x1B,
            WEAPONID_AWP                   = 0x1C,
            WEAPONID_SSG08                 = 0x1D,
            WEAPONID_G3SG1                 = 0x1E,
            WEAPONID_SCAR20                = 0x1F,
            WEAPONID_M249                  = 0x20,
            WEAPONID_NEGEV                 = 0x21,
            WEAPONID_TASER                 = 0x22,
            WEAPONID_DECOY                 = 0x23,
            WEAPONID_FLASHBANG             = 0x24,
            WEAPONID_HEGRENADE             = 0x25,
            WEAPONID_INCGRENADE            = 0x26,
            WEAPONID_MOLOTOV               = 0x27,
            WEAPONID_SMOKEGRENADE          = 0x28,
            WEAPONID_C4                    = 0x29,
            WEAPONID_HEALTHSHOT            = 0x2A,
            WEAPONID_KNIFE                 = 0x2B,
            WEAPONID_KNIFE_T               = 0x2C,
            WEAPONID_KNIFE_CSS             = 0x2D,
            WEAPONID_KNIFE_FLIP            = 0x2E,
            WEAPONID_KNIFE_GUT             = 0x2F,
            WEAPONID_KNIFE_KARAMBIT        = 0x30,
            WEAPONID_BAYONET               = 0x31,
            WEAPONID_KNIFE_M9_BAYONET      = 0x32,
            WEAPONID_KNIFE_TACTICAL        = 0x33,
            WEAPONID_KNIFE_FALCHION        = 0x34,
            WEAPONID_KNIFE_SURVIVAL_BOWIE  = 0x35,
            WEAPONID_KNIFE_BUTTERFLY       = 0x36,
            WEAPONID_KNIFE_PUSH            = 0x37,
            WEAPONID_KNIFE_CORD            = 0x38,
            WEAPONID_KNIFE_CANIS           = 0x39,
            WEAPONID_KNIFE_URSUS           = 0x3A,
            WEAPONID_KNIFE_GYPSY_JACKKNIFE = 0x3B,
            WEAPONID_KNIFE_OUTDOOR         = 0x3C,
            WEAPONID_KNIFE_STILETTO        = 0x3D,
            WEAPONID_KNIFE_WIDOWMAKER      = 0x3E,
            WEAPONID_KNIFE_SKELETON        = 0x3F,
            WEAPONID_KNIFE_KUKRI           = 0x40,
            WEAPONID_UNKNOWN               = 0x41
        };

        enum class ChoreoLookAtSpeed_t : std::uint32_t {
            eInvalid = 0xFFFFFFFF,
            eSlow    = 0x0,
            eMedium  = 0x1,
            eFast    = 0x2
        };

        enum class gear_slot_t : std::uint32_t {
            GEAR_SLOT_INVALID         = 0xFFFFFFFF,
            GEAR_SLOT_RIFLE           = 0x0,
            GEAR_SLOT_PISTOL          = 0x1,
            GEAR_SLOT_KNIFE           = 0x2,
            GEAR_SLOT_GRENADES        = 0x3,
            GEAR_SLOT_C4              = 0x4,
            GEAR_SLOT_RESERVED_SLOT6  = 0x5,
            GEAR_SLOT_RESERVED_SLOT7  = 0x6,
            GEAR_SLOT_RESERVED_SLOT8  = 0x7,
            GEAR_SLOT_RESERVED_SLOT9  = 0x8,
            GEAR_SLOT_RESERVED_SLOT10 = 0x9,
            GEAR_SLOT_RESERVED_SLOT11 = 0xA,
            GEAR_SLOT_BOOSTS          = 0xB,
            GEAR_SLOT_UTILITY         = 0xC,
            GEAR_SLOT_COUNT           = 0xD,
            GEAR_SLOT_FIRST           = 0x0,
            GEAR_SLOT_LAST            = 0xC
        };

        enum class CSPlayerState : std::uint32_t {
            STATE_ACTIVE             = 0x0,
            STATE_WELCOME            = 0x1,
            STATE_PICKINGTEAM        = 0x2,
            STATE_PICKINGCLASS       = 0x3,
            STATE_DEATH_ANIM         = 0x4,
            STATE_DEATH_WAIT_FOR_KEY = 0x5,
            STATE_OBSERVER_MODE      = 0x6,
            STATE_GUNGAME_RESPAWN    = 0x7,
            STATE_DORMANT            = 0x8,
            NUM_PLAYER_STATES        = 0x9
        };

        enum class ScriptedConflictResponse_t : std::uint32_t {
            SS_CONFLICT_ENQUEUE   = 0x0,
            SS_CONFLICT_INTERRUPT = 0x1
        };

        enum class WaterLevel_t : std::uint8_t {
            WL_NotInWater      = 0x0,
            WL_Feet            = 0x1,
            WL_Knees           = 0x2,
            WL_Waist           = 0x3,
            WL_Chest           = 0x4,
            WL_FullyUnderwater = 0x5,
            WL_Count           = 0x6
        };

        enum class WorldTextPanelVerticalAlign_t : std::uint32_t {
            WORLDTEXT_VERTICAL_ALIGN_TOP    = 0x0,
            WORLDTEXT_VERTICAL_ALIGN_CENTER = 0x1,
            WORLDTEXT_VERTICAL_ALIGN_BOTTOM = 0x2
        };

        enum class RelativeLocationType_t : std::uint8_t {
            WORLD_SPACE_POSITION              = 0x0,
            RELATIVE_TO_ENTITY_IN_LOCAL_SPACE = 0x1,
            RELATIVE_TO_ENTITY_YAW_ONLY       = 0x2,
            RELATIVE_TO_ENTITY_IN_WORLD_SPACE = 0x3
        };

        enum class AmmoPosition_t : std::uint32_t {
            AMMO_POSITION_INVALID   = 0xFFFFFFFF,
            AMMO_POSITION_PRIMARY   = 0x0,
            AMMO_POSITION_SECONDARY = 0x1,
            AMMO_POSITION_COUNT     = 0x2
        };

        enum class CDebugOverlayFilterType_t : std::uint32_t {
            NONE                  = 0x0,
            TEXT                  = 0x1,
            ENTITY                = 0x2,
            COUNT                 = 0x3,
            TACTICAL_SEARCH       = 0x4,
            AI_SCHEDULE           = 0x5,
            AI_TASK               = 0x6,
            AI_EVENT              = 0x7,
            AI_PATHFINDING        = 0x8,
            END_SIM_HISTORY_TYPES = 0x9,
            COMBINED              = 0xFFFFFFFF
        };

        enum class PreviewEOMCelebration : std::uint32_t {
            INVALID             = 0xFFFFFFFF,
            WALKUP              = 0x0,
            PUNCHING            = 0x1,
            SWAGGER             = 0x2,
            DROPDOWN            = 0x3,
            STRETCH             = 0x4,
            SWAT_FEMALE         = 0x5,
            MASK_F              = 0x6,
            GUERILLA            = 0x7,
            GUERILLA02          = 0x8,
            GENDARMERIE         = 0x9,
            SCUBA_FEMALE        = 0xA,
            SCUBA_MALE          = 0xB,
            AVA_DEFEAT          = 0xC,
            GENDARMERIE_DEFEAT  = 0xD,
            MAE_DEFEAT          = 0xE,
            RICKSAW_DEFEAT      = 0xF,
            SCUBA_FEMALE_DEFEAT = 0x10,
            SCUBA_MALE_DEFEAT   = 0x11,
            CRASSWATER_DEFEAT   = 0x12,
            DARRYL_DEFEAT       = 0x13,
            DOCTOR_DEFEAT       = 0x14,
            MUHLIK_DEFEAT       = 0x15,
            VYPA_DEFEAT         = 0x16
        };

        enum class EntityDisolveType_t : std::uint32_t {
            ENTITY_DISSOLVE_INVALID          = 0xFFFFFFFF,
            ENTITY_DISSOLVE_NORMAL           = 0x0,
            ENTITY_DISSOLVE_ELECTRICAL       = 0x1,
            ENTITY_DISSOLVE_ELECTRICAL_LIGHT = 0x2,
            ENTITY_DISSOLVE_CORE             = 0x3
        };

        enum class InputBitMask_t : std::uint64_t {
            IN_NONE                   = 0x0,
            IN_ALL                    = 0xFFFFFFFFFFFFFFFF,
            IN_ATTACK                 = 0x1,
            IN_JUMP                   = 0x2,
            IN_DUCK                   = 0x4,
            IN_FORWARD                = 0x8,
            IN_BACK                   = 0x10,
            IN_USE                    = 0x20,
            IN_TURNLEFT               = 0x80,
            IN_TURNRIGHT              = 0x100,
            IN_MOVELEFT               = 0x200,
            IN_MOVERIGHT              = 0x400,
            IN_ATTACK2                = 0x800,
            IN_RELOAD                 = 0x2000,
            IN_SPEED                  = 0x10000,
            IN_JOYAUTOSPRINT          = 0x20000,
            IN_FIRST_MOD_SPECIFIC_BIT = 0x100000000,
            IN_USEORRELOAD            = 0x100000000,
            IN_SCORE                  = 0x200000000,
            IN_ZOOM                   = 0x400000000,
            IN_LOOK_AT_WEAPON         = 0x800000000
        };

        enum class HitGroup_t : std::uint32_t {
            HITGROUP_INVALID  = 0xFFFFFFFF,
            HITGROUP_GENERIC  = 0x0,
            HITGROUP_HEAD     = 0x1,
            HITGROUP_CHEST    = 0x2,
            HITGROUP_STOMACH  = 0x3,
            HITGROUP_LEFTARM  = 0x4,
            HITGROUP_RIGHTARM = 0x5,
            HITGROUP_LEFTLEG  = 0x6,
            HITGROUP_RIGHTLEG = 0x7,
            HITGROUP_NECK     = 0x8,
            HITGROUP_UNUSED   = 0x9,
            HITGROUP_GEAR     = 0xA,
            HITGROUP_SPECIAL  = 0xB,
            HITGROUP_COUNT    = 0xC
        };

        enum class ChickenActivity : std::uint32_t {
            IDLE          = 0x0,
            SQUAT         = 0x1,
            WALK          = 0x2,
            RUN           = 0x3,
            GLIDE         = 0x4,
            LAND          = 0x5,
            PANIC         = 0x6,
            TRICK         = 0x7,
            TURN_IN_PLACE = 0x8,
            FEED          = 0x9,
            SLEEP         = 0xA
        };

        enum class PointWorldTextReorientMode_t : std::uint32_t {
            POINT_WORLD_TEXT_REORIENT_NONE      = 0x0,
            POINT_WORLD_TEXT_REORIENT_AROUND_UP = 0x1
        };

        enum class DebugOverlayBits_t : std::uint64_t {
            OVERLAY_TEXT_BIT                     = 0x1,
            OVERLAY_NAME_BIT                     = 0x2,
            OVERLAY_BBOX_BIT                     = 0x4,
            OVERLAY_PIVOT_BIT                    = 0x8,
            OVERLAY_MESSAGE_BIT                  = 0x10,
            OVERLAY_ABSBOX_BIT                   = 0x20,
            OVERLAY_RBOX_BIT                     = 0x40,
            OVERLAY_SHOW_BLOCKSLOS               = 0x80,
            OVERLAY_ATTACHMENTS_BIT              = 0x100,
            OVERLAY_INTERPOLATED_ATTACHMENTS_BIT = 0x200,
            OVERLAY_INTERPOLATED_PIVOT_BIT       = 0x400,
            OVERLAY_SKELETON_BIT                 = 0x800,
            OVERLAY_INTERPOLATED_SKELETON_BIT    = 0x1000,
            OVERLAY_TRIGGER_BOUNDS_BIT           = 0x2000,
            OVERLAY_HITBOX_BIT                   = 0x4000,
            OVERLAY_INTERPOLATED_HITBOX_BIT      = 0x8000,
            OVERLAY_AUTOAIM_BIT                  = 0x10000,
            OVERLAY_NPC_SELECTED_BIT             = 0x20000,
            OVERLAY_JOINT_INFO_BIT               = 0x40000,
            OVERLAY_NPC_ROUTE_BIT                = 0x80000,
            OVERLAY_VISIBILITY_TRACES_BIT        = 0x100000,
            OVERLAY_NPC_ENEMIES_BIT              = 0x400000,
            OVERLAY_NPC_CONDITIONS_BIT           = 0x800000,
            OVERLAY_NPC_COMBAT_BIT               = 0x1000000,
            OVERLAY_NPC_TASK_BIT                 = 0x2000000,
            OVERLAY_NPC_BODYLOCATIONS            = 0x4000000,
            OVERLAY_NPC_VIEWCONE_BIT             = 0x8000000,
            OVERLAY_NPC_KILL_BIT                 = 0x10000000,
            OVERLAY_BUDDHA_MODE                  = 0x40000000,
            OVERLAY_NPC_STEERING_REGULATIONS     = 0x80000000,
            OVERLAY_NPC_TASK_TEXT_BIT            = 0x100000000,
            OVERLAY_PROP_DEBUG                   = 0x200000000,
            OVERLAY_NPC_RELATION_BIT             = 0x400000000,
            OVERLAY_VIEWOFFSET                   = 0x800000000,
            OVERLAY_VCOLLIDE_WIREFRAME_BIT       = 0x1000000000,
            OVERLAY_NPC_SCRIPTED_COMMANDS_BIT    = 0x2000000000,
            OVERLAY_ACTORNAME_BIT                = 0x4000000000,
            OVERLAY_NPC_CONDITIONS_TEXT_BIT      = 0x8000000000,
            OVERLAY_NPC_ABILITY_RANGE_DEBUG_BIT  = 0x10000000000,
            OVERLAY_MINIMAL_TEXT                 = 0x20000000000
        };

        enum class AmmoFlags_t : std::uint32_t {
            AMMO_FORCE_DROP_IF_CARRIED     = 0x1,
            AMMO_RESERVE_STAYS_WITH_WEAPON = 0x2,
            AMMO_FLAG_MAX                  = 0x2
        };

        enum class DecalFlags_t : std::uint32_t {
            eNone                    = 0x0,
            eCannotClear             = 0x1,
            eDecalProjectToBackfaces = 0x2,
            eAll                     = 0xFFFFFFFF,
            eAllButCannotClear       = 0xFFFFFFFE
        };

        enum class HierarchyType_t : std::uint32_t {
            HIERARCHY_NONE       = 0x0,
            HIERARCHY_BONE_MERGE = 0x1,
            HIERARCHY_ATTACHMENT = 0x2,
            HIERARCHY_ABSORIGIN  = 0x3,
            HIERARCHY_BONE       = 0x4,
            HIERARCHY_TYPE_COUNT = 0x5
        };

        enum class doorCheck_e : std::uint32_t {
            DOOR_CHECK_FORWARD  = 0x0,
            DOOR_CHECK_BACKWARD = 0x1,
            DOOR_CHECK_FULL     = 0x2
        };

        enum class BeamType_t : std::uint32_t {
            BEAM_INVALID  = 0x0,
            BEAM_POINTS   = 0x1,
            BEAM_ENTPOINT = 0x2,
            BEAM_ENTS     = 0x3,
            BEAM_HOSE     = 0x4,
            BEAM_SPLINE   = 0x5,
            BEAM_LASER    = 0x6
        };

        enum class EntitySubclassScope_t : std::uint32_t {
            SUBCLASS_SCOPE_NONE           = 0xFFFFFFFF,
            SUBCLASS_SCOPE_PRECIPITATION  = 0x0,
            SUBCLASS_SCOPE_PLAYER_WEAPONS = 0x1,
            SUBCLASS_SCOPE_COUNT          = 0x2
        };

        enum class PointTemplateClientOnlyEntityBehavior_t : std::uint32_t {
            CREATE_FOR_CURRENTLY_CONNECTED_CLIENTS_ONLY = 0x0,
            CREATE_FOR_CLIENTS_WHO_CONNECT_LATER        = 0x1
        };

        enum class CDebugOverlayCombinedTypes_t : std::uint32_t {
            ALL   = 0x0,
            ANY   = 0x1,
            COUNT = 0x2
        };

        enum class ShatterGlassStressType : std::uint8_t {
            SHATTERGLASS_BLUNT     = 0x0,
            SHATTERGLASS_BALLISTIC = 0x1,
            SHATTERGLASS_PULSE     = 0x2,
            SHATTERGLASS_EXPLOSIVE = 0x3
        };

        enum class TrackOrientationType_t : std::uint32_t {
            TrackOrientation_Fixed          = 0x0,
            TrackOrientation_FacePath       = 0x1,
            TrackOrientation_FacePathAngles = 0x2
        };

        enum class WeaponSwitchReason_t : std::uint32_t {
            eDrawn                     = 0x0,
            eEquipped                  = 0x1,
            eUserInitiatedSwitchToLast = 0x2,
            eUserInitiatedUIKeyPress   = 0x3,
            eUserInitiatedSwitchHands  = 0x4
        };

        enum class ValueRemapperRatchetType_t : std::uint32_t {
            RatchetType_Absolute   = 0x0,
            RatchetType_EachEngage = 0x1
        };

        enum class NavDirType : std::uint32_t {
            NORTH                       = 0x0,
            EAST                        = 0x1,
            SOUTH                       = 0x2,
            WEST                        = 0x3,
            NUM_NAV_DIR_TYPE_DIRECTIONS = 0x4
        };

        enum class CRR_Response__ResponseEnum_t : std::uint32_t {
            MAX_RESPONSE_NAME = 0xC0,
            MAX_RULE_NAME     = 0x80
        };

        enum class MoveMountingAmount_t : std::uint32_t {
            MOVE_MOUNT_NONE     = 0x0,
            MOVE_MOUNT_LOW      = 0x1,
            MOVE_MOUNT_HIGH     = 0x2,
            MOVE_MOUNT_MAXCOUNT = 0x3
        };

        enum class HoverPoseFlags_t : std::uint8_t {
            eNone     = 0x0,
            ePosition = 0x1,
            eAngles   = 0x2
        };

        enum class RenderFx_t : std::uint8_t {
            kRenderFxNone           = 0x0,
            kRenderFxPulseSlow      = 0x1,
            kRenderFxPulseFast      = 0x2,
            kRenderFxPulseSlowWide  = 0x3,
            kRenderFxPulseFastWide  = 0x4,
            kRenderFxFadeSlow       = 0x5,
            kRenderFxFadeFast       = 0x6,
            kRenderFxSolidSlow      = 0x7,
            kRenderFxSolidFast      = 0x8,
            kRenderFxStrobeSlow     = 0x9,
            kRenderFxStrobeFast     = 0xA,
            kRenderFxStrobeFaster   = 0xB,
            kRenderFxFlickerSlow    = 0xC,
            kRenderFxFlickerFast    = 0xD,
            kRenderFxFadeOut        = 0xE,
            kRenderFxFadeIn         = 0xF,
            kRenderFxPulseFastWider = 0x10,
            kRenderFxMax            = 0x11
        };

        enum class vote_create_failed_t : std::uint32_t {
            VOTE_FAILED_GENERIC                     = 0x0,
            VOTE_FAILED_TRANSITIONING_PLAYERS       = 0x1,
            VOTE_FAILED_RATE_EXCEEDED               = 0x2,
            VOTE_FAILED_YES_MUST_EXCEED_NO          = 0x3,
            VOTE_FAILED_QUORUM_FAILURE              = 0x4,
            VOTE_FAILED_ISSUE_DISABLED              = 0x5,
            VOTE_FAILED_MAP_NOT_FOUND               = 0x6,
            VOTE_FAILED_MAP_NAME_REQUIRED           = 0x7,
            VOTE_FAILED_FAILED_RECENTLY             = 0x8,
            VOTE_FAILED_TEAM_CANT_CALL              = 0x9,
            VOTE_FAILED_WAITINGFORPLAYERS           = 0xA,
            VOTE_FAILED_PLAYERNOTFOUND              = 0xB,
            VOTE_FAILED_CANNOT_KICK_ADMIN           = 0xC,
            VOTE_FAILED_SCRAMBLE_IN_PROGRESS        = 0xD,
            VOTE_FAILED_SPECTATOR                   = 0xE,
            VOTE_FAILED_FAILED_RECENT_KICK          = 0xF,
            VOTE_FAILED_FAILED_RECENT_CHANGEMAP     = 0x10,
            VOTE_FAILED_FAILED_RECENT_SWAPTEAMS     = 0x11,
            VOTE_FAILED_FAILED_RECENT_SCRAMBLETEAMS = 0x12,
            VOTE_FAILED_FAILED_RECENT_RESTART       = 0x13,
            VOTE_FAILED_SWAP_IN_PROGRESS            = 0x14,
            VOTE_FAILED_DISABLED                    = 0x15,
            VOTE_FAILED_NEXTLEVEL_SET               = 0x16,
            VOTE_FAILED_TOO_EARLY_SURRENDER         = 0x17,
            VOTE_FAILED_MATCH_PAUSED                = 0x18,
            VOTE_FAILED_MATCH_NOT_PAUSED            = 0x19,
            VOTE_FAILED_NOT_IN_WARMUP               = 0x1A,
            VOTE_FAILED_NOT_10_PLAYERS              = 0x1B,
            VOTE_FAILED_TIMEOUT_ACTIVE              = 0x1C,
            VOTE_FAILED_TIMEOUT_INACTIVE            = 0x1D,
            VOTE_FAILED_TIMEOUT_EXHAUSTED           = 0x1E,
            VOTE_FAILED_CANT_ROUND_END              = 0x1F,
            VOTE_FAILED_REMATCH                     = 0x20,
            VOTE_FAILED_CONTINUE                    = 0x21,
            VOTE_FAILED_MAX                         = 0x22
        };

        enum class RumbleEffect_t : std::uint32_t {
            RUMBLE_INVALID           = 0xFFFFFFFF,
            RUMBLE_STOP_ALL          = 0x0,
            RUMBLE_PISTOL            = 0x1,
            RUMBLE_357               = 0x2,
            RUMBLE_SMG1              = 0x3,
            RUMBLE_AR2               = 0x4,
            RUMBLE_SHOTGUN_SINGLE    = 0x5,
            RUMBLE_SHOTGUN_DOUBLE    = 0x6,
            RUMBLE_AR2_ALT_FIRE      = 0x7,
            RUMBLE_RPG_MISSILE       = 0x8,
            RUMBLE_CROWBAR_SWING     = 0x9,
            RUMBLE_AIRBOAT_GUN       = 0xA,
            RUMBLE_JEEP_ENGINE_LOOP  = 0xB,
            RUMBLE_FLAT_LEFT         = 0xC,
            RUMBLE_FLAT_RIGHT        = 0xD,
            RUMBLE_FLAT_BOTH         = 0xE,
            RUMBLE_DMG_LOW           = 0xF,
            RUMBLE_DMG_MED           = 0x10,
            RUMBLE_DMG_HIGH          = 0x11,
            RUMBLE_FALL_LONG         = 0x12,
            RUMBLE_FALL_SHORT        = 0x13,
            RUMBLE_PHYSCANNON_OPEN   = 0x14,
            RUMBLE_PHYSCANNON_PUNT   = 0x15,
            RUMBLE_PHYSCANNON_LOW    = 0x16,
            RUMBLE_PHYSCANNON_MEDIUM = 0x17,
            RUMBLE_PHYSCANNON_HIGH   = 0x18,
            NUM_RUMBLE_EFFECTS       = 0x19
        };

        enum class LatchDirtyPermission_t : std::uint32_t {
            LATCH_DIRTY_DISALLOW          = 0x0,
            LATCH_DIRTY_SERVER_CONTROLLED = 0x1,
            LATCH_DIRTY_CLIENT_SIMULATED  = 0x2,
            LATCH_DIRTY_PREDICTION        = 0x3,
            LATCH_DIRTY_FRAMESIMULATE     = 0x4,
            LATCH_DIRTY_PARTICLE_SIMULATE = 0x5
        };

        enum class DoorState_t : std::uint32_t {
            DOOR_STATE_CLOSED  = 0x0,
            DOOR_STATE_OPENING = 0x1,
            DOOR_STATE_OPEN    = 0x2,
            DOOR_STATE_CLOSING = 0x3,
            DOOR_STATE_AJAR    = 0x4
        };

        enum class ChoreoLookAtMode_t : std::uint32_t {
            eInvalid  = 0xFFFFFFFF,
            eChest    = 0x0,
            eHead     = 0x1,
            eEyesOnly = 0x2
        };

        enum class ChatIgnoreType_t : std::uint32_t {
            CHAT_IGNORE_NONE = 0x0,
            CHAT_IGNORE_ALL  = 0x1,
            CHAT_IGNORE_TEAM = 0x2
        };

        enum class PlayerConnectedState : std::uint32_t {
            PlayerNeverConnected = 0xFFFFFFFF,
            PlayerConnected      = 0x0,
            PlayerConnecting     = 0x1,
            PlayerReconnecting   = 0x2,
            PlayerDisconnecting  = 0x3,
            PlayerDisconnected   = 0x4,
            PlayerReserved       = 0x5
        };

        enum class navproperties_t : std::uint32_t {
            NAV_IGNORE = 0x1
        };

        enum class EntityEffects_t : std::uint16_t {
            DEPRICATED_EF_NOINTERP = 0x8,
            EF_NOSHADOW            = 0x10,
            EF_NODRAW              = 0x20,
            EF_NORECEIVESHADOW     = 0x40,
            EF_PARENT_ANIMATES     = 0x200,
            EF_NODRAW_BUT_TRANSMIT = 0x400,
            EF_MAX_BITS            = 0xA
        };

        enum class SolidType_t : std::uint8_t {
            SOLID_NONE     = 0x0,
            SOLID_BSP      = 0x1,
            SOLID_BBOX     = 0x2,
            SOLID_OBB      = 0x3,
            SOLID_SPHERE   = 0x4,
            SOLID_POINT    = 0x5,
            SOLID_VPHYSICS = 0x6,
            SOLID_CAPSULE  = 0x7,
            SOLID_LAST     = 0x8
        };

        enum class DamageTypes_t : std::uint32_t {
            DMG_GENERIC         = 0x0,
            DMG_CRUSH           = 0x1,
            DMG_BULLET          = 0x2,
            DMG_SLASH           = 0x4,
            DMG_BURN            = 0x8,
            DMG_VEHICLE         = 0x10,
            DMG_FALL            = 0x20,
            DMG_BLAST           = 0x40,
            DMG_CLUB            = 0x80,
            DMG_SHOCK           = 0x100,
            DMG_SONIC           = 0x200,
            DMG_ENERGYBEAM      = 0x400,
            DMG_BUCKSHOT        = 0x800,
            DMG_BLAST_SURFACE   = 0x1000,
            DMG_DISSOLVE        = 0x2000,
            DMG_DROWN           = 0x4000,
            DMG_POISON          = 0x8000,
            DMG_RADIATION       = 0x10000,
            DMG_DROWNRECOVER    = 0x20000,
            DMG_ACID            = 0x40000,
            DMG_LASTGENERICFLAG = 0x40000,
            DMG_HEADSHOT        = 0x80000
        };

        enum class PointWorldTextJustifyVertical_t : std::uint32_t {
            POINT_WORLD_TEXT_JUSTIFY_VERTICAL_BOTTOM = 0x0,
            POINT_WORLD_TEXT_JUSTIFY_VERTICAL_CENTER = 0x1,
            POINT_WORLD_TEXT_JUSTIFY_VERTICAL_TOP    = 0x2
        };

        enum class attributeprovidertypes_t : std::uint32_t {
            PROVIDER_GENERIC = 0x0,
            PROVIDER_WEAPON  = 0x1
        };

        enum class MoveCollide_t : std::uint8_t {
            MOVECOLLIDE_DEFAULT    = 0x0,
            MOVECOLLIDE_FLY_BOUNCE = 0x1,
            MOVECOLLIDE_FLY_CUSTOM = 0x2,
            MOVECOLLIDE_FLY_SLIDE  = 0x3,
            MOVECOLLIDE_COUNT      = 0x4,
            MOVECOLLIDE_MAX_BITS   = 0x3
        };

        enum class IChoreoServices__ChoreoState_t : std::uint32_t {
            STATE_PRE_SCRIPT                 = 0x0,
            STATE_WAIT_FOR_SCRIPT            = 0x1,
            STATE_WALK_TO_MARK               = 0x2,
            STATE_SYNCHRONIZE_SCRIPT         = 0x3,
            STATE_PLAY_SCRIPT                = 0x4,
            STATE_PLAY_SCRIPT_POST_IDLE      = 0x5,
            STATE_PLAY_SCRIPT_POST_IDLE_DONE = 0x6
        };

        enum class ValueRemapperOutputType_t : std::uint32_t {
            OutputType_AnimationCycle = 0x0,
            OutputType_RotationX      = 0x1,
            OutputType_RotationY      = 0x2,
            OutputType_RotationZ      = 0x3
        };

        enum class PointTemplateOwnerSpawnGroupType_t : std::uint32_t {
            INSERT_INTO_POINT_TEMPLATE_SPAWN_GROUP   = 0x0,
            INSERT_INTO_CURRENTLY_ACTIVE_SPAWN_GROUP = 0x1,
            INSERT_INTO_NEWLY_CREATED_SPAWN_GROUP    = 0x2
        };

        enum class EContributionScoreFlag_t : std::uint8_t {
            k_EContributionScoreFlag_Default   = 0x0,
            k_EContributionScoreFlag_Objective = 0x1,
            k_EContributionScoreFlag_Bullets   = 0x2
        };

        enum class eSplinePushType : std::uint32_t {
            k_eSplinePushAlong   = 0x0,
            k_eSplinePushAway    = 0x1,
            k_eSplinePushTowards = 0x2
        };

        enum class WeaponGameplayAnimState : std::uint16_t {
            WPN_ANIMSTATE_UNINITIALIZED               = 0x0,
            WPN_ANIMSTATE_DROPPED                     = 0x1,
            WPN_ANIMSTATE_HOLSTERED                   = 0xA,
            WPN_ANIMSTATE_DEPLOY                      = 0xB,
            WPN_ANIMSTATE_IDLE                        = 0x32,
            WPN_ANIMSTATE_SHOOT_PRIMARY               = 0x64,
            WPN_ANIMSTATE_SHOOT_SECONDARY             = 0x65,
            WPN_ANIMSTATE_SHOOT_DRYFIRE               = 0x66,
            WPN_ANIMSTATE_CHARGE                      = 0x67,
            WPN_ANIMSTATE_GRENADE_PULL_PIN            = 0xC8,
            WPN_ANIMSTATE_GRENADE_READY               = 0xC9,
            WPN_ANIMSTATE_GRENADE_THROW               = 0xCA,
            WPN_ANIMSTATE_C4_PLANT                    = 0x12C,
            WPN_ANIMSTATE_HEALTHSHOT_INJECT           = 0x190,
            WPN_ANIMSTATE_KNIFE_PRIMARY_HIT           = 0x1F4,
            WPN_ANIMSTATE_KNIFE_PRIMARY_MISS          = 0x1F5,
            WPN_ANIMSTATE_KNIFE_SECONDARY_HIT         = 0x1F6,
            WPN_ANIMSTATE_KNIFE_SECONDARY_MISS        = 0x1F7,
            WPN_ANIMSTATE_KNIFE_PRIMARY_STAB          = 0x1F8,
            WPN_ANIMSTATE_KNIFE_SECONDARY_STAB        = 0x1F9,
            WPN_ANIMSTATE_SILENCER_APPLY              = 0x258,
            WPN_ANIMSTATE_SILENCER_REMOVE             = 0x259,
            WPN_ANIMSTATE_RELOAD                      = 0x320,
            WPN_ANIMSTATE_RELOAD_OUTRO                = 0x321,
            WPN_ANIMSTATE_INSPECT                     = 0x3E8,
            WPN_ANIMSTATE_INSPECT_OUTRO               = 0x3E9,
            WPN_ANIMSTATE_INVENTORY_UI_TUMBLE         = 0x5DC,
            WPN_ANIMSTATE_INVENTORY_UI_KEYCHAIN_APPLY = 0x5DD,
            WPN_ANIMSTATE_END_VALID                   = 0x7D0,
            WEAPON_LEGACY_STATE_CLEAR_FIRING          = 0x7D1
        };

        enum class EDestructiblePartRadiusDamageApplyType : std::uint32_t {
            ScaleByExplosionRadius = 0x0,
            PrioritizeClosestPart  = 0x1
        };

        enum class EntityDistanceMode_t : std::uint32_t {
            eOriginToOrigin = 0x0,
            eCenterToCenter = 0x1,
            eAxisToAxis     = 0x2
        };

        enum class PulseTraceContents_t : std::uint32_t {
            STATIC_LEVEL = 0x0,
            SOLID        = 0x1
        };

        enum class PointWorldTextJustifyHorizontal_t : std::uint32_t {
            POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_LEFT   = 0x0,
            POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_CENTER = 0x1,
            POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_RIGHT  = 0x2
        };

        enum class ShakeCommand_t : std::uint32_t {
            SHAKE_START            = 0x0,
            SHAKE_STOP             = 0x1,
            SHAKE_AMPLITUDE        = 0x2,
            SHAKE_FREQUENCY        = 0x3,
            SHAKE_START_RUMBLEONLY = 0x4,
            SHAKE_START_NORUMBLE   = 0x5
        };

        enum class Flags_t : std::uint32_t {
            FL_ONGROUND              = 0x1,
            FL_DUCKING               = 0x2,
            FL_WATERJUMP             = 0x4,
            FL_BOT                   = 0x10,
            FL_FROZEN                = 0x20,
            FL_ATCONTROLS            = 0x40,
            FL_CLIENT                = 0x80,
            FL_FAKECLIENT            = 0x100,
            FL_FLY                   = 0x400,
            FL_SUPPRESS_SAVE         = 0x800,
            FL_IN_VEHICLE            = 0x1000,
            FL_GODMODE               = 0x4000,
            FL_NOTARGET              = 0x8000,
            FL_AIMTARGET             = 0x10000,
            FL_GRENADE               = 0x100000,
            FL_DONTTOUCH             = 0x400000,
            FL_BASEVELOCITY          = 0x800000,
            FL_CONVEYOR              = 0x1000000,
            FL_OBJECT                = 0x2000000,
            FL_ONFIRE                = 0x8000000,
            FL_DISSOLVING            = 0x10000000,
            FL_TRANSRAGDOLL          = 0x20000000,
            FL_UNBLOCKABLE_BY_PLAYER = 0x40000000
        };

        enum class TRAIN_CODE : std::uint32_t {
            TRAIN_SAFE      = 0x0,
            TRAIN_BLOCKING  = 0x1,
            TRAIN_FOLLOWING = 0x2
        };

        enum class DestructiblePartDestructionDeathBehavior_t : std::uint32_t {
            eDoNotKill = 0x0,
            eKill      = 0x1,
            eGib       = 0x2,
            eRemove    = 0x3
        };

        enum class BrushSolidities_e : std::uint32_t {
            BRUSHSOLID_TOGGLE = 0x0,
            BRUSHSOLID_NEVER  = 0x1,
            BRUSHSOLID_ALWAYS = 0x2
        };

        enum class QuestProgress__Reason : std::uint32_t {
            QUEST_NONINITIALIZED         = 0x0,
            QUEST_OK                     = 0x1,
            QUEST_NOT_ENOUGH_PLAYERS     = 0x2,
            QUEST_WARMUP                 = 0x3,
            QUEST_NOT_CONNECTED_TO_STEAM = 0x4,
            QUEST_NONOFFICIAL_SERVER     = 0x5,
            QUEST_NO_ENTITLEMENT         = 0x6,
            QUEST_NO_QUEST               = 0x7,
            QUEST_PLAYER_IS_BOT          = 0x8,
            QUEST_WRONG_MAP              = 0x9,
            QUEST_WRONG_MODE             = 0xA,
            QUEST_NOT_SYNCED_WITH_SERVER = 0xB,
            QUEST_REASON_MAX             = 0xC
        };

        enum class ModifyDamageReturn_t : std::uint32_t {
            CONTINUE_TO_APPLY_DAMAGE  = 0x0,
            ABORT_DO_NOT_APPLY_DAMAGE = 0x1
        };

        enum class ShadowType_t : std::uint32_t {
            SHADOWS_NONE   = 0x0,
            SHADOWS_SIMPLE = 0x1
        };

        enum class GrenadeType_t : std::uint32_t {
            GRENADE_TYPE_EXPLOSIVE = 0x0,
            GRENADE_TYPE_FLASH     = 0x1,
            GRENADE_TYPE_FIRE      = 0x2,
            GRENADE_TYPE_DECOY     = 0x3,
            GRENADE_TYPE_SMOKE     = 0x4,
            GRENADE_TYPE_TOTAL     = 0x5
        };

        enum class ValueRemapperInputType_t : std::uint32_t {
            InputType_PlayerShootPosition           = 0x0,
            InputType_PlayerShootPositionAroundAxis = 0x1
        };

        enum class EKillTypes_t : std::uint8_t {
            KILL_NONE      = 0x0,
            KILL_DEFAULT   = 0x1,
            KILL_HEADSHOT  = 0x2,
            KILL_BLAST     = 0x3,
            KILL_BURN      = 0x4,
            KILL_SLASH     = 0x5,
            KILL_SHOCK     = 0x6,
            KILLTYPE_COUNT = 0x7
        };

        enum class WeaponSound_t : std::uint32_t {
            WEAPON_SOUND_EMPTY             = 0x0,
            WEAPON_SOUND_SECONDARY_EMPTY   = 0x1,
            WEAPON_SOUND_SINGLE            = 0x2,
            WEAPON_SOUND_SECONDARY_ATTACK  = 0x3,
            WEAPON_SOUND_MELEE_MISS        = 0x4,
            WEAPON_SOUND_MELEE_HIT         = 0x5,
            WEAPON_SOUND_MELEE_HIT_WORLD   = 0x6,
            WEAPON_SOUND_MELEE_HIT_PLAYER  = 0x7,
            WEAPON_SOUND_MELEE_HIT_NPC     = 0x8,
            WEAPON_SOUND_SPECIAL1          = 0x9,
            WEAPON_SOUND_SPECIAL2          = 0xA,
            WEAPON_SOUND_SPECIAL3          = 0xB,
            WEAPON_SOUND_NEARLYEMPTY       = 0xC,
            WEAPON_SOUND_IMPACT            = 0xD,
            WEAPON_SOUND_REFLECT           = 0xE,
            WEAPON_SOUND_SECONDARY_IMPACT  = 0xF,
            WEAPON_SOUND_SECONDARY_REFLECT = 0x10,
            WEAPON_SOUND_RELOAD            = 0x11,
            WEAPON_SOUND_SINGLE_ACCURATE   = 0x12,
            WEAPON_SOUND_ZOOM_IN           = 0x13,
            WEAPON_SOUND_ZOOM_OUT          = 0x14,
            WEAPON_SOUND_MOUSE_PRESSED     = 0x15,
            WEAPON_SOUND_DROP              = 0x16,
            WEAPON_SOUND_RADIO_USE         = 0x17,
            WEAPON_SOUND_NUM_TYPES         = 0x18
        };

        enum class TakeDamageFlags_t : std::uint64_t {
            DFLAG_NONE                           = 0x0,
            DFLAG_SUPPRESS_HEALTH_CHANGES        = 0x1,
            DFLAG_SUPPRESS_PHYSICS_FORCE         = 0x2,
            DFLAG_SUPPRESS_EFFECTS               = 0x4,
            DFLAG_PREVENT_DEATH                  = 0x8,
            DFLAG_FORCE_DEATH                    = 0x10,
            DFLAG_ALWAYS_GIB                     = 0x20,
            DFLAG_NEVER_GIB                      = 0x40,
            DFLAG_REMOVE_NO_RAGDOLL              = 0x80,
            DFLAG_SUPPRESS_DAMAGE_MODIFICATION   = 0x100,
            DFLAG_ALWAYS_FIRE_DAMAGE_EVENTS      = 0x200,
            DFLAG_RADIUS_DMG                     = 0x400,
            DFLAG_FORCEREDUCEARMOR_DMG           = 0x800,
            DFLAG_SUPPRESS_INTERRUPT_FLINCH      = 0x1000,
            DFLAG_IGNORE_DESTRUCTIBLE_PARTS      = 0x2000,
            DFLAG_SUPPRESS_BREAKABLES            = 0x4000,
            DFLAG_FORCE_PHYSICS_FORCE            = 0x8000,
            DFLAG_SUPPRESS_SCREENSPACE_DAMAGE_FX = 0x10000,
            DFLAG_ALLOW_NON_AUTHORITATIVE        = 0x20000,
            DMG_LASTDFLAG                        = 0x20000,
            DFLAG_IGNORE_ARMOR                   = 0x40000,
            DFLAG_SUPPRESS_UTILREMOVE            = 0x80000
        };

        enum class ValueRemapperHapticsType_t : std::uint32_t {
            HaticsType_Default = 0x0,
            HaticsType_None    = 0x1
        };

        enum class Disposition_t : std::uint32_t {
            D_ER      = 0x0,
            D_HT      = 0x1,
            D_FR      = 0x2,
            D_LI      = 0x3,
            D_NU      = 0x4,
            D_ERROR   = 0x0,
            D_HATE    = 0x1,
            D_FEAR    = 0x2,
            D_LIKE    = 0x3,
            D_NEUTRAL = 0x4
        };

        enum class RotatorTargetSpace_t : std::uint32_t {
            ROTATOR_TARGET_WORLDSPACE = 0x0,
            ROTATOR_TARGET_LOCALSPACE = 0x1
        };

        enum class CanPlaySequence_t : std::uint32_t {
            CANNOT_PLAY       = 0x0,
            CAN_PLAY_NOW      = 0x1,
            CAN_PLAY_ENQUEUED = 0x2
        };

        enum class MedalRank_t : std::uint32_t {
            MEDAL_RANK_NONE   = 0x0,
            MEDAL_RANK_BRONZE = 0x1,
            MEDAL_RANK_SILVER = 0x2,
            MEDAL_RANK_GOLD   = 0x3,
            MEDAL_RANK_COUNT  = 0x4
        };

        enum class ObserverMode_t : std::uint32_t {
            OBS_MODE_NONE      = 0x0,
            OBS_MODE_FIXED     = 0x1,
            OBS_MODE_IN_EYE    = 0x2,
            OBS_MODE_CHASE     = 0x3,
            OBS_MODE_ROAMING   = 0x4,
            NUM_OBSERVER_MODES = 0x5
        };

        enum class FuncDoorSpawnPos_t : std::uint32_t {
            FUNC_DOOR_SPAWN_CLOSED = 0x0,
            FUNC_DOOR_SPAWN_OPEN   = 0x1
        };

        enum class EOverrideBlockLOS_t : std::uint32_t {
            BLOCK_LOS_DEFAULT     = 0x0,
            BLOCK_LOS_FORCE_FALSE = 0x1,
            BLOCK_LOS_FORCE_TRUE  = 0x2
        };

        enum class EntityAttachmentType_t : std::uint32_t {
            eAbsOrigin  = 0x0,
            eCenter     = 0x1,
            eEyes       = 0x2,
            eAttachment = 0x3
        };

        enum class MoveType_t : std::uint8_t {
            MOVETYPE_NONE       = 0x0,
            MOVETYPE_OBSOLETE   = 0x1,
            MOVETYPE_WALK       = 0x2,
            MOVETYPE_FLY        = 0x3,
            MOVETYPE_FLYGRAVITY = 0x4,
            MOVETYPE_VPHYSICS   = 0x5,
            MOVETYPE_PUSH       = 0x6,
            MOVETYPE_NOCLIP     = 0x7,
            MOVETYPE_OBSERVER   = 0x8,
            MOVETYPE_LADDER     = 0x9,
            MOVETYPE_CUSTOM     = 0xA,
            MOVETYPE_LAST       = 0xB,
            MOVETYPE_INVALID    = 0xB,
            MOVETYPE_MAX_BITS   = 0x5
        };

        class CNmPassthroughNode__CDefinition {
        public:
        };

        class CNmGraphVariationUserData {
        public:
        };

        class CNmPoseTask {
        public:
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
        // Construct Allowed
        // Local Type Scope
        class CBaseEntity : public CEntityInstance {
        public:
            static constexpr std::uintptr_t m_CBodyComponent                  = 0X0038; // CBodyComponent*
            static constexpr std::uintptr_t m_NetworkTransmitComponent        = 0X0040; // CNetworkTransmitComponent
            static constexpr std::uintptr_t m_aThinkFunctions                 = 0X0250; // CUtlVector<thinkfunc_t>
            static constexpr std::uintptr_t m_iCurrentThinkContext            = 0X0268; // int32
            static constexpr std::uintptr_t m_nLastThinkTick                  = 0X026C; // GameTick_t
            static constexpr std::uintptr_t m_bDisabledContextThinks          = 0X0270; // bool
            static constexpr std::uintptr_t m_isSteadyState                   = 0X0280; // CTypedBitVec<64>
            static constexpr std::uintptr_t m_lastNetworkChange               = 0X0288; // float32
            static constexpr std::uintptr_t m_ResponseContexts                = 0X0298; // CUtlVector<ResponseContext_t>
            static constexpr std::uintptr_t m_iszResponseContext              = 0X02B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iHealth                         = 0X02D8; // int32
            static constexpr std::uintptr_t m_iMaxHealth                      = 0X02DC; // int32
            static constexpr std::uintptr_t m_lifeState                       = 0X02E0; // uint8
            static constexpr std::uintptr_t m_flDamageAccumulator             = 0X02E4; // float32
            static constexpr std::uintptr_t m_bTakesDamage                    = 0X02E8; // bool
            static constexpr std::uintptr_t m_nTakeDamageFlags                = 0X02F0; // TakeDamageFlags_t
            static constexpr std::uintptr_t m_nPlatformType                   = 0X02F8; // EntityPlatformTypes_t
            static constexpr std::uintptr_t m_MoveCollide                     = 0X02FA; // MoveCollide_t
            static constexpr std::uintptr_t m_MoveType                        = 0X02FB; // MoveType_t
            static constexpr std::uintptr_t m_nActualMoveType                 = 0X02FC; // MoveType_t
            static constexpr std::uintptr_t m_nWaterTouch                     = 0X02FD; // uint8
            static constexpr std::uintptr_t m_nSlimeTouch                     = 0X02FE; // uint8
            static constexpr std::uintptr_t m_bRestoreInHierarchy             = 0X02FF; // bool
            static constexpr std::uintptr_t m_target                          = 0X0300; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hDamageFilter                   = 0X0308; // CHandle<CBaseFilter>
            static constexpr std::uintptr_t m_iszDamageFilterName             = 0X0310; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flMoveDoneTime                  = 0X0318; // float32
            static constexpr std::uintptr_t m_nSubclassID                     = 0X031C; // CUtlStringToken
            static constexpr std::uintptr_t m_flAnimTime                      = 0X0328; // float32
            static constexpr std::uintptr_t m_flSimulationTime                = 0X032C; // float32
            static constexpr std::uintptr_t m_flCreateTime                    = 0X0330; // GameTime_t
            static constexpr std::uintptr_t m_bClientSideRagdoll              = 0X0334; // bool
            static constexpr std::uintptr_t m_ubInterpolationFrame            = 0X0335; // uint8
            static constexpr std::uintptr_t m_vPrevVPhysicsUpdatePos          = 0X0338; // Vector
            static constexpr std::uintptr_t m_iTeamNum                        = 0X0344; // uint8
            static constexpr std::uintptr_t m_iGlobalname                     = 0X0348; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iSentToClients                  = 0X0350; // int32
            static constexpr std::uintptr_t m_flSpeed                         = 0X0354; // float32
            static constexpr std::uintptr_t m_sUniqueHammerID                 = 0X0358; // CUtlString
            static constexpr std::uintptr_t m_spawnflags                      = 0X0360; // uint32
            static constexpr std::uintptr_t m_nNextThinkTick                  = 0X0364; // GameTick_t
            static constexpr std::uintptr_t m_nSimulationTick                 = 0X0368; // int32
            static constexpr std::uintptr_t m_OnKilled                        = 0X0370; // CEntityIOOutput
            static constexpr std::uintptr_t m_fFlags                          = 0X0388; // uint32
            static constexpr std::uintptr_t m_vecAbsVelocity                  = 0X038C; // Vector
            static constexpr std::uintptr_t m_vecVelocity                     = 0X0398; // CNetworkVelocityVector
            static constexpr std::uintptr_t m_vecBaseVelocity                 = 0X03C8; // Vector
            static constexpr std::uintptr_t m_nPushEnumCount                  = 0X03D4; // int32
            static constexpr std::uintptr_t m_pCollision                      = 0X03D8; // CCollisionProperty*
            static constexpr std::uintptr_t m_hEffectEntity                   = 0X03E0; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hOwnerEntity                    = 0X03E4; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_fEffects                        = 0X03E8; // uint32
            static constexpr std::uintptr_t m_hGroundEntity                   = 0X03EC; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_nGroundBodyIndex                = 0X03F0; // int32
            static constexpr std::uintptr_t m_flFriction                      = 0X03F4; // float32
            static constexpr std::uintptr_t m_flElasticity                    = 0X03F8; // float32
            static constexpr std::uintptr_t m_flGravityScale                  = 0X03FC; // float32
            static constexpr std::uintptr_t m_flTimeScale                     = 0X0400; // float32
            static constexpr std::uintptr_t m_flWaterLevel                    = 0X0404; // float32
            static constexpr std::uintptr_t m_bGravityDisabled                = 0X0408; // bool
            static constexpr std::uintptr_t m_bAnimatedEveryTick              = 0X0409; // bool
            static constexpr std::uintptr_t m_flActualGravityScale            = 0X040C; // float32
            static constexpr std::uintptr_t m_bGravityActuallyDisabled        = 0X0410; // bool
            static constexpr std::uintptr_t m_bDisableLowViolence             = 0X0411; // bool
            static constexpr std::uintptr_t m_nWaterType                      = 0X0412; // uint8
            static constexpr std::uintptr_t m_iEFlags                         = 0X0414; // int32
            static constexpr std::uintptr_t m_OnUser1                         = 0X0418; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnUser2                         = 0X0430; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnUser3                         = 0X0448; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnUser4                         = 0X0460; // CEntityIOOutput
            static constexpr std::uintptr_t m_iInitialTeamNum                 = 0X0478; // int32
            static constexpr std::uintptr_t m_flNavIgnoreUntilTime            = 0X047C; // GameTime_t
            static constexpr std::uintptr_t m_vecAngVelocity                  = 0X0480; // QAngle
            static constexpr std::uintptr_t m_bNetworkQuantizeOriginAndAngles = 0X048C; // bool
            static constexpr std::uintptr_t m_bLagCompensate                  = 0X048D; // bool
            static constexpr std::uintptr_t m_pBlocker                        = 0X0490; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_flLocalTime                     = 0X0494; // float32
            static constexpr std::uintptr_t m_flVPhysicsUpdateLocalTime       = 0X0498; // float32
            static constexpr std::uintptr_t m_nBloodType                      = 0X049C; // BloodType
            static constexpr std::uintptr_t m_pPulseGraphInstance             = 0X04A0; // CPulseGraphInstance_ServerEntity*
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBaseModelEntity : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_CRenderComponent                                   = 0X04A8; // CRenderComponent*
            static constexpr std::uintptr_t m_CHitboxComponent                                   = 0X04B0; // CHitboxComponent
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed0           = 0X04C8; // HitGroup_t
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed1           = 0X04CC; // HitGroup_t
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed2           = 0X04D0; // HitGroup_t
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed3           = 0X04D4; // HitGroup_t
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed4           = 0X04D8; // HitGroup_t
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed0_PartIndex = 0X04DC; // int32
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed1_PartIndex = 0X04E0; // int32
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed2_PartIndex = 0X04E4; // int32
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed3_PartIndex = 0X04E8; // int32
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed4_PartIndex = 0X04EC; // int32
            static constexpr std::uintptr_t m_pDestructiblePartsSystemComponent                  = 0X04F0; // CDestructiblePartsComponent*
            static constexpr std::uintptr_t m_flDissolveStartTime                                = 0X04F8; // GameTime_t
            static constexpr std::uintptr_t m_OnIgnite                                           = 0X0500; // CEntityIOOutput
            static constexpr std::uintptr_t m_nRenderMode                                        = 0X0518; // RenderMode_t
            static constexpr std::uintptr_t m_nRenderFX                                          = 0X0519; // RenderFx_t
            static constexpr std::uintptr_t m_bAllowFadeInView                                   = 0X051A; // bool
            static constexpr std::uintptr_t m_clrRender                                          = 0X0538; // Color
            static constexpr std::uintptr_t m_vecRenderAttributes                                = 0X0540; // CUtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
            static constexpr std::uintptr_t m_bRenderToCubemaps                                  = 0X05A8; // bool
            static constexpr std::uintptr_t m_bNoInterpolate                                     = 0X05A9; // bool
            static constexpr std::uintptr_t m_Collision                                          = 0X05B0; // CCollisionProperty
            static constexpr std::uintptr_t m_Glow                                               = 0X0660; // CGlowProperty
            static constexpr std::uintptr_t m_flGlowBackfaceMult                                 = 0X06B8; // float32
            static constexpr std::uintptr_t m_fadeMinDist                                        = 0X06BC; // float32
            static constexpr std::uintptr_t m_fadeMaxDist                                        = 0X06C0; // float32
            static constexpr std::uintptr_t m_flFadeScale                                        = 0X06C4; // float32
            static constexpr std::uintptr_t m_flShadowStrength                                   = 0X06C8; // float32
            static constexpr std::uintptr_t m_nObjectCulling                                     = 0X06CC; // uint8
            static constexpr std::uintptr_t m_vecViewOffset                                      = 0X06F8; // CNetworkViewOffsetVector
            static constexpr std::uintptr_t m_bvDisabledHitGroups                                = 0X0728; // uint32[1]
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBaseAnimGraph : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_graphControllerManager            = 0X0730; // CAnimGraphControllerManager
            static constexpr std::uintptr_t m_pMainGraphController              = 0X07E0; // CAnimGraphControllerBase*
            static constexpr std::uintptr_t m_bInitiallyPopulateInterpHistory   = 0X07E8; // bool
            static constexpr std::uintptr_t m_pChoreoServices                   = 0X07F0; // IChoreoServices*
            static constexpr std::uintptr_t m_bAnimGraphUpdateEnabled           = 0X07F8; // bool
            static constexpr std::uintptr_t m_flMaxSlopeDistance                = 0X07FC; // float32
            static constexpr std::uintptr_t m_vLastSlopeCheckPos                = 0X0800; // VectorWS
            static constexpr std::uintptr_t m_nAnimGraphUpdateId                = 0X080C; // uint32
            static constexpr std::uintptr_t m_bAnimationUpdateScheduled         = 0X0810; // bool
            static constexpr std::uintptr_t m_vecForce                          = 0X0814; // Vector
            static constexpr std::uintptr_t m_nForceBone                        = 0X0820; // int32
            static constexpr std::uintptr_t m_RagdollPose                       = 0X0838; // PhysicsRagdollPose_t
            static constexpr std::uintptr_t m_bRagdollEnabled                   = 0X0860; // bool
            static constexpr std::uintptr_t m_bRagdollClientSide                = 0X0861; // bool
            static constexpr std::uintptr_t m_xParentedRagdollRootInEntitySpace = 0X0870; // CTransform
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBaseFlex : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_flexWeight              = 0X0A20; // CNetworkUtlVectorBase<float32>
            static constexpr std::uintptr_t m_vLookTargetPosition     = 0X0A38; // VectorWS
            static constexpr std::uintptr_t m_flAllowResponsesEndTime = 0X0A98; // GameTime_t
            static constexpr std::uintptr_t m_flLastFlexAnimationTime = 0X0A9C; // GameTime_t
            static constexpr std::uintptr_t m_nNextSceneEventId       = 0X0AA0; // SceneEventId_t
            static constexpr std::uintptr_t m_bUpdateLayerPriorities  = 0X0AA4; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEconEntity : public CBaseFlex {
        public:
            static constexpr std::uintptr_t m_AttributeManager      = 0X0AC0; // CAttributeContainer
            static constexpr std::uintptr_t m_OriginalOwnerXuidLow  = 0X0DB8; // uint32
            static constexpr std::uintptr_t m_OriginalOwnerXuidHigh = 0X0DBC; // uint32
            static constexpr std::uintptr_t m_nFallbackPaintKit     = 0X0DC0; // int32
            static constexpr std::uintptr_t m_nFallbackSeed         = 0X0DC4; // int32
            static constexpr std::uintptr_t m_flFallbackWear        = 0X0DC8; // float32
            static constexpr std::uintptr_t m_nFallbackStatTrak     = 0X0DCC; // int32
            static constexpr std::uintptr_t m_hOldProvidee          = 0X0DD0; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_iOldOwnerClass        = 0X0DD4; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBasePlayerWeapon : public CEconEntity {
        public:
            static constexpr std::uintptr_t m_nNextPrimaryAttackTick         = 0X0DE0; // GameTick_t
            static constexpr std::uintptr_t m_flNextPrimaryAttackTickRatio   = 0X0DE4; // float32
            static constexpr std::uintptr_t m_nNextSecondaryAttackTick       = 0X0DE8; // GameTick_t
            static constexpr std::uintptr_t m_flNextSecondaryAttackTickRatio = 0X0DEC; // float32
            static constexpr std::uintptr_t m_iClip1                         = 0X0DF0; // int32
            static constexpr std::uintptr_t m_iClip2                         = 0X0DF4; // int32
            static constexpr std::uintptr_t m_pReserveAmmo                   = 0X0DF8; // int32[2]
            static constexpr std::uintptr_t m_OnPlayerUse                    = 0X0E00; // CEntityIOOutput
        };

        // Has VTable
        // Local Type Scope
        class CCSWeaponBase : public CBasePlayerWeapon {
        public:
            static constexpr std::uintptr_t m_bRemoveable                        = 0X0E20; // bool
            static constexpr std::uintptr_t m_bPlayerAmmoStockOnPickup           = 0X0E21; // bool
            static constexpr std::uintptr_t m_bRequireUseToTouch                 = 0X0E22; // bool
            static constexpr std::uintptr_t m_iWeaponGameplayAnimState           = 0X0E24; // WeaponGameplayAnimState
            static constexpr std::uintptr_t m_flWeaponGameplayAnimStateTimestamp = 0X0E28; // GameTime_t
            static constexpr std::uintptr_t m_flInspectCancelCompleteTime        = 0X0E2C; // GameTime_t
            static constexpr std::uintptr_t m_bInspectPending                    = 0X0E30; // bool
            static constexpr std::uintptr_t m_bInspectShouldLoop                 = 0X0E31; // bool
            static constexpr std::uintptr_t m_nLastEmptySoundCmdNum              = 0X0E5C; // int32
            static constexpr std::uintptr_t m_bFireOnEmpty                       = 0X0E78; // bool
            static constexpr std::uintptr_t m_OnPlayerPickup                     = 0X0E80; // CEntityIOOutput
            static constexpr std::uintptr_t m_weaponMode                         = 0X0E98; // CSWeaponMode
            static constexpr std::uintptr_t m_flTurningInaccuracyDelta           = 0X0E9C; // float32
            static constexpr std::uintptr_t m_vecTurningInaccuracyEyeDirLast     = 0X0EA0; // Vector
            static constexpr std::uintptr_t m_flTurningInaccuracy                = 0X0EAC; // float32
            static constexpr std::uintptr_t m_fAccuracyPenalty                   = 0X0EB0; // float32
            static constexpr std::uintptr_t m_flLastAccuracyUpdateTime           = 0X0EB4; // GameTime_t
            static constexpr std::uintptr_t m_fAccuracySmoothedForZoom           = 0X0EB8; // float32
            static constexpr std::uintptr_t m_iRecoilIndex                       = 0X0EBC; // int32
            static constexpr std::uintptr_t m_flRecoilIndex                      = 0X0EC0; // float32
            static constexpr std::uintptr_t m_bBurstMode                         = 0X0EC4; // bool
            static constexpr std::uintptr_t m_nPostponeFireReadyTicks            = 0X0EC8; // GameTick_t
            static constexpr std::uintptr_t m_flPostponeFireReadyFrac            = 0X0ECC; // float32
            static constexpr std::uintptr_t m_bInReload                          = 0X0ED0; // bool
            static constexpr std::uintptr_t m_flDroppedAtTime                    = 0X0ED4; // GameTime_t
            static constexpr std::uintptr_t m_bIsHauledBack                      = 0X0ED8; // bool
            static constexpr std::uintptr_t m_bSilencerOn                        = 0X0ED9; // bool
            static constexpr std::uintptr_t m_flTimeSilencerSwitchComplete       = 0X0EDC; // GameTime_t
            static constexpr std::uintptr_t m_flWeaponActionPlaybackRate         = 0X0EE0; // float32
            static constexpr std::uintptr_t m_iOriginalTeamNumber                = 0X0EE4; // int32
            static constexpr std::uintptr_t m_iMostRecentTeamNumber              = 0X0EE8; // int32
            static constexpr std::uintptr_t m_bDroppedNearBuyZone                = 0X0EEC; // bool
            static constexpr std::uintptr_t m_flNextAttackRenderTimeOffset       = 0X0EF0; // float32
            static constexpr std::uintptr_t m_bCanBePickedUp                     = 0X0F08; // bool
            static constexpr std::uintptr_t m_bUseCanOverrideNextOwnerTouchTime  = 0X0F09; // bool
            static constexpr std::uintptr_t m_nextOwnerTouchTime                 = 0X0F0C; // GameTime_t
            static constexpr std::uintptr_t m_nextPrevOwnerTouchTime             = 0X0F10; // GameTime_t
            static constexpr std::uintptr_t m_nextPrevOwnerUseTime               = 0X0F18; // GameTime_t
            static constexpr std::uintptr_t m_hPrevOwner                         = 0X0F1C; // CHandle<CCSPlayerPawn>
            static constexpr std::uintptr_t m_nDropTick                          = 0X0F20; // GameTick_t
            static constexpr std::uintptr_t m_bWasActiveWeaponWhenDropped        = 0X0F24; // bool
            static constexpr std::uintptr_t m_donated                            = 0X0F44; // bool
            static constexpr std::uintptr_t m_fLastShotTime                      = 0X0F48; // GameTime_t
            static constexpr std::uintptr_t m_bWasOwnedByCT                      = 0X0F4C; // bool
            static constexpr std::uintptr_t m_bWasOwnedByTerrorist               = 0X0F4D; // bool
            static constexpr std::uintptr_t m_numRemoveUnownedWeaponThink        = 0X0F50; // int32
            static constexpr std::uintptr_t m_IronSightController                = 0X0F58; // CIronSightController
            static constexpr std::uintptr_t m_iIronSightMode                     = 0X0F70; // int32
            static constexpr std::uintptr_t m_flLastLOSTraceFailureTime          = 0X0F74; // GameTime_t
            static constexpr std::uintptr_t m_flWatTickOffset                    = 0X0F78; // float32
            static constexpr std::uintptr_t m_flLastShakeTime                    = 0X0F88; // GameTime_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSWeaponBaseShotgun : public CCSWeaponBase {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponNOVA : public CCSWeaponBaseShotgun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CModelPointEntity : public CBaseModelEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointWorldText : public CModelPointEntity {
        public:
            static constexpr std::uintptr_t m_messageText              = 0X0730; // char[512]
            static constexpr std::uintptr_t m_FontName                 = 0X0930; // char[64]
            static constexpr std::uintptr_t m_BackgroundMaterialName   = 0X0970; // char[64]
            static constexpr std::uintptr_t m_bEnabled                 = 0X09B0; // bool
            static constexpr std::uintptr_t m_bFullbright              = 0X09B1; // bool
            static constexpr std::uintptr_t m_flWorldUnitsPerPx        = 0X09B4; // float32
            static constexpr std::uintptr_t m_flFontSize               = 0X09B8; // float32
            static constexpr std::uintptr_t m_flDepthOffset            = 0X09BC; // float32
            static constexpr std::uintptr_t m_bDrawBackground          = 0X09C0; // bool
            static constexpr std::uintptr_t m_flBackgroundBorderWidth  = 0X09C4; // float32
            static constexpr std::uintptr_t m_flBackgroundBorderHeight = 0X09C8; // float32
            static constexpr std::uintptr_t m_flBackgroundWorldToUV    = 0X09CC; // float32
            static constexpr std::uintptr_t m_Color                    = 0X09D0; // Color
            static constexpr std::uintptr_t m_nJustifyHorizontal       = 0X09D4; // PointWorldTextJustifyHorizontal_t
            static constexpr std::uintptr_t m_nJustifyVertical         = 0X09D8; // PointWorldTextJustifyVertical_t
            static constexpr std::uintptr_t m_nReorientMode            = 0X09DC; // PointWorldTextReorientMode_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointEntity : public CBaseEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CAmbientGeneric : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_radius               = 0X04A8; // float32
            static constexpr std::uintptr_t m_flMaxRadius          = 0X04AC; // float32
            static constexpr std::uintptr_t m_iSoundLevel          = 0X04B0; // soundlevel_t
            static constexpr std::uintptr_t m_dpv                  = 0X04B4; // dynpitchvol_t
            static constexpr std::uintptr_t m_fActive              = 0X0518; // bool
            static constexpr std::uintptr_t m_fLooping             = 0X0519; // bool
            static constexpr std::uintptr_t m_iszSound             = 0X0520; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_sSourceEntName       = 0X0528; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hSoundSource         = 0X0530; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_nSoundSourceEntIndex = 0X0534; // CEntityIndex
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvEntityMaker : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_vecEntityMins                = 0X04A8; // Vector
            static constexpr std::uintptr_t m_vecEntityMaxs                = 0X04B4; // Vector
            static constexpr std::uintptr_t m_hCurrentInstance             = 0X04C0; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hCurrentBlocker              = 0X04C4; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_vecBlockerOrigin             = 0X04C8; // Vector
            static constexpr std::uintptr_t m_angPostSpawnDirection        = 0X04D4; // QAngle
            static constexpr std::uintptr_t m_flPostSpawnDirectionVariance = 0X04E0; // float32
            static constexpr std::uintptr_t m_flPostSpawnSpeed             = 0X04E4; // float32
            static constexpr std::uintptr_t m_bPostSpawnUseAngles          = 0X04E8; // bool
            static constexpr std::uintptr_t m_iszTemplate                  = 0X04F0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_pOutputOnSpawned             = 0X04F8; // CEntityIOOutput
            static constexpr std::uintptr_t m_pOutputOnFailedSpawn         = 0X0510; // CEntityIOOutput
        };

        // Has VTable
        // Is Absract
        // Local Type Scope
        class CBasePulseGraphInstance {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CPulseGraphInstance_ServerEntity : public CBasePulseGraphInstance {
        public:
            static constexpr std::uintptr_t m_hOwner                        = 0X0190; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_bActivated                    = 0X0194; // bool
            static constexpr std::uintptr_t m_sNameFixupStaticPrefix        = 0X0198; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_sNameFixupParent              = 0X01A0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_sNameFixupLocal               = 0X01A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_sProceduralWorldNameForRelays = 0X01B0; // CUtlSymbolLarge
        };

        // Has VTable
        // Local Type Scope
        class CPulseGraphInstance_GameBlackboard : public CPulseGraphInstance_ServerEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CServerOnlyEntity : public CBaseEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicalEntity : public CServerOnlyEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBaseFilter : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_bNegated = 0X04A8; // bool
            static constexpr std::uintptr_t m_OnPass   = 0X04B0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnFail   = 0X04C8; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFilterEnemy : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_iszEnemyName           = 0X04E0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flRadius               = 0X04E8; // float32
            static constexpr std::uintptr_t m_flOuterRadius          = 0X04EC; // float32
            static constexpr std::uintptr_t m_nMaxSquadmatesPerEnemy = 0X04F0; // int32
            static constexpr std::uintptr_t m_iszPlayerName          = 0X04F8; // CUtlSymbolLarge
        };

        // Has VTable
        // Is Absract
        // Local Type Scope
        class CCSGO_TeamPreviewCharacterPosition : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_nVariant    = 0X04A8; // int32
            static constexpr std::uintptr_t m_nRandom     = 0X04AC; // int32
            static constexpr std::uintptr_t m_nOrdinal    = 0X04B0; // int32
            static constexpr std::uintptr_t m_sWeaponName = 0X04B8; // CUtlString
            static constexpr std::uintptr_t m_xuid        = 0X04C0; // uint64
            static constexpr std::uintptr_t m_agentItem   = 0X04C8; // CEconItemView
            static constexpr std::uintptr_t m_glovesItem  = 0X0770; // CEconItemView
            static constexpr std::uintptr_t m_weaponItem  = 0X0A18; // CEconItemView
        };

        // Has VTable
        // Local Type Scope
        class CCSGO_TeamIntroCharacterPosition : public CCSGO_TeamPreviewCharacterPosition {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CCSGO_WingmanIntroCharacterPosition : public CCSGO_TeamIntroCharacterPosition {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSGO_WingmanIntroCounterTerroristPosition : public CCSGO_WingmanIntroCharacterPosition {
        public:
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

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBaseToggle : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_toggle_state              = 0X0730; // TOGGLE_STATE
            static constexpr std::uintptr_t m_flMoveDistance            = 0X0734; // float32
            static constexpr std::uintptr_t m_flWait                    = 0X0738; // float32
            static constexpr std::uintptr_t m_flLip                     = 0X073C; // float32
            static constexpr std::uintptr_t m_bAlwaysFireBlockedOutputs = 0X0740; // bool
            static constexpr std::uintptr_t m_vecPosition1              = 0X0744; // Vector
            static constexpr std::uintptr_t m_vecPosition2              = 0X0750; // Vector
            static constexpr std::uintptr_t m_vecMoveAng                = 0X075C; // QAngle
            static constexpr std::uintptr_t m_vecAngle1                 = 0X0768; // QAngle
            static constexpr std::uintptr_t m_vecAngle2                 = 0X0774; // QAngle
            static constexpr std::uintptr_t m_flHeight                  = 0X0780; // float32
            static constexpr std::uintptr_t m_hActivator                = 0X0784; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_vecFinalDest              = 0X0788; // Vector
            static constexpr std::uintptr_t m_vecFinalAngle             = 0X0794; // QAngle
            static constexpr std::uintptr_t m_movementType              = 0X07A0; // int32
            static constexpr std::uintptr_t m_sMaster                   = 0X07A8; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBasePlatTrain : public CBaseToggle {
        public:
            static constexpr std::uintptr_t m_NoiseMoving  = 0X07B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_NoiseArrived = 0X07B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_volume       = 0X07C8; // float32
            static constexpr std::uintptr_t m_flTWidth     = 0X07CC; // float32
            static constexpr std::uintptr_t m_flTLength    = 0X07D0; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncPlat : public CBasePlatTrain {
        public:
            static constexpr std::uintptr_t m_sNoise = 0X07D8; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncPlatRot : public CFuncPlat {
        public:
            static constexpr std::uintptr_t m_end   = 0X07E0; // QAngle
            static constexpr std::uintptr_t m_start = 0X07EC; // QAngle
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncTrackChange : public CFuncPlatRot {
        public:
            static constexpr std::uintptr_t m_trackTop        = 0X07F8; // CPathTrack*
            static constexpr std::uintptr_t m_trackBottom     = 0X0800; // CPathTrack*
            static constexpr std::uintptr_t m_train           = 0X0808; // CFuncTrackTrain*
            static constexpr std::uintptr_t m_trackTopName    = 0X0810; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_trackBottomName = 0X0818; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_trainName       = 0X0820; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_code            = 0X0828; // TRAIN_CODE
            static constexpr std::uintptr_t m_targetState     = 0X082C; // int32
            static constexpr std::uintptr_t m_use             = 0X0830; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncTrackAuto : public CFuncTrackChange {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CScriptedSequence : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_iszEntry                                = 0X04A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszPreIdle                              = 0X04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszPlay                                 = 0X04B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszPostIdle                             = 0X04C0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszModifierToAddOnPlay                  = 0X04C8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszNextScript                           = 0X04D0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszEntity                               = 0X04D8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszSyncGroup                            = 0X04E0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_nMoveTo                                 = 0X04E8; // ScriptedMoveTo_t
            static constexpr std::uintptr_t m_nMoveToGait                             = 0X04EC; // SharedMovementGait_t
            static constexpr std::uintptr_t m_nHeldWeaponBehavior                     = 0X04F0; // ScriptedHeldWeaponBehavior_t
            static constexpr std::uintptr_t m_nForcedCrouchState                      = 0X04F4; // ForcedCrouchState_t
            static constexpr std::uintptr_t m_bIsPlayingPreIdle                       = 0X04F8; // bool
            static constexpr std::uintptr_t m_bIsPlayingEntry                         = 0X04F9; // bool
            static constexpr std::uintptr_t m_bIsPlayingAction                        = 0X04FA; // bool
            static constexpr std::uintptr_t m_bIsPlayingPostIdle                      = 0X04FB; // bool
            static constexpr std::uintptr_t m_bDontRotateOther                        = 0X04FC; // bool
            static constexpr std::uintptr_t m_bIsRepeatable                           = 0X04FD; // bool
            static constexpr std::uintptr_t m_bShouldLeaveCorpse                      = 0X04FE; // bool
            static constexpr std::uintptr_t m_bStartOnSpawn                           = 0X04FF; // bool
            static constexpr std::uintptr_t m_bDisallowInterrupts                     = 0X0500; // bool
            static constexpr std::uintptr_t m_bCanOverrideNPCState                    = 0X0501; // bool
            static constexpr std::uintptr_t m_bDontTeleportAtEnd                      = 0X0502; // bool
            static constexpr std::uintptr_t m_bHighPriority                           = 0X0503; // bool
            static constexpr std::uintptr_t m_bHideDebugComplaints                    = 0X0504; // bool
            static constexpr std::uintptr_t m_bContinueOnDeath                        = 0X0505; // bool
            static constexpr std::uintptr_t m_bLoopPreIdleSequence                    = 0X0506; // bool
            static constexpr std::uintptr_t m_bLoopActionSequence                     = 0X0507; // bool
            static constexpr std::uintptr_t m_bLoopPostIdleSequence                   = 0X0508; // bool
            static constexpr std::uintptr_t m_bSynchPostIdles                         = 0X0509; // bool
            static constexpr std::uintptr_t m_bIgnoreLookAt                           = 0X050A; // bool
            static constexpr std::uintptr_t m_bIgnoreGravity                          = 0X050B; // bool
            static constexpr std::uintptr_t m_bDisableNPCCollisions                   = 0X050C; // bool
            static constexpr std::uintptr_t m_bKeepAnimgraphLockedPost                = 0X050D; // bool
            static constexpr std::uintptr_t m_bDontAddModifiers                       = 0X050E; // bool
            static constexpr std::uintptr_t m_bDisableAimingWhileMoving               = 0X050F; // bool
            static constexpr std::uintptr_t m_bIgnoreRotation                         = 0X0510; // bool
            static constexpr std::uintptr_t m_flRadius                                = 0X0514; // float32
            static constexpr std::uintptr_t m_flRepeat                                = 0X0518; // float32
            static constexpr std::uintptr_t m_flPlayAnimFadeInTime                    = 0X051C; // float32
            static constexpr std::uintptr_t m_flMoveInterpTime                        = 0X0520; // float32
            static constexpr std::uintptr_t m_flAngRate                               = 0X0524; // float32
            static constexpr std::uintptr_t m_flMoveSpeed                             = 0X0528; // float32
            static constexpr std::uintptr_t m_bWaitUntilMoveCompletesToStartAnimation = 0X052C; // bool
            static constexpr std::uintptr_t m_nNotReadySequenceCount                  = 0X0530; // int32
            static constexpr std::uintptr_t m_startTime                               = 0X0534; // GameTime_t
            static constexpr std::uintptr_t m_bWaitForBeginSequence                   = 0X0538; // bool
            static constexpr std::uintptr_t m_saved_effects                           = 0X053C; // int32
            static constexpr std::uintptr_t m_savedFlags                              = 0X0540; // int32
            static constexpr std::uintptr_t m_savedCollisionGroup                     = 0X0544; // int32
            static constexpr std::uintptr_t m_bInterruptable                          = 0X0548; // bool
            static constexpr std::uintptr_t m_sequenceStarted                         = 0X0549; // bool
            static constexpr std::uintptr_t m_bPositionRelativeToOtherEntity          = 0X054A; // bool
            static constexpr std::uintptr_t m_hTargetEnt                              = 0X054C; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hNextCine                               = 0X0550; // CHandle<CScriptedSequence>
            static constexpr std::uintptr_t m_bThinking                               = 0X0554; // bool
            static constexpr std::uintptr_t m_bInitiatedSelfDelete                    = 0X0555; // bool
            static constexpr std::uintptr_t m_bIsTeleportingDueToMoveTo               = 0X0556; // bool
            static constexpr std::uintptr_t m_bAllowCustomInterruptConditions         = 0X0557; // bool
            static constexpr std::uintptr_t m_hForcedTarget                           = 0X0558; // CHandle<CBaseAnimGraph>
            static constexpr std::uintptr_t m_bDontCancelOtherSequences               = 0X055C; // bool
            static constexpr std::uintptr_t m_bForceSynch                             = 0X055D; // bool
            static constexpr std::uintptr_t m_bPreventUpdateYawOnFinish               = 0X055E; // bool
            static constexpr std::uintptr_t m_bEnsureOnNavmeshOnFinish                = 0X055F; // bool
            static constexpr std::uintptr_t m_onDeathBehavior                         = 0X0560; // ScriptedOnDeath_t
            static constexpr std::uintptr_t m_ConflictResponse                        = 0X0564; // ScriptedConflictResponse_t
            static constexpr std::uintptr_t m_OnBeginSequence                         = 0X0568; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnActionStartOrLoop                     = 0X0580; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnEndSequence                           = 0X0598; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnPostIdleEndSequence                   = 0X05B0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnCancelSequence                        = 0X05C8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnCancelFailedSequence                  = 0X05E0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnScriptEvent                           = 0X05F8; // CEntityIOOutput[8]
            static constexpr std::uintptr_t m_matOtherToMain                          = 0X06C0; // CTransform
            static constexpr std::uintptr_t m_hInteractionMainEntity                  = 0X06E0; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_iPlayerDeathBehavior                    = 0X06E4; // int32
            static constexpr std::uintptr_t m_bSkipFadeIn                             = 0X06E8; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBaseTrigger : public CBaseToggle {
        public:
            static constexpr std::uintptr_t m_OnStartTouch         = 0X07B0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnStartTouchAll      = 0X07C8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnEndTouch           = 0X07E0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnEndTouchAll        = 0X07F8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnTouching           = 0X0810; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnTouchingEachEntity = 0X0828; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnNotTouching        = 0X0840; // CEntityIOOutput
            static constexpr std::uintptr_t m_hTouchingEntities    = 0X0858; // CUtlVector<CHandle<CBaseEntity>>
            static constexpr std::uintptr_t m_iFilterName          = 0X0870; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hFilter              = 0X0878; // CHandle<CBaseFilter>
            static constexpr std::uintptr_t m_bDisabled            = 0X087C; // bool
            static constexpr std::uintptr_t m_bUseAsyncQueries     = 0X0888; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFogTrigger : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_fog = 0X0890; // fogparams_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoTeleportDestination : public CPointEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointBroadcastClientCommand : public CPointEntity {
        public:
        };

        // Has VTable
        class CPlayerPawnComponent {
        public:
            static constexpr std::uintptr_t __m_pChainEntity = 0X0008; // CNetworkVarChainer
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_PingServices : public CPlayerPawnComponent {
        public:
            static constexpr std::uintptr_t m_flPlayerPingTokens = 0X0048; // GameTime_t[5]
            static constexpr std::uintptr_t m_hPlayerPing        = 0X005C; // CHandle<CPlayerPing>
        };

        // Has VTable
        // Local Type Scope
        class CBaseCSGrenade : public CCSWeaponBase {
        public:
            static constexpr std::uintptr_t m_bRedraw                   = 0X1130; // bool
            static constexpr std::uintptr_t m_bIsHeldByPlayer           = 0X1131; // bool
            static constexpr std::uintptr_t m_bPinPulled                = 0X1132; // bool
            static constexpr std::uintptr_t m_bJumpThrow                = 0X1133; // bool
            static constexpr std::uintptr_t m_bThrowAnimating           = 0X1134; // bool
            static constexpr std::uintptr_t m_fThrowTime                = 0X1138; // GameTime_t
            static constexpr std::uintptr_t m_flThrowStrength           = 0X113C; // float32
            static constexpr std::uintptr_t m_fDropTime                 = 0X1140; // GameTime_t
            static constexpr std::uintptr_t m_fPinPullTime              = 0X1144; // GameTime_t
            static constexpr std::uintptr_t m_bJustPulledPin            = 0X1148; // bool
            static constexpr std::uintptr_t m_nNextHoldTick             = 0X114C; // GameTick_t
            static constexpr std::uintptr_t m_flNextHoldFrac            = 0X1150; // float32
            static constexpr std::uintptr_t m_hSwitchToWeaponAfterThrow = 0X1154; // CHandle<CCSWeaponBase>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CHEGrenade : public CBaseCSGrenade {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysicsSpring : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_flFrequency     = 0X04B0; // float32
            static constexpr std::uintptr_t m_flDampingRatio  = 0X04B4; // float32
            static constexpr std::uintptr_t m_flRestLength    = 0X04B8; // float32
            static constexpr std::uintptr_t m_nameAttachStart = 0X04C0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_nameAttachEnd   = 0X04C8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_start           = 0X04D0; // VectorWS
            static constexpr std::uintptr_t m_end             = 0X04DC; // VectorWS
            static constexpr std::uintptr_t m_teleportTick    = 0X04E8; // uint32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvMuzzleFlash : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_flScale             = 0X04A8; // float32
            static constexpr std::uintptr_t m_iszParentAttachment = 0X04B0; // CUtlSymbolLarge
        };

        // Has VTable
        // Local Type Scope
        class CEconItemAttribute {
        public:
            static constexpr std::uintptr_t m_iAttributeDefinitionIndex = 0X0030; // uint16
            static constexpr std::uintptr_t m_flValue                   = 0X0034; // float32
            static constexpr std::uintptr_t m_flInitialValue            = 0X0038; // float32
            static constexpr std::uintptr_t m_nRefundableCurrency       = 0X003C; // int32
            static constexpr std::uintptr_t m_bSetBonus                 = 0X0040; // bool
        };

        // Has Trivial Destructor
        // Local Type Scope
        class CBaseTriggerAPI {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSWeaponBaseGun : public CCSWeaponBase {
        public:
            static constexpr std::uintptr_t m_zoomLevel                    = 0X1130; // int32
            static constexpr std::uintptr_t m_iBurstShotsRemaining         = 0X1134; // int32
            static constexpr std::uintptr_t m_silencedModelIndex           = 0X1140; // int32
            static constexpr std::uintptr_t m_inPrecache                   = 0X1144; // bool
            static constexpr std::uintptr_t m_bNeedsBoltAction             = 0X1145; // bool
            static constexpr std::uintptr_t m_nRevolverCylinderIdx         = 0X1148; // int32
            static constexpr std::uintptr_t m_bSkillReloadAvailable        = 0X114C; // bool
            static constexpr std::uintptr_t m_bSkillReloadLiftedReloadKey  = 0X114D; // bool
            static constexpr std::uintptr_t m_bSkillBoltInterruptAvailable = 0X114E; // bool
            static constexpr std::uintptr_t m_bSkillBoltLiftedFireKey      = 0X114F; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponRevolver : public CCSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncTrainControls : public CBaseModelEntity {
        public:
        };

        // Has VTable
        // Is Absract
        class CBtNode {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CBtActionCombatPositioning : public CBtNode {
        public:
            static constexpr std::uintptr_t m_szSensorInputKey = 0X0068; // CUtlString
            static constexpr std::uintptr_t m_szIsAttackingKey = 0X0080; // CUtlString
            static constexpr std::uintptr_t m_ActionTimer      = 0X0088; // CountdownTimer
            static constexpr std::uintptr_t m_bCrouching       = 0X00A0; // bool
        };

        // Has VTable
        // Local Type Scope
        struct PredictedDamageTag_t {
        public:
            static constexpr std::uintptr_t nTagTick                           = 0X0030; // GameTick_t
            static constexpr std::uintptr_t flFlinchModSmall                   = 0X0034; // float32
            static constexpr std::uintptr_t flFlinchModLarge                   = 0X0038; // float32
            static constexpr std::uintptr_t flFriendlyFireDamageReductionRatio = 0X003C; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBaseProp : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_bModelOverrodeBlockLOS    = 0X0A20; // bool
            static constexpr std::uintptr_t m_iShapeType                = 0X0A24; // int32
            static constexpr std::uintptr_t m_bConformToCollisionBounds = 0X0A28; // bool
            static constexpr std::uintptr_t m_mPreferredCatchTransform  = 0X0A30; // CTransform
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBreakableProp : public CBaseProp {
        public:
            static constexpr std::uintptr_t m_CPropDataComponent                    = 0X0A58; // CPropDataComponent
            static constexpr std::uintptr_t m_OnStartDeath                          = 0X0A98; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnBreak                               = 0X0AB0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnHealthChanged                       = 0X0AC8; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnTakeDamage                          = 0X0AE8; // CEntityIOOutput
            static constexpr std::uintptr_t m_impactEnergyScale                     = 0X0B00; // float32
            static constexpr std::uintptr_t m_iMinHealthDmg                         = 0X0B04; // int32
            static constexpr std::uintptr_t m_preferredCarryAngles                  = 0X0B08; // QAngle
            static constexpr std::uintptr_t m_flPressureDelay                       = 0X0B14; // float32
            static constexpr std::uintptr_t m_flDefBurstScale                       = 0X0B18; // float32
            static constexpr std::uintptr_t m_vDefBurstOffset                       = 0X0B1C; // Vector
            static constexpr std::uintptr_t m_hBreaker                              = 0X0B28; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_PerformanceMode                       = 0X0B2C; // PerformanceMode_t
            static constexpr std::uintptr_t m_flPreventDamageBeforeTime             = 0X0B30; // GameTime_t
            static constexpr std::uintptr_t m_BreakableContentsType                 = 0X0B34; // BreakableContentsType_t
            static constexpr std::uintptr_t m_strBreakableContentsPropGroupOverride = 0X0B38; // CUtlString
            static constexpr std::uintptr_t m_strBreakableContentsParticleOverride  = 0X0B40; // CUtlString
            static constexpr std::uintptr_t m_bHasBreakPiecesOrCommands             = 0X0B48; // bool
            static constexpr std::uintptr_t m_explodeDamage                         = 0X0B4C; // float32
            static constexpr std::uintptr_t m_explodeRadius                         = 0X0B50; // float32
            static constexpr std::uintptr_t m_nExplosionType                        = 0X0B54; // BaseExplosionTypes_t
            static constexpr std::uintptr_t m_explosionDelay                        = 0X0B58; // float32
            static constexpr std::uintptr_t m_explosionBuildupSound                 = 0X0B60; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_explosionCustomEffect                 = 0X0B68; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_explosionCustomSound                  = 0X0B70; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_explosionModifier                     = 0X0B78; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hPhysicsAttacker                      = 0X0B80; // CHandle<CBasePlayerPawn>
            static constexpr std::uintptr_t m_flLastPhysicsInfluenceTime            = 0X0B84; // GameTime_t
            static constexpr std::uintptr_t m_flDefaultFadeScale                    = 0X0B88; // float32
            static constexpr std::uintptr_t m_hLastAttacker                         = 0X0B8C; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_iszPuntSound                          = 0X0B90; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bUsePuntSound                         = 0X0B98; // bool
            static constexpr std::uintptr_t m_bOriginalBlockLOS                     = 0X0B99; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CDynamicProp : public CBreakableProp {
        public:
            static constexpr std::uintptr_t m_bCreateNavObstacle            = 0X0BA8; // bool
            static constexpr std::uintptr_t m_bNavObstacleUpdatesOverridden = 0X0BA9; // bool
            static constexpr std::uintptr_t m_bUseHitboxesForRenderBox      = 0X0BAA; // bool
            static constexpr std::uintptr_t m_bUseAnimGraph                 = 0X0BAB; // bool
            static constexpr std::uintptr_t m_pOutputAnimBegun              = 0X0BB0; // CEntityIOOutput
            static constexpr std::uintptr_t m_pOutputAnimOver               = 0X0BC8; // CEntityIOOutput
            static constexpr std::uintptr_t m_pOutputAnimLoopCycleOver      = 0X0BE0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnAnimReachedStart            = 0X0BF8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnAnimReachedEnd              = 0X0C10; // CEntityIOOutput
            static constexpr std::uintptr_t m_iszIdleAnim                   = 0X0C28; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_nIdleAnimLoopMode             = 0X0C30; // AnimLoopMode_t
            static constexpr std::uintptr_t m_bRandomizeCycle               = 0X0C34; // bool
            static constexpr std::uintptr_t m_bStartDisabled                = 0X0C35; // bool
            static constexpr std::uintptr_t m_bFiredStartEndOutput          = 0X0C36; // bool
            static constexpr std::uintptr_t m_bForceNpcExclude              = 0X0C37; // bool
            static constexpr std::uintptr_t m_bCreateNonSolid               = 0X0C38; // bool
            static constexpr std::uintptr_t m_bIsOverrideProp               = 0X0C39; // bool
            static constexpr std::uintptr_t m_iInitialGlowState             = 0X0C3C; // int32
            static constexpr std::uintptr_t m_nGlowRange                    = 0X0C40; // int32
            static constexpr std::uintptr_t m_nGlowRangeMin                 = 0X0C44; // int32
            static constexpr std::uintptr_t m_glowColor                     = 0X0C48; // Color
            static constexpr std::uintptr_t m_nGlowTeam                     = 0X0C4C; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncRetakeBarrier : public CDynamicProp {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerBuoyancy : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_BuoyancyHelper = 0X0890; // CBuoyancyHelper
            static constexpr std::uintptr_t m_flFluidDensity = 0X09A8; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTonemapController2 : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_flAutoExposureMin             = 0X04A8; // float32
            static constexpr std::uintptr_t m_flAutoExposureMax             = 0X04AC; // float32
            static constexpr std::uintptr_t m_flExposureAdaptationSpeedUp   = 0X04B0; // float32
            static constexpr std::uintptr_t m_flExposureAdaptationSpeedDown = 0X04B4; // float32
            static constexpr std::uintptr_t m_flTonemapEVSmoothingRange     = 0X04B8; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTonemapController2Alias_env_tonemap_controller2 : public CTonemapController2 {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPathTrack : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_pnext            = 0X04A8; // CPathTrack*
            static constexpr std::uintptr_t m_pprevious        = 0X04B0; // CPathTrack*
            static constexpr std::uintptr_t m_paltpath         = 0X04B8; // CPathTrack*
            static constexpr std::uintptr_t m_flRadius         = 0X04C0; // float32
            static constexpr std::uintptr_t m_length           = 0X04C4; // float32
            static constexpr std::uintptr_t m_altName          = 0X04C8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_nIterVal         = 0X04D0; // int32
            static constexpr std::uintptr_t m_eOrientationType = 0X04D4; // TrackOrientationType_t
            static constexpr std::uintptr_t m_OnPass           = 0X04D8; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerProximity : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_hMeasureTarget        = 0X0890; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_iszMeasureTarget      = 0X0898; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_fRadius               = 0X08A0; // float32
            static constexpr std::uintptr_t m_nTouchers             = 0X08A4; // int32
            static constexpr std::uintptr_t m_NearestEntityDistance = 0X08A8; // CEntityOutputTemplate<float32,float32>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTankTrainAI : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_hTrain            = 0X04A8; // CHandle<CFuncTrackTrain>
            static constexpr std::uintptr_t m_hTargetEntity     = 0X04AC; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_soundPlaying      = 0X04B0; // int32
            static constexpr std::uintptr_t m_startSoundName    = 0X04C8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_engineSoundName   = 0X04D0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_movementSoundName = 0X04D8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_targetEntityName  = 0X04E0; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CRuleEntity : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_iszMaster = 0X0730; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CRulePointEntity : public CRuleEntity {
        public:
            static constexpr std::uintptr_t m_Score = 0X0738; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CGameText : public CRulePointEntity {
        public:
            static constexpr std::uintptr_t m_iszMessage = 0X0740; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_textParms  = 0X0748; // hudtextparms_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CGameEnd : public CRulePointEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CServerOnlyPointEntity : public CServerOnlyEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class SpawnPoint : public CServerOnlyPointEntity {
        public:
            static constexpr std::uintptr_t m_iPriority = 0X04A8; // int32
            static constexpr std::uintptr_t m_bEnabled  = 0X04AC; // bool
            static constexpr std::uintptr_t m_nType     = 0X04B0; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoDeathmatchSpawn : public SpawnPoint {
        public:
        };

        // Has VTable
        class CPlayerControllerComponent {
        public:
            static constexpr std::uintptr_t __m_pChainEntity = 0X0008; // CNetworkVarChainer
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayerController_InventoryServices : public CPlayerControllerComponent {
        public:
            static constexpr std::uintptr_t m_unMusicID                          = 0X0040; // uint16
            static constexpr std::uintptr_t m_rank                               = 0X0044; // MedalRank_t[6]
            static constexpr std::uintptr_t m_nPersonaDataPublicLevel            = 0X005C; // int32
            static constexpr std::uintptr_t m_nPersonaDataPublicCommendsLeader   = 0X0060; // int32
            static constexpr std::uintptr_t m_nPersonaDataPublicCommendsTeacher  = 0X0064; // int32
            static constexpr std::uintptr_t m_nPersonaDataPublicCommendsFriendly = 0X0068; // int32
            static constexpr std::uintptr_t m_nPersonaDataXpTrailLevel           = 0X006C; // int32
            static constexpr std::uintptr_t m_unEquippedPlayerSprayIDs           = 0X0F48; // uint32[1]
            static constexpr std::uintptr_t m_unCurrentLoadoutHash               = 0X0F50; // uint64
            static constexpr std::uintptr_t m_vecServerAuthoritativeWeaponSlots  = 0X0F58; // CUtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>
        };

        // Has VTable
        // Has Trivial Destructor
        // Local Type Scope
        class CCSPlayerModernJump {
        public:
            static constexpr std::uintptr_t m_nLastActualJumpPressTick  = 0X0010; // GameTick_t
            static constexpr std::uintptr_t m_flLastActualJumpPressFrac = 0X0014; // float32
            static constexpr std::uintptr_t m_nLastUsableJumpPressTick  = 0X0018; // GameTick_t
            static constexpr std::uintptr_t m_flLastUsableJumpPressFrac = 0X001C; // float32
            static constexpr std::uintptr_t m_nLastLandedTick           = 0X0020; // GameTick_t
            static constexpr std::uintptr_t m_flLastLandedFrac          = 0X0024; // float32
            static constexpr std::uintptr_t m_flLastLandedVelocityX     = 0X0028; // float32
            static constexpr std::uintptr_t m_flLastLandedVelocityY     = 0X002C; // float32
            static constexpr std::uintptr_t m_flLastLandedVelocityZ     = 0X0030; // float32
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
        class CTriggerFan : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_vFanOriginOffset        = 0X0890; // Vector
            static constexpr std::uintptr_t m_vDirection              = 0X089C; // Vector
            static constexpr std::uintptr_t m_bPushTowardsInfoTarget  = 0X08A8; // bool
            static constexpr std::uintptr_t m_bPushAwayFromInfoTarget = 0X08A9; // bool
            static constexpr std::uintptr_t m_qNoiseDelta             = 0X08B0; // Quaternion
            static constexpr std::uintptr_t m_hInfoFan                = 0X08C0; // CHandle<CInfoFan>
            static constexpr std::uintptr_t m_flForce                 = 0X08C4; // float32
            static constexpr std::uintptr_t m_bFalloff                = 0X08C8; // bool
            static constexpr std::uintptr_t m_RampTimer               = 0X08D0; // CountdownTimer
            static constexpr std::uintptr_t m_vFanOriginWS            = 0X08E8; // VectorWS
            static constexpr std::uintptr_t m_vFanOriginLS            = 0X08F4; // Vector
            static constexpr std::uintptr_t m_vFanEndLS               = 0X0900; // Vector
            static constexpr std::uintptr_t m_vNoiseDirectionTarget   = 0X090C; // Vector
            static constexpr std::uintptr_t m_iszInfoFan              = 0X0918; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flRopeForceScale        = 0X0920; // float32
            static constexpr std::uintptr_t m_flParticleForceScale    = 0X0924; // float32
            static constexpr std::uintptr_t m_flPlayerForce           = 0X0928; // float32
            static constexpr std::uintptr_t m_bPlayerWindblock        = 0X092C; // bool
            static constexpr std::uintptr_t m_flNPCForce              = 0X0930; // float32
            static constexpr std::uintptr_t m_flRampTime              = 0X0934; // float32
            static constexpr std::uintptr_t m_fNoiseDegrees           = 0X0938; // float32
            static constexpr std::uintptr_t m_fNoiseSpeed             = 0X093C; // float32
            static constexpr std::uintptr_t m_bPushPlayer             = 0X0940; // bool
            static constexpr std::uintptr_t m_bRampDown               = 0X0941; // bool
            static constexpr std::uintptr_t m_nManagerFanIdx          = 0X0944; // int32
        };

        // Has VTable
        // Is Absract
        // Local Type Scope
        class CPhysConstraint : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_nameAttach1                 = 0X04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_nameAttach2                 = 0X04B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hAttach1                    = 0X04C0; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hAttach2                    = 0X04C4; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_nameAttachment1             = 0X04C8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_nameAttachment2             = 0X04D0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_breakSound                  = 0X04D8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_forceLimit                  = 0X04E0; // float32
            static constexpr std::uintptr_t m_torqueLimit                 = 0X04E4; // float32
            static constexpr std::uintptr_t m_minTeleportDistance         = 0X04E8; // float32
            static constexpr std::uintptr_t m_bSnapObjectPositions        = 0X04EC; // bool
            static constexpr std::uintptr_t m_bTreatEntity1AsInfiniteMass = 0X04ED; // bool
            static constexpr std::uintptr_t m_OnBreak                     = 0X04F0; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysHinge : public CPhysConstraint {
        public:
            static constexpr std::uintptr_t m_soundInfo                = 0X0510; // ConstraintSoundInfo
            static constexpr std::uintptr_t m_NotifyMinLimitReached    = 0X05A8; // CEntityIOOutput
            static constexpr std::uintptr_t m_NotifyMaxLimitReached    = 0X05C0; // CEntityIOOutput
            static constexpr std::uintptr_t m_bAtMinLimit              = 0X05D8; // bool
            static constexpr std::uintptr_t m_bAtMaxLimit              = 0X05D9; // bool
            static constexpr std::uintptr_t m_hinge                    = 0X05DC; // constraint_hingeparams_t
            static constexpr std::uintptr_t m_hingeFriction            = 0X061C; // float32
            static constexpr std::uintptr_t m_systemLoadScale          = 0X0620; // float32
            static constexpr std::uintptr_t m_bIsAxisLocal             = 0X0624; // bool
            static constexpr std::uintptr_t m_flMinRotation            = 0X0628; // float32
            static constexpr std::uintptr_t m_flMaxRotation            = 0X062C; // float32
            static constexpr std::uintptr_t m_flInitialRotation        = 0X0630; // float32
            static constexpr std::uintptr_t m_flMotorFrequency         = 0X0634; // float32
            static constexpr std::uintptr_t m_flMotorDampingRatio      = 0X0638; // float32
            static constexpr std::uintptr_t m_flAngleSpeed             = 0X063C; // float32
            static constexpr std::uintptr_t m_flAngleSpeedThreshold    = 0X0640; // float32
            static constexpr std::uintptr_t m_flLimitsDebugVisRotation = 0X0644; // float32
            static constexpr std::uintptr_t m_OnStartMoving            = 0X0648; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnStopMoving             = 0X0660; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysHingeAlias_phys_hinge_local : public CPhysHinge {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicCase : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_nCase             = 0X04A8; // CUtlSymbolLarge[32]
            static constexpr std::uintptr_t m_nShuffleCases     = 0X05A8; // int32
            static constexpr std::uintptr_t m_nLastShuffleCase  = 0X05AC; // int32
            static constexpr std::uintptr_t m_uchShuffleCaseMap = 0X05B0; // uint8[32]
            static constexpr std::uintptr_t m_OnCase            = 0X05D0; // CEntityIOOutput[32]
            static constexpr std::uintptr_t m_OnDefault         = 0X08D0; // CEntityOutputTemplate<CUtlString,char*>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoGameEventProxy : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_iszEventName = 0X04A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flRange      = 0X04B0; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponBizon : public CCSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CRuleBrushEntity : public CRuleEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CGamePlayerZone : public CRuleBrushEntity {
        public:
            static constexpr std::uintptr_t m_OnPlayerInZone  = 0X0738; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnPlayerOutZone = 0X0750; // CEntityIOOutput
            static constexpr std::uintptr_t m_PlayersInCount  = 0X0768; // CEntityOutputTemplate<int32,int32>
            static constexpr std::uintptr_t m_PlayersOutCount = 0X0788; // CEntityOutputTemplate<int32,int32>
        };

        // Has VTable
        // Local Type Scope
        class CPulseExecCursor {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CPulseServerCursor : public CPulseExecCursor {
        public:
            static constexpr std::uintptr_t m_hActivator = 0X00D8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hCaller    = 0X00DC; // CHandle<CBaseEntity>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_PlaySequence : public CPulseCell_BaseYieldingInflow {
        public:
            static constexpr std::uintptr_t m_SequenceName    = 0X0048; // CUtlString
            static constexpr std::uintptr_t m_PulseAnimEvents = 0X0050; // PulseNodeDynamicOutflows_t
            static constexpr std::uintptr_t m_OnFinished      = 0X0068; // CPulse_ResumePoint
            static constexpr std::uintptr_t m_OnCanceled      = 0X00B0; // CPulse_ResumePoint
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInferno : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_firePositions            = 0X0730; // Vector[64]
            static constexpr std::uintptr_t m_fireParentPositions      = 0X0A30; // Vector[64]
            static constexpr std::uintptr_t m_bFireIsBurning           = 0X0D30; // bool[64]
            static constexpr std::uintptr_t m_BurnNormal               = 0X0D70; // Vector[64]
            static constexpr std::uintptr_t m_fireCount                = 0X1070; // int32
            static constexpr std::uintptr_t m_nInfernoType             = 0X1074; // int32
            static constexpr std::uintptr_t m_nFireEffectTickBegin     = 0X1078; // int32
            static constexpr std::uintptr_t m_nFireLifetime            = 0X107C; // float32
            static constexpr std::uintptr_t m_bInPostEffectTime        = 0X1080; // bool
            static constexpr std::uintptr_t m_bWasCreatedInSmoke       = 0X1081; // bool
            static constexpr std::uintptr_t m_extent                   = 0X1288; // Extent
            static constexpr std::uintptr_t m_damageTimer              = 0X12A0; // CountdownTimer
            static constexpr std::uintptr_t m_damageRampTimer          = 0X12B8; // CountdownTimer
            static constexpr std::uintptr_t m_splashVelocity           = 0X12D0; // Vector
            static constexpr std::uintptr_t m_InitialSplashVelocity    = 0X12DC; // Vector
            static constexpr std::uintptr_t m_startPos                 = 0X12E8; // Vector
            static constexpr std::uintptr_t m_vecOriginalSpawnLocation = 0X12F4; // Vector
            static constexpr std::uintptr_t m_activeTimer              = 0X1300; // IntervalTimer
            static constexpr std::uintptr_t m_fireSpawnOffset          = 0X1310; // int32
            static constexpr std::uintptr_t m_nMaxFlames               = 0X1314; // int32
            static constexpr std::uintptr_t m_nSpreadCount             = 0X1318; // int32
            static constexpr std::uintptr_t m_BookkeepingTimer         = 0X1320; // CountdownTimer
            static constexpr std::uintptr_t m_NextSpreadTimer          = 0X1338; // CountdownTimer
            static constexpr std::uintptr_t m_nSourceItemDefIndex      = 0X1350; // uint16
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
        class CTouchExpansionComponent : public CEntityComponent {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Outflow_PlaySceneBase : public CPulseCell_BaseYieldingInflow {
        public:
            static constexpr std::uintptr_t m_OnFinished = 0X0048; // CPulse_ResumePoint
            static constexpr std::uintptr_t m_OnCanceled = 0X0090; // CPulse_ResumePoint
            static constexpr std::uintptr_t m_Triggers   = 0X00D8; // CUtlVector<CPulse_OutflowConnection>
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
        class CPulseCell_LerpCameraSettings : public CPulseCell_BaseLerp {
        public:
            static constexpr std::uintptr_t m_flSeconds = 0X0090; // float32
            static constexpr std::uintptr_t m_Start     = 0X0094; // PointCameraSettings_t
            static constexpr std::uintptr_t m_End       = 0X00A4; // PointCameraSettings_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponSCAR20 : public CCSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncInteractionLayerClip : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled        = 0X0730; // bool
            static constexpr std::uintptr_t m_iszInteractsAs   = 0X0738; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszInteractsWith = 0X0740; // CUtlSymbolLarge
        };

        // Has VTable
        // Local Type Scope
        class CPlayer_UseServices : public CPlayerPawnComponent {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CCSObserver_UseServices : public CPlayer_UseServices {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerDetectBulletFire : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_bPlayerFireOnly      = 0X0890; // bool
            static constexpr std::uintptr_t m_OnDetectedBulletFire = 0X0898; // CEntityIOOutput
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_UseServices : public CPlayer_UseServices {
        public:
            static constexpr std::uintptr_t m_hLastKnownUseEntity  = 0X0048; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_flLastUseTimeStamp   = 0X004C; // GameTime_t
            static constexpr std::uintptr_t m_flTimeLastUsedWindow = 0X0050; // GameTime_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponAWP : public CCSWeaponBaseGun {
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
        // Construct Allowed
        // Local Type Scope
        class CInfoFan : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_fFanForceMaxRadius  = 0X04E8; // float32
            static constexpr std::uintptr_t m_fFanForceMinRadius  = 0X04EC; // float32
            static constexpr std::uintptr_t m_flCurveDistRange    = 0X04F0; // float32
            static constexpr std::uintptr_t m_FanForceCurveString = 0X04F8; // CUtlSymbolLarge
        };

        // Has VTable
        // Is Absract
        // Local Type Scope
        class CGameRules {
        public:
            static constexpr std::uintptr_t __m_pChainEntity           = 0X0008; // CNetworkVarChainer
            static constexpr std::uintptr_t m_szQuestName              = 0X0030; // char[128]
            static constexpr std::uintptr_t m_nQuestPhase              = 0X00B0; // int32
            static constexpr std::uintptr_t m_nLastMatchTime           = 0X00B4; // uint32
            static constexpr std::uintptr_t m_nLastMatchTime_MatchID64 = 0X00B8; // uint64
            static constexpr std::uintptr_t m_nTotalPausedTicks        = 0X00C0; // int32
            static constexpr std::uintptr_t m_nPauseStartTick          = 0X00C4; // int32
            static constexpr std::uintptr_t m_bGamePaused              = 0X00C8; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFish : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_pool           = 0X0A20; // CHandle<CFishPool>
            static constexpr std::uintptr_t m_id             = 0X0A24; // uint32
            static constexpr std::uintptr_t m_x              = 0X0A28; // float32
            static constexpr std::uintptr_t m_y              = 0X0A2C; // float32
            static constexpr std::uintptr_t m_z              = 0X0A30; // float32
            static constexpr std::uintptr_t m_angle          = 0X0A34; // float32
            static constexpr std::uintptr_t m_angleChange    = 0X0A38; // float32
            static constexpr std::uintptr_t m_forward        = 0X0A3C; // Vector
            static constexpr std::uintptr_t m_perp           = 0X0A48; // Vector
            static constexpr std::uintptr_t m_poolOrigin     = 0X0A54; // Vector
            static constexpr std::uintptr_t m_waterLevel     = 0X0A60; // float32
            static constexpr std::uintptr_t m_speed          = 0X0A64; // float32
            static constexpr std::uintptr_t m_desiredSpeed   = 0X0A68; // float32
            static constexpr std::uintptr_t m_calmSpeed      = 0X0A6C; // float32
            static constexpr std::uintptr_t m_panicSpeed     = 0X0A70; // float32
            static constexpr std::uintptr_t m_avoidRange     = 0X0A74; // float32
            static constexpr std::uintptr_t m_turnTimer      = 0X0A78; // CountdownTimer
            static constexpr std::uintptr_t m_turnClockwise  = 0X0A90; // bool
            static constexpr std::uintptr_t m_goTimer        = 0X0A98; // CountdownTimer
            static constexpr std::uintptr_t m_moveTimer      = 0X0AB0; // CountdownTimer
            static constexpr std::uintptr_t m_panicTimer     = 0X0AC8; // CountdownTimer
            static constexpr std::uintptr_t m_disperseTimer  = 0X0AE0; // CountdownTimer
            static constexpr std::uintptr_t m_proximityTimer = 0X0AF8; // CountdownTimer
            static constexpr std::uintptr_t m_visible        = 0X0B10; // CUtlVector<CFish*>
        };

        // Has VTable
        // Is Absract
        // Local Type Scope
        class CBot {
        public:
            static constexpr std::uintptr_t m_pController       = 0X0010; // CCSPlayerController*
            static constexpr std::uintptr_t m_pPlayer           = 0X0018; // CCSPlayerPawn*
            static constexpr std::uintptr_t m_bHasSpawned       = 0X0020; // bool
            static constexpr std::uintptr_t m_id                = 0X0024; // uint32
            static constexpr std::uintptr_t m_isRunning         = 0X00C0; // bool
            static constexpr std::uintptr_t m_isCrouching       = 0X00C1; // bool
            static constexpr std::uintptr_t m_forwardSpeed      = 0X00C4; // float32
            static constexpr std::uintptr_t m_leftSpeed         = 0X00C8; // float32
            static constexpr std::uintptr_t m_verticalSpeed     = 0X00CC; // float32
            static constexpr std::uintptr_t m_buttonFlags       = 0X00D0; // uint64
            static constexpr std::uintptr_t m_jumpTimestamp     = 0X00D8; // float32
            static constexpr std::uintptr_t m_viewForward       = 0X00DC; // Vector
            static constexpr std::uintptr_t m_postureStackIndex = 0X00F8; // int32
        };

        // Has VTable
        // Local Type Scope
        class CCSBot : public CBot {
        public:
            static constexpr std::uintptr_t m_eyePosition                      = 0X0108; // VectorWS
            static constexpr std::uintptr_t m_name                             = 0X0114; // char[64]
            static constexpr std::uintptr_t m_combatRange                      = 0X0154; // float32
            static constexpr std::uintptr_t m_isRogue                          = 0X0158; // bool
            static constexpr std::uintptr_t m_rogueTimer                       = 0X0160; // CountdownTimer
            static constexpr std::uintptr_t m_diedLastRound                    = 0X017C; // bool
            static constexpr std::uintptr_t m_safeTime                         = 0X0180; // float32
            static constexpr std::uintptr_t m_wasSafe                          = 0X0184; // bool
            static constexpr std::uintptr_t m_blindFire                        = 0X018C; // bool
            static constexpr std::uintptr_t m_surpriseTimer                    = 0X0190; // CountdownTimer
            static constexpr std::uintptr_t m_bAllowActive                     = 0X01A8; // bool
            static constexpr std::uintptr_t m_isFollowing                      = 0X01A9; // bool
            static constexpr std::uintptr_t m_leader                           = 0X01AC; // CHandle<CCSPlayerPawn>
            static constexpr std::uintptr_t m_followTimestamp                  = 0X01B0; // float32
            static constexpr std::uintptr_t m_allowAutoFollowTime              = 0X01B4; // float32
            static constexpr std::uintptr_t m_hurryTimer                       = 0X01B8; // CountdownTimer
            static constexpr std::uintptr_t m_alertTimer                       = 0X01D0; // CountdownTimer
            static constexpr std::uintptr_t m_sneakTimer                       = 0X01E8; // CountdownTimer
            static constexpr std::uintptr_t m_panicTimer                       = 0X0200; // CountdownTimer
            static constexpr std::uintptr_t m_stateTimestamp                   = 0X0598; // float32
            static constexpr std::uintptr_t m_isAttacking                      = 0X059C; // bool
            static constexpr std::uintptr_t m_isOpeningDoor                    = 0X059D; // bool
            static constexpr std::uintptr_t m_taskEntity                       = 0X05A4; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_goalPosition                     = 0X05B4; // VectorWS
            static constexpr std::uintptr_t m_goalEntity                       = 0X05C0; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_avoid                            = 0X05C4; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_avoidTimestamp                   = 0X05C8; // float32
            static constexpr std::uintptr_t m_isStopping                       = 0X05CC; // bool
            static constexpr std::uintptr_t m_hasVisitedEnemySpawn             = 0X05CD; // bool
            static constexpr std::uintptr_t m_stillTimer                       = 0X05D0; // IntervalTimer
            static constexpr std::uintptr_t m_bEyeAnglesUnderPathFinderControl = 0X05E0; // bool
            static constexpr std::uintptr_t m_pathIndex                        = 0X5EE0; // int32
            static constexpr std::uintptr_t m_areaEnteredTimestamp             = 0X5EE4; // GameTime_t
            static constexpr std::uintptr_t m_repathTimer                      = 0X5EE8; // CountdownTimer
            static constexpr std::uintptr_t m_avoidFriendTimer                 = 0X5F00; // CountdownTimer
            static constexpr std::uintptr_t m_isFriendInTheWay                 = 0X5F18; // bool
            static constexpr std::uintptr_t m_politeTimer                      = 0X5F20; // CountdownTimer
            static constexpr std::uintptr_t m_isWaitingBehindFriend            = 0X5F38; // bool
            static constexpr std::uintptr_t m_pathLadderEnd                    = 0X5F64; // float32
            static constexpr std::uintptr_t m_mustRunTimer                     = 0X5FB0; // CountdownTimer
            static constexpr std::uintptr_t m_waitTimer                        = 0X5FC8; // CountdownTimer
            static constexpr std::uintptr_t m_updateTravelDistanceTimer        = 0X5FE0; // CountdownTimer
            static constexpr std::uintptr_t m_playerTravelDistance             = 0X5FF8; // float32[64]
            static constexpr std::uintptr_t m_travelDistancePhase              = 0X60F8; // uint8
            static constexpr std::uintptr_t m_hostageEscortCount               = 0X6290; // uint8
            static constexpr std::uintptr_t m_hostageEscortCountTimestamp      = 0X6294; // float32
            static constexpr std::uintptr_t m_desiredTeam                      = 0X6298; // int32
            static constexpr std::uintptr_t m_hasJoined                        = 0X629C; // bool
            static constexpr std::uintptr_t m_isWaitingForHostage              = 0X629D; // bool
            static constexpr std::uintptr_t m_inhibitWaitingForHostageTimer    = 0X62A0; // CountdownTimer
            static constexpr std::uintptr_t m_waitForHostageTimer              = 0X62B8; // CountdownTimer
            static constexpr std::uintptr_t m_noisePosition                    = 0X62D0; // Vector
            static constexpr std::uintptr_t m_noiseTravelDistance              = 0X62DC; // float32
            static constexpr std::uintptr_t m_noiseTimestamp                   = 0X62E0; // float32
            static constexpr std::uintptr_t m_noiseSource                      = 0X62E8; // CCSPlayerPawn*
            static constexpr std::uintptr_t m_noiseBendTimer                   = 0X6300; // CountdownTimer
            static constexpr std::uintptr_t m_bentNoisePosition                = 0X6318; // Vector
            static constexpr std::uintptr_t m_bendNoisePositionValid           = 0X6324; // bool
            static constexpr std::uintptr_t m_lookAroundStateTimestamp         = 0X6328; // float32
            static constexpr std::uintptr_t m_lookAheadAngle                   = 0X632C; // float32
            static constexpr std::uintptr_t m_forwardAngle                     = 0X6330; // float32
            static constexpr std::uintptr_t m_inhibitLookAroundTimestamp       = 0X6334; // float32
            static constexpr std::uintptr_t m_lookAtSpot                       = 0X633C; // Vector
            static constexpr std::uintptr_t m_lookAtSpotDuration               = 0X634C; // float32
            static constexpr std::uintptr_t m_lookAtSpotTimestamp              = 0X6350; // float32
            static constexpr std::uintptr_t m_lookAtSpotAngleTolerance         = 0X6354; // float32
            static constexpr std::uintptr_t m_lookAtSpotClearIfClose           = 0X6358; // bool
            static constexpr std::uintptr_t m_lookAtSpotAttack                 = 0X6359; // bool
            static constexpr std::uintptr_t m_lookAtDesc                       = 0X6360; // char*
            static constexpr std::uintptr_t m_peripheralTimestamp              = 0X6368; // float32
            static constexpr std::uintptr_t m_approachPointCount               = 0X64F0; // uint8
            static constexpr std::uintptr_t m_approachPointViewPosition        = 0X64F4; // Vector
            static constexpr std::uintptr_t m_viewSteadyTimer                  = 0X6500; // IntervalTimer
            static constexpr std::uintptr_t m_tossGrenadeTimer                 = 0X6518; // CountdownTimer
            static constexpr std::uintptr_t m_isAvoidingGrenade                = 0X6538; // CountdownTimer
            static constexpr std::uintptr_t m_spotCheckTimestamp               = 0X6558; // float32
            static constexpr std::uintptr_t m_checkedHidingSpotCount           = 0X6960; // int32
            static constexpr std::uintptr_t m_lookPitch                        = 0X6964; // float32
            static constexpr std::uintptr_t m_lookPitchVel                     = 0X6968; // float32
            static constexpr std::uintptr_t m_lookYaw                          = 0X696C; // float32
            static constexpr std::uintptr_t m_lookYawVel                       = 0X6970; // float32
            static constexpr std::uintptr_t m_targetSpot                       = 0X6974; // Vector
            static constexpr std::uintptr_t m_targetSpotVelocity               = 0X6980; // Vector
            static constexpr std::uintptr_t m_targetSpotPredicted              = 0X698C; // Vector
            static constexpr std::uintptr_t m_aimError                         = 0X6998; // QAngle
            static constexpr std::uintptr_t m_aimGoal                          = 0X69A4; // QAngle
            static constexpr std::uintptr_t m_targetSpotTime                   = 0X69B0; // GameTime_t
            static constexpr std::uintptr_t m_aimFocus                         = 0X69B4; // float32
            static constexpr std::uintptr_t m_aimFocusInterval                 = 0X69B8; // float32
            static constexpr std::uintptr_t m_aimFocusNextUpdate               = 0X69BC; // GameTime_t
            static constexpr std::uintptr_t m_ignoreEnemiesTimer               = 0X69C8; // CountdownTimer
            static constexpr std::uintptr_t m_enemy                            = 0X69E0; // CHandle<CCSPlayerPawn>
            static constexpr std::uintptr_t m_isEnemyVisible                   = 0X69E4; // bool
            static constexpr std::uintptr_t m_visibleEnemyParts                = 0X69E5; // uint8
            static constexpr std::uintptr_t m_lastEnemyPosition                = 0X69E8; // Vector
            static constexpr std::uintptr_t m_lastSawEnemyTimestamp            = 0X69F4; // float32
            static constexpr std::uintptr_t m_firstSawEnemyTimestamp           = 0X69F8; // float32
            static constexpr std::uintptr_t m_currentEnemyAcquireTimestamp     = 0X69FC; // float32
            static constexpr std::uintptr_t m_enemyDeathTimestamp              = 0X6A00; // float32
            static constexpr std::uintptr_t m_friendDeathTimestamp             = 0X6A04; // float32
            static constexpr std::uintptr_t m_isLastEnemyDead                  = 0X6A08; // bool
            static constexpr std::uintptr_t m_nearbyEnemyCount                 = 0X6A0C; // int32
            static constexpr std::uintptr_t m_bomber                           = 0X6C18; // CHandle<CCSPlayerPawn>
            static constexpr std::uintptr_t m_nearbyFriendCount                = 0X6C1C; // int32
            static constexpr std::uintptr_t m_closestVisibleFriend             = 0X6C20; // CHandle<CCSPlayerPawn>
            static constexpr std::uintptr_t m_closestVisibleHumanFriend        = 0X6C24; // CHandle<CCSPlayerPawn>
            static constexpr std::uintptr_t m_attentionInterval                = 0X6C28; // IntervalTimer
            static constexpr std::uintptr_t m_attacker                         = 0X6C38; // CHandle<CCSPlayerPawn>
            static constexpr std::uintptr_t m_attackedTimestamp                = 0X6C3C; // float32
            static constexpr std::uintptr_t m_burnedByFlamesTimer              = 0X6C40; // IntervalTimer
            static constexpr std::uintptr_t m_lastVictimID                     = 0X6C50; // int32
            static constexpr std::uintptr_t m_isAimingAtEnemy                  = 0X6C54; // bool
            static constexpr std::uintptr_t m_isRapidFiring                    = 0X6C55; // bool
            static constexpr std::uintptr_t m_equipTimer                       = 0X6C58; // IntervalTimer
            static constexpr std::uintptr_t m_zoomTimer                        = 0X6C68; // CountdownTimer
            static constexpr std::uintptr_t m_fireWeaponTimestamp              = 0X6C80; // GameTime_t
            static constexpr std::uintptr_t m_lookForWeaponsOnGroundTimer      = 0X6C88; // CountdownTimer
            static constexpr std::uintptr_t m_bIsSleeping                      = 0X6CA0; // bool
            static constexpr std::uintptr_t m_isEnemySniperVisible             = 0X6CA1; // bool
            static constexpr std::uintptr_t m_sawEnemySniperTimer              = 0X6CA8; // CountdownTimer
            static constexpr std::uintptr_t m_enemyQueueIndex                  = 0X6D60; // uint8
            static constexpr std::uintptr_t m_enemyQueueCount                  = 0X6D61; // uint8
            static constexpr std::uintptr_t m_enemyQueueAttendIndex            = 0X6D62; // uint8
            static constexpr std::uintptr_t m_isStuck                          = 0X6D63; // bool
            static constexpr std::uintptr_t m_stuckTimestamp                   = 0X6D64; // GameTime_t
            static constexpr std::uintptr_t m_stuckSpot                        = 0X6D68; // Vector
            static constexpr std::uintptr_t m_wiggleTimer                      = 0X6D78; // CountdownTimer
            static constexpr std::uintptr_t m_stuckJumpTimer                   = 0X6D90; // CountdownTimer
            static constexpr std::uintptr_t m_nextCleanupCheckTimestamp        = 0X6DA8; // GameTime_t
            static constexpr std::uintptr_t m_avgVel                           = 0X6DAC; // float32[10]
            static constexpr std::uintptr_t m_avgVelIndex                      = 0X6DD4; // int32
            static constexpr std::uintptr_t m_avgVelCount                      = 0X6DD8; // int32
            static constexpr std::uintptr_t m_lastOrigin                       = 0X6DDC; // Vector
            static constexpr std::uintptr_t m_lastRadioRecievedTimestamp       = 0X6DEC; // float32
            static constexpr std::uintptr_t m_lastRadioSentTimestamp           = 0X6DF0; // float32
            static constexpr std::uintptr_t m_radioSubject                     = 0X6DF4; // CHandle<CCSPlayerPawn>
            static constexpr std::uintptr_t m_radioPosition                    = 0X6DF8; // Vector
            static constexpr std::uintptr_t m_voiceEndTimestamp                = 0X6E04; // float32
            static constexpr std::uintptr_t m_lastValidReactionQueueFrame      = 0X6E10; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CHandleTest : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_Handle      = 0X04A8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_bSendHandle = 0X04AC; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicNPCCounter : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_OnMinCountAll       = 0X04A8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnMaxCountAll       = 0X04C0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnFactorAll         = 0X04D8; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnMinPlayerDistAll  = 0X04F8; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnMinCount_1        = 0X0518; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnMaxCount_1        = 0X0530; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnFactor_1          = 0X0548; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnMinPlayerDist_1   = 0X0568; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnMinCount_2        = 0X0588; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnMaxCount_2        = 0X05A0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnFactor_2          = 0X05B8; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnMinPlayerDist_2   = 0X05D8; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnMinCount_3        = 0X05F8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnMaxCount_3        = 0X0610; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnFactor_3          = 0X0628; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnMinPlayerDist_3   = 0X0648; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_hSource             = 0X0668; // CEntityHandle
            static constexpr std::uintptr_t m_iszSourceEntityName = 0X0670; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flDistanceMax       = 0X0678; // float32
            static constexpr std::uintptr_t m_bDisabled           = 0X067C; // bool
            static constexpr std::uintptr_t m_nMinCountAll        = 0X0680; // int32
            static constexpr std::uintptr_t m_nMaxCountAll        = 0X0684; // int32
            static constexpr std::uintptr_t m_nMinFactorAll       = 0X0688; // int32
            static constexpr std::uintptr_t m_nMaxFactorAll       = 0X068C; // int32
            static constexpr std::uintptr_t m_iszNPCClassname_1   = 0X0698; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_nNPCState_1         = 0X06A0; // int32
            static constexpr std::uintptr_t m_bInvertState_1      = 0X06A4; // bool
            static constexpr std::uintptr_t m_nMinCount_1         = 0X06A8; // int32
            static constexpr std::uintptr_t m_nMaxCount_1         = 0X06AC; // int32
            static constexpr std::uintptr_t m_nMinFactor_1        = 0X06B0; // int32
            static constexpr std::uintptr_t m_nMaxFactor_1        = 0X06B4; // int32
            static constexpr std::uintptr_t m_flDefaultDist_1     = 0X06BC; // float32
            static constexpr std::uintptr_t m_iszNPCClassname_2   = 0X06C0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_nNPCState_2         = 0X06C8; // int32
            static constexpr std::uintptr_t m_bInvertState_2      = 0X06CC; // bool
            static constexpr std::uintptr_t m_nMinCount_2         = 0X06D0; // int32
            static constexpr std::uintptr_t m_nMaxCount_2         = 0X06D4; // int32
            static constexpr std::uintptr_t m_nMinFactor_2        = 0X06D8; // int32
            static constexpr std::uintptr_t m_nMaxFactor_2        = 0X06DC; // int32
            static constexpr std::uintptr_t m_flDefaultDist_2     = 0X06E4; // float32
            static constexpr std::uintptr_t m_iszNPCClassname_3   = 0X06E8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_nNPCState_3         = 0X06F0; // int32
            static constexpr std::uintptr_t m_bInvertState_3      = 0X06F4; // bool
            static constexpr std::uintptr_t m_nMinCount_3         = 0X06F8; // int32
            static constexpr std::uintptr_t m_nMaxCount_3         = 0X06FC; // int32
            static constexpr std::uintptr_t m_nMinFactor_3        = 0X0700; // int32
            static constexpr std::uintptr_t m_nMaxFactor_3        = 0X0704; // int32
            static constexpr std::uintptr_t m_flDefaultDist_3     = 0X070C; // float32
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_RadioServices : public CPlayerPawnComponent {
        public:
            static constexpr std::uintptr_t m_flGotHostageTalkTimer = 0X0048; // GameTime_t
            static constexpr std::uintptr_t m_flDefusingTalkTimer   = 0X004C; // GameTime_t
            static constexpr std::uintptr_t m_flC4PlantTalkTimer    = 0X0050; // GameTime_t
            static constexpr std::uintptr_t m_flRadioTokenSlots     = 0X0054; // GameTime_t[3]
            static constexpr std::uintptr_t m_bIgnoreRadio          = 0X0060; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponSG556 : public CCSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CRagdollConstraint : public CPhysConstraint {
        public:
            static constexpr std::uintptr_t m_xmin      = 0X0508; // float32
            static constexpr std::uintptr_t m_xmax      = 0X050C; // float32
            static constexpr std::uintptr_t m_ymin      = 0X0510; // float32
            static constexpr std::uintptr_t m_ymax      = 0X0514; // float32
            static constexpr std::uintptr_t m_zmin      = 0X0518; // float32
            static constexpr std::uintptr_t m_zmax      = 0X051C; // float32
            static constexpr std::uintptr_t m_xfriction = 0X0520; // float32
            static constexpr std::uintptr_t m_yfriction = 0X0524; // float32
            static constexpr std::uintptr_t m_zfriction = 0X0528; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncVehicleClip : public CBaseModelEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CDEagle : public CCSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponFamas : public CCSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvSplash : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_flScale = 0X04A8; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointCamera : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_FOV                   = 0X04A8; // float32
            static constexpr std::uintptr_t m_Resolution            = 0X04AC; // float32
            static constexpr std::uintptr_t m_bFogEnable            = 0X04B0; // bool
            static constexpr std::uintptr_t m_FogColor              = 0X04B1; // Color
            static constexpr std::uintptr_t m_flFogStart            = 0X04B8; // float32
            static constexpr std::uintptr_t m_flFogEnd              = 0X04BC; // float32
            static constexpr std::uintptr_t m_flFogMaxDensity       = 0X04C0; // float32
            static constexpr std::uintptr_t m_bActive               = 0X04C4; // bool
            static constexpr std::uintptr_t m_bUseScreenAspectRatio = 0X04C5; // bool
            static constexpr std::uintptr_t m_flAspectRatio         = 0X04C8; // float32
            static constexpr std::uintptr_t m_bNoSky                = 0X04CC; // bool
            static constexpr std::uintptr_t m_fBrightness           = 0X04D0; // float32
            static constexpr std::uintptr_t m_flZFar                = 0X04D4; // float32
            static constexpr std::uintptr_t m_flZNear               = 0X04D8; // float32
            static constexpr std::uintptr_t m_bCanHLTVUse           = 0X04DC; // bool
            static constexpr std::uintptr_t m_bAlignWithParent      = 0X04DD; // bool
            static constexpr std::uintptr_t m_bDofEnabled           = 0X04DE; // bool
            static constexpr std::uintptr_t m_flDofNearBlurry       = 0X04E0; // float32
            static constexpr std::uintptr_t m_flDofNearCrisp        = 0X04E4; // float32
            static constexpr std::uintptr_t m_flDofFarCrisp         = 0X04E8; // float32
            static constexpr std::uintptr_t m_flDofFarBlurry        = 0X04EC; // float32
            static constexpr std::uintptr_t m_flDofTiltToGround     = 0X04F0; // float32
            static constexpr std::uintptr_t m_TargetFOV             = 0X04F4; // float32
            static constexpr std::uintptr_t m_DegreesPerSecond      = 0X04F8; // float32
            static constexpr std::uintptr_t m_bIsOn                 = 0X04FC; // bool
            static constexpr std::uintptr_t m_pNext                 = 0X0500; // CPointCamera*
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointCameraVFOV : public CPointCamera {
        public:
            static constexpr std::uintptr_t m_flVerticalFOV = 0X0508; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSGO_WingmanIntroTerroristPosition : public CCSGO_WingmanIntroCharacterPosition {
        public:
        };

        // Has Trivial Destructor
        // Local Type Scope
        class CTestPulseIOAPI {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CEntitySubclassVDataBase {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPrecipitationVData : public CEntitySubclassVDataBase {
        public:
            static constexpr std::uintptr_t m_szParticlePrecipitationEffect = 0X0028; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            static constexpr std::uintptr_t m_flInnerDistance               = 0X0108; // float32
            static constexpr std::uintptr_t m_nAttachType                   = 0X010C; // ParticleAttachment_t
            static constexpr std::uintptr_t m_bBatchSameVolumeType          = 0X0110; // bool
            static constexpr std::uintptr_t m_nRTEnvCP                      = 0X0114; // int32
            static constexpr std::uintptr_t m_nRTEnvCPComponent             = 0X0118; // int32
            static constexpr std::uintptr_t m_szModifier                    = 0X0120; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncMoveLinear : public CBaseToggle {
        public:
            static constexpr std::uintptr_t m_authoredPosition                          = 0X07B0; // MoveLinearAuthoredPos_t
            static constexpr std::uintptr_t m_angMoveEntitySpace                        = 0X07B4; // QAngle
            static constexpr std::uintptr_t m_vecMoveDirParentSpace                     = 0X07C0; // Vector
            static constexpr std::uintptr_t m_soundStart                                = 0X07D0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_soundStop                                 = 0X07D8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_currentSound                              = 0X07E0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flBlockDamage                             = 0X07E8; // float32
            static constexpr std::uintptr_t m_flStartPosition                           = 0X07EC; // float32
            static constexpr std::uintptr_t m_OnFullyOpen                               = 0X07F8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnFullyClosed                             = 0X0810; // CEntityIOOutput
            static constexpr std::uintptr_t m_bCreateMovableNavMesh                     = 0X0828; // bool
            static constexpr std::uintptr_t m_bAllowMovableNavMeshDockingOnEntireEntity = 0X0829; // bool
            static constexpr std::uintptr_t m_bCreateNavObstacle                        = 0X082A; // bool
        };

        // Has Trivial Destructor
        // Local Type Scope
        class CPhysMotorAPI {
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
        class CItem : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_OnPlayerTouch        = 0X0A28; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnPlayerPickup       = 0X0A40; // CEntityIOOutput
            static constexpr std::uintptr_t m_bActivateWhenAtRest  = 0X0A58; // bool
            static constexpr std::uintptr_t m_OnCacheInteraction   = 0X0A60; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnGlovePulled        = 0X0A78; // CEntityIOOutput
            static constexpr std::uintptr_t m_vOriginalSpawnOrigin = 0X0A90; // VectorWS
            static constexpr std::uintptr_t m_vOriginalSpawnAngles = 0X0A9C; // QAngle
            static constexpr std::uintptr_t m_bPhysStartAsleep     = 0X0AA8; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CScriptItem : public CItem {
        public:
            static constexpr std::uintptr_t m_MoveTypeOverride = 0X0AC0; // MoveType_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CDynamicPropAlias_prop_dynamic_override : public CDynamicProp {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointPush : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_bEnabled          = 0X04A8; // bool
            static constexpr std::uintptr_t m_flMagnitude       = 0X04AC; // float32
            static constexpr std::uintptr_t m_flRadius          = 0X04B0; // float32
            static constexpr std::uintptr_t m_flInnerRadius     = 0X04B4; // float32
            static constexpr std::uintptr_t m_flConeOfInfluence = 0X04B8; // float32
            static constexpr std::uintptr_t m_iszFilterName     = 0X04C0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hFilter           = 0X04C8; // CHandle<CBaseFilter>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Step_EntFire : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_Input = 0X0048; // CUtlString
        };

        // Has VTable
        // Local Type Scope
        class CPlayer_ObserverServices : public CPlayerPawnComponent {
        public:
            static constexpr std::uintptr_t m_iObserverMode       = 0X0048; // uint8
            static constexpr std::uintptr_t m_hObserverTarget     = 0X004C; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_iObserverLastMode   = 0X0050; // ObserverMode_t
            static constexpr std::uintptr_t m_bForcedObserverMode = 0X0054; // bool
        };

        // Has VTable
        // Local Type Scope
        class CCSObserver_ObserverServices : public CPlayer_ObserverServices {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPlayerPing : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_hPlayer       = 0X04B0; // CHandle<CCSPlayerPawn>
            static constexpr std::uintptr_t m_hPingedEntity = 0X04B4; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_iType         = 0X04B8; // int32
            static constexpr std::uintptr_t m_bUrgent       = 0X04BC; // bool
            static constexpr std::uintptr_t m_szPlaceName   = 0X04BD; // char[18]
        };

        // Has VTable
        // Local Type Scope
        class CHitboxComponent : public CEntityComponent {
        public:
            static constexpr std::uintptr_t m_flBoundsExpandRadius = 0X0014; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CRopeKeyframe : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_RopeFlags                  = 0X0738; // uint16
            static constexpr std::uintptr_t m_iNextLinkName              = 0X0740; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_Slack                      = 0X0748; // int16
            static constexpr std::uintptr_t m_Width                      = 0X074C; // float32
            static constexpr std::uintptr_t m_TextureScale               = 0X0750; // float32
            static constexpr std::uintptr_t m_nSegments                  = 0X0754; // uint8
            static constexpr std::uintptr_t m_bConstrainBetweenEndpoints = 0X0755; // bool
            static constexpr std::uintptr_t m_strRopeMaterialModel       = 0X0758; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iRopeMaterialModelIndex    = 0X0760; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_Subdiv                     = 0X0768; // uint8
            static constexpr std::uintptr_t m_nChangeCount               = 0X0769; // uint8
            static constexpr std::uintptr_t m_RopeLength                 = 0X076A; // int16
            static constexpr std::uintptr_t m_fLockedPoints              = 0X076C; // uint8
            static constexpr std::uintptr_t m_bCreatedFromMapFile        = 0X076D; // bool
            static constexpr std::uintptr_t m_flScrollSpeed              = 0X0770; // float32
            static constexpr std::uintptr_t m_bStartPointValid           = 0X0774; // bool
            static constexpr std::uintptr_t m_bEndPointValid             = 0X0775; // bool
            static constexpr std::uintptr_t m_hStartPoint                = 0X0778; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hEndPoint                  = 0X077C; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_iStartAttachment           = 0X0780; // AttachmentHandle_t
            static constexpr std::uintptr_t m_iEndAttachment             = 0X0781; // AttachmentHandle_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSmokeGrenade : public CBaseCSGrenade {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBaseCombatCharacter : public CBaseFlex {
        public:
            static constexpr std::uintptr_t m_bForceServerRagdoll    = 0X0AB0; // bool
            static constexpr std::uintptr_t m_hMyWearables           = 0X0AB8; // CNetworkUtlVectorBase<CHandle<CEconWearable>>
            static constexpr std::uintptr_t m_impactEnergyScale      = 0X0AD0; // float32
            static constexpr std::uintptr_t m_bApplyStressDamage     = 0X0AD4; // bool
            static constexpr std::uintptr_t m_bDeathEventsDispatched = 0X0AD5; // bool
            static constexpr std::uintptr_t m_pVecRelationships      = 0X0B18; // CUtlVector<RelationshipOverride_t>*
            static constexpr std::uintptr_t m_strRelationships       = 0X0B20; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_eHull                  = 0X0B28; // Hull_t
            static constexpr std::uintptr_t m_nNavHullIdx            = 0X0B2C; // uint32
            static constexpr std::uintptr_t m_movementStats          = 0X0B30; // CMovementStatsProperty
        };

        // Has VTable
        // Local Type Scope
        struct ServerAuthoritativeWeaponSlot_t {
        public:
            static constexpr std::uintptr_t unClass      = 0X0030; // uint16
            static constexpr std::uintptr_t unSlot       = 0X0032; // uint16
            static constexpr std::uintptr_t unItemDefIdx = 0X0034; // uint16
        };

        // Has VTable
        // Local Type Scope
        class CPathQueryComponent : public CEntityComponent {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicRelay : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled         = 0X04A8; // bool
            static constexpr std::uintptr_t m_bWaitForRefire    = 0X04A9; // bool
            static constexpr std::uintptr_t m_bTriggerOnce      = 0X04AA; // bool
            static constexpr std::uintptr_t m_bFastRetrigger    = 0X04AB; // bool
            static constexpr std::uintptr_t m_bPassthoughCaller = 0X04AC; // bool
        };

        // Has Trivial Destructor
        // Local Type Scope
        struct SequenceHistory_t {
        public:
            static constexpr std::uintptr_t m_hSequence         = 0X0000; // HSequence
            static constexpr std::uintptr_t m_flSeqStartTime    = 0X0004; // GameTime_t
            static constexpr std::uintptr_t m_flSeqFixedCycle   = 0X0008; // float32
            static constexpr std::uintptr_t m_nSeqLoopMode      = 0X000C; // AnimLoopMode_t
            static constexpr std::uintptr_t m_flPlaybackRate    = 0X0010; // float32
            static constexpr std::uintptr_t m_flCyclesPerSecond = 0X0014; // float32
        };

        // Has VTable
        // Local Type Scope
        class CPlayer_ItemServices : public CPlayerPawnComponent {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTestPulseIO : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_OnVariantVoid     = 0X04A8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnVariantBool     = 0X04C0; // CEntityOutputTemplate<bool,bool>
            static constexpr std::uintptr_t m_OnVariantInt      = 0X04E0; // CEntityOutputTemplate<int32,int32>
            static constexpr std::uintptr_t m_OnVariantFloat    = 0X0500; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnVariantString   = 0X0520; // CEntityOutputTemplate<CUtlSymbolLarge,CUtlSymbolLarge>
            static constexpr std::uintptr_t m_OnVariantColor    = 0X0540; // CEntityOutputTemplate<Color,Color>
            static constexpr std::uintptr_t m_OnVariantVector   = 0X0560; // CEntityOutputTemplate<Vector,Vector>
            static constexpr std::uintptr_t m_bAllowEmptyInputs = 0X0588; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponUMP45 : public CCSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CGamePlayerEquip : public CRulePointEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointEntityFinder : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_hEntity       = 0X04A8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_iFilterName   = 0X04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hFilter       = 0X04B8; // CHandle<CBaseFilter>
            static constexpr std::uintptr_t m_iRefName      = 0X04C0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hReference    = 0X04C8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_FindMethod    = 0X04CC; // EntFinderMethod_t
            static constexpr std::uintptr_t m_OnFoundEntity = 0X04D0; // CEntityIOOutput
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
        class CKnife : public CCSWeaponBase {
        public:
            static constexpr std::uintptr_t m_bFirstAttack = 0X1130; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicPlayerProxy : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_PlayerHasAmmo         = 0X04A8; // CEntityIOOutput
            static constexpr std::uintptr_t m_PlayerHasNoAmmo       = 0X04C0; // CEntityIOOutput
            static constexpr std::uintptr_t m_PlayerDied            = 0X04D8; // CEntityIOOutput
            static constexpr std::uintptr_t m_RequestedPlayerHealth = 0X04F0; // CEntityOutputTemplate<int32,int32>
            static constexpr std::uintptr_t m_hPlayer               = 0X0510; // CHandle<CBaseEntity>
        };

        // Has Trivial Destructor
        // Local Type Scope
        class CBasePlayerControllerAPI {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CHostageRescueZoneShim : public CBaseTrigger {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CMarkupVolume : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled = 0X0730; // bool
        };

        // Has VTable
        // Local Type Scope
        class CMarkupVolumeTagged : public CMarkupVolume {
        public:
            static constexpr std::uintptr_t m_GroupNames        = 0X0738; // CUtlVector<CGlobalSymbol>
            static constexpr std::uintptr_t m_Tags              = 0X0750; // CUtlVector<CGlobalSymbol>
            static constexpr std::uintptr_t m_bIsGroup          = 0X0768; // bool
            static constexpr std::uintptr_t m_bGroupByPrefab    = 0X0769; // bool
            static constexpr std::uintptr_t m_bGroupByVolume    = 0X076A; // bool
            static constexpr std::uintptr_t m_bGroupOtherGroups = 0X076B; // bool
            static constexpr std::uintptr_t m_bIsInGroup        = 0X076C; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSimpleMarkupVolumeTagged : public CMarkupVolumeTagged {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvSoundscape : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_OnPlay                 = 0X04A8; // CEntityIOOutput
            static constexpr std::uintptr_t m_flRadius               = 0X04C0; // float32
            static constexpr std::uintptr_t m_soundEventName         = 0X04C8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bOverrideWithEvent     = 0X04D0; // bool
            static constexpr std::uintptr_t m_soundscapeIndex        = 0X04D4; // int32
            static constexpr std::uintptr_t m_soundscapeEntityListId = 0X04D8; // int32
            static constexpr std::uintptr_t m_positionNames          = 0X04E0; // CUtlSymbolLarge[8]
            static constexpr std::uintptr_t m_hProxySoundscape       = 0X0520; // CHandle<CEnvSoundscape>
            static constexpr std::uintptr_t m_bDisabled              = 0X0524; // bool
            static constexpr std::uintptr_t m_soundscapeName         = 0X0528; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_soundEventHash         = 0X0530; // uint32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvSoundscapeAlias_snd_soundscape : public CEnvSoundscape {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_HostageServices : public CPlayerPawnComponent {
        public:
            static constexpr std::uintptr_t m_hCarriedHostage     = 0X0048; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hCarriedHostageProp = 0X004C; // CHandle<CBaseEntity>
        };

        // Has VTable
        // Local Type Scope
        class CRenderComponent : public CEntityComponent {
        public:
            static constexpr std::uintptr_t __m_pChainEntity             = 0X0010; // CNetworkVarChainer
            static constexpr std::uintptr_t m_bIsRenderingWithViewModels = 0X0050; // bool
            static constexpr std::uintptr_t m_nSplitscreenFlags          = 0X0054; // uint32
            static constexpr std::uintptr_t m_bEnableRendering           = 0X0058; // bool
            static constexpr std::uintptr_t m_bInterpolationReadyToDraw  = 0X00A8; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWaterBullet : public CBaseAnimGraph {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerSoundscape : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_hSoundscape    = 0X0890; // CHandle<CEnvSoundscapeTriggerable>
            static constexpr std::uintptr_t m_SoundscapeName = 0X0898; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_spectators     = 0X08A0; // CUtlVector<CHandle<CBasePlayerPawn>>
        };

        // Has Trivial Destructor
        // Local Type Scope
        class CPointTeleportAPI {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CHostageExpresserShim : public CBaseCombatCharacter {
        public:
            static constexpr std::uintptr_t m_pExpresser = 0X0B70; // CAI_Expresser*
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointChildModifier : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_bOrphanInsteadOfDeletingChildrenOnRemove = 0X04A8; // bool
        };

        // Has VTable
        // Has Trivial Destructor
        // Local Type Scope
        class CCSPlayerLegacyJump {
        public:
            static constexpr std::uintptr_t m_bOldJumpPressed   = 0X0010; // bool
            static constexpr std::uintptr_t m_flJumpPressedTime = 0X0014; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponHKP2000 : public CCSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysicsProp : public CBreakableProp {
        public:
            static constexpr std::uintptr_t m_MotionEnabled                       = 0X0BB0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnAwakened                          = 0X0BC8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnAwake                             = 0X0BE0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnAsleep                            = 0X0BF8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnPlayerUse                         = 0X0C10; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnOutOfWorld                        = 0X0C28; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnPlayerPickup                      = 0X0C40; // CEntityIOOutput
            static constexpr std::uintptr_t m_bForceNavIgnore                     = 0X0C58; // bool
            static constexpr std::uintptr_t m_bNoNavmeshBlocker                   = 0X0C59; // bool
            static constexpr std::uintptr_t m_bForceNpcExclude                    = 0X0C5A; // bool
            static constexpr std::uintptr_t m_massScale                           = 0X0C5C; // float32
            static constexpr std::uintptr_t m_buoyancyScale                       = 0X0C60; // float32
            static constexpr std::uintptr_t m_damageType                          = 0X0C64; // int32
            static constexpr std::uintptr_t m_damageToEnableMotion                = 0X0C68; // int32
            static constexpr std::uintptr_t m_flForceToEnableMotion               = 0X0C6C; // float32
            static constexpr std::uintptr_t m_bThrownByPlayer                     = 0X0C70; // bool
            static constexpr std::uintptr_t m_bDroppedByPlayer                    = 0X0C71; // bool
            static constexpr std::uintptr_t m_bTouchedByPlayer                    = 0X0C72; // bool
            static constexpr std::uintptr_t m_bFirstCollisionAfterLaunch          = 0X0C73; // bool
            static constexpr std::uintptr_t m_bHasBeenAwakened                    = 0X0C74; // bool
            static constexpr std::uintptr_t m_bIsOverrideProp                     = 0X0C75; // bool
            static constexpr std::uintptr_t m_flLastBurn                          = 0X0C78; // GameTime_t
            static constexpr std::uintptr_t m_nDynamicContinuousContactBehavior   = 0X0C7C; // DynamicContinuousContactBehavior_t
            static constexpr std::uintptr_t m_fNextCheckDisableMotionContactsTime = 0X0C80; // GameTime_t
            static constexpr std::uintptr_t m_iInitialGlowState                   = 0X0C84; // int32
            static constexpr std::uintptr_t m_nGlowRange                          = 0X0C88; // int32
            static constexpr std::uintptr_t m_nGlowRangeMin                       = 0X0C8C; // int32
            static constexpr std::uintptr_t m_glowColor                           = 0X0C90; // Color
            static constexpr std::uintptr_t m_bShouldAutoConvertBackFromDebris    = 0X0C94; // bool
            static constexpr std::uintptr_t m_bMuteImpactEffects                  = 0X0C95; // bool
            static constexpr std::uintptr_t m_bUpdateNavWhenMoving                = 0X0C9C; // bool
            static constexpr std::uintptr_t m_bForceNavObstacleCut                = 0X0C9D; // bool
            static constexpr std::uintptr_t m_bAllowObstacleConvexHullMerging     = 0X0C9E; // bool
            static constexpr std::uintptr_t m_bAcceptDamageFromHeldObjects        = 0X0C9F; // bool
            static constexpr std::uintptr_t m_bEnableUseOutput                    = 0X0CA0; // bool
            static constexpr std::uintptr_t m_CrateType                           = 0X0CA4; // CPhysicsProp::CrateType_t
            static constexpr std::uintptr_t m_strItemClass                        = 0X0CA8; // CUtlSymbolLarge[4]
            static constexpr std::uintptr_t m_nItemCount                          = 0X0CC8; // int32[4]
            static constexpr std::uintptr_t m_bRemovableForAmmoBalancing          = 0X0CD8; // bool
            static constexpr std::uintptr_t m_bAwake                              = 0X0CD9; // bool
            static constexpr std::uintptr_t m_bAttachedToReferenceFrame           = 0X0CDA; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CShatterGlassShardPhysics : public CPhysicsProp {
        public:
            static constexpr std::uintptr_t m_bDebris      = 0X0CE0; // bool
            static constexpr std::uintptr_t m_hParentShard = 0X0CE4; // uint32
            static constexpr std::uintptr_t m_ShardDesc    = 0X0CE8; // shard_model_desc_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPathParticleRope : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_bStartActive          = 0X04B0; // bool
            static constexpr std::uintptr_t m_flMaxSimulationTime   = 0X04B4; // float32
            static constexpr std::uintptr_t m_iszEffectName         = 0X04B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_PathNodes_Name        = 0X04C0; // CUtlVector<CUtlSymbolLarge>
            static constexpr std::uintptr_t m_flParticleSpacing     = 0X04D8; // float32
            static constexpr std::uintptr_t m_flSlack               = 0X04DC; // float32
            static constexpr std::uintptr_t m_flRadius              = 0X04E0; // float32
            static constexpr std::uintptr_t m_ColorTint             = 0X04E4; // Color
            static constexpr std::uintptr_t m_nEffectState          = 0X04E8; // int32
            static constexpr std::uintptr_t m_iEffectIndex          = 0X04F0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            static constexpr std::uintptr_t m_PathNodes_Position    = 0X04F8; // CNetworkUtlVectorBase<Vector>
            static constexpr std::uintptr_t m_PathNodes_TangentIn   = 0X0510; // CNetworkUtlVectorBase<Vector>
            static constexpr std::uintptr_t m_PathNodes_TangentOut  = 0X0528; // CNetworkUtlVectorBase<Vector>
            static constexpr std::uintptr_t m_PathNodes_Color       = 0X0540; // CNetworkUtlVectorBase<Vector>
            static constexpr std::uintptr_t m_PathNodes_PinEnabled  = 0X0558; // CNetworkUtlVectorBase<bool>
            static constexpr std::uintptr_t m_PathNodes_RadiusScale = 0X0570; // CNetworkUtlVectorBase<float32>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCredits : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_OnCreditsDone       = 0X04A8; // CEntityIOOutput
            static constexpr std::uintptr_t m_bRolledOutroCredits = 0X04C0; // bool
            static constexpr std::uintptr_t m_flLogoLength        = 0X04C4; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponFiveSeven : public CCSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFishPool : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_fishCount  = 0X04B8; // int32
            static constexpr std::uintptr_t m_maxRange   = 0X04BC; // float32
            static constexpr std::uintptr_t m_swimDepth  = 0X04C0; // float32
            static constexpr std::uintptr_t m_waterLevel = 0X04C4; // float32
            static constexpr std::uintptr_t m_isDormant  = 0X04C8; // bool
            static constexpr std::uintptr_t m_fishes     = 0X04D0; // CUtlVector<CHandle<CFish>>
            static constexpr std::uintptr_t m_visTimer   = 0X04E8; // CountdownTimer
        };

        // Has VTable
        // Local Type Scope
        class CPlayer_MovementServices : public CPlayerPawnComponent {
        public:
            static constexpr std::uintptr_t m_nImpulse                    = 0X0048; // int32
            static constexpr std::uintptr_t m_nButtons                    = 0X0050; // CInButtonState
            static constexpr std::uintptr_t m_nQueuedButtonDownMask       = 0X0070; // uint64
            static constexpr std::uintptr_t m_nQueuedButtonChangeMask     = 0X0078; // uint64
            static constexpr std::uintptr_t m_nButtonDoublePressed        = 0X0080; // uint64
            static constexpr std::uintptr_t m_pButtonPressedCmdNumber     = 0X0088; // uint32[64]
            static constexpr std::uintptr_t m_nLastCommandNumberProcessed = 0X0188; // uint32
            static constexpr std::uintptr_t m_nToggleButtonDownMask       = 0X0190; // uint64
            static constexpr std::uintptr_t m_flMaxspeed                  = 0X01A0; // float32
            static constexpr std::uintptr_t m_arrForceSubtickMoveWhen     = 0X01A4; // float32[4]
            static constexpr std::uintptr_t m_flForwardMove               = 0X01B4; // float32
            static constexpr std::uintptr_t m_flLeftMove                  = 0X01B8; // float32
            static constexpr std::uintptr_t m_flUpMove                    = 0X01BC; // float32
            static constexpr std::uintptr_t m_vecLastMovementImpulses     = 0X01C0; // Vector
            static constexpr std::uintptr_t m_vecOldViewAngles            = 0X0228; // QAngle
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CRagdollProp : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_ragdoll                       = 0X0A30; // ragdoll_t
            static constexpr std::uintptr_t m_bStartDisabled                = 0X0A80; // bool
            static constexpr std::uintptr_t m_ragEnabled                    = 0X0A88; // CNetworkUtlVectorBase<bool>
            static constexpr std::uintptr_t m_ragPos                        = 0X0AA0; // CNetworkUtlVectorBase<Vector>
            static constexpr std::uintptr_t m_ragAngles                     = 0X0AB8; // CNetworkUtlVectorBase<QAngle>
            static constexpr std::uintptr_t m_lastUpdateTickCount           = 0X0AD0; // uint32
            static constexpr std::uintptr_t m_allAsleep                     = 0X0AD4; // bool
            static constexpr std::uintptr_t m_bFirstCollisionAfterLaunch    = 0X0AD5; // bool
            static constexpr std::uintptr_t m_hDamageEntity                 = 0X0AD8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hKiller                       = 0X0ADC; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hPhysicsAttacker              = 0X0AE0; // CHandle<CBasePlayerPawn>
            static constexpr std::uintptr_t m_flLastPhysicsInfluenceTime    = 0X0AE4; // GameTime_t
            static constexpr std::uintptr_t m_flFadeOutStartTime            = 0X0AE8; // GameTime_t
            static constexpr std::uintptr_t m_flFadeTime                    = 0X0AEC; // float32
            static constexpr std::uintptr_t m_vecLastOrigin                 = 0X0AF0; // VectorWS
            static constexpr std::uintptr_t m_flAwakeTime                   = 0X0AFC; // GameTime_t
            static constexpr std::uintptr_t m_flLastOriginChangeTime        = 0X0B00; // GameTime_t
            static constexpr std::uintptr_t m_strOriginClassName            = 0X0B08; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_strSourceClassName            = 0X0B10; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bHasBeenPhysgunned            = 0X0B18; // bool
            static constexpr std::uintptr_t m_bAllowStretch                 = 0X0B19; // bool
            static constexpr std::uintptr_t m_flBlendWeight                 = 0X0B1C; // float32
            static constexpr std::uintptr_t m_flDefaultFadeScale            = 0X0B20; // float32
            static constexpr std::uintptr_t m_ragdollMins                   = 0X0B28; // CUtlVector<Vector>
            static constexpr std::uintptr_t m_ragdollMaxs                   = 0X0B40; // CUtlVector<Vector>
            static constexpr std::uintptr_t m_bShouldDeleteActivationRecord = 0X0B58; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CRagdollPropAlias_physics_prop_ragdoll : public CRagdollProp {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLightEntity : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_CLightComponent = 0X0730; // CLightComponent*
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoDynamicShadowHint : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled    = 0X04A8; // bool
            static constexpr std::uintptr_t m_flRange      = 0X04AC; // float32
            static constexpr std::uintptr_t m_nImportance  = 0X04B0; // int32
            static constexpr std::uintptr_t m_nLightChoice = 0X04B4; // int32
            static constexpr std::uintptr_t m_hLight       = 0X04B8; // CHandle<CBaseEntity>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoDynamicShadowHintBox : public CInfoDynamicShadowHint {
        public:
            static constexpr std::uintptr_t m_vBoxMins = 0X04C0; // Vector
            static constexpr std::uintptr_t m_vBoxMaxs = 0X04CC; // Vector
        };

        // Has VTable
        // Is Absract
        // Has Trivial Destructor
        class ISkeletonAnimationController {
        public:
        };

        // Has VTable
        // Is Absract
        class CSkeletonAnimationController : public ISkeletonAnimationController {
        public:
            static constexpr std::uintptr_t m_pSkeletonInstance = 0X0008; // CSkeletonInstance*
        };

        // Has VTable
        // Local Type Scope
        class CBaseAnimGraphController : public CSkeletonAnimationController {
        public:
            static constexpr std::uintptr_t m_nAnimationAlgorithm                  = 0X0018; // AnimationAlgorithm_t
            static constexpr std::uintptr_t m_animGraphNetworkedVars               = 0X0020; // CAnimGraphNetworkedVariables
            static constexpr std::uintptr_t m_pAnimGraphInstance                   = 0X0228; // CSmartPtr<IAnimationGraphInstance>
            static constexpr std::uintptr_t m_nNextExternalGraphHandle             = 0X0288; // ExternalAnimGraphHandle_t
            static constexpr std::uintptr_t m_vecSecondarySkeletonNames            = 0X0290; // CUtlVector<CGlobalSymbol>
            static constexpr std::uintptr_t m_vecSecondarySkeletons                = 0X02A8; // CNetworkUtlVectorBase<CHandle<CBaseAnimGraph>>
            static constexpr std::uintptr_t m_nSecondarySkeletonMasterCount        = 0X02C0; // int32
            static constexpr std::uintptr_t m_flSoundSyncTime                      = 0X02C4; // float32
            static constexpr std::uintptr_t m_nActiveIKChainMask                   = 0X02C8; // uint32
            static constexpr std::uintptr_t m_hSequence                            = 0X02CC; // HSequence
            static constexpr std::uintptr_t m_flSeqStartTime                       = 0X02D0; // GameTime_t
            static constexpr std::uintptr_t m_flSeqFixedCycle                      = 0X02D4; // float32
            static constexpr std::uintptr_t m_nAnimLoopMode                        = 0X02D8; // AnimLoopMode_t
            static constexpr std::uintptr_t m_flPlaybackRate                       = 0X02DC; // CNetworkedQuantizedFloat
            static constexpr std::uintptr_t m_nNotifyState                         = 0X02E8; // SequenceFinishNotifyState_t
            static constexpr std::uintptr_t m_bNetworkedAnimationInputsChanged     = 0X02E9; // bool
            static constexpr std::uintptr_t m_bNetworkedSequenceChanged            = 0X02EA; // bool
            static constexpr std::uintptr_t m_bLastUpdateSkipped                   = 0X02EB; // bool
            static constexpr std::uintptr_t m_bSequenceFinished                    = 0X02EC; // bool
            static constexpr std::uintptr_t m_nPrevAnimUpdateTick                  = 0X02F0; // GameTick_t
            static constexpr std::uintptr_t m_hGraphDefinitionAG2                  = 0X0590; // CStrongHandle<InfoForResourceTypeCNmGraphDefinition>
            static constexpr std::uintptr_t m_serializedPoseRecipeAG2              = 0X0598; // CNetworkUtlVectorBase<uint8>
            static constexpr std::uintptr_t m_nSerializePoseRecipeSizeAG2          = 0X05B0; // int32
            static constexpr std::uintptr_t m_nSerializePoseRecipeVersionAG2       = 0X05B4; // int32
            static constexpr std::uintptr_t m_nServerGraphInstanceIteration        = 0X05B8; // int32
            static constexpr std::uintptr_t m_nServerSerializationContextIteration = 0X05BC; // int32
            static constexpr std::uintptr_t m_primaryGraphId                       = 0X05C0; // ResourceId_t
            static constexpr std::uintptr_t m_vecExternalGraphIds                  = 0X05C8; // CNetworkUtlVectorBase<ResourceId_t>
            static constexpr std::uintptr_t m_vecExternalClipIds                   = 0X05E0; // CNetworkUtlVectorBase<ResourceId_t>
            static constexpr std::uintptr_t m_sAnimGraph2Identifier                = 0X05F8; // CGlobalSymbol
            static constexpr std::uintptr_t m_vecExternalGraphs                    = 0X0820; // CUtlVector<ExternalAnimGraph_t>
        };

        // Has VTable
        // Local Type Scope
        class CBuoyancyHelper {
        public:
            static constexpr std::uintptr_t m_nFluidType                                  = 0X0018; // CUtlStringToken
            static constexpr std::uintptr_t m_flFluidDensity                              = 0X001C; // float32
            static constexpr std::uintptr_t m_flNeutrallyBuoyantGravity                   = 0X0020; // float32
            static constexpr std::uintptr_t m_flNeutrallyBuoyantLinearDamping             = 0X0024; // float32
            static constexpr std::uintptr_t m_flNeutrallyBuoyantAngularDamping            = 0X0028; // float32
            static constexpr std::uintptr_t m_bNeutrallyBuoyant                           = 0X002C; // bool
            static constexpr std::uintptr_t m_vecFractionOfWheelSubmergedForWheelFriction = 0X0030; // CUtlVector<float32>
            static constexpr std::uintptr_t m_vecWheelFrictionScales                      = 0X0048; // CUtlVector<float32>
            static constexpr std::uintptr_t m_vecFractionOfWheelSubmergedForWheelDrag     = 0X0060; // CUtlVector<float32>
            static constexpr std::uintptr_t m_vecWheelDrag                                = 0X0078; // CUtlVector<float32>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class COrnamentProp : public CDynamicProp {
        public:
            static constexpr std::uintptr_t m_initialOwner = 0X0C50; // CUtlSymbolLarge
        };

        // Has VTable
        // Local Type Scope
        class CPlayer_CameraServices : public CPlayerPawnComponent {
        public:
            static constexpr std::uintptr_t m_vecCsViewPunchAngle         = 0X0048; // QAngle
            static constexpr std::uintptr_t m_nCsViewPunchAngleTick       = 0X0054; // GameTick_t
            static constexpr std::uintptr_t m_flCsViewPunchAngleTickRatio = 0X0058; // float32
            static constexpr std::uintptr_t m_PlayerFog                   = 0X0060; // fogplayerparams_t
            static constexpr std::uintptr_t m_hColorCorrectionCtrl        = 0X00A0; // CHandle<CColorCorrection>
            static constexpr std::uintptr_t m_hViewEntity                 = 0X00A4; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hTonemapController          = 0X00A8; // CHandle<CTonemapController2>
            static constexpr std::uintptr_t m_audio                       = 0X00B0; // audioparams_t
            static constexpr std::uintptr_t m_PostProcessingVolumes       = 0X0128; // CNetworkUtlVectorBase<CHandle<CPostProcessingVolume>>
            static constexpr std::uintptr_t m_flOldPlayerZ                = 0X0140; // float32
            static constexpr std::uintptr_t m_flOldPlayerViewOffsetZ      = 0X0144; // float32
            static constexpr std::uintptr_t m_hTriggerSoundscapeList      = 0X0160; // CUtlVector<CHandle<CEnvSoundscapeTriggerable>>
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayerBase_CameraServices : public CPlayer_CameraServices {
        public:
            static constexpr std::uintptr_t m_iFOV            = 0X0178; // uint32
            static constexpr std::uintptr_t m_iFOVStart       = 0X017C; // uint32
            static constexpr std::uintptr_t m_flFOVTime       = 0X0180; // GameTime_t
            static constexpr std::uintptr_t m_flFOVRate       = 0X0184; // float32
            static constexpr std::uintptr_t m_hZoomOwner      = 0X0188; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hTriggerFogList = 0X0190; // CUtlVector<CHandle<CBaseEntity>>
            static constexpr std::uintptr_t m_hLastFogTrigger = 0X01A8; // CHandle<CBaseEntity>
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_CameraServices : public CCSPlayerBase_CameraServices {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBarnLight : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_bEnabled                    = 0X0730; // bool
            static constexpr std::uintptr_t m_nColorMode                  = 0X0734; // int32
            static constexpr std::uintptr_t m_Color                       = 0X0738; // Color
            static constexpr std::uintptr_t m_flColorTemperature          = 0X073C; // float32
            static constexpr std::uintptr_t m_flBrightness                = 0X0740; // float32
            static constexpr std::uintptr_t m_flBrightnessScale           = 0X0744; // float32
            static constexpr std::uintptr_t m_nDirectLight                = 0X0748; // int32
            static constexpr std::uintptr_t m_nBakedShadowIndex           = 0X074C; // int32
            static constexpr std::uintptr_t m_nLightPathUniqueId          = 0X0750; // int32
            static constexpr std::uintptr_t m_nLightMapUniqueId           = 0X0754; // int32
            static constexpr std::uintptr_t m_nLuminaireShape             = 0X0758; // int32
            static constexpr std::uintptr_t m_flLuminaireSize             = 0X075C; // float32
            static constexpr std::uintptr_t m_flLuminaireAnisotropy       = 0X0760; // float32
            static constexpr std::uintptr_t m_LightStyleString            = 0X0768; // CUtlString
            static constexpr std::uintptr_t m_flLightStyleStartTime       = 0X0770; // GameTime_t
            static constexpr std::uintptr_t m_QueuedLightStyleStrings     = 0X0778; // CNetworkUtlVectorBase<CUtlString>
            static constexpr std::uintptr_t m_LightStyleEvents            = 0X0790; // CNetworkUtlVectorBase<CUtlString>
            static constexpr std::uintptr_t m_LightStyleTargets           = 0X07A8; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
            static constexpr std::uintptr_t m_StyleEvent                  = 0X07C0; // CEntityIOOutput[4]
            static constexpr std::uintptr_t m_hLightCookie                = 0X0840; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_flShape                     = 0X0848; // float32
            static constexpr std::uintptr_t m_flSoftX                     = 0X084C; // float32
            static constexpr std::uintptr_t m_flSoftY                     = 0X0850; // float32
            static constexpr std::uintptr_t m_flSkirt                     = 0X0854; // float32
            static constexpr std::uintptr_t m_flSkirtNear                 = 0X0858; // float32
            static constexpr std::uintptr_t m_vSizeParams                 = 0X085C; // Vector
            static constexpr std::uintptr_t m_flRange                     = 0X0868; // float32
            static constexpr std::uintptr_t m_vShear                      = 0X086C; // Vector
            static constexpr std::uintptr_t m_nBakeSpecularToCubemaps     = 0X0878; // int32
            static constexpr std::uintptr_t m_vBakeSpecularToCubemapsSize = 0X087C; // Vector
            static constexpr std::uintptr_t m_nCastShadows                = 0X0888; // int32
            static constexpr std::uintptr_t m_nShadowMapSize              = 0X088C; // int32
            static constexpr std::uintptr_t m_nShadowPriority             = 0X0890; // int32
            static constexpr std::uintptr_t m_bContactShadow              = 0X0894; // bool
            static constexpr std::uintptr_t m_bForceShadowsEnabled        = 0X0895; // bool
            static constexpr std::uintptr_t m_nBounceLight                = 0X0898; // int32
            static constexpr std::uintptr_t m_flBounceScale               = 0X089C; // float32
            static constexpr std::uintptr_t m_bDynamicBounce              = 0X08A0; // bool
            static constexpr std::uintptr_t m_flMinRoughness              = 0X08A4; // float32
            static constexpr std::uintptr_t m_vAlternateColor             = 0X08A8; // Vector
            static constexpr std::uintptr_t m_fAlternateColorBrightness   = 0X08B4; // float32
            static constexpr std::uintptr_t m_nFog                        = 0X08B8; // int32
            static constexpr std::uintptr_t m_flFogStrength               = 0X08BC; // float32
            static constexpr std::uintptr_t m_nFogShadows                 = 0X08C0; // int32
            static constexpr std::uintptr_t m_flFogScale                  = 0X08C4; // float32
            static constexpr std::uintptr_t m_bFogMixedShadows            = 0X08C8; // bool
            static constexpr std::uintptr_t m_flFadeSizeStart             = 0X08CC; // float32
            static constexpr std::uintptr_t m_flFadeSizeEnd               = 0X08D0; // float32
            static constexpr std::uintptr_t m_flShadowFadeSizeStart       = 0X08D4; // float32
            static constexpr std::uintptr_t m_flShadowFadeSizeEnd         = 0X08D8; // float32
            static constexpr std::uintptr_t m_bPrecomputedFieldsValid     = 0X08DC; // bool
            static constexpr std::uintptr_t m_vPrecomputedBoundsMins      = 0X08E0; // Vector
            static constexpr std::uintptr_t m_vPrecomputedBoundsMaxs      = 0X08EC; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBOrigin       = 0X08F8; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBAngles       = 0X0904; // QAngle
            static constexpr std::uintptr_t m_vPrecomputedOBBExtent       = 0X0910; // Vector
            static constexpr std::uintptr_t m_nPrecomputedSubFrusta       = 0X091C; // int32
            static constexpr std::uintptr_t m_vPrecomputedOBBOrigin0      = 0X0920; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBAngles0      = 0X092C; // QAngle
            static constexpr std::uintptr_t m_vPrecomputedOBBExtent0      = 0X0938; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBOrigin1      = 0X0944; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBAngles1      = 0X0950; // QAngle
            static constexpr std::uintptr_t m_vPrecomputedOBBExtent1      = 0X095C; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBOrigin2      = 0X0968; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBAngles2      = 0X0974; // QAngle
            static constexpr std::uintptr_t m_vPrecomputedOBBExtent2      = 0X0980; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBOrigin3      = 0X098C; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBAngles3      = 0X0998; // QAngle
            static constexpr std::uintptr_t m_vPrecomputedOBBExtent3      = 0X09A4; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBOrigin4      = 0X09B0; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBAngles4      = 0X09BC; // QAngle
            static constexpr std::uintptr_t m_vPrecomputedOBBExtent4      = 0X09C8; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBOrigin5      = 0X09D4; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBAngles5      = 0X09E0; // QAngle
            static constexpr std::uintptr_t m_vPrecomputedOBBExtent5      = 0X09EC; // Vector
            static constexpr std::uintptr_t m_bPvsModifyEntity            = 0X09F8; // bool
            static constexpr std::uintptr_t m_VisClusters                 = 0X0A00; // CNetworkUtlVectorBase<uint16>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CRectLight : public CBarnLight {
        public:
            static constexpr std::uintptr_t m_bShowLight = 0X0A20; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFilterMultiple : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_nFilterType = 0X04E0; // filter_t
            static constexpr std::uintptr_t m_iFilterName = 0X04E8; // CUtlSymbolLarge[10]
            static constexpr std::uintptr_t m_hFilter     = 0X0538; // CHandle<CBaseEntity>[10]
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSPlayerResource : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_bHostageAlive             = 0X04A8; // bool[12]
            static constexpr std::uintptr_t m_isHostageFollowingSomeone = 0X04B4; // bool[12]
            static constexpr std::uintptr_t m_iHostageEntityIDs         = 0X04C0; // CEntityIndex[12]
            static constexpr std::uintptr_t m_bombsiteCenterA           = 0X04F0; // Vector
            static constexpr std::uintptr_t m_bombsiteCenterB           = 0X04FC; // Vector
            static constexpr std::uintptr_t m_hostageRescueX            = 0X0508; // int32[4]
            static constexpr std::uintptr_t m_hostageRescueY            = 0X0518; // int32[4]
            static constexpr std::uintptr_t m_hostageRescueZ            = 0X0528; // int32[4]
            static constexpr std::uintptr_t m_bEndMatchNextMapAllVoted  = 0X0538; // bool
            static constexpr std::uintptr_t m_foundGoalPositions        = 0X0539; // bool
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

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncNavBlocker : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled          = 0X0738; // bool
            static constexpr std::uintptr_t m_nBlockedTeamNumber = 0X073C; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPathNode : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_vInTangentLocal       = 0X04A8; // Vector
            static constexpr std::uintptr_t m_vOutTangentLocal      = 0X04B4; // Vector
            static constexpr std::uintptr_t m_strParentPathUniqueID = 0X04C0; // CUtlString
            static constexpr std::uintptr_t m_strPathNodeParameter  = 0X04C8; // CUtlString
            static constexpr std::uintptr_t m_xWSPrevParent         = 0X04D0; // CTransform
            static constexpr std::uintptr_t m_hPath                 = 0X04F0; // CHandle<CPathWithDynamicNodes>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CMoverPathNode : public CPathNode {
        public:
            static constexpr std::uintptr_t m_OnStartFromOrInSegment = 0X0500; // CEntityOutputTemplate<CUtlString,char*>
            static constexpr std::uintptr_t m_OnStoppedAtOrInSegment = 0X0520; // CEntityOutputTemplate<CUtlString,char*>
            static constexpr std::uintptr_t m_OnPassThrough          = 0X0540; // CEntityOutputTemplate<CUtlString,char*>
            static constexpr std::uintptr_t m_OnPassThroughForward   = 0X0560; // CEntityOutputTemplate<CUtlString,char*>
            static constexpr std::uintptr_t m_OnPassThroughReverse   = 0X0580; // CEntityOutputTemplate<CUtlString,char*>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncBrush : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_iSolidity         = 0X0730; // BrushSolidities_e
            static constexpr std::uintptr_t m_iDisabled         = 0X0734; // int32
            static constexpr std::uintptr_t m_bSolidBsp         = 0X0738; // bool
            static constexpr std::uintptr_t m_iszExcludedClass  = 0X0740; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bInvertExclusion  = 0X0748; // bool
            static constexpr std::uintptr_t m_bScriptedMovement = 0X0749; // bool
        };

        // Has VTable
        // Local Type Scope
        class CBodyComponent : public CEntityComponent {
        public:
            static constexpr std::uintptr_t m_pSceneNode     = 0X0008; // CGameSceneNode*
            static constexpr std::uintptr_t __m_pChainEntity = 0X0048; // CNetworkVarChainer
        };

        // Has VTable
        // Local Type Scope
        class CBodyComponentPoint : public CBodyComponent {
        public:
            static constexpr std::uintptr_t m_sceneNode = 0X0080; // CGameSceneNode
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBreakable : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_CPropDataComponent         = 0X0738; // CPropDataComponent
            static constexpr std::uintptr_t m_Material                   = 0X0778; // Materials
            static constexpr std::uintptr_t m_hBreaker                   = 0X077C; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_Explosion                  = 0X0780; // Explosions
            static constexpr std::uintptr_t m_iszSpawnObject             = 0X0788; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flPressureDelay            = 0X0790; // float32
            static constexpr std::uintptr_t m_iMinHealthDmg              = 0X0794; // int32
            static constexpr std::uintptr_t m_iszPropData                = 0X0798; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_impactEnergyScale          = 0X07A0; // float32
            static constexpr std::uintptr_t m_nOverrideBlockLOS          = 0X07A4; // EOverrideBlockLOS_t
            static constexpr std::uintptr_t m_OnStartDeath               = 0X07A8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnBreak                    = 0X07C0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnHealthChanged            = 0X07D8; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_PerformanceMode            = 0X07F8; // PerformanceMode_t
            static constexpr std::uintptr_t m_hPhysicsAttacker           = 0X07FC; // CHandle<CBasePlayerPawn>
            static constexpr std::uintptr_t m_flLastPhysicsInfluenceTime = 0X0800; // GameTime_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysBox : public CBreakable {
        public:
            static constexpr std::uintptr_t m_damageType                  = 0X0808; // int32
            static constexpr std::uintptr_t m_damageToEnableMotion        = 0X080C; // int32
            static constexpr std::uintptr_t m_flForceToEnableMotion       = 0X0810; // float32
            static constexpr std::uintptr_t m_vHoverPosePosition          = 0X0814; // Vector
            static constexpr std::uintptr_t m_angHoverPoseAngles          = 0X0820; // QAngle
            static constexpr std::uintptr_t m_bNotSolidToWorld            = 0X082C; // bool
            static constexpr std::uintptr_t m_bEnableUseOutput            = 0X082D; // bool
            static constexpr std::uintptr_t m_nHoverPoseFlags             = 0X082E; // HoverPoseFlags_t
            static constexpr std::uintptr_t m_flTouchOutputPerEntityDelay = 0X0830; // float32
            static constexpr std::uintptr_t m_OnDamaged                   = 0X0838; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnAwakened                  = 0X0850; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnMotionEnabled             = 0X0868; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnPlayerUse                 = 0X0880; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnStartTouch                = 0X0898; // CEntityIOOutput
            static constexpr std::uintptr_t m_hCarryingPlayer             = 0X08B0; // CHandle<CBasePlayerPawn>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundEventEntity : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_bStartOnSpawn         = 0X04A8; // bool
            static constexpr std::uintptr_t m_bToLocalPlayer        = 0X04A9; // bool
            static constexpr std::uintptr_t m_bStopOnNew            = 0X04AA; // bool
            static constexpr std::uintptr_t m_bSaveRestore          = 0X04AB; // bool
            static constexpr std::uintptr_t m_bSavedIsPlaying       = 0X04AC; // bool
            static constexpr std::uintptr_t m_flSavedElapsedTime    = 0X04B0; // float32
            static constexpr std::uintptr_t m_iszSourceEntityName   = 0X04B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszAttachmentName     = 0X04C0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_onGUIDChanged         = 0X04C8; // CEntityOutputTemplate<uint64,uint64>
            static constexpr std::uintptr_t m_onSoundFinished       = 0X04E8; // CEntityIOOutput
            static constexpr std::uintptr_t m_flClientCullRadius    = 0X0500; // float32
            static constexpr std::uintptr_t m_iszSoundName          = 0X0530; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hSource               = 0X054C; // CEntityHandle
            static constexpr std::uintptr_t m_nEntityIndexSelection = 0X0550; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundEventAABBEntity : public CSoundEventEntity {
        public:
            static constexpr std::uintptr_t m_vMins = 0X0558; // Vector
            static constexpr std::uintptr_t m_vMaxs = 0X0564; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CItemSoda : public CBaseAnimGraph {
        public:
        };

        // Construct Allowed
        // Local Type Scope
        struct CPulseCell_Timeline__TimelineEvent_t {
        public:
            static constexpr std::uintptr_t m_flTimeFromPrevious = 0X0000; // float32
            static constexpr std::uintptr_t m_EventOutflow       = 0X0008; // CPulse_OutflowConnection
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class COmniLight : public CBarnLight {
        public:
            static constexpr std::uintptr_t m_flInnerAngle = 0X0A20; // float32
            static constexpr std::uintptr_t m_flOuterAngle = 0X0A24; // float32
            static constexpr std::uintptr_t m_bShowLight   = 0X0A28; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerVolume : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_iFilterName = 0X0730; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hFilter     = 0X0738; // CHandle<CBaseFilter>
        };

        // Has VTable
        // Is Absract
        class CBtNodeDecorator : public CBtNode {
        public:
        };

        // Has VTable
        // Is Absract
        // Local Type Scope
        class CBtNodeCondition : public CBtNodeDecorator {
        public:
            static constexpr std::uintptr_t m_bNegated = 0X0058; // bool
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
        // Construct Allowed
        // Local Type Scope
        class CEnvExplosion : public CModelPointEntity {
        public:
            static constexpr std::uintptr_t m_iMagnitude               = 0X0730; // int32
            static constexpr std::uintptr_t m_flPlayerDamage           = 0X0734; // float32
            static constexpr std::uintptr_t m_iRadiusOverride          = 0X0738; // int32
            static constexpr std::uintptr_t m_flInnerRadius            = 0X073C; // float32
            static constexpr std::uintptr_t m_flDamageForce            = 0X0740; // float32
            static constexpr std::uintptr_t m_hInflictor               = 0X0744; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_iCustomDamageType        = 0X0748; // DamageTypes_t
            static constexpr std::uintptr_t m_bCreateDebris            = 0X074C; // bool
            static constexpr std::uintptr_t m_iszCustomEffectName      = 0X0758; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszCustomSoundName       = 0X0760; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bSuppressParticleImpulse = 0X0768; // bool
            static constexpr std::uintptr_t m_iClassIgnore             = 0X076C; // Class_T
            static constexpr std::uintptr_t m_iClassIgnore2            = 0X0770; // Class_T
            static constexpr std::uintptr_t m_iszEntityIgnoreName      = 0X0778; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hEntityIgnore            = 0X0780; // CHandle<CBaseEntity>
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
        class CFootstepControl : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_source      = 0X0890; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_destination = 0X0898; // CUtlSymbolLarge
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_ItemServices : public CPlayer_ItemServices {
        public:
            static constexpr std::uintptr_t m_bHasDefuser = 0X0048; // bool
            static constexpr std::uintptr_t m_bHasHelmet  = 0X0049; // bool
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

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CParticleSystem : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_szSnapshotFileName             = 0X0730; // char[512]
            static constexpr std::uintptr_t m_bActive                        = 0X0930; // bool
            static constexpr std::uintptr_t m_bFrozen                        = 0X0931; // bool
            static constexpr std::uintptr_t m_flFreezeTransitionDuration     = 0X0934; // float32
            static constexpr std::uintptr_t m_nStopType                      = 0X0938; // int32
            static constexpr std::uintptr_t m_bAnimateDuringGameplayPause    = 0X093C; // bool
            static constexpr std::uintptr_t m_iEffectIndex                   = 0X0940; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            static constexpr std::uintptr_t m_flStartTime                    = 0X0948; // GameTime_t
            static constexpr std::uintptr_t m_flPreSimTime                   = 0X094C; // float32
            static constexpr std::uintptr_t m_vServerControlPoints           = 0X0950; // Vector[4]
            static constexpr std::uintptr_t m_iServerControlPointAssignments = 0X0980; // uint8[4]
            static constexpr std::uintptr_t m_hControlPointEnts              = 0X0984; // CHandle<CBaseEntity>[64]
            static constexpr std::uintptr_t m_bNoSave                        = 0X0A84; // bool
            static constexpr std::uintptr_t m_bNoFreeze                      = 0X0A85; // bool
            static constexpr std::uintptr_t m_bNoRamp                        = 0X0A86; // bool
            static constexpr std::uintptr_t m_bStartActive                   = 0X0A87; // bool
            static constexpr std::uintptr_t m_iszEffectName                  = 0X0A88; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszControlPointNames           = 0X0A90; // CUtlSymbolLarge[64]
            static constexpr std::uintptr_t m_nDataCP                        = 0X0C90; // int32
            static constexpr std::uintptr_t m_vecDataCPValue                 = 0X0C94; // Vector
            static constexpr std::uintptr_t m_nTintCP                        = 0X0CA0; // int32
            static constexpr std::uintptr_t m_clrTint                        = 0X0CA4; // Color
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerBrush : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_OnStartTouch       = 0X0730; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnEndTouch         = 0X0748; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnUse              = 0X0760; // CEntityIOOutput
            static constexpr std::uintptr_t m_iInputFilter       = 0X0778; // int32
            static constexpr std::uintptr_t m_iDontMessageParent = 0X077C; // int32
        };

        // Has VTable
        // Has Trivial Destructor
        // Local Type Scope
        class IntervalTimer {
        public:
            static constexpr std::uintptr_t m_timestamp     = 0X0008; // GameTime_t
            static constexpr std::uintptr_t m_nWorldGroupId = 0X000C; // WorldGroupId_t
        };

        // Has VTable
        // Has Trivial Destructor
        // Local Type Scope
        struct audioparams_t {
        public:
            static constexpr std::uintptr_t localSound                = 0X0008; // Vector[8]
            static constexpr std::uintptr_t soundscapeIndex           = 0X0068; // int32
            static constexpr std::uintptr_t localBits                 = 0X006C; // uint8
            static constexpr std::uintptr_t soundscapeEntityListIndex = 0X0070; // int32
            static constexpr std::uintptr_t soundEventHash            = 0X0074; // uint32
        };

        // Has VTable
        // Local Type Scope
        class CSoundAreaEntityBase : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled        = 0X04A8; // bool
            static constexpr std::uintptr_t m_iszSoundAreaType = 0X04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_vPos             = 0X04B8; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponM4A1Silencer : public CCSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Has Trivial Destructor
        // Local Type Scope
        class CTimeline : public IntervalTimer {
        public:
            static constexpr std::uintptr_t m_flValues         = 0X0010; // float32[64]
            static constexpr std::uintptr_t m_nValueCounts     = 0X0110; // int32[64]
            static constexpr std::uintptr_t m_nBucketCount     = 0X0210; // int32
            static constexpr std::uintptr_t m_flInterval       = 0X0214; // float32
            static constexpr std::uintptr_t m_flFinalValue     = 0X0218; // float32
            static constexpr std::uintptr_t m_nCompressionType = 0X021C; // TimelineCompression_t
            static constexpr std::uintptr_t m_bStopped         = 0X0220; // bool
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Local Type Scope
        class CPulseCursorFuncs {
        public:
        };

        // Has VTable
        // Has Trivial Destructor
        // Local Type Scope
        class CountdownTimer {
        public:
            static constexpr std::uintptr_t m_duration      = 0X0008; // float32
            static constexpr std::uintptr_t m_timestamp     = 0X000C; // GameTime_t
            static constexpr std::uintptr_t m_timescale     = 0X0010; // float32
            static constexpr std::uintptr_t m_nWorldGroupId = 0X0014; // WorldGroupId_t
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
        class CItemAssaultSuit : public CItem {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBeam : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_flFrameRate     = 0X0730; // float32
            static constexpr std::uintptr_t m_flHDRColorScale = 0X0734; // float32
            static constexpr std::uintptr_t m_flFireTime      = 0X0738; // GameTime_t
            static constexpr std::uintptr_t m_flDamage        = 0X073C; // float32
            static constexpr std::uintptr_t m_nNumBeamEnts    = 0X0740; // uint8
            static constexpr std::uintptr_t m_hBaseMaterial   = 0X0748; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_nHaloIndex      = 0X0750; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_nBeamType       = 0X0758; // BeamType_t
            static constexpr std::uintptr_t m_nBeamFlags      = 0X075C; // uint32
            static constexpr std::uintptr_t m_hAttachEntity   = 0X0760; // CHandle<CBaseEntity>[10]
            static constexpr std::uintptr_t m_nAttachIndex    = 0X0788; // AttachmentHandle_t[10]
            static constexpr std::uintptr_t m_fWidth          = 0X0794; // float32
            static constexpr std::uintptr_t m_fEndWidth       = 0X0798; // float32
            static constexpr std::uintptr_t m_fFadeLength     = 0X079C; // float32
            static constexpr std::uintptr_t m_fHaloScale      = 0X07A0; // float32
            static constexpr std::uintptr_t m_fAmplitude      = 0X07A4; // float32
            static constexpr std::uintptr_t m_fStartFrame     = 0X07A8; // float32
            static constexpr std::uintptr_t m_fSpeed          = 0X07AC; // float32
            static constexpr std::uintptr_t m_flFrame         = 0X07B0; // float32
            static constexpr std::uintptr_t m_nClipStyle      = 0X07B4; // BeamClipStyle_t
            static constexpr std::uintptr_t m_bTurnedOff      = 0X07B8; // bool
            static constexpr std::uintptr_t m_vecEndPos       = 0X07BC; // VectorWS
            static constexpr std::uintptr_t m_hEndEntity      = 0X07C8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_nDissolveType   = 0X07CC; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicEventListener : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_strEventName = 0X04B8; // CUtlString
            static constexpr std::uintptr_t m_bIsEnabled   = 0X04C0; // bool
            static constexpr std::uintptr_t m_nTeam        = 0X04C4; // int32
            static constexpr std::uintptr_t m_OnEventFired = 0X04C8; // CEntityOutputTemplate<CUtlString,char*>
        };

        // Has VTable
        // Local Type Scope
        class CCSGO_TeamSelectCharacterPosition : public CCSGO_TeamPreviewCharacterPosition {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSGO_TeamSelectTerroristPosition : public CCSGO_TeamSelectCharacterPosition {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoData : public CServerOnlyEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponNegev : public CCSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponElite : public CCSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBasePlayerPawn : public CBaseCombatCharacter {
        public:
            static constexpr std::uintptr_t m_pWeaponServices        = 0X0B70; // CPlayer_WeaponServices*
            static constexpr std::uintptr_t m_pItemServices          = 0X0B78; // CPlayer_ItemServices*
            static constexpr std::uintptr_t m_pAutoaimServices       = 0X0B80; // CPlayer_AutoaimServices*
            static constexpr std::uintptr_t m_pObserverServices      = 0X0B88; // CPlayer_ObserverServices*
            static constexpr std::uintptr_t m_pWaterServices         = 0X0B90; // CPlayer_WaterServices*
            static constexpr std::uintptr_t m_pUseServices           = 0X0B98; // CPlayer_UseServices*
            static constexpr std::uintptr_t m_pFlashlightServices    = 0X0BA0; // CPlayer_FlashlightServices*
            static constexpr std::uintptr_t m_pCameraServices        = 0X0BA8; // CPlayer_CameraServices*
            static constexpr std::uintptr_t m_pMovementServices      = 0X0BB0; // CPlayer_MovementServices*
            static constexpr std::uintptr_t m_ServerViewAngleChanges = 0X0BC0; // CUtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
            static constexpr std::uintptr_t v_angle                  = 0X0C28; // QAngle
            static constexpr std::uintptr_t v_anglePrevious          = 0X0C34; // QAngle
            static constexpr std::uintptr_t m_iHideHUD               = 0X0C40; // uint32
            static constexpr std::uintptr_t m_skybox3d               = 0X0C48; // sky3dparams_t
            static constexpr std::uintptr_t m_fTimeLastHurt          = 0X0CD8; // GameTime_t
            static constexpr std::uintptr_t m_flDeathTime            = 0X0CDC; // GameTime_t
            static constexpr std::uintptr_t m_fNextSuicideTime       = 0X0CE0; // GameTime_t
            static constexpr std::uintptr_t m_fInitHUD               = 0X0CE4; // bool
            static constexpr std::uintptr_t m_pExpresser             = 0X0CE8; // CAI_Expresser*
            static constexpr std::uintptr_t m_hController            = 0X0CF0; // CHandle<CBasePlayerController>
            static constexpr std::uintptr_t m_hDefaultController     = 0X0CF4; // CHandle<CBasePlayerController>
            static constexpr std::uintptr_t m_fHltvReplayDelay       = 0X0CFC; // float32
            static constexpr std::uintptr_t m_fHltvReplayEnd         = 0X0D00; // float32
            static constexpr std::uintptr_t m_iHltvReplayEntity      = 0X0D04; // CEntityIndex
            static constexpr std::uintptr_t m_sndOpvarLatchData      = 0X0D08; // CUtlVector<sndopvarlatchdata_t>
        };

        // Has VTable
        // Local Type Scope
        struct WeaponPurchaseCount_t {
        public:
            static constexpr std::uintptr_t m_nItemDefIndex = 0X0030; // uint16
            static constexpr std::uintptr_t m_nCount        = 0X0032; // uint16
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class FilterHealth : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_bAdrenalineActive = 0X04E0; // bool
            static constexpr std::uintptr_t m_iHealthMin        = 0X04E4; // int32
            static constexpr std::uintptr_t m_iHealthMax        = 0X04E8; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSprite : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_hSpriteMaterial       = 0X0730; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_hAttachedToEntity     = 0X0738; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_nAttachment           = 0X073C; // AttachmentHandle_t
            static constexpr std::uintptr_t m_flSpriteFramerate     = 0X0740; // float32
            static constexpr std::uintptr_t m_flFrame               = 0X0744; // float32
            static constexpr std::uintptr_t m_flDieTime             = 0X0748; // GameTime_t
            static constexpr std::uintptr_t m_nBrightness           = 0X0758; // uint32
            static constexpr std::uintptr_t m_flBrightnessDuration  = 0X075C; // float32
            static constexpr std::uintptr_t m_flSpriteScale         = 0X0760; // float32
            static constexpr std::uintptr_t m_flScaleDuration       = 0X0764; // float32
            static constexpr std::uintptr_t m_bWorldSpaceScale      = 0X0768; // bool
            static constexpr std::uintptr_t m_flGlowProxySize       = 0X076C; // float32
            static constexpr std::uintptr_t m_flHDRColorScale       = 0X0770; // float32
            static constexpr std::uintptr_t m_flLastTime            = 0X0774; // GameTime_t
            static constexpr std::uintptr_t m_flMaxFrame            = 0X0778; // float32
            static constexpr std::uintptr_t m_flStartScale          = 0X077C; // float32
            static constexpr std::uintptr_t m_flDestScale           = 0X0780; // float32
            static constexpr std::uintptr_t m_flScaleTimeStart      = 0X0784; // GameTime_t
            static constexpr std::uintptr_t m_nStartBrightness      = 0X0788; // int32
            static constexpr std::uintptr_t m_nDestBrightness       = 0X078C; // int32
            static constexpr std::uintptr_t m_flBrightnessTimeStart = 0X0790; // GameTime_t
            static constexpr std::uintptr_t m_nSpriteWidth          = 0X0794; // int32
            static constexpr std::uintptr_t m_nSpriteHeight         = 0X0798; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSSprite : public CSprite {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CMathColorBlend : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_flInMin   = 0X04A8; // float32
            static constexpr std::uintptr_t m_flInMax   = 0X04AC; // float32
            static constexpr std::uintptr_t m_OutColor1 = 0X04B0; // Color
            static constexpr std::uintptr_t m_OutColor2 = 0X04B4; // Color
            static constexpr std::uintptr_t m_OutValue  = 0X04B8; // CEntityOutputTemplate<Color,Color>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CShower : public CModelPointEntity {
        public:
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

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CScriptNavBlocker : public CFuncNavBlocker {
        public:
            static constexpr std::uintptr_t m_vExtent = 0X0748; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEntityBlocker : public CBaseModelEntity {
        public:
        };

        // Local Type Scope
        class SignatureOutflow_Resume : public CPulse_ResumePoint {
        public:
        };

        // Has Trivial Destructor
        // Local Type Scope
        class CPathSimpleAPI {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSPlayerPawnBase : public CBasePlayerPawn {
        public:
            static constexpr std::uintptr_t m_CTouchExpansionComponent  = 0X0D30; // CTouchExpansionComponent
            static constexpr std::uintptr_t m_pPingServices             = 0X0D80; // CCSPlayer_PingServices*
            static constexpr std::uintptr_t m_blindUntilTime            = 0X0D88; // GameTime_t
            static constexpr std::uintptr_t m_blindStartTime            = 0X0D8C; // GameTime_t
            static constexpr std::uintptr_t m_iPlayerState              = 0X0D90; // CSPlayerState
            static constexpr std::uintptr_t m_bRespawning               = 0X0E40; // bool
            static constexpr std::uintptr_t m_bHasMovedSinceSpawn       = 0X0E41; // bool
            static constexpr std::uintptr_t m_iNumSpawns                = 0X0E44; // int32
            static constexpr std::uintptr_t m_flIdleTimeSinceLastAction = 0X0E4C; // float32
            static constexpr std::uintptr_t m_fNextRadarUpdateTime      = 0X0E50; // float32
            static constexpr std::uintptr_t m_flFlashDuration           = 0X0E54; // float32
            static constexpr std::uintptr_t m_flFlashMaxAlpha           = 0X0E58; // float32
            static constexpr std::uintptr_t m_flProgressBarStartTime    = 0X0E5C; // float32
            static constexpr std::uintptr_t m_iProgressBarDuration      = 0X0E60; // int32
            static constexpr std::uintptr_t m_hOriginalController       = 0X0E64; // CHandle<CCSPlayerController>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSObserverPawn : public CCSPlayerPawnBase {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerActiveWeaponDetect : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_OnTouchedActiveWeapon = 0X0890; // CEntityIOOutput
            static constexpr std::uintptr_t m_iszWeaponClassName    = 0X08A8; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncLadder : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_vecLadderDir                 = 0X0730; // Vector
            static constexpr std::uintptr_t m_Dismounts                    = 0X0740; // CUtlVector<CHandle<CInfoLadderDismount>>
            static constexpr std::uintptr_t m_vecLocalTop                  = 0X0758; // Vector
            static constexpr std::uintptr_t m_vecPlayerMountPositionTop    = 0X0764; // VectorWS
            static constexpr std::uintptr_t m_vecPlayerMountPositionBottom = 0X0770; // VectorWS
            static constexpr std::uintptr_t m_flAutoRideSpeed              = 0X077C; // float32
            static constexpr std::uintptr_t m_bDisabled                    = 0X0780; // bool
            static constexpr std::uintptr_t m_bFakeLadder                  = 0X0781; // bool
            static constexpr std::uintptr_t m_bHasSlack                    = 0X0782; // bool
            static constexpr std::uintptr_t m_surfacePropName              = 0X0788; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_OnPlayerGotOnLadder          = 0X0790; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnPlayerGotOffLadder         = 0X07A8; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncLadderAlias_func_useableladder : public CFuncLadder {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSpriteOriented : public CSprite {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointServerCommand : public CPointEntity {
        public:
        };

        // Has VTable
        // Local Type Scope
        struct shard_model_desc_t {
        public:
            static constexpr std::uintptr_t m_nModelID               = 0X0008; // int32
            static constexpr std::uintptr_t m_hMaterialBase          = 0X0010; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_hMaterialDamageOverlay = 0X0018; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_solid                  = 0X0020; // ShardSolid_t
            static constexpr std::uintptr_t m_vecPanelSize           = 0X0024; // Vector2D
            static constexpr std::uintptr_t m_vecStressPositionA     = 0X002C; // Vector2D
            static constexpr std::uintptr_t m_vecStressPositionB     = 0X0034; // Vector2D
            static constexpr std::uintptr_t m_vecPanelVertices       = 0X0040; // CNetworkUtlVectorBase<Vector2D>
            static constexpr std::uintptr_t m_vInitialPanelVertices  = 0X0058; // CNetworkUtlVectorBase<Vector4D>
            static constexpr std::uintptr_t m_flGlassHalfThickness   = 0X0070; // float32
            static constexpr std::uintptr_t m_bHasParent             = 0X0074; // bool
            static constexpr std::uintptr_t m_bParentFrozen          = 0X0075; // bool
            static constexpr std::uintptr_t m_SurfacePropStringToken = 0X0078; // CUtlStringToken
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPlayerSprayDecal : public CModelPointEntity {
        public:
            static constexpr std::uintptr_t m_nUniqueID      = 0X0730; // int32
            static constexpr std::uintptr_t m_unAccountID    = 0X0734; // uint32
            static constexpr std::uintptr_t m_unTraceID      = 0X0738; // uint32
            static constexpr std::uintptr_t m_rtGcTime       = 0X073C; // uint32
            static constexpr std::uintptr_t m_vecEndPos      = 0X0740; // Vector
            static constexpr std::uintptr_t m_vecStart       = 0X074C; // Vector
            static constexpr std::uintptr_t m_vecLeft        = 0X0758; // Vector
            static constexpr std::uintptr_t m_vecNormal      = 0X0764; // Vector
            static constexpr std::uintptr_t m_nPlayer        = 0X0770; // int32
            static constexpr std::uintptr_t m_nEntity        = 0X0774; // int32
            static constexpr std::uintptr_t m_nHitbox        = 0X0778; // int32
            static constexpr std::uintptr_t m_flCreationTime = 0X077C; // float32
            static constexpr std::uintptr_t m_nTintID        = 0X0780; // int32
            static constexpr std::uintptr_t m_nVersion       = 0X0784; // uint8
            static constexpr std::uintptr_t m_ubSignature    = 0X0785; // uint8[128]
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncWater : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_BuoyancyHelper = 0X0730; // CBuoyancyHelper
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSGameModeRules {
        public:
            static constexpr std::uintptr_t __m_pChainEntity = 0X0008; // CNetworkVarChainer
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTankTargetChange : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_newTarget     = 0X04A8; // CVariantBase<CVariantDefaultAllocator>
            static constexpr std::uintptr_t m_newTargetName = 0X04B8; // CUtlSymbolLarge
        };

        // Has VTable
        // Local Type Scope
        class CPlayer_WaterServices : public CPlayerPawnComponent {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_WaterServices : public CPlayer_WaterServices {
        public:
            static constexpr std::uintptr_t m_NextDrownDamageTime = 0X0048; // GameTime_t
            static constexpr std::uintptr_t m_nDrownDmgRate       = 0X004C; // int32
            static constexpr std::uintptr_t m_AirFinishedTime     = 0X0050; // GameTime_t
            static constexpr std::uintptr_t m_flWaterJumpTime     = 0X0054; // float32
            static constexpr std::uintptr_t m_vecWaterJumpVel     = 0X0058; // Vector
            static constexpr std::uintptr_t m_flSwimSoundTime     = 0X0064; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicDistanceCheck : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_iszEntityA      = 0X04A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszEntityB      = 0X04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flZone1Distance = 0X04B8; // float32
            static constexpr std::uintptr_t m_flZone2Distance = 0X04BC; // float32
            static constexpr std::uintptr_t m_InZone1         = 0X04C0; // CEntityIOOutput
            static constexpr std::uintptr_t m_InZone2         = 0X04D8; // CEntityIOOutput
            static constexpr std::uintptr_t m_InZone3         = 0X04F0; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvCombinedLightProbeVolume : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_Entity_Color                                = 0X1520; // Color
            static constexpr std::uintptr_t m_Entity_flBrightness                         = 0X1524; // float32
            static constexpr std::uintptr_t m_Entity_hCubemapTexture                      = 0X1528; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_bCustomCubemapTexture                = 0X1530; // bool
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_AmbientCube       = 0X1538; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SDF               = 0X1540; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SH2_DC            = 0X1548; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SH2_R             = 0X1550; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SH2_G             = 0X1558; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SH2_B             = 0X1560; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeDirectLightIndicesTexture = 0X1568; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeDirectLightScalarsTexture = 0X1570; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeDirectLightShadowsTexture = 0X1578; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_vBoxMins                             = 0X1580; // Vector
            static constexpr std::uintptr_t m_Entity_vBoxMaxs                             = 0X158C; // Vector
            static constexpr std::uintptr_t m_Entity_bMoveable                            = 0X1598; // bool
            static constexpr std::uintptr_t m_Entity_nHandshake                           = 0X159C; // int32
            static constexpr std::uintptr_t m_Entity_nEnvCubeMapArrayIndex                = 0X15A0; // int32
            static constexpr std::uintptr_t m_Entity_nPriority                            = 0X15A4; // int32
            static constexpr std::uintptr_t m_Entity_bStartDisabled                       = 0X15A8; // bool
            static constexpr std::uintptr_t m_Entity_flEdgeFadeDist                       = 0X15AC; // float32
            static constexpr std::uintptr_t m_Entity_vEdgeFadeDists                       = 0X15B0; // Vector
            static constexpr std::uintptr_t m_Entity_nLightProbeSizeX                     = 0X15BC; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeSizeY                     = 0X15C0; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeSizeZ                     = 0X15C4; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeAtlasX                    = 0X15C8; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeAtlasY                    = 0X15CC; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeAtlasZ                    = 0X15D0; // int32
            static constexpr std::uintptr_t m_Entity_bEnabled                             = 0X15E9; // bool
        };

        // Has VTable
        // Local Type Scope
        struct ViewAngleServerChange_t {
        public:
            static constexpr std::uintptr_t nType  = 0X0030; // FixAngleSet_t
            static constexpr std::uintptr_t qAngle = 0X0034; // QAngle
            static constexpr std::uintptr_t nIndex = 0X0040; // uint32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicDistanceAutosave : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_iszTargetEntity    = 0X04A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flDistanceToPlayer = 0X04B0; // float32
            static constexpr std::uintptr_t m_bForceNewLevelUnit = 0X04B4; // bool
            static constexpr std::uintptr_t m_bCheckCough        = 0X04B5; // bool
            static constexpr std::uintptr_t m_bThinkDangerous    = 0X04B6; // bool
            static constexpr std::uintptr_t m_flDangerousTime    = 0X04B8; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicBranch : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_bInValue  = 0X04A8; // bool
            static constexpr std::uintptr_t m_Listeners = 0X04B0; // CUtlVector<CHandle<CBaseEntity>>
            static constexpr std::uintptr_t m_OnTrue    = 0X04C8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnFalse   = 0X04E0; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Outflow_ScriptedSequence : public CPulseCell_BaseYieldingInflow {
        public:
            static constexpr std::uintptr_t m_szSyncGroup                      = 0X0048; // CUtlString
            static constexpr std::uintptr_t m_nExpectedNumSequencesInSyncGroup = 0X0050; // int32
            static constexpr std::uintptr_t m_bEnsureOnNavmeshOnFinish         = 0X0054; // bool
            static constexpr std::uintptr_t m_bDontTeleportAtEnd               = 0X0055; // bool
            static constexpr std::uintptr_t m_bDisallowInterrupts              = 0X0056; // bool
            static constexpr std::uintptr_t m_scriptedSequenceDataMain         = 0X0058; // PulseScriptedSequenceData_t
            static constexpr std::uintptr_t m_vecAdditionalActors              = 0X0090; // CUtlVector<PulseScriptedSequenceData_t>
            static constexpr std::uintptr_t m_OnFinished                       = 0X00A8; // CPulse_ResumePoint
            static constexpr std::uintptr_t m_OnCanceled                       = 0X00F0; // CPulse_ResumePoint
            static constexpr std::uintptr_t m_Triggers                         = 0X0138; // CUtlVector<CPulse_OutflowConnection>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncTrackTrain : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_ppath                      = 0X0730; // CHandle<CPathTrack>
            static constexpr std::uintptr_t m_length                     = 0X0734; // float32
            static constexpr std::uintptr_t m_vPosPrev                   = 0X0738; // Vector
            static constexpr std::uintptr_t m_angPrev                    = 0X0744; // QAngle
            static constexpr std::uintptr_t m_controlMins                = 0X0750; // Vector
            static constexpr std::uintptr_t m_controlMaxs                = 0X075C; // Vector
            static constexpr std::uintptr_t m_lastBlockPos               = 0X0768; // Vector
            static constexpr std::uintptr_t m_lastBlockTick              = 0X0774; // int32
            static constexpr std::uintptr_t m_flVolume                   = 0X0778; // float32
            static constexpr std::uintptr_t m_flBank                     = 0X077C; // float32
            static constexpr std::uintptr_t m_oldSpeed                   = 0X0780; // float32
            static constexpr std::uintptr_t m_flBlockDamage              = 0X0784; // float32
            static constexpr std::uintptr_t m_height                     = 0X0788; // float32
            static constexpr std::uintptr_t m_maxSpeed                   = 0X078C; // float32
            static constexpr std::uintptr_t m_dir                        = 0X0790; // float32
            static constexpr std::uintptr_t m_iszSoundMove               = 0X0798; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszSoundMovePing           = 0X07A0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszSoundStart              = 0X07A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszSoundStop               = 0X07B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_strPathTarget              = 0X07B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flMoveSoundMinDuration     = 0X07C0; // float32
            static constexpr std::uintptr_t m_flMoveSoundMaxDuration     = 0X07C4; // float32
            static constexpr std::uintptr_t m_flNextMoveSoundTime        = 0X07C8; // GameTime_t
            static constexpr std::uintptr_t m_flMoveSoundMinPitch        = 0X07CC; // float32
            static constexpr std::uintptr_t m_flMoveSoundMaxPitch        = 0X07D0; // float32
            static constexpr std::uintptr_t m_eOrientationType           = 0X07D4; // TrainOrientationType_t
            static constexpr std::uintptr_t m_eVelocityType              = 0X07D8; // TrainVelocityType_t
            static constexpr std::uintptr_t m_OnStart                    = 0X07F0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnNext                     = 0X0808; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnArrivedAtDestinationNode = 0X0820; // CEntityIOOutput
            static constexpr std::uintptr_t m_bManualSpeedChanges        = 0X0838; // bool
            static constexpr std::uintptr_t m_flDesiredSpeed             = 0X083C; // float32
            static constexpr std::uintptr_t m_flSpeedChangeTime          = 0X0840; // GameTime_t
            static constexpr std::uintptr_t m_flAccelSpeed               = 0X0844; // float32
            static constexpr std::uintptr_t m_flDecelSpeed               = 0X0848; // float32
            static constexpr std::uintptr_t m_bAccelToSpeed              = 0X084C; // bool
            static constexpr std::uintptr_t m_flNextMPSoundTime          = 0X0850; // GameTime_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvInstructorHint : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_iszName             = 0X04A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszReplace_Key      = 0X04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszHintTargetEntity = 0X04B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iTimeout            = 0X04C0; // int32
            static constexpr std::uintptr_t m_iDisplayLimit       = 0X04C4; // int32
            static constexpr std::uintptr_t m_iszIcon_Onscreen    = 0X04C8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszIcon_Offscreen   = 0X04D0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszCaption          = 0X04D8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszActivatorCaption = 0X04E0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_Color               = 0X04E8; // Color
            static constexpr std::uintptr_t m_fIconOffset         = 0X04EC; // float32
            static constexpr std::uintptr_t m_fRange              = 0X04F0; // float32
            static constexpr std::uintptr_t m_iPulseOption        = 0X04F4; // uint8
            static constexpr std::uintptr_t m_iAlphaOption        = 0X04F5; // uint8
            static constexpr std::uintptr_t m_iShakeOption        = 0X04F6; // uint8
            static constexpr std::uintptr_t m_bStatic             = 0X04F7; // bool
            static constexpr std::uintptr_t m_bNoOffscreen        = 0X04F8; // bool
            static constexpr std::uintptr_t m_bForceCaption       = 0X04F9; // bool
            static constexpr std::uintptr_t m_iInstanceType       = 0X04FC; // int32
            static constexpr std::uintptr_t m_bSuppressRest       = 0X0500; // bool
            static constexpr std::uintptr_t m_iszBinding          = 0X0508; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bAllowNoDrawTarget  = 0X0510; // bool
            static constexpr std::uintptr_t m_bAutoStart          = 0X0511; // bool
            static constexpr std::uintptr_t m_bLocalPlayerOnly    = 0X0512; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvWind : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_EnvWindShared = 0X04A8; // CEnvWindShared
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundEventPathCornerEntity : public CSoundEventEntity {
        public:
            static constexpr std::uintptr_t m_iszPathCorner           = 0X0558; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iCountMax               = 0X0560; // int32
            static constexpr std::uintptr_t m_flDistanceMax           = 0X0564; // float32
            static constexpr std::uintptr_t m_flDistMaxSqr            = 0X0568; // float32
            static constexpr std::uintptr_t m_flDotProductMax         = 0X056C; // float32
            static constexpr std::uintptr_t m_bPlaying                = 0X0570; // bool
            static constexpr std::uintptr_t m_vecCornerPairsNetworked = 0X0598; // CNetworkUtlVectorBase<SoundeventPathCornerPairNetworked_t>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerMultiple : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_OnTrigger = 0X0890; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CDynamicNavConnectionsVolume : public CTriggerMultiple {
        public:
            static constexpr std::uintptr_t m_iszConnectionTarget      = 0X08A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_vecConnections           = 0X08B0; // CUtlVector<DynamicVolumeDef_t>
            static constexpr std::uintptr_t m_sTransitionType          = 0X08C8; // CGlobalSymbol
            static constexpr std::uintptr_t m_bConnectionsEnabled      = 0X08D0; // bool
            static constexpr std::uintptr_t m_flTargetAreaSearchRadius = 0X08D4; // float32
            static constexpr std::uintptr_t m_flUpdateDistance         = 0X08D8; // float32
            static constexpr std::uintptr_t m_flMaxConnectionDistance  = 0X08DC; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CConstraintAnchor : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_massScale = 0X0A20; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSPlayerPawn : public CCSPlayerPawnBase {
        public:
            static constexpr std::uintptr_t m_pBulletServices                         = 0X0E78; // CCSPlayer_BulletServices*
            static constexpr std::uintptr_t m_pHostageServices                        = 0X0E80; // CCSPlayer_HostageServices*
            static constexpr std::uintptr_t m_pBuyServices                            = 0X0E88; // CCSPlayer_BuyServices*
            static constexpr std::uintptr_t m_pActionTrackingServices                 = 0X0E90; // CCSPlayer_ActionTrackingServices*
            static constexpr std::uintptr_t m_pRadioServices                          = 0X0E98; // CCSPlayer_RadioServices*
            static constexpr std::uintptr_t m_pDamageReactServices                    = 0X0EA0; // CCSPlayer_DamageReactServices*
            static constexpr std::uintptr_t m_nCharacterDefIndex                      = 0X0EA8; // uint16
            static constexpr std::uintptr_t m_bHasFemaleVoice                         = 0X0EAA; // bool
            static constexpr std::uintptr_t m_strVOPrefix                             = 0X0EB0; // CUtlString
            static constexpr std::uintptr_t m_szLastPlaceName                         = 0X0EB8; // char[18]
            static constexpr std::uintptr_t m_bInHostageResetZone                     = 0X0FA8; // bool
            static constexpr std::uintptr_t m_bInBuyZone                              = 0X0FA9; // bool
            static constexpr std::uintptr_t m_TouchingBuyZones                        = 0X0FB0; // CUtlVector<CHandle<CBaseEntity>>
            static constexpr std::uintptr_t m_bWasInBuyZone                           = 0X0FC8; // bool
            static constexpr std::uintptr_t m_bInHostageRescueZone                    = 0X0FC9; // bool
            static constexpr std::uintptr_t m_bInBombZone                             = 0X0FCA; // bool
            static constexpr std::uintptr_t m_bWasInHostageRescueZone                 = 0X0FCB; // bool
            static constexpr std::uintptr_t m_iRetakesOffering                        = 0X0FCC; // int32
            static constexpr std::uintptr_t m_iRetakesOfferingCard                    = 0X0FD0; // int32
            static constexpr std::uintptr_t m_bRetakesHasDefuseKit                    = 0X0FD4; // bool
            static constexpr std::uintptr_t m_bRetakesMVPLastRound                    = 0X0FD5; // bool
            static constexpr std::uintptr_t m_iRetakesMVPBoostItem                    = 0X0FD8; // int32
            static constexpr std::uintptr_t m_RetakesMVPBoostExtraUtility             = 0X0FDC; // loadout_slot_t
            static constexpr std::uintptr_t m_flHealthShotBoostExpirationTime         = 0X0FE0; // GameTime_t
            static constexpr std::uintptr_t m_flLandingTimeSeconds                    = 0X0FE4; // float32
            static constexpr std::uintptr_t m_aimPunchAngle                           = 0X0FE8; // QAngle
            static constexpr std::uintptr_t m_aimPunchAngleVel                        = 0X0FF4; // QAngle
            static constexpr std::uintptr_t m_aimPunchTickBase                        = 0X1000; // GameTick_t
            static constexpr std::uintptr_t m_aimPunchTickFraction                    = 0X1004; // float32
            static constexpr std::uintptr_t m_aimPunchCache                           = 0X1008; // CUtlVector<QAngle>
            static constexpr std::uintptr_t m_bIsBuyMenuOpen                          = 0X1020; // bool
            static constexpr std::uintptr_t m_lastLandTime                            = 0X16C0; // GameTime_t
            static constexpr std::uintptr_t m_bOnGroundLastTick                       = 0X16C4; // bool
            static constexpr std::uintptr_t m_iPlayerLocked                           = 0X16C8; // int32
            static constexpr std::uintptr_t m_flTimeOfLastInjury                      = 0X16D0; // GameTime_t
            static constexpr std::uintptr_t m_flNextSprayDecalTime                    = 0X16D4; // GameTime_t
            static constexpr std::uintptr_t m_bNextSprayDecalTimeExpedited            = 0X16D8; // bool
            static constexpr std::uintptr_t m_nRagdollDamageBone                      = 0X16DC; // int32
            static constexpr std::uintptr_t m_vRagdollDamageForce                     = 0X16E0; // Vector
            static constexpr std::uintptr_t m_vRagdollDamagePosition                  = 0X16EC; // Vector
            static constexpr std::uintptr_t m_szRagdollDamageWeaponName               = 0X16F8; // char[64]
            static constexpr std::uintptr_t m_bRagdollDamageHeadshot                  = 0X1738; // bool
            static constexpr std::uintptr_t m_vRagdollServerOrigin                    = 0X173C; // Vector
            static constexpr std::uintptr_t m_EconGloves                              = 0X1748; // CEconItemView
            static constexpr std::uintptr_t m_nEconGlovesChanged                      = 0X19F0; // uint8
            static constexpr std::uintptr_t m_qDeathEyeAngles                         = 0X19F4; // QAngle
            static constexpr std::uintptr_t m_bSkipOneHeadConstraintUpdate            = 0X1A00; // bool
            static constexpr std::uintptr_t m_bLeftHanded                             = 0X1A01; // bool
            static constexpr std::uintptr_t m_fSwitchedHandednessTime                 = 0X1A04; // GameTime_t
            static constexpr std::uintptr_t m_flViewmodelOffsetX                      = 0X1A08; // float32
            static constexpr std::uintptr_t m_flViewmodelOffsetY                      = 0X1A0C; // float32
            static constexpr std::uintptr_t m_flViewmodelOffsetZ                      = 0X1A10; // float32
            static constexpr std::uintptr_t m_flViewmodelFOV                          = 0X1A14; // float32
            static constexpr std::uintptr_t m_bIsWalking                              = 0X1A18; // bool
            static constexpr std::uintptr_t m_fLastGivenDefuserTime                   = 0X1A1C; // float32
            static constexpr std::uintptr_t m_fLastGivenBombTime                      = 0X1A20; // float32
            static constexpr std::uintptr_t m_flDealtDamageToEnemyMostRecentTimestamp = 0X1A24; // float32
            static constexpr std::uintptr_t m_iDisplayHistoryBits                     = 0X1A28; // uint32
            static constexpr std::uintptr_t m_flLastAttackedTeammate                  = 0X1A2C; // float32
            static constexpr std::uintptr_t m_allowAutoFollowTime                     = 0X1A30; // GameTime_t
            static constexpr std::uintptr_t m_bResetArmorNextSpawn                    = 0X1A34; // bool
            static constexpr std::uintptr_t m_nLastKillerIndex                        = 0X1A38; // CEntityIndex
            static constexpr std::uintptr_t m_entitySpottedState                      = 0X1A40; // EntitySpottedState_t
            static constexpr std::uintptr_t m_nSpotRules                              = 0X1A58; // int32
            static constexpr std::uintptr_t m_bIsScoped                               = 0X1A5C; // bool
            static constexpr std::uintptr_t m_bResumeZoom                             = 0X1A5D; // bool
            static constexpr std::uintptr_t m_bIsDefusing                             = 0X1A5E; // bool
            static constexpr std::uintptr_t m_bIsGrabbingHostage                      = 0X1A5F; // bool
            static constexpr std::uintptr_t m_iBlockingUseActionInProgress            = 0X1A60; // CSPlayerBlockingUseAction_t
            static constexpr std::uintptr_t m_flEmitSoundTime                         = 0X1A64; // GameTime_t
            static constexpr std::uintptr_t m_bInNoDefuseArea                         = 0X1A68; // bool
            static constexpr std::uintptr_t m_iBombSiteIndex                          = 0X1A6C; // CEntityIndex
            static constexpr std::uintptr_t m_nWhichBombZone                          = 0X1A70; // int32
            static constexpr std::uintptr_t m_bInBombZoneTrigger                      = 0X1A74; // bool
            static constexpr std::uintptr_t m_bWasInBombZoneTrigger                   = 0X1A75; // bool
            static constexpr std::uintptr_t m_iShotsFired                             = 0X1A78; // int32
            static constexpr std::uintptr_t m_flFlinchStack                           = 0X1A7C; // float32
            static constexpr std::uintptr_t m_flVelocityModifier                      = 0X1A80; // float32
            static constexpr std::uintptr_t m_flHitHeading                            = 0X1A84; // float32
            static constexpr std::uintptr_t m_nHitBodyPart                            = 0X1A88; // int32
            static constexpr std::uintptr_t m_vecTotalBulletForce                     = 0X1A8C; // Vector
            static constexpr std::uintptr_t m_bWaitForNoAttack                        = 0X1A98; // bool
            static constexpr std::uintptr_t m_ignoreLadderJumpTime                    = 0X1A9C; // float32
            static constexpr std::uintptr_t m_bKilledByHeadshot                       = 0X1AA0; // bool
            static constexpr std::uintptr_t m_LastHitBox                              = 0X1AA4; // int32
            static constexpr std::uintptr_t m_pBot                                    = 0X1AA8; // CCSBot*
            static constexpr std::uintptr_t m_bBotAllowActive                         = 0X1AB0; // bool
            static constexpr std::uintptr_t m_thirdPersonHeading                      = 0X1AB4; // QAngle
            static constexpr std::uintptr_t m_flSlopeDropOffset                       = 0X1AC0; // float32
            static constexpr std::uintptr_t m_flSlopeDropHeight                       = 0X1AC4; // float32
            static constexpr std::uintptr_t m_vHeadConstraintOffset                   = 0X1AC8; // Vector
            static constexpr std::uintptr_t m_nLastPickupPriority                     = 0X1AD4; // int32
            static constexpr std::uintptr_t m_flLastPickupPriorityTime                = 0X1AD8; // float32
            static constexpr std::uintptr_t m_ArmorValue                              = 0X1ADC; // int32
            static constexpr std::uintptr_t m_unCurrentEquipmentValue                 = 0X1AE0; // uint16
            static constexpr std::uintptr_t m_unRoundStartEquipmentValue              = 0X1AE2; // uint16
            static constexpr std::uintptr_t m_unFreezetimeEndEquipmentValue           = 0X1AE4; // uint16
            static constexpr std::uintptr_t m_iLastWeaponFireUsercmd                  = 0X1AE8; // int32
            static constexpr std::uintptr_t m_bIsSpawning                             = 0X1AEC; // bool
            static constexpr std::uintptr_t m_iDeathFlags                             = 0X1AF8; // int32
            static constexpr std::uintptr_t m_bHasDeathInfo                           = 0X1AFC; // bool
            static constexpr std::uintptr_t m_flDeathInfoTime                         = 0X1B00; // float32
            static constexpr std::uintptr_t m_vecDeathInfoOrigin                      = 0X1B04; // Vector
            static constexpr std::uintptr_t m_vecPlayerPatchEconIndices               = 0X1B10; // uint32[5]
            static constexpr std::uintptr_t m_GunGameImmunityColor                    = 0X1B24; // Color
            static constexpr std::uintptr_t m_grenadeParameterStashTime               = 0X1B28; // GameTime_t
            static constexpr std::uintptr_t m_bGrenadeParametersStashed               = 0X1B2C; // bool
            static constexpr std::uintptr_t m_angStashedShootAngles                   = 0X1B30; // QAngle
            static constexpr std::uintptr_t m_vecStashedGrenadeThrowPosition          = 0X1B3C; // Vector
            static constexpr std::uintptr_t m_vecStashedVelocity                      = 0X1B48; // Vector
            static constexpr std::uintptr_t m_angShootAngleHistory                    = 0X1B54; // QAngle[2]
            static constexpr std::uintptr_t m_vecThrowPositionHistory                 = 0X1B6C; // Vector[2]
            static constexpr std::uintptr_t m_vecVelocityHistory                      = 0X1B84; // Vector[2]
            static constexpr std::uintptr_t m_PredictedDamageTags                     = 0X1BA0; // CUtlVectorEmbeddedNetworkVar<PredictedDamageTag_t>
            static constexpr std::uintptr_t m_nHighestAppliedDamageTagTick            = 0X1C08; // int32
            static constexpr std::uintptr_t m_bCommittingSuicideOnTeamChange          = 0X1C0C; // bool
            static constexpr std::uintptr_t m_wasNotKilledNaturally                   = 0X1C0D; // bool
            static constexpr std::uintptr_t m_fImmuneToGunGameDamageTime              = 0X1C10; // GameTime_t
            static constexpr std::uintptr_t m_bGunGameImmunity                        = 0X1C14; // bool
            static constexpr std::uintptr_t m_fMolotovDamageTime                      = 0X1C18; // float32
            static constexpr std::uintptr_t m_angEyeAngles                            = 0X1C1C; // QAngle
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvLightProbeVolume : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_AmbientCube       = 0X14A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SDF               = 0X14A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SH2_DC            = 0X14B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SH2_R             = 0X14B8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SH2_G             = 0X14C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SH2_B             = 0X14C8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeDirectLightIndicesTexture = 0X14D0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeDirectLightScalarsTexture = 0X14D8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeDirectLightShadowsTexture = 0X14E0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_vBoxMins                             = 0X14E8; // Vector
            static constexpr std::uintptr_t m_Entity_vBoxMaxs                             = 0X14F4; // Vector
            static constexpr std::uintptr_t m_Entity_bMoveable                            = 0X1500; // bool
            static constexpr std::uintptr_t m_Entity_nHandshake                           = 0X1504; // int32
            static constexpr std::uintptr_t m_Entity_nPriority                            = 0X1508; // int32
            static constexpr std::uintptr_t m_Entity_bStartDisabled                       = 0X150C; // bool
            static constexpr std::uintptr_t m_Entity_nLightProbeSizeX                     = 0X1510; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeSizeY                     = 0X1514; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeSizeZ                     = 0X1518; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeAtlasX                    = 0X151C; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeAtlasY                    = 0X1520; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeAtlasZ                    = 0X1524; // int32
            static constexpr std::uintptr_t m_Entity_bEnabled                             = 0X1531; // bool
        };

        // Has Trivial Destructor
        // Local Type Scope
        class CFuncMoverAPI {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CGameSceneNode {
        public:
            static constexpr std::uintptr_t m_nodeToWorld                               = 0X0010; // CTransformWS
            static constexpr std::uintptr_t m_pOwner                                    = 0X0030; // CEntityInstance*
            static constexpr std::uintptr_t m_pParent                                   = 0X0038; // CGameSceneNode*
            static constexpr std::uintptr_t m_pChild                                    = 0X0040; // CGameSceneNode*
            static constexpr std::uintptr_t m_pNextSibling                              = 0X0048; // CGameSceneNode*
            static constexpr std::uintptr_t m_hParent                                   = 0X0078; // CGameSceneNodeHandle
            static constexpr std::uintptr_t m_vecOrigin                                 = 0X0088; // CNetworkOriginCellCoordQuantizedVector
            static constexpr std::uintptr_t m_angRotation                               = 0X00C0; // QAngle
            static constexpr std::uintptr_t m_flScale                                   = 0X00CC; // float32
            static constexpr std::uintptr_t m_vecAbsOrigin                              = 0X00D0; // VectorWS
            static constexpr std::uintptr_t m_angAbsRotation                            = 0X00DC; // QAngle
            static constexpr std::uintptr_t m_flAbsScale                                = 0X00E8; // float32
            static constexpr std::uintptr_t m_nParentAttachmentOrBone                   = 0X00EC; // int16
            static constexpr std::uintptr_t m_bDebugAbsOriginChanges                    = 0X00EE; // bool
            static constexpr std::uintptr_t m_bDormant                                  = 0X00EF; // bool
            static constexpr std::uintptr_t m_bForceParentToBeNetworked                 = 0X00F0; // bool
            static constexpr std::uintptr_t m_bDirtyHierarchy                           = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bDirtyBoneMergeInfo                       = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bNetworkedPositionChanged                 = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bNetworkedAnglesChanged                   = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bNetworkedScaleChanged                    = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bWillBeCallingPostDataUpdate              = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bBoneMergeFlex                            = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_nLatchAbsOrigin                           = 0X0000; // bitfield:2
            static constexpr std::uintptr_t m_bDirtyBoneMergeBoneToRoot                 = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_nHierarchicalDepth                        = 0X00F3; // uint8
            static constexpr std::uintptr_t m_nHierarchyType                            = 0X00F4; // uint8
            static constexpr std::uintptr_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0X00F5; // uint8
            static constexpr std::uintptr_t m_name                                      = 0X00F8; // CUtlStringToken
            static constexpr std::uintptr_t m_hierarchyAttachName                       = 0X010C; // CUtlStringToken
            static constexpr std::uintptr_t m_flZOffset                                 = 0X0110; // float32
            static constexpr std::uintptr_t m_flClientLocalScale                        = 0X0114; // float32
            static constexpr std::uintptr_t m_vRenderOrigin                             = 0X0118; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponM249 : public CCSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CRopeKeyframeAlias_move_rope : public CRopeKeyframe {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Local Type Scope
        class CPulseServerFuncs_Sounds {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Local Type Scope
        class CPulsePhysicsConstraintsFuncs {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicScript : public CPointEntity {
        public:
        };

        // Has Trivial Destructor
        // Local Type Scope
        struct CAttributeManager__cached_attribute_float_t {
        public:
            static constexpr std::uintptr_t flIn        = 0X0000; // float32
            static constexpr std::uintptr_t iAttribHook = 0X0008; // CUtlSymbolLarge
            static constexpr std::uintptr_t flOut       = 0X0010; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSceneEntity : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_iszSceneFile             = 0X04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszTarget1               = 0X04B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszTarget2               = 0X04C0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszTarget3               = 0X04C8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszTarget4               = 0X04D0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszTarget5               = 0X04D8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszTarget6               = 0X04E0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszTarget7               = 0X04E8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszTarget8               = 0X04F0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hTarget1                 = 0X04F8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hTarget2                 = 0X04FC; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hTarget3                 = 0X0500; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hTarget4                 = 0X0504; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hTarget5                 = 0X0508; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hTarget6                 = 0X050C; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hTarget7                 = 0X0510; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hTarget8                 = 0X0514; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_sTargetAttachment        = 0X0518; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bIsPlayingBack           = 0X0520; // bool
            static constexpr std::uintptr_t m_bPaused                  = 0X0521; // bool
            static constexpr std::uintptr_t m_bMultiplayer             = 0X0522; // bool
            static constexpr std::uintptr_t m_bAutogenerated           = 0X0523; // bool
            static constexpr std::uintptr_t m_flForceClientTime        = 0X0524; // float32
            static constexpr std::uintptr_t m_flCurrentTime            = 0X0528; // float32
            static constexpr std::uintptr_t m_flFrameTime              = 0X052C; // float32
            static constexpr std::uintptr_t m_bCancelAtNextInterrupt   = 0X0530; // bool
            static constexpr std::uintptr_t m_fPitch                   = 0X0534; // float32
            static constexpr std::uintptr_t m_bAutomated               = 0X0538; // bool
            static constexpr std::uintptr_t m_nAutomatedAction         = 0X053C; // int32
            static constexpr std::uintptr_t m_flAutomationDelay        = 0X0540; // float32
            static constexpr std::uintptr_t m_flAutomationTime         = 0X0544; // float32
            static constexpr std::uintptr_t m_nSpeechPriority          = 0X0548; // int32
            static constexpr std::uintptr_t m_bPausedViaInput          = 0X054C; // bool
            static constexpr std::uintptr_t m_bPauseAtNextInterrupt    = 0X054D; // bool
            static constexpr std::uintptr_t m_bWaitingForActor         = 0X054E; // bool
            static constexpr std::uintptr_t m_bWaitingForInterrupt     = 0X054F; // bool
            static constexpr std::uintptr_t m_bInterruptedActorsScenes = 0X0550; // bool
            static constexpr std::uintptr_t m_bBreakOnNonIdle          = 0X0551; // bool
            static constexpr std::uintptr_t m_bSceneFinished           = 0X0552; // bool
            static constexpr std::uintptr_t m_hActorList               = 0X0558; // CNetworkUtlVectorBase<CHandle<CBaseFlex>>
            static constexpr std::uintptr_t m_hRemoveActorList         = 0X0570; // CUtlVector<CHandle<CBaseEntity>>
            static constexpr std::uintptr_t m_nSceneStringIndex        = 0X05B8; // uint16
            static constexpr std::uintptr_t m_OnStart                  = 0X05C0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnCompletion             = 0X05D8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnCanceled               = 0X05F0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnPaused                 = 0X0608; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnResumed                = 0X0620; // CEntityIOOutput
            static constexpr std::uintptr_t m_hInterruptScene          = 0X06C8; // CHandle<CSceneEntity>
            static constexpr std::uintptr_t m_nInterruptCount          = 0X06CC; // int32
            static constexpr std::uintptr_t m_bSceneMissing            = 0X06D0; // bool
            static constexpr std::uintptr_t m_bInterrupted             = 0X06D1; // bool
            static constexpr std::uintptr_t m_bCompletedEarly          = 0X06D2; // bool
            static constexpr std::uintptr_t m_bInterruptSceneFinished  = 0X06D3; // bool
            static constexpr std::uintptr_t m_bRestoring               = 0X06D4; // bool
            static constexpr std::uintptr_t m_hNotifySceneCompletion   = 0X06D8; // CUtlVector<CHandle<CSceneEntity>>
            static constexpr std::uintptr_t m_hListManagers            = 0X06F0; // CUtlVector<CHandle<CSceneListManager>>
            static constexpr std::uintptr_t m_iszSoundName             = 0X0708; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszSequenceName          = 0X0710; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hActor                   = 0X0718; // CHandle<CBaseFlex>
            static constexpr std::uintptr_t m_hActivator               = 0X071C; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_BusyActor                = 0X0720; // int32
            static constexpr std::uintptr_t m_iPlayerDeathBehavior     = 0X0724; // SceneOnPlayerDeath_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSceneEntityAlias_logic_choreographed_scene : public CSceneEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CRagdollManager : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_iCurrentMaxRagdollCount = 0X04A8; // int8
            static constexpr std::uintptr_t m_iMaxRagdollCount        = 0X04AC; // int32
            static constexpr std::uintptr_t m_bSaveImportant          = 0X04B0; // bool
            static constexpr std::uintptr_t m_bCanTakeDamage          = 0X04B1; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPostProcessingVolume : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_hPostSettings             = 0X08A0; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
            static constexpr std::uintptr_t m_flFadeDuration            = 0X08A8; // float32
            static constexpr std::uintptr_t m_flMinLogExposure          = 0X08AC; // float32
            static constexpr std::uintptr_t m_flMaxLogExposure          = 0X08B0; // float32
            static constexpr std::uintptr_t m_flMinExposure             = 0X08B4; // float32
            static constexpr std::uintptr_t m_flMaxExposure             = 0X08B8; // float32
            static constexpr std::uintptr_t m_flExposureCompensation    = 0X08BC; // float32
            static constexpr std::uintptr_t m_flExposureFadeSpeedUp     = 0X08C0; // float32
            static constexpr std::uintptr_t m_flExposureFadeSpeedDown   = 0X08C4; // float32
            static constexpr std::uintptr_t m_flTonemapEVSmoothingRange = 0X08C8; // float32
            static constexpr std::uintptr_t m_bMaster                   = 0X08CC; // bool
            static constexpr std::uintptr_t m_bExposureControl          = 0X08CD; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointProximitySensor : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled     = 0X04A8; // bool
            static constexpr std::uintptr_t m_hTargetEntity = 0X04AC; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_Distance      = 0X04B0; // CEntityOutputTemplate<float32,float32>
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
        class CTriggerOnce : public CTriggerMultiple {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerLook : public CTriggerOnce {
        public:
            static constexpr std::uintptr_t m_hLookTarget              = 0X08A8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_flFieldOfView            = 0X08AC; // float32
            static constexpr std::uintptr_t m_flLookTime               = 0X08B0; // float32
            static constexpr std::uintptr_t m_flLookTimeTotal          = 0X08B4; // float32
            static constexpr std::uintptr_t m_flLookTimeLast           = 0X08B8; // GameTime_t
            static constexpr std::uintptr_t m_flTimeoutDuration        = 0X08BC; // float32
            static constexpr std::uintptr_t m_bTimeoutFired            = 0X08C0; // bool
            static constexpr std::uintptr_t m_bIsLooking               = 0X08C1; // bool
            static constexpr std::uintptr_t m_b2DFOV                   = 0X08C2; // bool
            static constexpr std::uintptr_t m_bUseVelocity             = 0X08C3; // bool
            static constexpr std::uintptr_t m_bTestOcclusion           = 0X08C4; // bool
            static constexpr std::uintptr_t m_bTestAllVisibleOcclusion = 0X08C5; // bool
            static constexpr std::uintptr_t m_OnTimeout                = 0X08C8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnStartLook              = 0X08E0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnEndLook                = 0X08F8; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Outflow_PlayVCD : public CPulseCell_Outflow_PlaySceneBase {
        public:
            static constexpr std::uintptr_t m_hChoreoScene = 0X00F0; // CStrongHandle<InfoForResourceTypeCChoreoSceneResource>
            static constexpr std::uintptr_t m_OnPaused     = 0X00F8; // CPulse_OutflowConnection
            static constexpr std::uintptr_t m_OnResumed    = 0X0140; // CPulse_OutflowConnection
        };

        // Has VTable
        // Is Absract
        // Local Type Scope
        class CMultiplayRules : public CGameRules {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CMolotovGrenade : public CBaseCSGrenade {
        public:
        };

        // Has VTable
        // Is Absract
        // Local Type Scope
        class CPhysForce : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_nameAttach     = 0X04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_force          = 0X04B8; // float32
            static constexpr std::uintptr_t m_forceTime      = 0X04BC; // float32
            static constexpr std::uintptr_t m_attachedObject = 0X04C0; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_wasRestored    = 0X04C4; // bool
            static constexpr std::uintptr_t m_integrator     = 0X04C8; // CConstantForceController
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysTorque : public CPhysForce {
        public:
            static constexpr std::uintptr_t m_axis = 0X0508; // VectorWS
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CMultiSource : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_rgEntities  = 0X04A8; // CHandle<CBaseEntity>[32]
            static constexpr std::uintptr_t m_rgTriggered = 0X0528; // int32[32]
            static constexpr std::uintptr_t m_OnTrigger   = 0X05A8; // CEntityIOOutput
            static constexpr std::uintptr_t m_iTotal      = 0X05C0; // int32
            static constexpr std::uintptr_t m_globalstate = 0X05C8; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicAuto : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_OnMapSpawn      = 0X04A8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnDemoMapSpawn  = 0X04C0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnNewGame       = 0X04D8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnLoadGame      = 0X04F0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnMapTransition = 0X0508; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnBackgroundMap = 0X0520; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnMultiNewMap   = 0X0538; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnMultiNewRound = 0X0550; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnVREnabled     = 0X0568; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnVRNotEnabled  = 0X0580; // CEntityIOOutput
            static constexpr std::uintptr_t m_globalstate     = 0X0598; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysicsWire : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_nDensity = 0X04A8; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncIllusionary : public CBaseModelEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSGO_TeamSelectCounterTerroristPosition : public CCSGO_TeamSelectCharacterPosition {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerRemove : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_OnRemove = 0X0890; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicGameEventListener : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_OnEventFired     = 0X04B8; // CEntityIOOutput
            static constexpr std::uintptr_t m_iszGameEventName = 0X04D0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszGameEventItem = 0X04D8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bEnabled         = 0X04E0; // bool
            static constexpr std::uintptr_t m_bStartDisabled   = 0X04E1; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CServerOnlyModelEntity : public CBaseModelEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_IntervalTimer : public CPulseCell_BaseYieldingInflow {
        public:
            static constexpr std::uintptr_t m_Completed  = 0X0048; // CPulse_ResumePoint
            static constexpr std::uintptr_t m_OnInterval = 0X0090; // SignatureOutflow_Continue
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CMarkupVolumeTagged_Nav : public CMarkupVolumeTagged {
        public:
            static constexpr std::uintptr_t m_nScopes = 0X0770; // NavScopeFlags_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoPlayerTerrorist : public SpawnPoint {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicAutosave : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_bForceNewLevelUnit   = 0X04A8; // bool
            static constexpr std::uintptr_t m_minHitPoints         = 0X04AC; // int32
            static constexpr std::uintptr_t m_minHitPointsToCommit = 0X04B0; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSGO_TeamIntroTerroristPosition : public CCSGO_TeamIntroCharacterPosition {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Local Type Scope
        class CPulseTestScriptLib {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CSingleplayRules : public CGameRules {
        public:
            static constexpr std::uintptr_t m_bSinglePlayerGameEnding = 0X00D0; // bool
        };

        // Has VTable
        // Local Type Scope
        class CEnvWindShared {
        public:
            static constexpr std::uintptr_t m_flStartTime        = 0X0008; // GameTime_t
            static constexpr std::uintptr_t m_iWindSeed          = 0X000C; // uint32
            static constexpr std::uintptr_t m_iMinWind           = 0X0010; // uint16
            static constexpr std::uintptr_t m_iMaxWind           = 0X0012; // uint16
            static constexpr std::uintptr_t m_windRadius         = 0X0014; // int32
            static constexpr std::uintptr_t m_iMinGust           = 0X0018; // uint16
            static constexpr std::uintptr_t m_iMaxGust           = 0X001A; // uint16
            static constexpr std::uintptr_t m_flMinGustDelay     = 0X001C; // float32
            static constexpr std::uintptr_t m_flMaxGustDelay     = 0X0020; // float32
            static constexpr std::uintptr_t m_flGustDuration     = 0X0024; // float32
            static constexpr std::uintptr_t m_iGustDirChange     = 0X0028; // uint16
            static constexpr std::uintptr_t m_iInitialWindDir    = 0X002A; // uint16
            static constexpr std::uintptr_t m_flInitialWindSpeed = 0X002C; // float32
            static constexpr std::uintptr_t m_location           = 0X0030; // Vector
            static constexpr std::uintptr_t m_OnGustStart        = 0X0040; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnGustEnd          = 0X0058; // CEntityIOOutput
            static constexpr std::uintptr_t m_hEntOwner          = 0X0070; // CHandle<CBaseEntity>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointPrefab : public CServerOnlyPointEntity {
        public:
            static constexpr std::uintptr_t m_targetMapName             = 0X04A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_forceWorldGroupID         = 0X04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_associatedRelayTargetName = 0X04B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_fixupNames                = 0X04C0; // bool
            static constexpr std::uintptr_t m_bLoadDynamic              = 0X04C1; // bool
            static constexpr std::uintptr_t m_associatedRelayEntity     = 0X04C4; // CHandle<CPointPrefab>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvInstructorVRHint : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_iszName             = 0X04A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszHintTargetEntity = 0X04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iTimeout            = 0X04B8; // int32
            static constexpr std::uintptr_t m_iszCaption          = 0X04C0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszStartSound       = 0X04C8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iLayoutFileType     = 0X04D0; // int32
            static constexpr std::uintptr_t m_iszCustomLayoutFile = 0X04D8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iAttachType         = 0X04E0; // int32
            static constexpr std::uintptr_t m_flHeightOffset      = 0X04E4; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CGameRulesProxy : public CBaseEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSGameRulesProxy : public CGameRulesProxy {
        public:
            static constexpr std::uintptr_t m_pGameRules = 0X04A8; // CCSGameRules*
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPrecipitation : public CBaseTrigger {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCommentaryViewPosition : public CSprite {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvGlobal : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_outCounter   = 0X04A8; // CEntityOutputTemplate<int32,int32>
            static constexpr std::uintptr_t m_globalstate  = 0X04C8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_triggermode  = 0X04D0; // int32
            static constexpr std::uintptr_t m_initialstate = 0X04D4; // int32
            static constexpr std::uintptr_t m_counter      = 0X04D8; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicNPCCounterAABB : public CLogicNPCCounter {
        public:
            static constexpr std::uintptr_t m_vDistanceOuterMins = 0X0728; // Vector
            static constexpr std::uintptr_t m_vDistanceOuterMaxs = 0X0734; // Vector
            static constexpr std::uintptr_t m_vOuterMins         = 0X0740; // Vector
            static constexpr std::uintptr_t m_vOuterMaxs         = 0X074C; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicNPCCounterOBB : public CLogicNPCCounterAABB {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPlatTrigger : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_pPlatform = 0X0730; // CHandle<CFuncPlat>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CChoreoInfoTarget : public CPointEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CMapSharedEnvironment : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_targetMapName = 0X04A8; // CUtlSymbolLarge
        };

        // Has VTable
        // Has Trivial Destructor
        // Local Type Scope
        class CNetworkedSequenceOperation {
        public:
            static constexpr std::uintptr_t m_hSequence                        = 0X0008; // HSequence
            static constexpr std::uintptr_t m_flPrevCycle                      = 0X000C; // float32
            static constexpr std::uintptr_t m_flCycle                          = 0X0010; // float32
            static constexpr std::uintptr_t m_flWeight                         = 0X0014; // CNetworkedQuantizedFloat
            static constexpr std::uintptr_t m_bSequenceChangeNetworked         = 0X001C; // bool
            static constexpr std::uintptr_t m_bDiscontinuity                   = 0X001D; // bool
            static constexpr std::uintptr_t m_flPrevCycleFromDiscontinuity     = 0X0020; // float32
            static constexpr std::uintptr_t m_flPrevCycleForAnimEventDetection = 0X0024; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysMagnet : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_OnMagnetAttach      = 0X0A20; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnMagnetDetach      = 0X0A38; // CEntityIOOutput
            static constexpr std::uintptr_t m_massScale           = 0X0A50; // float32
            static constexpr std::uintptr_t m_forceLimit          = 0X0A54; // float32
            static constexpr std::uintptr_t m_torqueLimit         = 0X0A58; // float32
            static constexpr std::uintptr_t m_MagnettedEntities   = 0X0A60; // CUtlVector<magnetted_objects_t>
            static constexpr std::uintptr_t m_bActive             = 0X0A78; // bool
            static constexpr std::uintptr_t m_bHasHitSomething    = 0X0A79; // bool
            static constexpr std::uintptr_t m_flTotalMass         = 0X0A7C; // float32
            static constexpr std::uintptr_t m_flRadius            = 0X0A80; // float32
            static constexpr std::uintptr_t m_flNextSuckTime      = 0X0A84; // GameTime_t
            static constexpr std::uintptr_t m_iMaxObjectsAttached = 0X0A88; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CGameGibManager : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_bAllowNewGibs     = 0X04C0; // bool
            static constexpr std::uintptr_t m_iCurrentMaxPieces = 0X04C4; // int32
            static constexpr std::uintptr_t m_iMaxPieces        = 0X04C8; // int32
            static constexpr std::uintptr_t m_iLastFrame        = 0X04CC; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CHandleDummy : public CBaseEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncWall : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_nState = 0X0730; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncWallToggle : public CFuncWall {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_BulletServices : public CPlayerPawnComponent {
        public:
            static constexpr std::uintptr_t m_totalHitsOnServer = 0X0048; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSkyCamera : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_skyboxData      = 0X04A8; // sky3dparams_t
            static constexpr std::uintptr_t m_skyboxSlotToken = 0X0538; // CUtlStringToken
            static constexpr std::uintptr_t m_bUseAngles      = 0X053C; // bool
            static constexpr std::uintptr_t m_pNext           = 0X0540; // CSkyCamera*
        };

        // Has VTable
        // Is Absract
        // Local Type Scope
        class CPlayer_AutoaimServices : public CPlayerPawnComponent {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CItemDefuser : public CItem {
        public:
            static constexpr std::uintptr_t m_entitySpottedState = 0X0AC0; // EntitySpottedState_t
            static constexpr std::uintptr_t m_nSpotRules         = 0X0AD8; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CItemDefuserAlias_item_defuser : public CItemDefuser {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPathCorner : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_flWait   = 0X04A8; // float32
            static constexpr std::uintptr_t m_flRadius = 0X04AC; // float32
            static constexpr std::uintptr_t m_OnPass   = 0X04B0; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPathCornerCrash : public CPathCorner {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysPulley : public CPhysConstraint {
        public:
            static constexpr std::uintptr_t m_position2 = 0X0508; // VectorWS
            static constexpr std::uintptr_t m_offset    = 0X0514; // Vector[2]
            static constexpr std::uintptr_t m_addLength = 0X052C; // float32
            static constexpr std::uintptr_t m_gearRatio = 0X0530; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSPetPlacement : public CBaseEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponMP5SD : public CCSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CWeaponBaseItem : public CCSWeaponBase {
        public:
            static constexpr std::uintptr_t m_bSequenceInProgress = 0X1130; // bool
            static constexpr std::uintptr_t m_bRedraw             = 0X1131; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCommentaryAuto : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_OnCommentaryNewGame          = 0X04A8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnCommentaryMidGame          = 0X04C0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnCommentaryMultiplayerSpawn = 0X04D8; // CEntityIOOutput
        };

        // Has Trivial Destructor
        // Construct Allowed
        // Local Type Scope
        struct CPulseCell_Outflow_ListenForEntityOutput__CursorState_t {
        public:
            static constexpr std::uintptr_t m_entity = 0X0000; // CHandle<CBaseEntity>
        };

        // Has VTable
        // Local Type Scope
        struct ActiveModelConfig_t {
        public:
            static constexpr std::uintptr_t m_Handle                = 0X0030; // ModelConfigHandle_t
            static constexpr std::uintptr_t m_Name                  = 0X0038; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_AssociatedEntities    = 0X0040; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
            static constexpr std::uintptr_t m_AssociatedEntityNames = 0X0058; // CNetworkUtlVectorBase<CUtlSymbolLarge>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponUSPSilencer : public CCSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundStackSave : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_iszStackName = 0X04A8; // CUtlSymbolLarge
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
        class CWeaponMag7 : public CCSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicMeasureMovement : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_strMeasureTarget    = 0X04A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_strMeasureReference = 0X04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_strTargetReference  = 0X04B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hMeasureTarget      = 0X04C0; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hMeasureReference   = 0X04C4; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hTarget             = 0X04C8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hTargetReference    = 0X04CC; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_flScale             = 0X04D0; // float32
            static constexpr std::uintptr_t m_nMeasureType        = 0X04D4; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CC4 : public CCSWeaponBase {
        public:
            static constexpr std::uintptr_t m_vecLastValidPlayerHeldPosition = 0X1160; // Vector
            static constexpr std::uintptr_t m_vecLastValidDroppedPosition    = 0X116C; // Vector
            static constexpr std::uintptr_t m_bDoValidDroppedPositionCheck   = 0X1178; // bool
            static constexpr std::uintptr_t m_bStartedArming                 = 0X1179; // bool
            static constexpr std::uintptr_t m_fArmedTime                     = 0X117C; // GameTime_t
            static constexpr std::uintptr_t m_bBombPlacedAnimation           = 0X1180; // bool
            static constexpr std::uintptr_t m_bIsPlantingViaUse              = 0X1181; // bool
            static constexpr std::uintptr_t m_entitySpottedState             = 0X1188; // EntitySpottedState_t
            static constexpr std::uintptr_t m_nSpotRules                     = 0X11A0; // int32
            static constexpr std::uintptr_t m_bPlayedArmingBeeps             = 0X11A4; // bool[7]
            static constexpr std::uintptr_t m_bBombPlanted                   = 0X11AB; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CHostageCarriableProp : public CBaseAnimGraph {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CDynamicPropAlias_cable_dynamic : public CDynamicProp {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBaseFlexAlias_funCBaseFlex : public CBaseFlex {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CCSObserver_CameraServices : public CCSPlayerBase_CameraServices {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvDetailController : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_flFadeStartDist = 0X04A8; // float32
            static constexpr std::uintptr_t m_flFadeEndDist   = 0X04AC; // float32
        };

        // Has Trivial Destructor
        // Local Type Scope
        class CTakeDamageInfoAPI {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvSoundscapeProxy : public CEnvSoundscape {
        public:
            static constexpr std::uintptr_t m_MainSoundscapeName = 0X0538; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Inflow_EventHandler : public CPulseCell_Inflow_BaseEntrypoint {
        public:
            static constexpr std::uintptr_t m_EventName = 0X0080; // PulseSymbol_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSPointScriptEntity : public CBaseEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBombTarget : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_OnBombExplode        = 0X0890; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnBombPlanted        = 0X08A8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnBombDefused        = 0X08C0; // CEntityIOOutput
            static constexpr std::uintptr_t m_bIsBombSiteB         = 0X08D8; // bool
            static constexpr std::uintptr_t m_bIsHeistBombTarget   = 0X08D9; // bool
            static constexpr std::uintptr_t m_bBombPlantedHere     = 0X08DA; // bool
            static constexpr std::uintptr_t m_szMountTarget        = 0X08E0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hInstructorHint      = 0X08E8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_nBombSiteDesignation = 0X08EC; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysThruster : public CPhysForce {
        public:
            static constexpr std::uintptr_t m_localOrigin = 0X0508; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoPlayerStart : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled     = 0X04A8; // bool
            static constexpr std::uintptr_t m_bIsMaster     = 0X04A9; // bool
            static constexpr std::uintptr_t m_pPawnSubclass = 0X04B0; // CGlobalSymbol
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEntityFlame : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_hEntAttached            = 0X04A8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_bCheapEffect            = 0X04AC; // bool
            static constexpr std::uintptr_t m_flSize                  = 0X04B0; // float32
            static constexpr std::uintptr_t m_bUseHitboxes            = 0X04B4; // bool
            static constexpr std::uintptr_t m_iNumHitboxFires         = 0X04B8; // int32
            static constexpr std::uintptr_t m_flHitboxFireScale       = 0X04BC; // float32
            static constexpr std::uintptr_t m_flLifetime              = 0X04C0; // GameTime_t
            static constexpr std::uintptr_t m_hAttacker               = 0X04C4; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_flDirectDamagePerSecond = 0X04C8; // float32
            static constexpr std::uintptr_t m_iCustomDamageType       = 0X04CC; // int32
        };

        // Has VTable
        // Local Type Scope
        class CSkeletonInstance : public CGameSceneNode {
        public:
            static constexpr std::uintptr_t m_modelState                           = 0X0140; // CModelState
            static constexpr std::uintptr_t m_bIsAnimationEnabled                  = 0X0390; // bool
            static constexpr std::uintptr_t m_bUseParentRenderBounds               = 0X0391; // bool
            static constexpr std::uintptr_t m_bDisableSolidCollisionsForHierarchy  = 0X0392; // bool
            static constexpr std::uintptr_t m_bDirtyMotionType                     = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bIsGeneratingLatchedParentSpaceState = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_materialGroup                        = 0X0394; // CUtlStringToken
            static constexpr std::uintptr_t m_nHitboxSet                           = 0X0398; // uint8
            static constexpr std::uintptr_t m_bForceServerConstraintsEnabled       = 0X03F4; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointTeleport : public CServerOnlyPointEntity {
        public:
            static constexpr std::uintptr_t m_vSaveOrigin               = 0X04A8; // Vector
            static constexpr std::uintptr_t m_vSaveAngles               = 0X04B4; // QAngle
            static constexpr std::uintptr_t m_bTeleportParentedEntities = 0X04C0; // bool
            static constexpr std::uintptr_t m_bTeleportUseCurrentAngle  = 0X04C1; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerGameEvent : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_strStartTouchEventName = 0X0890; // CUtlString
            static constexpr std::uintptr_t m_strEndTouchEventName   = 0X0898; // CUtlString
            static constexpr std::uintptr_t m_strTriggerID           = 0X08A0; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CMessageEntity : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_radius         = 0X04A8; // int32
            static constexpr std::uintptr_t m_messageText    = 0X04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_drawText       = 0X04B8; // bool
            static constexpr std::uintptr_t m_bDeveloperOnly = 0X04B9; // bool
            static constexpr std::uintptr_t m_bEnabled       = 0X04BA; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvEntityIgniter : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_flLifetime = 0X04A8; // float32
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

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CMarkupVolumeWithRef : public CMarkupVolumeTagged {
        public:
            static constexpr std::uintptr_t m_bUseRef            = 0X0778; // bool
            static constexpr std::uintptr_t m_vRefPosEntitySpace = 0X077C; // Vector
            static constexpr std::uintptr_t m_vRefPosWorldSpace  = 0X0788; // VectorWS
            static constexpr std::uintptr_t m_flRefDot           = 0X0794; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CMarkupVolumeTagged_NavGame : public CMarkupVolumeWithRef {
        public:
            static constexpr std::uintptr_t m_nScopes             = 0X0798; // NavScopeFlags_t
            static constexpr std::uintptr_t m_bFloodFillAttribute = 0X0799; // bool
            static constexpr std::uintptr_t m_bSplitNavSpace      = 0X079A; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CMultiLightProxy : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_iszLightNameFilter            = 0X04A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszLightClassFilter           = 0X04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flLightRadiusFilter           = 0X04B8; // float32
            static constexpr std::uintptr_t m_flBrightnessDelta             = 0X04BC; // float32
            static constexpr std::uintptr_t m_bPerformScreenFade            = 0X04C0; // bool
            static constexpr std::uintptr_t m_flTargetBrightnessMultiplier  = 0X04C4; // float32
            static constexpr std::uintptr_t m_flCurrentBrightnessMultiplier = 0X04C8; // float32
            static constexpr std::uintptr_t m_vecLights                     = 0X04D0; // CUtlVector<CHandle<CLightEntity>>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponM4A1 : public CCSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerHostageReset : public CBaseTrigger {
        public:
        };

        // Has Trivial Destructor
        // Local Type Scope
        class CPulseAnimFuncs {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEconWearable : public CEconEntity {
        public:
            static constexpr std::uintptr_t m_nForceSkin   = 0X0DE0; // int32
            static constexpr std::uintptr_t m_bAlwaysAllow = 0X0DE4; // bool
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

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponMAC10 : public CCSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFogController : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_fog               = 0X04A8; // fogparams_t
            static constexpr std::uintptr_t m_bUseAngles        = 0X0510; // bool
            static constexpr std::uintptr_t m_iChangedVariables = 0X0514; // int32
        };

        // Has Trivial Destructor
        // Local Type Scope
        class CPointTemplateAPI {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerPush : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_angPushEntitySpace    = 0X0890; // QAngle
            static constexpr std::uintptr_t m_vecPushDirEntitySpace = 0X089C; // Vector
            static constexpr std::uintptr_t m_bTriggerOnStartTouch  = 0X08A8; // bool
            static constexpr std::uintptr_t m_bUsePathSimple        = 0X08A9; // bool
            static constexpr std::uintptr_t m_iszPathSimpleName     = 0X08B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_PathSimple            = 0X08B8; // CPathSimple*
            static constexpr std::uintptr_t m_splinePushType        = 0X08C0; // uint32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoOffscreenPanoramaTexture : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled                = 0X04A8; // bool
            static constexpr std::uintptr_t m_nResolutionX             = 0X04AC; // int32
            static constexpr std::uintptr_t m_nResolutionY             = 0X04B0; // int32
            static constexpr std::uintptr_t m_szPanelType              = 0X04B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_szLayoutFileName         = 0X04C0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_RenderAttrName           = 0X04C8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_TargetEntities           = 0X04D0; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
            static constexpr std::uintptr_t m_nTargetChangeCount       = 0X04E8; // int32
            static constexpr std::uintptr_t m_vecCSSClasses            = 0X04F0; // CNetworkUtlVectorBase<CUtlSymbolLarge>
            static constexpr std::uintptr_t m_szTargetsName            = 0X0508; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_AdditionalTargetEntities = 0X0510; // CUtlVector<CHandle<CBaseModelEntity>>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointAngularVelocitySensor : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_hTargetEntity          = 0X04A8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_flThreshold            = 0X04AC; // float32
            static constexpr std::uintptr_t m_nLastCompareResult     = 0X04B0; // int32
            static constexpr std::uintptr_t m_nLastFireResult        = 0X04B4; // int32
            static constexpr std::uintptr_t m_flFireTime             = 0X04B8; // GameTime_t
            static constexpr std::uintptr_t m_flFireInterval         = 0X04BC; // float32
            static constexpr std::uintptr_t m_flLastAngVelocity      = 0X04C0; // float32
            static constexpr std::uintptr_t m_lastOrientation        = 0X04C4; // QAngle
            static constexpr std::uintptr_t m_vecAxis                = 0X04D0; // VectorWS
            static constexpr std::uintptr_t m_bUseHelper             = 0X04DC; // bool
            static constexpr std::uintptr_t m_AngularVelocity        = 0X04E0; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnLessThan             = 0X0500; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnLessThanOrEqualTo    = 0X0518; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnGreaterThan          = 0X0530; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnGreaterThanOrEqualTo = 0X0548; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnEqualTo              = 0X0560; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPlayerVisibility : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_flVisibilityStrength      = 0X04A8; // float32
            static constexpr std::uintptr_t m_flFogDistanceMultiplier   = 0X04AC; // float32
            static constexpr std::uintptr_t m_flFogMaxDensityMultiplier = 0X04B0; // float32
            static constexpr std::uintptr_t m_flFadeTime                = 0X04B4; // float32
            static constexpr std::uintptr_t m_bStartDisabled            = 0X04B8; // bool
            static constexpr std::uintptr_t m_bIsEnabled                = 0X04B9; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Step_FollowEntity : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_ParamBoneOrAttachName      = 0X0048; // CUtlString
            static constexpr std::uintptr_t m_ParamBoneOrAttachNameChild = 0X0050; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFlashbang : public CBaseCSGrenade {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBasePlayerWeaponVData : public CEntitySubclassVDataBase {
        public:
            static constexpr std::uintptr_t m_szWorldModel                = 0X0028; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            static constexpr std::uintptr_t m_sToolsOnlyOwnerModelName    = 0X0108; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            static constexpr std::uintptr_t m_bBuiltRightHanded           = 0X01E8; // bool
            static constexpr std::uintptr_t m_bAllowFlipping              = 0X01E9; // bool
            static constexpr std::uintptr_t m_sMuzzleAttachment           = 0X01F0; // CAttachmentNameSymbolWithStorage
            static constexpr std::uintptr_t m_szMuzzleFlashParticle       = 0X0210; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            static constexpr std::uintptr_t m_szMuzzleFlashParticleConfig = 0X02F0; // CUtlString
            static constexpr std::uintptr_t m_szBarrelSmokeParticle       = 0X02F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            static constexpr std::uintptr_t m_nMuzzleSmokeShotThreshold   = 0X03D8; // uint8
            static constexpr std::uintptr_t m_flMuzzleSmokeTimeout        = 0X03DC; // float32
            static constexpr std::uintptr_t m_flMuzzleSmokeDecrementRate  = 0X03E0; // float32
            static constexpr std::uintptr_t m_bGenerateMuzzleLight        = 0X03E4; // bool
            static constexpr std::uintptr_t m_bLinkedCooldowns            = 0X03E5; // bool
            static constexpr std::uintptr_t m_iFlags                      = 0X03E6; // ItemFlagTypes_t
            static constexpr std::uintptr_t m_iWeight                     = 0X03E8; // int32
            static constexpr std::uintptr_t m_bAutoSwitchTo               = 0X03EC; // bool
            static constexpr std::uintptr_t m_bAutoSwitchFrom             = 0X03ED; // bool
            static constexpr std::uintptr_t m_nPrimaryAmmoType            = 0X03EE; // AmmoIndex_t
            static constexpr std::uintptr_t m_nSecondaryAmmoType          = 0X03EF; // AmmoIndex_t
            static constexpr std::uintptr_t m_iMaxClip1                   = 0X03F0; // int32
            static constexpr std::uintptr_t m_iMaxClip2                   = 0X03F4; // int32
            static constexpr std::uintptr_t m_iDefaultClip1               = 0X03F8; // int32
            static constexpr std::uintptr_t m_iDefaultClip2               = 0X03FC; // int32
            static constexpr std::uintptr_t m_bReserveAmmoAsClips         = 0X0400; // bool
            static constexpr std::uintptr_t m_bTreatAsSingleClip          = 0X0401; // bool
            static constexpr std::uintptr_t m_bKeepLoadedAmmo             = 0X0402; // bool
            static constexpr std::uintptr_t m_iRumbleEffect               = 0X0404; // RumbleEffect_t
            static constexpr std::uintptr_t m_flDropSpeed                 = 0X0408; // float32
            static constexpr std::uintptr_t m_iSlot                       = 0X040C; // int32
            static constexpr std::uintptr_t m_iPosition                   = 0X0410; // int32
            static constexpr std::uintptr_t m_aShootSounds                = 0X0418; // CUtlOrderedMap<WeaponSound_t,CSoundEventName>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSWeaponBaseVData : public CBasePlayerWeaponVData {
        public:
            static constexpr std::uintptr_t m_WeaponType                               = 0X0440; // CSWeaponType
            static constexpr std::uintptr_t m_WeaponCategory                           = 0X0444; // CSWeaponCategory
            static constexpr std::uintptr_t m_szAnimSkeleton                           = 0X0448; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCNmSkeleton>>
            static constexpr std::uintptr_t m_vecMuzzlePos0                            = 0X0528; // Vector
            static constexpr std::uintptr_t m_vecMuzzlePos1                            = 0X0534; // Vector
            static constexpr std::uintptr_t m_szTracerParticle                         = 0X0540; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            static constexpr std::uintptr_t m_GearSlot                                 = 0X0620; // gear_slot_t
            static constexpr std::uintptr_t m_GearSlotPosition                         = 0X0624; // int32
            static constexpr std::uintptr_t m_DefaultLoadoutSlot                       = 0X0628; // loadout_slot_t
            static constexpr std::uintptr_t m_nPrice                                   = 0X062C; // int32
            static constexpr std::uintptr_t m_nKillAward                               = 0X0630; // int32
            static constexpr std::uintptr_t m_nPrimaryReserveAmmoMax                   = 0X0634; // int32
            static constexpr std::uintptr_t m_nSecondaryReserveAmmoMax                 = 0X0638; // int32
            static constexpr std::uintptr_t m_bMeleeWeapon                             = 0X063C; // bool
            static constexpr std::uintptr_t m_bHasBurstMode                            = 0X063D; // bool
            static constexpr std::uintptr_t m_bIsRevolver                              = 0X063E; // bool
            static constexpr std::uintptr_t m_bCannotShootUnderwater                   = 0X063F; // bool
            static constexpr std::uintptr_t m_szName                                   = 0X0640; // CGlobalSymbol
            static constexpr std::uintptr_t m_eSilencerType                            = 0X0648; // CSWeaponSilencerType
            static constexpr std::uintptr_t m_nCrosshairMinDistance                    = 0X064C; // int32
            static constexpr std::uintptr_t m_nCrosshairDeltaDistance                  = 0X0650; // int32
            static constexpr std::uintptr_t m_bIsFullAuto                              = 0X0654; // bool
            static constexpr std::uintptr_t m_nNumBullets                              = 0X0658; // int32
            static constexpr std::uintptr_t m_bReloadsSingleShells                     = 0X065C; // bool
            static constexpr std::uintptr_t m_flCycleTime                              = 0X0660; // CFiringModeFloat
            static constexpr std::uintptr_t m_flMaxSpeed                               = 0X0668; // CFiringModeFloat
            static constexpr std::uintptr_t m_flSpread                                 = 0X0670; // CFiringModeFloat
            static constexpr std::uintptr_t m_flInaccuracyCrouch                       = 0X0678; // CFiringModeFloat
            static constexpr std::uintptr_t m_flInaccuracyStand                        = 0X0680; // CFiringModeFloat
            static constexpr std::uintptr_t m_flInaccuracyJump                         = 0X0688; // CFiringModeFloat
            static constexpr std::uintptr_t m_flInaccuracyLand                         = 0X0690; // CFiringModeFloat
            static constexpr std::uintptr_t m_flInaccuracyLadder                       = 0X0698; // CFiringModeFloat
            static constexpr std::uintptr_t m_flInaccuracyFire                         = 0X06A0; // CFiringModeFloat
            static constexpr std::uintptr_t m_flInaccuracyMove                         = 0X06A8; // CFiringModeFloat
            static constexpr std::uintptr_t m_flRecoilAngle                            = 0X06B0; // CFiringModeFloat
            static constexpr std::uintptr_t m_flRecoilAngleVariance                    = 0X06B8; // CFiringModeFloat
            static constexpr std::uintptr_t m_flRecoilMagnitude                        = 0X06C0; // CFiringModeFloat
            static constexpr std::uintptr_t m_flRecoilMagnitudeVariance                = 0X06C8; // CFiringModeFloat
            static constexpr std::uintptr_t m_nTracerFrequency                         = 0X06D0; // CFiringModeInt
            static constexpr std::uintptr_t m_flInaccuracyJumpInitial                  = 0X06D8; // float32
            static constexpr std::uintptr_t m_flInaccuracyJumpApex                     = 0X06DC; // float32
            static constexpr std::uintptr_t m_flInaccuracyReload                       = 0X06E0; // float32
            static constexpr std::uintptr_t m_flDeployDuration                         = 0X06E4; // float32
            static constexpr std::uintptr_t m_flDisallowAttackAfterReloadStartDuration = 0X06E8; // float32
            static constexpr std::uintptr_t m_nBurstShotCount                          = 0X06EC; // int32
            static constexpr std::uintptr_t m_bAllowBurstHolster                       = 0X06F0; // bool
            static constexpr std::uintptr_t m_nRecoilSeed                              = 0X06F4; // int32
            static constexpr std::uintptr_t m_nSpreadSeed                              = 0X06F8; // int32
            static constexpr std::uintptr_t m_flAttackMovespeedFactor                  = 0X06FC; // float32
            static constexpr std::uintptr_t m_flInaccuracyPitchShift                   = 0X0700; // float32
            static constexpr std::uintptr_t m_flInaccuracyAltSoundThreshold            = 0X0704; // float32
            static constexpr std::uintptr_t m_szUseRadioSubtitle                       = 0X0708; // CUtlString
            static constexpr std::uintptr_t m_bUnzoomsAfterShot                        = 0X0710; // bool
            static constexpr std::uintptr_t m_bHideViewModelWhenZoomed                 = 0X0711; // bool
            static constexpr std::uintptr_t m_nZoomLevels                              = 0X0714; // int32
            static constexpr std::uintptr_t m_nZoomFOV1                                = 0X0718; // int32
            static constexpr std::uintptr_t m_nZoomFOV2                                = 0X071C; // int32
            static constexpr std::uintptr_t m_flZoomTime0                              = 0X0720; // float32
            static constexpr std::uintptr_t m_flZoomTime1                              = 0X0724; // float32
            static constexpr std::uintptr_t m_flZoomTime2                              = 0X0728; // float32
            static constexpr std::uintptr_t m_flIronSightPullUpSpeed                   = 0X072C; // float32
            static constexpr std::uintptr_t m_flIronSightPutDownSpeed                  = 0X0730; // float32
            static constexpr std::uintptr_t m_flIronSightFOV                           = 0X0734; // float32
            static constexpr std::uintptr_t m_flIronSightPivotForward                  = 0X0738; // float32
            static constexpr std::uintptr_t m_flIronSightLooseness                     = 0X073C; // float32
            static constexpr std::uintptr_t m_nDamage                                  = 0X0740; // int32
            static constexpr std::uintptr_t m_flHeadshotMultiplier                     = 0X0744; // float32
            static constexpr std::uintptr_t m_flArmorRatio                             = 0X0748; // float32
            static constexpr std::uintptr_t m_flPenetration                            = 0X074C; // float32
            static constexpr std::uintptr_t m_flRange                                  = 0X0750; // float32
            static constexpr std::uintptr_t m_flRangeModifier                          = 0X0754; // float32
            static constexpr std::uintptr_t m_flFlinchVelocityModifierLarge            = 0X0758; // float32
            static constexpr std::uintptr_t m_flFlinchVelocityModifierSmall            = 0X075C; // float32
            static constexpr std::uintptr_t m_flRecoveryTimeCrouch                     = 0X0760; // float32
            static constexpr std::uintptr_t m_flRecoveryTimeStand                      = 0X0764; // float32
            static constexpr std::uintptr_t m_flRecoveryTimeCrouchFinal                = 0X0768; // float32
            static constexpr std::uintptr_t m_flRecoveryTimeStandFinal                 = 0X076C; // float32
            static constexpr std::uintptr_t m_nRecoveryTransitionStartBullet           = 0X0770; // int32
            static constexpr std::uintptr_t m_nRecoveryTransitionEndBullet             = 0X0774; // int32
            static constexpr std::uintptr_t m_flThrowVelocity                          = 0X0778; // float32
            static constexpr std::uintptr_t m_vSmokeColor                              = 0X077C; // Vector
            static constexpr std::uintptr_t m_szAnimClass                              = 0X0788; // CGlobalSymbol
        };

        // Has VTable
        // Local Type Scope
        class CAttributeManager {
        public:
            static constexpr std::uintptr_t m_Providers               = 0X0008; // CUtlVector<CHandle<CBaseEntity>>
            static constexpr std::uintptr_t m_iReapplyProvisionParity = 0X0020; // int32
            static constexpr std::uintptr_t m_hOuter                  = 0X0024; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_bPreventLoopback        = 0X0028; // bool
            static constexpr std::uintptr_t m_ProviderType            = 0X002C; // attributeprovidertypes_t
            static constexpr std::uintptr_t m_CachedResults           = 0X0030; // CUtlVector<CAttributeManager::cached_attribute_float_t>
        };

        // Local Type Scope
        class SignatureOutflow_Continue : public CPulse_OutflowConnection {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoTarget : public CPointEntity {
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

        // Construct Allowed
        // Local Type Scope
        class CScenePayloadVData {
        public:
            static constexpr std::uintptr_t m_sSceneFile = 0X0000; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCChoreoSceneResource>>
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Local Type Scope
        class CPulseFuncs_GameParticleManager {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFilterAttributeInt : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_sAttributeName = 0X04E0; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CKeepUpright : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_worldGoalAxis    = 0X04B0; // Vector
            static constexpr std::uintptr_t m_localTestAxis    = 0X04BC; // Vector
            static constexpr std::uintptr_t m_nameAttach       = 0X04D0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_attachedObject   = 0X04D8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_angularLimit     = 0X04DC; // float32
            static constexpr std::uintptr_t m_bActive          = 0X04E0; // bool
            static constexpr std::uintptr_t m_bDampAllRotation = 0X04E1; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointTemplate : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_iszWorldName                 = 0X04A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszSource2EntityLumpName     = 0X04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszEntityFilterName          = 0X04B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flTimeoutInterval            = 0X04C0; // float32
            static constexpr std::uintptr_t m_bAsynchronouslySpawnEntities = 0X04C4; // bool
            static constexpr std::uintptr_t m_clientOnlyEntityBehavior     = 0X04C8; // PointTemplateClientOnlyEntityBehavior_t
            static constexpr std::uintptr_t m_ownerSpawnGroupType          = 0X04CC; // PointTemplateOwnerSpawnGroupType_t
            static constexpr std::uintptr_t m_createdSpawnGroupHandles     = 0X04D0; // CUtlVector<uint32>
            static constexpr std::uintptr_t m_SpawnedEntityHandles         = 0X04E8; // CUtlVector<CEntityHandle>
            static constexpr std::uintptr_t m_ScriptSpawnCallback          = 0X0500; // HSCRIPT
            static constexpr std::uintptr_t m_ScriptCallbackScope          = 0X0508; // HSCRIPT
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvVolumetricFogController : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_flScattering               = 0X04A8; // float32
            static constexpr std::uintptr_t m_TintColor                  = 0X04AC; // Color
            static constexpr std::uintptr_t m_flAnisotropy               = 0X04B0; // float32
            static constexpr std::uintptr_t m_flFadeSpeed                = 0X04B4; // float32
            static constexpr std::uintptr_t m_flDrawDistance             = 0X04B8; // float32
            static constexpr std::uintptr_t m_flFadeInStart              = 0X04BC; // float32
            static constexpr std::uintptr_t m_flFadeInEnd                = 0X04C0; // float32
            static constexpr std::uintptr_t m_flIndirectStrength         = 0X04C4; // float32
            static constexpr std::uintptr_t m_nVolumeDepth               = 0X04C8; // int32
            static constexpr std::uintptr_t m_fFirstVolumeSliceThickness = 0X04CC; // float32
            static constexpr std::uintptr_t m_nIndirectTextureDimX       = 0X04D0; // int32
            static constexpr std::uintptr_t m_nIndirectTextureDimY       = 0X04D4; // int32
            static constexpr std::uintptr_t m_nIndirectTextureDimZ       = 0X04D8; // int32
            static constexpr std::uintptr_t m_vBoxMins                   = 0X04DC; // Vector
            static constexpr std::uintptr_t m_vBoxMaxs                   = 0X04E8; // Vector
            static constexpr std::uintptr_t m_bActive                    = 0X04F4; // bool
            static constexpr std::uintptr_t m_flStartAnisoTime           = 0X04F8; // GameTime_t
            static constexpr std::uintptr_t m_flStartScatterTime         = 0X04FC; // GameTime_t
            static constexpr std::uintptr_t m_flStartDrawDistanceTime    = 0X0500; // GameTime_t
            static constexpr std::uintptr_t m_flStartAnisotropy          = 0X0504; // float32
            static constexpr std::uintptr_t m_flStartScattering          = 0X0508; // float32
            static constexpr std::uintptr_t m_flStartDrawDistance        = 0X050C; // float32
            static constexpr std::uintptr_t m_flDefaultAnisotropy        = 0X0510; // float32
            static constexpr std::uintptr_t m_flDefaultScattering        = 0X0514; // float32
            static constexpr std::uintptr_t m_flDefaultDrawDistance      = 0X0518; // float32
            static constexpr std::uintptr_t m_bStartDisabled             = 0X051C; // bool
            static constexpr std::uintptr_t m_bEnableIndirect            = 0X051D; // bool
            static constexpr std::uintptr_t m_bIsMaster                  = 0X051E; // bool
            static constexpr std::uintptr_t m_hFogIndirectTexture        = 0X0520; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_nForceRefreshCount         = 0X0528; // int32
            static constexpr std::uintptr_t m_fNoiseSpeed                = 0X052C; // float32
            static constexpr std::uintptr_t m_fNoiseStrength             = 0X0530; // float32
            static constexpr std::uintptr_t m_vNoiseScale                = 0X0534; // Vector
            static constexpr std::uintptr_t m_fWindSpeed                 = 0X0540; // float32
            static constexpr std::uintptr_t m_vWindDirection             = 0X0544; // Vector
            static constexpr std::uintptr_t m_bFirstTime                 = 0X0550; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Step_SetAnimGraphParam : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_ParamName = 0X0048; // CUtlString
        };

        // Has VTable
        // Local Type Scope
        class CPlayer_FlashlightServices : public CPlayerPawnComponent {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBasePlayerController : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_nInButtonsWhichAreToggles   = 0X04B0; // uint64
            static constexpr std::uintptr_t m_nTickBase                   = 0X04B8; // uint32
            static constexpr std::uintptr_t m_hPawn                       = 0X04E0; // CHandle<CBasePlayerPawn>
            static constexpr std::uintptr_t m_bKnownTeamMismatch          = 0X04E4; // bool
            static constexpr std::uintptr_t m_nSplitScreenSlot            = 0X04E8; // CSplitScreenSlot
            static constexpr std::uintptr_t m_hSplitOwner                 = 0X04EC; // CHandle<CBasePlayerController>
            static constexpr std::uintptr_t m_hSplitScreenPlayers         = 0X04F0; // CUtlVector<CHandle<CBasePlayerController>>
            static constexpr std::uintptr_t m_bIsHLTV                     = 0X0508; // bool
            static constexpr std::uintptr_t m_iConnected                  = 0X050C; // PlayerConnectedState
            static constexpr std::uintptr_t m_iszPlayerName               = 0X0510; // char[128]
            static constexpr std::uintptr_t m_szNetworkIDString           = 0X0590; // CUtlString
            static constexpr std::uintptr_t m_fLerpTime                   = 0X0598; // float32
            static constexpr std::uintptr_t m_bLagCompensation            = 0X059C; // bool
            static constexpr std::uintptr_t m_bPredict                    = 0X059D; // bool
            static constexpr std::uintptr_t m_bIsLowViolence              = 0X05A4; // bool
            static constexpr std::uintptr_t m_bGamePaused                 = 0X05A5; // bool
            static constexpr std::uintptr_t m_iIgnoreGlobalChat           = 0X06E0; // ChatIgnoreType_t
            static constexpr std::uintptr_t m_flLastPlayerTalkTime        = 0X06E4; // float32
            static constexpr std::uintptr_t m_flLastEntitySteadyState     = 0X06E8; // float32
            static constexpr std::uintptr_t m_nAvailableEntitySteadyState = 0X06EC; // int32
            static constexpr std::uintptr_t m_bHasAnySteadyStateEnts      = 0X06F0; // bool
            static constexpr std::uintptr_t m_steamID                     = 0X0700; // uint64
            static constexpr std::uintptr_t m_bNoClipEnabled              = 0X0708; // bool
            static constexpr std::uintptr_t m_iDesiredFOV                 = 0X070C; // uint32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSPlayerController : public CBasePlayerController {
        public:
            static constexpr std::uintptr_t m_pInGameMoneyServices                        = 0X07D8; // CCSPlayerController_InGameMoneyServices*
            static constexpr std::uintptr_t m_pInventoryServices                          = 0X07E0; // CCSPlayerController_InventoryServices*
            static constexpr std::uintptr_t m_pActionTrackingServices                     = 0X07E8; // CCSPlayerController_ActionTrackingServices*
            static constexpr std::uintptr_t m_pDamageServices                             = 0X07F0; // CCSPlayerController_DamageServices*
            static constexpr std::uintptr_t m_iPing                                       = 0X07F8; // uint32
            static constexpr std::uintptr_t m_bHasCommunicationAbuseMute                  = 0X07FC; // bool
            static constexpr std::uintptr_t m_uiCommunicationMuteFlags                    = 0X0800; // uint32
            static constexpr std::uintptr_t m_szCrosshairCodes                            = 0X0808; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iPendingTeamNum                             = 0X0810; // uint8
            static constexpr std::uintptr_t m_flForceTeamTime                             = 0X0814; // GameTime_t
            static constexpr std::uintptr_t m_iCompTeammateColor                          = 0X0818; // int32
            static constexpr std::uintptr_t m_bEverPlayedOnTeam                           = 0X081C; // bool
            static constexpr std::uintptr_t m_bAttemptedToGetColor                        = 0X081D; // bool
            static constexpr std::uintptr_t m_iTeammatePreferredColor                     = 0X0820; // int32
            static constexpr std::uintptr_t m_bTeamChanged                                = 0X0824; // bool
            static constexpr std::uintptr_t m_bInSwitchTeam                               = 0X0825; // bool
            static constexpr std::uintptr_t m_bHasSeenJoinGame                            = 0X0826; // bool
            static constexpr std::uintptr_t m_bJustBecameSpectator                        = 0X0827; // bool
            static constexpr std::uintptr_t m_bSwitchTeamsOnNextRoundReset                = 0X0828; // bool
            static constexpr std::uintptr_t m_bRemoveAllItemsOnNextRoundReset             = 0X0829; // bool
            static constexpr std::uintptr_t m_flLastJoinTeamTime                          = 0X082C; // GameTime_t
            static constexpr std::uintptr_t m_szClan                                      = 0X0830; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iCoachingTeam                               = 0X0838; // int32
            static constexpr std::uintptr_t m_nPlayerDominated                            = 0X0840; // uint64
            static constexpr std::uintptr_t m_nPlayerDominatingMe                         = 0X0848; // uint64
            static constexpr std::uintptr_t m_iCompetitiveRanking                         = 0X0850; // int32
            static constexpr std::uintptr_t m_iCompetitiveWins                            = 0X0854; // int32
            static constexpr std::uintptr_t m_iCompetitiveRankType                        = 0X0858; // int8
            static constexpr std::uintptr_t m_iCompetitiveRankingPredicted_Win            = 0X085C; // int32
            static constexpr std::uintptr_t m_iCompetitiveRankingPredicted_Loss           = 0X0860; // int32
            static constexpr std::uintptr_t m_iCompetitiveRankingPredicted_Tie            = 0X0864; // int32
            static constexpr std::uintptr_t m_nEndMatchNextMapVote                        = 0X0868; // int32
            static constexpr std::uintptr_t m_unActiveQuestId                             = 0X086C; // uint16
            static constexpr std::uintptr_t m_rtActiveMissionPeriod                       = 0X0870; // uint32
            static constexpr std::uintptr_t m_nQuestProgressReason                        = 0X0874; // QuestProgress::Reason
            static constexpr std::uintptr_t m_unPlayerTvControlFlags                      = 0X0878; // uint32
            static constexpr std::uintptr_t m_iDraftIndex                                 = 0X08A8; // int32
            static constexpr std::uintptr_t m_msQueuedModeDisconnectionTimestamp          = 0X08AC; // uint32
            static constexpr std::uintptr_t m_uiAbandonRecordedReason                     = 0X08B0; // uint32
            static constexpr std::uintptr_t m_eNetworkDisconnectionReason                 = 0X08B4; // uint32
            static constexpr std::uintptr_t m_bCannotBeKicked                             = 0X08B8; // bool
            static constexpr std::uintptr_t m_bEverFullyConnected                         = 0X08B9; // bool
            static constexpr std::uintptr_t m_bAbandonAllowsSurrender                     = 0X08BA; // bool
            static constexpr std::uintptr_t m_bAbandonOffersInstantSurrender              = 0X08BB; // bool
            static constexpr std::uintptr_t m_bDisconnection1MinWarningPrinted            = 0X08BC; // bool
            static constexpr std::uintptr_t m_bScoreReported                              = 0X08BD; // bool
            static constexpr std::uintptr_t m_nDisconnectionTick                          = 0X08C0; // int32
            static constexpr std::uintptr_t m_bControllingBot                             = 0X08D0; // bool
            static constexpr std::uintptr_t m_bHasControlledBotThisRound                  = 0X08D1; // bool
            static constexpr std::uintptr_t m_bHasBeenControlledByPlayerThisRound         = 0X08D2; // bool
            static constexpr std::uintptr_t m_nBotsControlledThisRound                    = 0X08D4; // int32
            static constexpr std::uintptr_t m_bCanControlObservedBot                      = 0X08D8; // bool
            static constexpr std::uintptr_t m_hPlayerPawn                                 = 0X08DC; // CHandle<CCSPlayerPawn>
            static constexpr std::uintptr_t m_hObserverPawn                               = 0X08E0; // CHandle<CCSObserverPawn>
            static constexpr std::uintptr_t m_DesiredObserverMode                         = 0X08E4; // int32
            static constexpr std::uintptr_t m_hDesiredObserverTarget                      = 0X08E8; // CEntityHandle
            static constexpr std::uintptr_t m_bPawnIsAlive                                = 0X08EC; // bool
            static constexpr std::uintptr_t m_iPawnHealth                                 = 0X08F0; // uint32
            static constexpr std::uintptr_t m_iPawnArmor                                  = 0X08F4; // int32
            static constexpr std::uintptr_t m_bPawnHasDefuser                             = 0X08F8; // bool
            static constexpr std::uintptr_t m_bPawnHasHelmet                              = 0X08F9; // bool
            static constexpr std::uintptr_t m_nPawnCharacterDefIndex                      = 0X08FA; // uint16
            static constexpr std::uintptr_t m_iPawnLifetimeStart                          = 0X08FC; // int32
            static constexpr std::uintptr_t m_iPawnLifetimeEnd                            = 0X0900; // int32
            static constexpr std::uintptr_t m_iPawnBotDifficulty                          = 0X0904; // int32
            static constexpr std::uintptr_t m_hOriginalControllerOfCurrentPawn            = 0X0908; // CHandle<CCSPlayerController>
            static constexpr std::uintptr_t m_iScore                                      = 0X090C; // int32
            static constexpr std::uintptr_t m_iRoundScore                                 = 0X0910; // int32
            static constexpr std::uintptr_t m_iRoundsWon                                  = 0X0914; // int32
            static constexpr std::uintptr_t m_recentKillQueue                             = 0X0918; // uint8[8]
            static constexpr std::uintptr_t m_nFirstKill                                  = 0X0920; // uint8
            static constexpr std::uintptr_t m_nKillCount                                  = 0X0921; // uint8
            static constexpr std::uintptr_t m_bMvpNoMusic                                 = 0X0922; // bool
            static constexpr std::uintptr_t m_eMvpReason                                  = 0X0924; // int32
            static constexpr std::uintptr_t m_iMusicKitID                                 = 0X0928; // int32
            static constexpr std::uintptr_t m_iMusicKitMVPs                               = 0X092C; // int32
            static constexpr std::uintptr_t m_iMVPs                                       = 0X0930; // int32
            static constexpr std::uintptr_t m_nUpdateCounter                              = 0X0934; // int32
            static constexpr std::uintptr_t m_flSmoothedPing                              = 0X0938; // float32
            static constexpr std::uintptr_t m_lastHeldVoteTimer                           = 0X0940; // IntervalTimer
            static constexpr std::uintptr_t m_bShowHints                                  = 0X0958; // bool
            static constexpr std::uintptr_t m_iNextTimeCheck                              = 0X095C; // int32
            static constexpr std::uintptr_t m_bJustDidTeamKill                            = 0X0960; // bool
            static constexpr std::uintptr_t m_bPunishForTeamKill                          = 0X0961; // bool
            static constexpr std::uintptr_t m_bGaveTeamDamageWarning                      = 0X0962; // bool
            static constexpr std::uintptr_t m_bGaveTeamDamageWarningThisRound             = 0X0963; // bool
            static constexpr std::uintptr_t m_dblLastReceivedPacketPlatFloatTime          = 0X0968; // float64
            static constexpr std::uintptr_t m_LastTeamDamageWarningTime                   = 0X0970; // GameTime_t
            static constexpr std::uintptr_t m_LastTimePlayerWasDisconnectedForPawnsRemove = 0X0974; // GameTime_t
            static constexpr std::uintptr_t m_nSuspiciousHitCount                         = 0X0978; // uint32
            static constexpr std::uintptr_t m_nNonSuspiciousHitStreak                     = 0X097C; // uint32
            static constexpr std::uintptr_t m_bFireBulletsSeedSynchronized                = 0X0A21; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysLength : public CPhysConstraint {
        public:
            static constexpr std::uintptr_t m_offset      = 0X0508; // Vector[2]
            static constexpr std::uintptr_t m_vecAttach   = 0X0520; // VectorWS
            static constexpr std::uintptr_t m_addLength   = 0X052C; // float32
            static constexpr std::uintptr_t m_minLength   = 0X0530; // float32
            static constexpr std::uintptr_t m_totalLength = 0X0534; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTeam : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_aPlayerControllers = 0X04A8; // CNetworkUtlVectorBase<CHandle<CBasePlayerController>>
            static constexpr std::uintptr_t m_aPlayers           = 0X04C0; // CNetworkUtlVectorBase<CHandle<CBasePlayerPawn>>
            static constexpr std::uintptr_t m_iScore             = 0X04D8; // int32
            static constexpr std::uintptr_t m_szTeamname         = 0X04DC; // char[129]
        };

        // Has Trivial Destructor
        // Construct Allowed
        // Local Type Scope
        struct CPulseCell_Outflow_CycleOrdered__InstanceState_t {
        public:
            static constexpr std::uintptr_t m_nNextIndex = 0X0000; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CChicken : public CDynamicProp {
        public:
            static constexpr std::uintptr_t m_AttributeManager        = 0X0C70; // CAttributeContainer
            static constexpr std::uintptr_t m_updateTimer             = 0X0F68; // CountdownTimer
            static constexpr std::uintptr_t m_stuckAnchor             = 0X0F80; // Vector
            static constexpr std::uintptr_t m_stuckTimer              = 0X0F90; // CountdownTimer
            static constexpr std::uintptr_t m_collisionStuckTimer     = 0X0FA8; // CountdownTimer
            static constexpr std::uintptr_t m_isOnGround              = 0X0FC0; // bool
            static constexpr std::uintptr_t m_vFallVelocity           = 0X0FC4; // Vector
            static constexpr std::uintptr_t m_desiredActivity         = 0X0FD0; // ChickenActivity
            static constexpr std::uintptr_t m_currentActivity         = 0X0FD4; // ChickenActivity
            static constexpr std::uintptr_t m_activityTimer           = 0X0FD8; // CountdownTimer
            static constexpr std::uintptr_t m_turnRate                = 0X0FF0; // float32
            static constexpr std::uintptr_t m_fleeFrom                = 0X0FF4; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_moveRateThrottleTimer   = 0X0FF8; // CountdownTimer
            static constexpr std::uintptr_t m_startleTimer            = 0X1010; // CountdownTimer
            static constexpr std::uintptr_t m_vocalizeTimer           = 0X1028; // CountdownTimer
            static constexpr std::uintptr_t m_flWhenZombified         = 0X1040; // GameTime_t
            static constexpr std::uintptr_t m_jumpedThisFrame         = 0X1044; // bool
            static constexpr std::uintptr_t m_leader                  = 0X1048; // CHandle<CCSPlayerPawn>
            static constexpr std::uintptr_t m_reuseTimer              = 0X1060; // CountdownTimer
            static constexpr std::uintptr_t m_hasBeenUsed             = 0X1078; // bool
            static constexpr std::uintptr_t m_jumpTimer               = 0X1080; // CountdownTimer
            static constexpr std::uintptr_t m_flLastJumpTime          = 0X1098; // float32
            static constexpr std::uintptr_t m_bInJump                 = 0X109C; // bool
            static constexpr std::uintptr_t m_repathTimer             = 0X30A8; // CountdownTimer
            static constexpr std::uintptr_t m_vecPathGoal             = 0X3140; // Vector
            static constexpr std::uintptr_t m_flActiveFollowStartTime = 0X314C; // GameTime_t
            static constexpr std::uintptr_t m_followMinuteTimer       = 0X3150; // CountdownTimer
            static constexpr std::uintptr_t m_BlockDirectionTimer     = 0X3170; // CountdownTimer
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysicsPropRespawnable : public CPhysicsProp {
        public:
            static constexpr std::uintptr_t m_vOriginalSpawnOrigin = 0X0CE0; // VectorWS
            static constexpr std::uintptr_t m_vOriginalSpawnAngles = 0X0CEC; // QAngle
            static constexpr std::uintptr_t m_vOriginalMins        = 0X0CF8; // Vector
            static constexpr std::uintptr_t m_vOriginalMaxs        = 0X0D04; // Vector
            static constexpr std::uintptr_t m_flRespawnDuration    = 0X0D10; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvBeam : public CBeam {
        public:
            static constexpr std::uintptr_t m_active            = 0X07D0; // int32
            static constexpr std::uintptr_t m_spriteTexture     = 0X07D8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_iszStartEntity    = 0X07E0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszEndEntity      = 0X07E8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_life              = 0X07F0; // float32
            static constexpr std::uintptr_t m_boltWidth         = 0X07F4; // float32
            static constexpr std::uintptr_t m_noiseAmplitude    = 0X07F8; // float32
            static constexpr std::uintptr_t m_speed             = 0X07FC; // int32
            static constexpr std::uintptr_t m_restrike          = 0X0800; // float32
            static constexpr std::uintptr_t m_iszSpriteName     = 0X0808; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_frameStart        = 0X0810; // int32
            static constexpr std::uintptr_t m_vEndPointWorld    = 0X0814; // VectorWS
            static constexpr std::uintptr_t m_vEndPointRelative = 0X0820; // Vector
            static constexpr std::uintptr_t m_radius            = 0X082C; // float32
            static constexpr std::uintptr_t m_TouchType         = 0X0830; // Touch_t
            static constexpr std::uintptr_t m_iFilterName       = 0X0838; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hFilter           = 0X0840; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_iszDecal          = 0X0848; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_OnTouchedByEntity = 0X0850; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLightSpotEntity : public CLightEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponSawedoff : public CCSWeaponBaseShotgun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTonemapTrigger : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_tonemapControllerName = 0X0890; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hTonemapController    = 0X0898; // CEntityHandle
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvShake : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_limitToEntity = 0X04A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_Amplitude     = 0X04B0; // float32
            static constexpr std::uintptr_t m_Frequency     = 0X04B4; // float32
            static constexpr std::uintptr_t m_Duration      = 0X04B8; // float32
            static constexpr std::uintptr_t m_Radius        = 0X04BC; // float32
            static constexpr std::uintptr_t m_stopTime      = 0X04C0; // GameTime_t
            static constexpr std::uintptr_t m_nextShake     = 0X04C4; // GameTime_t
            static constexpr std::uintptr_t m_currentAmp    = 0X04C8; // float32
            static constexpr std::uintptr_t m_maxForce      = 0X04CC; // Vector
            static constexpr std::uintptr_t m_shakeCallback = 0X04E0; // CPhysicsShake
        };

        // Has VTable
        // Local Type Scope
        class CPlayer_MovementServices_Humanoid : public CPlayer_MovementServices {
        public:
            static constexpr std::uintptr_t m_flStepSoundTime     = 0X0240; // float32
            static constexpr std::uintptr_t m_flFallVelocity      = 0X0244; // float32
            static constexpr std::uintptr_t m_groundNormal        = 0X0248; // Vector
            static constexpr std::uintptr_t m_flSurfaceFriction   = 0X0254; // float32
            static constexpr std::uintptr_t m_surfaceProps        = 0X0258; // CUtlStringToken
            static constexpr std::uintptr_t m_nStepside           = 0X0268; // int32
            static constexpr std::uintptr_t m_vecSmoothedVelocity = 0X026C; // Vector
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_MovementServices : public CPlayer_MovementServices_Humanoid {
        public:
            static constexpr std::uintptr_t m_vecLadderNormal                     = 0X0278; // Vector
            static constexpr std::uintptr_t m_nLadderSurfacePropIndex             = 0X0284; // int32
            static constexpr std::uintptr_t m_bDucked                             = 0X0288; // bool
            static constexpr std::uintptr_t m_flDuckAmount                        = 0X028C; // float32
            static constexpr std::uintptr_t m_flDuckSpeed                         = 0X0290; // float32
            static constexpr std::uintptr_t m_bDuckOverride                       = 0X0294; // bool
            static constexpr std::uintptr_t m_bDesiresDuck                        = 0X0295; // bool
            static constexpr std::uintptr_t m_bDucking                            = 0X0296; // bool
            static constexpr std::uintptr_t m_flDuckOffset                        = 0X0298; // float32
            static constexpr std::uintptr_t m_nDuckTimeMsecs                      = 0X029C; // uint32
            static constexpr std::uintptr_t m_nDuckJumpTimeMsecs                  = 0X02A0; // uint32
            static constexpr std::uintptr_t m_nJumpTimeMsecs                      = 0X02A4; // uint32
            static constexpr std::uintptr_t m_flLastDuckTime                      = 0X02A8; // float32
            static constexpr std::uintptr_t m_vecLastPositionAtFullCrouchSpeed    = 0X02B8; // Vector2D
            static constexpr std::uintptr_t m_duckUntilOnGround                   = 0X02C0; // bool
            static constexpr std::uintptr_t m_bHasWalkMovedSinceLastJump          = 0X02C1; // bool
            static constexpr std::uintptr_t m_bInStuckTest                        = 0X02C2; // bool
            static constexpr std::uintptr_t m_nTraceCount                         = 0X04D0; // int32
            static constexpr std::uintptr_t m_StuckLast                           = 0X04D4; // int32
            static constexpr std::uintptr_t m_bSpeedCropped                       = 0X04D8; // bool
            static constexpr std::uintptr_t m_nOldWaterLevel                      = 0X04DC; // int32
            static constexpr std::uintptr_t m_flWaterEntryTime                    = 0X04E0; // float32
            static constexpr std::uintptr_t m_vecForward                          = 0X04E4; // Vector
            static constexpr std::uintptr_t m_vecLeft                             = 0X04F0; // Vector
            static constexpr std::uintptr_t m_vecUp                               = 0X04FC; // Vector
            static constexpr std::uintptr_t m_nGameCodeHasMovedPlayerAfterCommand = 0X0508; // int32
            static constexpr std::uintptr_t m_bMadeFootstepNoise                  = 0X050C; // bool
            static constexpr std::uintptr_t m_iFootsteps                          = 0X0510; // int32
            static constexpr std::uintptr_t m_fStashGrenadeParameterWhen          = 0X0514; // GameTime_t
            static constexpr std::uintptr_t m_nButtonDownMaskPrev                 = 0X0518; // uint64
            static constexpr std::uintptr_t m_flOffsetTickCompleteTime            = 0X0520; // float32
            static constexpr std::uintptr_t m_flOffsetTickStashedSpeed            = 0X0524; // float32
            static constexpr std::uintptr_t m_flStamina                           = 0X0528; // float32
            static constexpr std::uintptr_t m_flHeightAtJumpStart                 = 0X052C; // float32
            static constexpr std::uintptr_t m_flMaxJumpHeightThisJump             = 0X0530; // float32
            static constexpr std::uintptr_t m_flMaxJumpHeightLastJump             = 0X0534; // float32
            static constexpr std::uintptr_t m_flStaminaAtJumpStart                = 0X0538; // float32
            static constexpr std::uintptr_t m_flVelMulAtJumpStart                 = 0X053C; // float32
            static constexpr std::uintptr_t m_flAccumulatedJumpError              = 0X0540; // float32
            static constexpr std::uintptr_t m_LegacyJump                          = 0X0548; // CCSPlayerLegacyJump
            static constexpr std::uintptr_t m_ModernJump                          = 0X0560; // CCSPlayerModernJump
            static constexpr std::uintptr_t m_nLastJumpTick                       = 0X0598; // GameTick_t
            static constexpr std::uintptr_t m_flLastJumpFrac                      = 0X059C; // float32
            static constexpr std::uintptr_t m_flLastJumpVelocityZ                 = 0X05A0; // float32
            static constexpr std::uintptr_t m_bJumpApexPending                    = 0X05A4; // bool
            static constexpr std::uintptr_t m_flTicksSinceLastSurfingDetected     = 0X05A8; // float32
            static constexpr std::uintptr_t m_bWasSurfing                         = 0X05AC; // bool
            static constexpr std::uintptr_t m_vecInputRotated                     = 0X063C; // Vector
        };

        // Has VTable
        // Local Type Scope
        struct SellbackPurchaseEntry_t {
        public:
            static constexpr std::uintptr_t m_unDefIdx    = 0X0030; // uint16
            static constexpr std::uintptr_t m_nCost       = 0X0034; // int32
            static constexpr std::uintptr_t m_nPrevArmor  = 0X0038; // int32
            static constexpr std::uintptr_t m_bPrevHelmet = 0X003C; // bool
            static constexpr std::uintptr_t m_hItem       = 0X0040; // CEntityHandle
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerCallback : public CBaseTrigger {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundOpvarSetPointBase : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled           = 0X04A8; // bool
            static constexpr std::uintptr_t m_hSource             = 0X04AC; // CEntityHandle
            static constexpr std::uintptr_t m_iszSourceEntityName = 0X04C8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_vLastPosition       = 0X0520; // Vector
            static constexpr std::uintptr_t m_flRefreshTime       = 0X052C; // float32
            static constexpr std::uintptr_t m_iszStackName        = 0X0530; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszOperatorName     = 0X0538; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszOpvarName        = 0X0540; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iOpvarIndex         = 0X0548; // int32
            static constexpr std::uintptr_t m_bUseAutoCompare     = 0X054C; // bool
            static constexpr std::uintptr_t m_bFastRefresh        = 0X054D; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundOpvarSetPointEntity : public CSoundOpvarSetPointBase {
        public:
            static constexpr std::uintptr_t m_OnEnter                     = 0X0550; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnExit                      = 0X0568; // CEntityIOOutput
            static constexpr std::uintptr_t m_bAutoDisable                = 0X0580; // bool
            static constexpr std::uintptr_t m_flDistanceMin               = 0X05C4; // float32
            static constexpr std::uintptr_t m_flDistanceMax               = 0X05C8; // float32
            static constexpr std::uintptr_t m_flDistanceMapMin            = 0X05CC; // float32
            static constexpr std::uintptr_t m_flDistanceMapMax            = 0X05D0; // float32
            static constexpr std::uintptr_t m_flOcclusionRadius           = 0X05D4; // float32
            static constexpr std::uintptr_t m_flOcclusionMin              = 0X05D8; // float32
            static constexpr std::uintptr_t m_flOcclusionMax              = 0X05DC; // float32
            static constexpr std::uintptr_t m_flValSetOnDisable           = 0X05E0; // float32
            static constexpr std::uintptr_t m_bSetValueOnDisable          = 0X05E4; // bool
            static constexpr std::uintptr_t m_bReloading                  = 0X05E5; // bool
            static constexpr std::uintptr_t m_nSimulationMode             = 0X05E8; // int32
            static constexpr std::uintptr_t m_nVisibilitySamples          = 0X05EC; // int32
            static constexpr std::uintptr_t m_vDynamicProxyPoint          = 0X05F0; // Vector
            static constexpr std::uintptr_t m_flDynamicMaximumOcclusion   = 0X05FC; // float32
            static constexpr std::uintptr_t m_hDynamicEntity              = 0X0600; // CEntityHandle
            static constexpr std::uintptr_t m_iszDynamicEntityName        = 0X0608; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flPathingDistanceNormFactor = 0X0610; // float32
            static constexpr std::uintptr_t m_vPathingSourcePos           = 0X0614; // Vector
            static constexpr std::uintptr_t m_vPathingListenerPos         = 0X0620; // Vector
            static constexpr std::uintptr_t m_vPathingDirection           = 0X062C; // Vector
            static constexpr std::uintptr_t m_nPathingSourceIndex         = 0X0638; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundOpvarSetAutoRoomEntity : public CSoundOpvarSetPointEntity {
        public:
            static constexpr std::uintptr_t m_traceResults      = 0X0640; // CUtlVector<SoundOpvarTraceResult_t>
            static constexpr std::uintptr_t m_doorwayPairs      = 0X0658; // CUtlVector<AutoRoomDoorwayPairs_t>
            static constexpr std::uintptr_t m_flSize            = 0X0670; // float32
            static constexpr std::uintptr_t m_flHeightTolerance = 0X0674; // float32
            static constexpr std::uintptr_t m_flSizeSqr         = 0X0678; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Outflow_ListenForEntityOutput : public CPulseCell_BaseYieldingInflow {
        public:
            static constexpr std::uintptr_t m_OnFired              = 0X0048; // SignatureOutflow_Resume
            static constexpr std::uintptr_t m_OnCanceled           = 0X0090; // CPulse_ResumePoint
            static constexpr std::uintptr_t m_strEntityOutput      = 0X00D8; // CGlobalSymbol
            static constexpr std::uintptr_t m_strEntityOutputParam = 0X00E0; // CUtlString
            static constexpr std::uintptr_t m_bListenUntilCanceled = 0X00E8; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPushable : public CBreakable {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CRotatorTarget : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_OnArrivedAt = 0X04A8; // CEntityIOOutput
            static constexpr std::uintptr_t m_eSpace      = 0X04C0; // RotatorTargetSpace_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysicsEntitySolver : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_hMovingEntity      = 0X04C0; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hPhysicsBlocker    = 0X04C4; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_separationDuration = 0X04C8; // float32
            static constexpr std::uintptr_t m_cancelTime         = 0X04CC; // GameTime_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicCollisionPair : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_nameAttach1                         = 0X04A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_nameAttach2                         = 0X04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_includeHierarchy                    = 0X04B8; // bool
            static constexpr std::uintptr_t m_supportMultipleEntitiesWithSameName = 0X04B9; // bool
            static constexpr std::uintptr_t m_disabled                            = 0X04BA; // bool
            static constexpr std::uintptr_t m_succeeded                           = 0X04BB; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTestEffect : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_iLoop       = 0X04A8; // int32
            static constexpr std::uintptr_t m_iBeam       = 0X04AC; // int32
            static constexpr std::uintptr_t m_pBeam       = 0X04B0; // CHandle<CBeam>[24]
            static constexpr std::uintptr_t m_flBeamTime  = 0X0510; // GameTime_t[24]
            static constexpr std::uintptr_t m_flStartTime = 0X0570; // GameTime_t
        };

        // Has Trivial Destructor
        // Construct Allowed
        // Local Type Scope
        struct CPulseCell_Outflow_ScriptedSequence__CursorState_t {
        public:
            static constexpr std::uintptr_t m_scriptedSequence = 0X0000; // CHandle<CBaseEntity>
        };

        // Has VTable
        // Is Absract
        // Local Type Scope
        class CBasePropDoor : public CDynamicProp {
        public:
            static constexpr std::uintptr_t m_flAutoReturnDelay     = 0X0C60; // float32
            static constexpr std::uintptr_t m_hDoorList             = 0X0C68; // CUtlVector<CHandle<CBasePropDoor>>
            static constexpr std::uintptr_t m_nHardwareType         = 0X0C80; // int32
            static constexpr std::uintptr_t m_bNeedsHardware        = 0X0C84; // bool
            static constexpr std::uintptr_t m_eDoorState            = 0X0C88; // DoorState_t
            static constexpr std::uintptr_t m_bLocked               = 0X0C8C; // bool
            static constexpr std::uintptr_t m_bNoNPCs               = 0X0C8D; // bool
            static constexpr std::uintptr_t m_closedPosition        = 0X0C90; // Vector
            static constexpr std::uintptr_t m_closedAngles          = 0X0C9C; // QAngle
            static constexpr std::uintptr_t m_hBlocker              = 0X0CA8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_bFirstBlocked         = 0X0CAC; // bool
            static constexpr std::uintptr_t m_ls                    = 0X0CB0; // locksound_t
            static constexpr std::uintptr_t m_bForceClosed          = 0X0CD0; // bool
            static constexpr std::uintptr_t m_vecLatchWorldPosition = 0X0CD4; // VectorWS
            static constexpr std::uintptr_t m_hActivator            = 0X0CE0; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_SoundMoving           = 0X0CF8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_SoundOpen             = 0X0D00; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_SoundClose            = 0X0D08; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_SoundLock             = 0X0D10; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_SoundUnlock           = 0X0D18; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_SoundLatch            = 0X0D20; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_SoundPound            = 0X0D28; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_SoundJiggle           = 0X0D30; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_SoundLockedAnim       = 0X0D38; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_numCloseAttempts      = 0X0D40; // int32
            static constexpr std::uintptr_t m_nPhysicsMaterial      = 0X0D44; // CUtlStringToken
            static constexpr std::uintptr_t m_SlaveName             = 0X0D48; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hMaster               = 0X0D50; // CHandle<CBasePropDoor>
            static constexpr std::uintptr_t m_OnBlockedClosing      = 0X0D58; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnBlockedOpening      = 0X0D70; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnUnblockedClosing    = 0X0D88; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnUnblockedOpening    = 0X0DA0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnFullyClosed         = 0X0DB8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnFullyOpen           = 0X0DD0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnClose               = 0X0DE8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnOpen                = 0X0E00; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnLockedUse           = 0X0E18; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnAjarOpen            = 0X0E30; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPropDoorRotating : public CBasePropDoor {
        public:
            static constexpr std::uintptr_t m_vecAxis                     = 0X0E50; // Vector
            static constexpr std::uintptr_t m_flDistance                  = 0X0E5C; // float32
            static constexpr std::uintptr_t m_eSpawnPosition              = 0X0E60; // PropDoorRotatingSpawnPos_t
            static constexpr std::uintptr_t m_eOpenDirection              = 0X0E64; // PropDoorRotatingOpenDirection_e
            static constexpr std::uintptr_t m_eCurrentOpenDirection       = 0X0E68; // PropDoorRotatingOpenDirection_e
            static constexpr std::uintptr_t m_eDefaultCheckDirection      = 0X0E6C; // doorCheck_e
            static constexpr std::uintptr_t m_flAjarAngle                 = 0X0E70; // float32
            static constexpr std::uintptr_t m_angRotationAjarDeprecated   = 0X0E74; // QAngle
            static constexpr std::uintptr_t m_angRotationClosed           = 0X0E80; // QAngle
            static constexpr std::uintptr_t m_angRotationOpenForward      = 0X0E8C; // QAngle
            static constexpr std::uintptr_t m_angRotationOpenBack         = 0X0E98; // QAngle
            static constexpr std::uintptr_t m_angGoal                     = 0X0EA4; // QAngle
            static constexpr std::uintptr_t m_vecForwardBoundsMin         = 0X0EB0; // Vector
            static constexpr std::uintptr_t m_vecForwardBoundsMax         = 0X0EBC; // Vector
            static constexpr std::uintptr_t m_vecBackBoundsMin            = 0X0EC8; // Vector
            static constexpr std::uintptr_t m_vecBackBoundsMax            = 0X0ED4; // Vector
            static constexpr std::uintptr_t m_bAjarDoorShouldntAlwaysOpen = 0X0EE0; // bool
            static constexpr std::uintptr_t m_hEntityBlocker              = 0X0EE4; // CHandle<CEntityBlocker>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvParticleGlow : public CParticleSystem {
        public:
            static constexpr std::uintptr_t m_flAlphaScale     = 0X0CA8; // float32
            static constexpr std::uintptr_t m_flRadiusScale    = 0X0CAC; // float32
            static constexpr std::uintptr_t m_flSelfIllumScale = 0X0CB0; // float32
            static constexpr std::uintptr_t m_ColorTint        = 0X0CB4; // Color
            static constexpr std::uintptr_t m_hTextureOverride = 0X0CB8; // CStrongHandle<InfoForResourceTypeCTextureBase>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CMathRemap : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_flInMin        = 0X04A8; // float32
            static constexpr std::uintptr_t m_flInMax        = 0X04AC; // float32
            static constexpr std::uintptr_t m_flOut1         = 0X04B0; // float32
            static constexpr std::uintptr_t m_flOut2         = 0X04B4; // float32
            static constexpr std::uintptr_t m_flOldInValue   = 0X04B8; // float32
            static constexpr std::uintptr_t m_bEnabled       = 0X04BC; // bool
            static constexpr std::uintptr_t m_OutValue       = 0X04C0; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnRoseAboveMin = 0X04E0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnRoseAboveMax = 0X04F8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnFellBelowMin = 0X0510; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnFellBelowMax = 0X0528; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundOpvarSetOBBWindEntity : public CSoundOpvarSetPointBase {
        public:
            static constexpr std::uintptr_t m_vMins         = 0X0550; // Vector
            static constexpr std::uintptr_t m_vMaxs         = 0X055C; // Vector
            static constexpr std::uintptr_t m_vDistanceMins = 0X0568; // Vector
            static constexpr std::uintptr_t m_vDistanceMaxs = 0X0574; // Vector
            static constexpr std::uintptr_t m_flWindMin     = 0X0580; // float32
            static constexpr std::uintptr_t m_flWindMax     = 0X0584; // float32
            static constexpr std::uintptr_t m_flWindMapMin  = 0X0588; // float32
            static constexpr std::uintptr_t m_flWindMapMax  = 0X058C; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        struct PhysicsRagdollPose_t {
        public:
            static constexpr std::uintptr_t m_Transforms           = 0X0008; // CNetworkUtlVectorBase<CTransform>
            static constexpr std::uintptr_t m_hOwner               = 0X0020; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_bSetFromDebugHistory = 0X0024; // bool
        };

        // Has VTable
        // Has Trivial Destructor
        // Local Type Scope
        class CPropDataComponent : public CEntityComponent {
        public:
            static constexpr std::uintptr_t m_flDmgModBullet                     = 0X0010; // float32
            static constexpr std::uintptr_t m_flDmgModClub                       = 0X0014; // float32
            static constexpr std::uintptr_t m_flDmgModExplosive                  = 0X0018; // float32
            static constexpr std::uintptr_t m_flDmgModFire                       = 0X001C; // float32
            static constexpr std::uintptr_t m_iszPhysicsDamageTableName          = 0X0020; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszBasePropData                    = 0X0028; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_nInteractions                      = 0X0030; // int32
            static constexpr std::uintptr_t m_bSpawnMotionDisabled               = 0X0034; // bool
            static constexpr std::uintptr_t m_nDisableTakePhysicsDamageSpawnFlag = 0X0038; // int32
            static constexpr std::uintptr_t m_nMotionDisabledSpawnFlag           = 0X003C; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CScriptTriggerOnce : public CTriggerOnce {
        public:
            static constexpr std::uintptr_t m_vExtent = 0X08A8; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLightOrthoEntity : public CLightEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoInstructorHintHostageRescueZone : public CPointEntity {
        public:
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
        class CTriggerTeleport : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_iLandmark                  = 0X0890; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bUseLandmarkAngles         = 0X0898; // bool
            static constexpr std::uintptr_t m_bMirrorPlayer              = 0X0899; // bool
            static constexpr std::uintptr_t m_bCheckDestIfClearForPlayer = 0X089A; // bool
        };

        // Has VTable
        // Local Type Scope
        class CBtActionAim : public CBtNode {
        public:
            static constexpr std::uintptr_t m_szSensorInputKey         = 0X0068; // CUtlString
            static constexpr std::uintptr_t m_szAimReadyKey            = 0X0080; // CUtlString
            static constexpr std::uintptr_t m_flZoomCooldownTimestamp  = 0X0088; // float32
            static constexpr std::uintptr_t m_bDoneAiming              = 0X008C; // bool
            static constexpr std::uintptr_t m_flLerpStartTime          = 0X0090; // float32
            static constexpr std::uintptr_t m_flNextLookTargetLerpTime = 0X0094; // float32
            static constexpr std::uintptr_t m_flPenaltyReductionRatio  = 0X0098; // float32
            static constexpr std::uintptr_t m_NextLookTarget           = 0X009C; // QAngle
            static constexpr std::uintptr_t m_AimTimer                 = 0X00A8; // CountdownTimer
            static constexpr std::uintptr_t m_SniperHoldTimer          = 0X00C0; // CountdownTimer
            static constexpr std::uintptr_t m_FocusIntervalTimer       = 0X00D8; // CountdownTimer
            static constexpr std::uintptr_t m_bAcquired                = 0X00F0; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoLadderDismount : public CBaseEntity {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Local Type Scope
        class CPulseServerFuncs {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CMessage : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_iszMessage         = 0X04A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_MessageVolume      = 0X04B0; // float32
            static constexpr std::uintptr_t m_MessageAttenuation = 0X04B4; // int32
            static constexpr std::uintptr_t m_Radius             = 0X04B8; // float32
            static constexpr std::uintptr_t m_sNoise             = 0X04C0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_OnShowMessage      = 0X04C8; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointVelocitySensor : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_hTargetEntity = 0X04A8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_vecAxis       = 0X04AC; // Vector
            static constexpr std::uintptr_t m_bEnabled      = 0X04B8; // bool
            static constexpr std::uintptr_t m_fPrevVelocity = 0X04BC; // float32
            static constexpr std::uintptr_t m_flAvgInterval = 0X04C0; // float32
            static constexpr std::uintptr_t m_Velocity      = 0X04C8; // CEntityOutputTemplate<float32,float32>
        };

        // Has VTable
        // Has Trivial Destructor
        // Local Type Scope
        class EngineCountdownTimer {
        public:
            static constexpr std::uintptr_t m_duration  = 0X0008; // float32
            static constexpr std::uintptr_t m_timestamp = 0X000C; // float32
            static constexpr std::uintptr_t m_timescale = 0X0010; // float32
        };

        // Has Trivial Destructor
        // Local Type Scope
        class CBaseModelEntityAPI {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CHostage : public CHostageExpresserShim {
        public:
            static constexpr std::uintptr_t m_OnHostageBeginGrab                     = 0X0B98; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnFirstPickedUp                        = 0X0BB0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnDroppedNotRescued                    = 0X0BC8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnRescued                              = 0X0BE0; // CEntityIOOutput
            static constexpr std::uintptr_t m_entitySpottedState                     = 0X0BF8; // EntitySpottedState_t
            static constexpr std::uintptr_t m_nSpotRules                             = 0X0C10; // int32
            static constexpr std::uintptr_t m_uiHostageSpawnExclusionGroupMask       = 0X0C14; // uint32
            static constexpr std::uintptr_t m_nHostageSpawnRandomFactor              = 0X0C18; // uint32
            static constexpr std::uintptr_t m_bRemove                                = 0X0C1C; // bool
            static constexpr std::uintptr_t m_vel                                    = 0X0C20; // Vector
            static constexpr std::uintptr_t m_isRescued                              = 0X0C2C; // bool
            static constexpr std::uintptr_t m_jumpedThisFrame                        = 0X0C2D; // bool
            static constexpr std::uintptr_t m_nHostageState                          = 0X0C30; // int32
            static constexpr std::uintptr_t m_leader                                 = 0X0C34; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_lastLeader                             = 0X0C38; // CHandle<CCSPlayerPawnBase>
            static constexpr std::uintptr_t m_reuseTimer                             = 0X0C40; // CountdownTimer
            static constexpr std::uintptr_t m_hasBeenUsed                            = 0X0C58; // bool
            static constexpr std::uintptr_t m_accel                                  = 0X0C5C; // Vector
            static constexpr std::uintptr_t m_isRunning                              = 0X0C68; // bool
            static constexpr std::uintptr_t m_isCrouching                            = 0X0C69; // bool
            static constexpr std::uintptr_t m_jumpTimer                              = 0X0C70; // CountdownTimer
            static constexpr std::uintptr_t m_isWaitingForLeader                     = 0X0C88; // bool
            static constexpr std::uintptr_t m_repathTimer                            = 0X2C98; // CountdownTimer
            static constexpr std::uintptr_t m_inhibitDoorTimer                       = 0X2CB0; // CountdownTimer
            static constexpr std::uintptr_t m_inhibitObstacleAvoidanceTimer          = 0X2D40; // CountdownTimer
            static constexpr std::uintptr_t m_wiggleTimer                            = 0X2D60; // CountdownTimer
            static constexpr std::uintptr_t m_isAdjusted                             = 0X2D7C; // bool
            static constexpr std::uintptr_t m_bHandsHaveBeenCut                      = 0X2D7D; // bool
            static constexpr std::uintptr_t m_hHostageGrabber                        = 0X2D80; // CHandle<CCSPlayerPawn>
            static constexpr std::uintptr_t m_fLastGrabTime                          = 0X2D84; // GameTime_t
            static constexpr std::uintptr_t m_vecPositionWhenStartedDroppingToGround = 0X2D88; // Vector
            static constexpr std::uintptr_t m_vecGrabbedPos                          = 0X2D94; // Vector
            static constexpr std::uintptr_t m_flRescueStartTime                      = 0X2DA0; // GameTime_t
            static constexpr std::uintptr_t m_flGrabSuccessTime                      = 0X2DA4; // GameTime_t
            static constexpr std::uintptr_t m_flDropStartTime                        = 0X2DA8; // GameTime_t
            static constexpr std::uintptr_t m_nApproachRewardPayouts                 = 0X2DAC; // int32
            static constexpr std::uintptr_t m_nPickupEventCount                      = 0X2DB0; // int32
            static constexpr std::uintptr_t m_vecSpawnGroundPos                      = 0X2DB4; // Vector
            static constexpr std::uintptr_t m_vecHostageResetPosition                = 0X2DEC; // VectorWS
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CScriptTriggerMultiple : public CTriggerMultiple {
        public:
            static constexpr std::uintptr_t m_vExtent = 0X08A8; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvSpark : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_flDelay      = 0X04A8; // float32
            static constexpr std::uintptr_t m_nMagnitude   = 0X04AC; // int32
            static constexpr std::uintptr_t m_nTrailLength = 0X04B0; // int32
            static constexpr std::uintptr_t m_nType        = 0X04B4; // int32
            static constexpr std::uintptr_t m_OnSpark      = 0X04B8; // CEntityIOOutput
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayerController_DamageServices : public CPlayerControllerComponent {
        public:
            static constexpr std::uintptr_t m_nSendUpdate = 0X0040; // int32
            static constexpr std::uintptr_t m_DamageList  = 0X0048; // CUtlVectorEmbeddedNetworkVar<CDamageRecord>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFilterLOS : public CBaseFilter {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointOrient : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_iszSpawnTargetName = 0X04A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hTarget            = 0X04B0; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_bActive            = 0X04B4; // bool
            static constexpr std::uintptr_t m_nGoalDirection     = 0X04B8; // PointOrientGoalDirectionType_t
            static constexpr std::uintptr_t m_nConstraint        = 0X04BC; // PointOrientConstraint_t
            static constexpr std::uintptr_t m_flMaxTurnRate      = 0X04C0; // float32
            static constexpr std::uintptr_t m_flLastGameTime     = 0X04C4; // GameTime_t
        };

        // Has VTable
        // Has Trivial Destructor
        // Local Type Scope
        struct sky3dparams_t {
        public:
            static constexpr std::uintptr_t scale                              = 0X0008; // int16
            static constexpr std::uintptr_t origin                             = 0X000C; // Vector
            static constexpr std::uintptr_t bClip3DSkyBoxNearToWorldFar        = 0X0018; // bool
            static constexpr std::uintptr_t flClip3DSkyBoxNearToWorldFarOffset = 0X001C; // float32
            static constexpr std::uintptr_t fog                                = 0X0020; // fogparams_t
            static constexpr std::uintptr_t m_nWorldGroupID                    = 0X0088; // WorldGroupId_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponP250 : public CCSWeaponBaseGun {
        public:
        };

        // Construct Allowed
        // Local Type Scope
        class CDestructiblePartsComponent {
        public:
            static constexpr std::uintptr_t __m_pChainEntity           = 0X0000; // CNetworkVarChainer
            static constexpr std::uintptr_t m_vecDamageTakenByHitGroup = 0X0048; // CUtlVector<uint16>
            static constexpr std::uintptr_t m_hOwner                   = 0X0060; // CHandle<CBaseModelEntity>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CChangeLevel : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_sMapName            = 0X0890; // CUtlString
            static constexpr std::uintptr_t m_sLandmarkName       = 0X0898; // CUtlString
            static constexpr std::uintptr_t m_OnChangeLevel       = 0X08A0; // CEntityIOOutput
            static constexpr std::uintptr_t m_bTouched            = 0X08B8; // bool
            static constexpr std::uintptr_t m_bNoTouch            = 0X08B9; // bool
            static constexpr std::uintptr_t m_bNewChapter         = 0X08BA; // bool
            static constexpr std::uintptr_t m_bOnChangeLevelFired = 0X08BB; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBaseButton : public CBaseToggle {
        public:
            static constexpr std::uintptr_t m_angMoveEntitySpace        = 0X07B0; // QAngle
            static constexpr std::uintptr_t m_fStayPushed               = 0X07BC; // bool
            static constexpr std::uintptr_t m_fRotating                 = 0X07BD; // bool
            static constexpr std::uintptr_t m_ls                        = 0X07C0; // locksound_t
            static constexpr std::uintptr_t m_sUseSound                 = 0X07E0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_sLockedSound              = 0X07E8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_sUnlockedSound            = 0X07F0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_sOverrideAnticipationName = 0X07F8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bLocked                   = 0X0800; // bool
            static constexpr std::uintptr_t m_bDisabled                 = 0X0801; // bool
            static constexpr std::uintptr_t m_flUseLockedTime           = 0X0804; // GameTime_t
            static constexpr std::uintptr_t m_bSolidBsp                 = 0X0808; // bool
            static constexpr std::uintptr_t m_OnDamaged                 = 0X0810; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnPressed                 = 0X0828; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnUseLocked               = 0X0840; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnIn                      = 0X0858; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnOut                     = 0X0870; // CEntityIOOutput
            static constexpr std::uintptr_t m_nState                    = 0X0888; // int32
            static constexpr std::uintptr_t m_hConstraint               = 0X088C; // CEntityHandle
            static constexpr std::uintptr_t m_hConstraintParent         = 0X0890; // CEntityHandle
            static constexpr std::uintptr_t m_bForceNpcExclude          = 0X0894; // bool
            static constexpr std::uintptr_t m_sGlowEntity               = 0X0898; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_glowEntity                = 0X08A0; // CHandle<CBaseModelEntity>
            static constexpr std::uintptr_t m_usable                    = 0X08A4; // bool
            static constexpr std::uintptr_t m_szDisplayText             = 0X08A8; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_SoundEventStart : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_Type = 0X0048; // SoundEventStartType_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Step_DebugLog : public CPulseCell_BaseFlow {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CItem_Healthshot : public CWeaponBaseItem {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBaseGrenade : public CBaseFlex {
        public:
            static constexpr std::uintptr_t m_OnPlayerPickup   = 0X0AB8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnExplode        = 0X0AD0; // CEntityIOOutput
            static constexpr std::uintptr_t m_bHasWarnedAI     = 0X0AE8; // bool
            static constexpr std::uintptr_t m_bIsSmokeGrenade  = 0X0AE9; // bool
            static constexpr std::uintptr_t m_bIsLive          = 0X0AEA; // bool
            static constexpr std::uintptr_t m_DmgRadius        = 0X0AEC; // float32
            static constexpr std::uintptr_t m_flDetonateTime   = 0X0AF0; // GameTime_t
            static constexpr std::uintptr_t m_flWarnAITime     = 0X0AF4; // float32
            static constexpr std::uintptr_t m_flDamage         = 0X0AF8; // float32
            static constexpr std::uintptr_t m_iszBounceSound   = 0X0B00; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_ExplosionSound   = 0X0B08; // CUtlString
            static constexpr std::uintptr_t m_hThrower         = 0X0B14; // CHandle<CCSPlayerPawn>
            static constexpr std::uintptr_t m_flNextAttack     = 0X0B2C; // GameTime_t
            static constexpr std::uintptr_t m_hOriginalThrower = 0X0B30; // CHandle<CCSPlayerPawn>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CColorCorrectionVolume : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_MaxWeight       = 0X0890; // float32
            static constexpr std::uintptr_t m_FadeDuration    = 0X0894; // float32
            static constexpr std::uintptr_t m_Weight          = 0X0898; // float32
            static constexpr std::uintptr_t m_lookupFilename  = 0X089C; // char[512]
            static constexpr std::uintptr_t m_LastEnterWeight = 0X0A9C; // float32
            static constexpr std::uintptr_t m_LastEnterTime   = 0X0AA0; // GameTime_t
            static constexpr std::uintptr_t m_LastExitWeight  = 0X0AA4; // float32
            static constexpr std::uintptr_t m_LastExitTime    = 0X0AA8; // GameTime_t
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayerController_ActionTrackingServices : public CPlayerControllerComponent {
        public:
            static constexpr std::uintptr_t m_perRoundStats           = 0X0040; // CUtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
            static constexpr std::uintptr_t m_matchStats              = 0X00C8; // CSMatchStats_t
            static constexpr std::uintptr_t m_iNumRoundKills          = 0X0188; // int32
            static constexpr std::uintptr_t m_iNumRoundKillsHeadshots = 0X018C; // int32
            static constexpr std::uintptr_t m_flTotalRoundDamageDealt = 0X0190; // float32
        };

        // Has VTable
        // Local Type Scope
        class CBodyComponentSkeletonInstance : public CBodyComponent {
        public:
            static constexpr std::uintptr_t m_skeletonInstance = 0X0080; // CSkeletonInstance
        };

        // Has VTable
        // Local Type Scope
        class CBodyComponentBaseAnimGraph : public CBodyComponentSkeletonInstance {
        public:
            static constexpr std::uintptr_t m_animationController = 0X04B0; // CBaseAnimGraphController
        };

        // Construct Allowed
        // Local Type Scope
        struct PulseNodeDynamicOutflows_t {
        public:
            static constexpr std::uintptr_t m_Outflows = 0X0000; // CUtlVector<PulseNodeDynamicOutflows_t::DynamicOutflow_t>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFogVolume : public CServerOnlyModelEntity {
        public:
            static constexpr std::uintptr_t m_fogName             = 0X0730; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_postProcessName     = 0X0738; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_colorCorrectionName = 0X0740; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bDisabled           = 0X0750; // bool
            static constexpr std::uintptr_t m_bInFogVolumesList   = 0X0751; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncRotating : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_OnStopped           = 0X0730; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnStarted           = 0X0748; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnReachedStart      = 0X0760; // CEntityIOOutput
            static constexpr std::uintptr_t m_localRotationVector = 0X0778; // RotationVector
            static constexpr std::uintptr_t m_flFanFriction       = 0X0784; // float32
            static constexpr std::uintptr_t m_flAttenuation       = 0X0788; // float32
            static constexpr std::uintptr_t m_flVolume            = 0X078C; // float32
            static constexpr std::uintptr_t m_flTargetSpeed       = 0X0790; // float32
            static constexpr std::uintptr_t m_flMaxSpeed          = 0X0794; // float32
            static constexpr std::uintptr_t m_flBlockDamage       = 0X0798; // float32
            static constexpr std::uintptr_t m_NoiseRunning        = 0X07A0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bReversed           = 0X07A8; // bool
            static constexpr std::uintptr_t m_bAccelDecel         = 0X07A9; // bool
            static constexpr std::uintptr_t m_prevLocalAngles     = 0X07C0; // QAngle
            static constexpr std::uintptr_t m_angStart            = 0X07CC; // QAngle
            static constexpr std::uintptr_t m_bStopAtStartPos     = 0X07D8; // bool
            static constexpr std::uintptr_t m_vecClientOrigin     = 0X07DC; // Vector
            static constexpr std::uintptr_t m_vecClientAngles     = 0X07E8; // QAngle
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTimerEntity : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_OnTimer            = 0X04A8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnTimerHigh        = 0X04C0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnTimerLow         = 0X04D8; // CEntityIOOutput
            static constexpr std::uintptr_t m_iDisabled          = 0X04F0; // int32
            static constexpr std::uintptr_t m_flInitialDelay     = 0X04F4; // float32
            static constexpr std::uintptr_t m_flRefireTime       = 0X04F8; // float32
            static constexpr std::uintptr_t m_bUpDownState       = 0X04FC; // bool
            static constexpr std::uintptr_t m_iUseRandomTime     = 0X0500; // int32
            static constexpr std::uintptr_t m_bPauseAfterFiring  = 0X0504; // bool
            static constexpr std::uintptr_t m_flLowerRandomBound = 0X0508; // float32
            static constexpr std::uintptr_t m_flUpperRandomBound = 0X050C; // float32
            static constexpr std::uintptr_t m_flRemainingTime    = 0X0510; // float32
            static constexpr std::uintptr_t m_bPaused            = 0X0514; // bool
        };

        // Has VTable
        // Local Type Scope
        class CBtActionMoveTo : public CBtNode {
        public:
            static constexpr std::uintptr_t m_szDestinationInputKey              = 0X0060; // CUtlString
            static constexpr std::uintptr_t m_szHidingSpotInputKey               = 0X0068; // CUtlString
            static constexpr std::uintptr_t m_szThreatInputKey                   = 0X0070; // CUtlString
            static constexpr std::uintptr_t m_vecDestination                     = 0X0078; // Vector
            static constexpr std::uintptr_t m_bAutoLookAdjust                    = 0X0084; // bool
            static constexpr std::uintptr_t m_bComputePath                       = 0X0085; // bool
            static constexpr std::uintptr_t m_flDamagingAreasPenaltyCost         = 0X0088; // float32
            static constexpr std::uintptr_t m_CheckApproximateCornersTimer       = 0X0090; // CountdownTimer
            static constexpr std::uintptr_t m_CheckHighPriorityItem              = 0X00A8; // CountdownTimer
            static constexpr std::uintptr_t m_RepathTimer                        = 0X00C0; // CountdownTimer
            static constexpr std::uintptr_t m_flArrivalEpsilon                   = 0X00D8; // float32
            static constexpr std::uintptr_t m_flAdditionalArrivalEpsilon2D       = 0X00DC; // float32
            static constexpr std::uintptr_t m_flHidingSpotCheckDistanceThreshold = 0X00E0; // float32
            static constexpr std::uintptr_t m_flNearestAreaDistanceThreshold     = 0X00E4; // float32
        };

        // Has Trivial Destructor
        // Local Type Scope
        class CBaseEntityAPI {
        public:
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
        class CWeaponG3SG1 : public CCSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Local Type Scope
        struct CSPerRoundStats_t {
        public:
            static constexpr std::uintptr_t m_iKills          = 0X0030; // int32
            static constexpr std::uintptr_t m_iDeaths         = 0X0034; // int32
            static constexpr std::uintptr_t m_iAssists        = 0X0038; // int32
            static constexpr std::uintptr_t m_iDamage         = 0X003C; // int32
            static constexpr std::uintptr_t m_iEquipmentValue = 0X0040; // int32
            static constexpr std::uintptr_t m_iMoneySaved     = 0X0044; // int32
            static constexpr std::uintptr_t m_iKillReward     = 0X0048; // int32
            static constexpr std::uintptr_t m_iLiveTime       = 0X004C; // int32
            static constexpr std::uintptr_t m_iHeadShotKills  = 0X0050; // int32
            static constexpr std::uintptr_t m_iObjective      = 0X0054; // int32
            static constexpr std::uintptr_t m_iCashEarned     = 0X0058; // int32
            static constexpr std::uintptr_t m_iUtilityDamage  = 0X005C; // int32
            static constexpr std::uintptr_t m_iEnemiesFlashed = 0X0060; // int32
        };

        // Has VTable
        // Local Type Scope
        struct CSMatchStats_t : public CSPerRoundStats_t {
        public:
            static constexpr std::uintptr_t m_iEnemy5Ks                  = 0X0068; // int32
            static constexpr std::uintptr_t m_iEnemy4Ks                  = 0X006C; // int32
            static constexpr std::uintptr_t m_iEnemy3Ks                  = 0X0070; // int32
            static constexpr std::uintptr_t m_iEnemyKnifeKills           = 0X0074; // int32
            static constexpr std::uintptr_t m_iEnemyTaserKills           = 0X0078; // int32
            static constexpr std::uintptr_t m_iEnemy2Ks                  = 0X007C; // int32
            static constexpr std::uintptr_t m_iUtility_Count             = 0X0080; // int32
            static constexpr std::uintptr_t m_iUtility_Successes         = 0X0084; // int32
            static constexpr std::uintptr_t m_iUtility_Enemies           = 0X0088; // int32
            static constexpr std::uintptr_t m_iFlash_Count               = 0X008C; // int32
            static constexpr std::uintptr_t m_iFlash_Successes           = 0X0090; // int32
            static constexpr std::uintptr_t m_flHealthPointsRemovedTotal = 0X0094; // float32
            static constexpr std::uintptr_t m_flHealthPointsDealtTotal   = 0X0098; // float32
            static constexpr std::uintptr_t m_nShotsFiredTotal           = 0X009C; // int32
            static constexpr std::uintptr_t m_nShotsOnTargetTotal        = 0X00A0; // int32
            static constexpr std::uintptr_t m_i1v1Count                  = 0X00A4; // int32
            static constexpr std::uintptr_t m_i1v1Wins                   = 0X00A8; // int32
            static constexpr std::uintptr_t m_i1v2Count                  = 0X00AC; // int32
            static constexpr std::uintptr_t m_i1v2Wins                   = 0X00B0; // int32
            static constexpr std::uintptr_t m_iEntryCount                = 0X00B4; // int32
            static constexpr std::uintptr_t m_iEntryWins                 = 0X00B8; // int32
        };

        // Has VTable
        // Local Type Scope
        struct EntityRenderAttribute_t {
        public:
            static constexpr std::uintptr_t m_ID     = 0X0030; // CUtlStringToken
            static constexpr std::uintptr_t m_Values = 0X0034; // Vector4D
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
        class CFuncMonitor : public CFuncBrush {
        public:
            static constexpr std::uintptr_t m_targetCamera          = 0X0750; // CUtlString
            static constexpr std::uintptr_t m_nResolutionEnum       = 0X0758; // int32
            static constexpr std::uintptr_t m_bRenderShadows        = 0X075C; // bool
            static constexpr std::uintptr_t m_bUseUniqueColorTarget = 0X075D; // bool
            static constexpr std::uintptr_t m_brushModelName        = 0X0760; // CUtlString
            static constexpr std::uintptr_t m_hTargetCamera         = 0X0768; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_bEnabled              = 0X076C; // bool
            static constexpr std::uintptr_t m_bDraw3DSkybox         = 0X076D; // bool
            static constexpr std::uintptr_t m_bStartEnabled         = 0X076E; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoVisibilityBox : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_nMode    = 0X04AC; // int32
            static constexpr std::uintptr_t m_vBoxSize = 0X04B0; // Vector
            static constexpr std::uintptr_t m_bEnabled = 0X04BC; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CGunTarget : public CBaseToggle {
        public:
            static constexpr std::uintptr_t m_on         = 0X07B0; // bool
            static constexpr std::uintptr_t m_hTargetEnt = 0X07B4; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_OnDeath    = 0X07B8; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundEventConeEntity : public CSoundEventEntity {
        public:
            static constexpr std::uintptr_t m_flEmitterAngle   = 0X0558; // float32
            static constexpr std::uintptr_t m_flSweetSpotAngle = 0X055C; // float32
            static constexpr std::uintptr_t m_flAttenMin       = 0X0560; // float32
            static constexpr std::uintptr_t m_flAttenMax       = 0X0564; // float32
            static constexpr std::uintptr_t m_iszParameterName = 0X0568; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundOpvarSetAABBEntity : public CSoundOpvarSetPointEntity {
        public:
            static constexpr std::uintptr_t m_vDistanceInnerMins = 0X0640; // Vector
            static constexpr std::uintptr_t m_vDistanceInnerMaxs = 0X064C; // Vector
            static constexpr std::uintptr_t m_vDistanceOuterMins = 0X0658; // Vector
            static constexpr std::uintptr_t m_vDistanceOuterMaxs = 0X0664; // Vector
            static constexpr std::uintptr_t m_nAABBDirection     = 0X0670; // int32
            static constexpr std::uintptr_t m_vInnerMins         = 0X0674; // Vector
            static constexpr std::uintptr_t m_vInnerMaxs         = 0X0680; // Vector
            static constexpr std::uintptr_t m_vOuterMins         = 0X068C; // Vector
            static constexpr std::uintptr_t m_vOuterMaxs         = 0X0698; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundOpvarSetOBBEntity : public CSoundOpvarSetAABBEntity {
        public:
        };

        // Has Trivial Destructor
        // Local Type Scope
        class CFilterMultipleAPI {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBaseCSGrenadeProjectile : public CBaseGrenade {
        public:
            static constexpr std::uintptr_t m_vInitialPosition         = 0X0B40; // Vector
            static constexpr std::uintptr_t m_vInitialVelocity         = 0X0B4C; // Vector
            static constexpr std::uintptr_t m_nBounces                 = 0X0B58; // int32
            static constexpr std::uintptr_t m_nExplodeEffectIndex      = 0X0B60; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            static constexpr std::uintptr_t m_nExplodeEffectTickBegin  = 0X0B68; // int32
            static constexpr std::uintptr_t m_vecExplodeEffectOrigin   = 0X0B6C; // Vector
            static constexpr std::uintptr_t m_flSpawnTime              = 0X0B78; // GameTime_t
            static constexpr std::uintptr_t m_unOGSExtraFlags          = 0X0B7C; // uint8
            static constexpr std::uintptr_t m_bDetonationRecorded      = 0X0B7D; // bool
            static constexpr std::uintptr_t m_nItemIndex               = 0X0B7E; // uint16
            static constexpr std::uintptr_t m_vecOriginalSpawnLocation = 0X0B80; // Vector
            static constexpr std::uintptr_t m_flLastBounceSoundTime    = 0X0B8C; // GameTime_t
            static constexpr std::uintptr_t m_vecGrenadeSpin           = 0X0B90; // RotationVector
            static constexpr std::uintptr_t m_vecLastHitSurfaceNormal  = 0X0B9C; // Vector
            static constexpr std::uintptr_t m_nTicksAtZeroVelocity     = 0X0BA8; // int32
            static constexpr std::uintptr_t m_bHasEverHitEnemy         = 0X0BAC; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CDecoyProjectile : public CBaseCSGrenadeProjectile {
        public:
            static constexpr std::uintptr_t m_nDecoyShotTick      = 0X0BC8; // int32
            static constexpr std::uintptr_t m_shotsRemaining      = 0X0BCC; // int32
            static constexpr std::uintptr_t m_fExpireTime         = 0X0BD0; // GameTime_t
            static constexpr std::uintptr_t m_decoyWeaponDefIndex = 0X0BE0; // uint16
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPrecipitationBlocker : public CBaseModelEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundOpvarSetPathCornerEntity : public CSoundOpvarSetPointEntity {
        public:
            static constexpr std::uintptr_t m_bUseParentedPath        = 0X0658; // bool
            static constexpr std::uintptr_t m_flDistMinSqr            = 0X065C; // float32
            static constexpr std::uintptr_t m_flDistMaxSqr            = 0X0660; // float32
            static constexpr std::uintptr_t m_iszPathCornerEntityName = 0X0668; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointClientCommand : public CPointEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CHostageRescueZone : public CHostageRescueZoneShim {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWorld : public CBaseModelEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPathMoverEntitySpawner : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_szSpawnTemplates                   = 0X04A8; // CUtlSymbolLarge[4]
            static constexpr std::uintptr_t m_nSpawnIndex                        = 0X04C8; // int32
            static constexpr std::uintptr_t m_hPathMover                         = 0X04CC; // CHandle<CPathMover>
            static constexpr std::uintptr_t m_flSpawnFrequencySeconds            = 0X04D0; // float32
            static constexpr std::uintptr_t m_flSpawnFrequencyDistToNearestMover = 0X04D4; // float32
            static constexpr std::uintptr_t m_mapSpawnedMoverTemplates           = 0X04D8; // CUtlHashtable<CHandle<CFuncMover>,CPathMoverEntitySpawn>
            static constexpr std::uintptr_t m_nMaxActive                         = 0X04F8; // int32
            static constexpr std::uintptr_t m_flLastSpawnTime                    = 0X04FC; // GameTime_t
            static constexpr std::uintptr_t m_bEnabled                           = 0X0500; // bool
        };

        // Has VTable
        // Local Type Scope
        class CModelState {
        public:
            static constexpr std::uintptr_t m_hModel                         = 0X00A0; // CStrongHandle<InfoForResourceTypeCModel>
            static constexpr std::uintptr_t m_ModelName                      = 0X00A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bClientClothCreationSuppressed = 0X00F5; // bool
            static constexpr std::uintptr_t m_MeshGroupMask                  = 0X01A0; // uint64
            static constexpr std::uintptr_t m_nBodyGroupChoices              = 0X01F0; // CNetworkUtlVectorBase<int32>
            static constexpr std::uintptr_t m_nIdealMotionType               = 0X023A; // int8
            static constexpr std::uintptr_t m_nForceLOD                      = 0X023B; // int8
            static constexpr std::uintptr_t m_nClothUpdateFlags              = 0X023C; // int8
        };

        // Has Trivial Destructor
        // Construct Allowed
        // Local Type Scope
        struct CPulseCell_LerpCameraSettings__CursorState_t : public CPulseCell_BaseLerp__CursorState_t {
        public:
            static constexpr std::uintptr_t m_hCamera       = 0X0008; // CHandle<CPointCamera>
            static constexpr std::uintptr_t m_OverlaidStart = 0X000C; // PointCameraSettings_t
            static constexpr std::uintptr_t m_OverlaidEnd   = 0X001C; // PointCameraSettings_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Outflow_CycleOrdered : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_Outputs = 0X0048; // CUtlVector<CPulse_OutflowConnection>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponGlock : public CCSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CHEGrenadeProjectile : public CBaseCSGrenadeProjectile {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerGravity : public CBaseTrigger {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CCollisionProperty {
        public:
            static constexpr std::uintptr_t m_collisionAttribute          = 0X0010; // VPhysicsCollisionAttribute_t
            static constexpr std::uintptr_t m_vecMins                     = 0X0040; // Vector
            static constexpr std::uintptr_t m_vecMaxs                     = 0X004C; // Vector
            static constexpr std::uintptr_t m_usSolidFlags                = 0X005A; // uint8
            static constexpr std::uintptr_t m_nSolidType                  = 0X005B; // SolidType_t
            static constexpr std::uintptr_t m_triggerBloat                = 0X005C; // uint8
            static constexpr std::uintptr_t m_nSurroundType               = 0X005D; // SurroundingBoundsType_t
            static constexpr std::uintptr_t m_CollisionGroup              = 0X005E; // uint8
            static constexpr std::uintptr_t m_nEnablePhysics              = 0X005F; // uint8
            static constexpr std::uintptr_t m_flBoundingRadius            = 0X0060; // float32
            static constexpr std::uintptr_t m_vecSpecifiedSurroundingMins = 0X0064; // Vector
            static constexpr std::uintptr_t m_vecSpecifiedSurroundingMaxs = 0X0070; // Vector
            static constexpr std::uintptr_t m_vecSurroundingMaxs          = 0X007C; // Vector
            static constexpr std::uintptr_t m_vecSurroundingMins          = 0X0088; // Vector
            static constexpr std::uintptr_t m_vCapsuleCenter1             = 0X0094; // Vector
            static constexpr std::uintptr_t m_vCapsuleCenter2             = 0X00A0; // Vector
            static constexpr std::uintptr_t m_flCapsuleRadius             = 0X00AC; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponGalilAR : public CCSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFilterMassGreater : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_fFilterMass = 0X04E0; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponMP7 : public CCSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnableMotionFixup : public CBaseEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicActiveAutosave : public CLogicAutosave {
        public:
            static constexpr std::uintptr_t m_TriggerHitPoints = 0X04B8; // int32
            static constexpr std::uintptr_t m_flTimeToTrigger  = 0X04BC; // float32
            static constexpr std::uintptr_t m_flStartTime      = 0X04C0; // GameTime_t
            static constexpr std::uintptr_t m_flDangerousTime  = 0X04C4; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CMathCounter : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_flMin            = 0X04A8; // float32
            static constexpr std::uintptr_t m_flMax            = 0X04AC; // float32
            static constexpr std::uintptr_t m_bHitMin          = 0X04B0; // bool
            static constexpr std::uintptr_t m_bHitMax          = 0X04B1; // bool
            static constexpr std::uintptr_t m_bDisabled        = 0X04B2; // bool
            static constexpr std::uintptr_t m_OutValue         = 0X04B8; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnGetValue       = 0X04D8; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnHitMin         = 0X04F8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnHitMax         = 0X0510; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnChangedFromMin = 0X0528; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnChangedFromMax = 0X0540; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSGameModeRules_ArmsRace : public CCSGameModeRules {
        public:
            static constexpr std::uintptr_t m_WeaponSequence = 0X0030; // CNetworkUtlVectorBase<CUtlString>
        };

        // Has VTable
        // Local Type Scope
        class CAttributeContainer : public CAttributeManager {
        public:
            static constexpr std::uintptr_t m_Item = 0X0050; // CEconItemView
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSPlace : public CServerOnlyModelEntity {
        public:
            static constexpr std::uintptr_t m_name = 0X0748; // CUtlSymbolLarge
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
        class CFilterContext : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_iFilterContext = 0X04E0; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLightDirectionalEntity : public CLightEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLightEnvironmentEntity : public CLightDirectionalEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvDecal : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_hDecalMaterial       = 0X0730; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_flWidth              = 0X0738; // float32
            static constexpr std::uintptr_t m_flHeight             = 0X073C; // float32
            static constexpr std::uintptr_t m_flDepth              = 0X0740; // float32
            static constexpr std::uintptr_t m_nRenderOrder         = 0X0744; // uint32
            static constexpr std::uintptr_t m_bProjectOnWorld      = 0X0748; // bool
            static constexpr std::uintptr_t m_bProjectOnCharacters = 0X0749; // bool
            static constexpr std::uintptr_t m_bProjectOnWater      = 0X074A; // bool
            static constexpr std::uintptr_t m_flDepthSortBias      = 0X074C; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvVolumetricFogVolume : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_bActive                        = 0X04A8; // bool
            static constexpr std::uintptr_t m_vBoxMins                       = 0X04AC; // Vector
            static constexpr std::uintptr_t m_vBoxMaxs                       = 0X04B8; // Vector
            static constexpr std::uintptr_t m_bStartDisabled                 = 0X04C4; // bool
            static constexpr std::uintptr_t m_bIndirectUseLPVs               = 0X04C5; // bool
            static constexpr std::uintptr_t m_flStrength                     = 0X04C8; // float32
            static constexpr std::uintptr_t m_nFalloffShape                  = 0X04CC; // int32
            static constexpr std::uintptr_t m_flFalloffExponent              = 0X04D0; // float32
            static constexpr std::uintptr_t m_flHeightFogDepth               = 0X04D4; // float32
            static constexpr std::uintptr_t m_fHeightFogEdgeWidth            = 0X04D8; // float32
            static constexpr std::uintptr_t m_fIndirectLightStrength         = 0X04DC; // float32
            static constexpr std::uintptr_t m_fSunLightStrength              = 0X04E0; // float32
            static constexpr std::uintptr_t m_fNoiseStrength                 = 0X04E4; // float32
            static constexpr std::uintptr_t m_TintColor                      = 0X04E8; // Color
            static constexpr std::uintptr_t m_bOverrideTintColor             = 0X04EC; // bool
            static constexpr std::uintptr_t m_bOverrideIndirectLightStrength = 0X04ED; // bool
            static constexpr std::uintptr_t m_bOverrideSunLightStrength      = 0X04EE; // bool
            static constexpr std::uintptr_t m_bOverrideNoiseStrength         = 0X04EF; // bool
        };

        // Has Trivial Destructor
        // Construct Allowed
        // Local Type Scope
        struct CPulseCell_PlaySequence__CursorState_t {
        public:
            static constexpr std::uintptr_t m_hTarget = 0X0000; // CHandle<CBaseAnimGraph>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CItemGeneric : public CItem {
        public:
            static constexpr std::uintptr_t m_bHasTriggerRadius           = 0X0AD4; // bool
            static constexpr std::uintptr_t m_bHasPickupRadius            = 0X0AD5; // bool
            static constexpr std::uintptr_t m_flPickupRadiusSqr           = 0X0AD8; // float32
            static constexpr std::uintptr_t m_flTriggerRadiusSqr          = 0X0ADC; // float32
            static constexpr std::uintptr_t m_flLastPickupCheck           = 0X0AE0; // GameTime_t
            static constexpr std::uintptr_t m_bPlayerCounterListenerAdded = 0X0AE4; // bool
            static constexpr std::uintptr_t m_bPlayerInTriggerRadius      = 0X0AE5; // bool
            static constexpr std::uintptr_t m_hSpawnParticleEffect        = 0X0AE8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            static constexpr std::uintptr_t m_pAmbientSoundEffect         = 0X0AF0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bAutoStartAmbientSound      = 0X0AF8; // bool
            static constexpr std::uintptr_t m_pSpawnScriptFunction        = 0X0B00; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hPickupParticleEffect       = 0X0B08; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            static constexpr std::uintptr_t m_pPickupSoundEffect          = 0X0B10; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_pPickupScriptFunction       = 0X0B18; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hTimeoutParticleEffect      = 0X0B20; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            static constexpr std::uintptr_t m_pTimeoutSoundEffect         = 0X0B28; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_pTimeoutScriptFunction      = 0X0B30; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_pPickupFilterName           = 0X0B38; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hPickupFilter               = 0X0B40; // CHandle<CBaseFilter>
            static constexpr std::uintptr_t m_OnPickup                    = 0X0B48; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnTimeout                   = 0X0B60; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnTriggerStartTouch         = 0X0B78; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnTriggerTouch              = 0X0B90; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnTriggerEndTouch           = 0X0BA8; // CEntityIOOutput
            static constexpr std::uintptr_t m_pAllowPickupScriptFunction  = 0X0BC0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flPickupRadius              = 0X0BC8; // float32
            static constexpr std::uintptr_t m_flTriggerRadius             = 0X0BCC; // float32
            static constexpr std::uintptr_t m_pTriggerSoundEffect         = 0X0BD0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bGlowWhenInTrigger          = 0X0BD8; // bool
            static constexpr std::uintptr_t m_glowColor                   = 0X0BD9; // Color
            static constexpr std::uintptr_t m_bUseable                    = 0X0BDD; // bool
            static constexpr std::uintptr_t m_hTriggerHelper              = 0X0BE0; // CHandle<CItemGenericTriggerHelper>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointValueRemapper : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled                = 0X04A8; // bool
            static constexpr std::uintptr_t m_bUpdateOnClient          = 0X04A9; // bool
            static constexpr std::uintptr_t m_nInputType               = 0X04AC; // ValueRemapperInputType_t
            static constexpr std::uintptr_t m_iszRemapLineStartName    = 0X04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszRemapLineEndName      = 0X04B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hRemapLineStart          = 0X04C0; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hRemapLineEnd            = 0X04C4; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_flMaximumChangePerSecond = 0X04C8; // float32
            static constexpr std::uintptr_t m_flDisengageDistance      = 0X04CC; // float32
            static constexpr std::uintptr_t m_flEngageDistance         = 0X04D0; // float32
            static constexpr std::uintptr_t m_bRequiresUseKey          = 0X04D4; // bool
            static constexpr std::uintptr_t m_nOutputType              = 0X04D8; // ValueRemapperOutputType_t
            static constexpr std::uintptr_t m_iszOutputEntityName      = 0X04E0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszOutputEntity2Name     = 0X04E8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszOutputEntity3Name     = 0X04F0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszOutputEntity4Name     = 0X04F8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hOutputEntities          = 0X0500; // CNetworkUtlVectorBase<CHandle<CBaseEntity>>
            static constexpr std::uintptr_t m_nHapticsType             = 0X0518; // ValueRemapperHapticsType_t
            static constexpr std::uintptr_t m_nMomentumType            = 0X051C; // ValueRemapperMomentumType_t
            static constexpr std::uintptr_t m_flMomentumModifier       = 0X0520; // float32
            static constexpr std::uintptr_t m_flSnapValue              = 0X0524; // float32
            static constexpr std::uintptr_t m_flCurrentMomentum        = 0X0528; // float32
            static constexpr std::uintptr_t m_nRatchetType             = 0X052C; // ValueRemapperRatchetType_t
            static constexpr std::uintptr_t m_flRatchetOffset          = 0X0530; // float32
            static constexpr std::uintptr_t m_flInputOffset            = 0X0534; // float32
            static constexpr std::uintptr_t m_bEngaged                 = 0X0538; // bool
            static constexpr std::uintptr_t m_bFirstUpdate             = 0X0539; // bool
            static constexpr std::uintptr_t m_flPreviousValue          = 0X053C; // float32
            static constexpr std::uintptr_t m_flPreviousUpdateTickTime = 0X0540; // GameTime_t
            static constexpr std::uintptr_t m_vecPreviousTestPoint     = 0X0544; // Vector
            static constexpr std::uintptr_t m_hUsingPlayer             = 0X0550; // CHandle<CBasePlayerPawn>
            static constexpr std::uintptr_t m_flCustomOutputValue      = 0X0554; // float32
            static constexpr std::uintptr_t m_iszSoundEngage           = 0X0558; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszSoundDisengage        = 0X0560; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszSoundReachedValueZero = 0X0568; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszSoundReachedValueOne  = 0X0570; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszSoundMovingLoop       = 0X0578; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_Position                 = 0X0598; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_PositionDelta            = 0X05B8; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnReachedValueZero       = 0X05D8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnReachedValueOne        = 0X05F0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnReachedValueCustom     = 0X0608; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnEngage                 = 0X0620; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnDisengage              = 0X0638; // CEntityIOOutput
        };

        // Has VTable
        // Local Type Scope
        class CBtNodeConditionInactive : public CBtNodeCondition {
        public:
            static constexpr std::uintptr_t m_flRoundStartThresholdSeconds       = 0X0078; // float32
            static constexpr std::uintptr_t m_flSensorInactivityThresholdSeconds = 0X007C; // float32
            static constexpr std::uintptr_t m_SensorInactivityTimer              = 0X0080; // CountdownTimer
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSGO_TeamIntroCounterTerroristPosition : public CCSGO_TeamIntroCharacterPosition {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CScriptComponent : public CEntityComponent {
        public:
            static constexpr std::uintptr_t m_scriptClassName = 0X0030; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncTrain : public CBasePlatTrain {
        public:
            static constexpr std::uintptr_t m_hCurrentTarget  = 0X07D8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_activated       = 0X07DC; // bool
            static constexpr std::uintptr_t m_hEnemy          = 0X07E0; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_flBlockDamage   = 0X07E4; // float32
            static constexpr std::uintptr_t m_flNextBlockTime = 0X07E8; // GameTime_t
            static constexpr std::uintptr_t m_iszLastTarget   = 0X07F0; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CAI_ChangeHintGroup : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_iSearchType     = 0X04A8; // int32
            static constexpr std::uintptr_t m_strSearchName   = 0X04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_strNewHintGroup = 0X04B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flRadius        = 0X04C0; // float32
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_BuyServices : public CPlayerPawnComponent {
        public:
            static constexpr std::uintptr_t m_vecSellbackPurchaseEntries = 0X00D0; // CUtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponAug : public CCSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBuyZone : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_LegacyTeamNum = 0X0890; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponSSG08 : public CCSWeaponBaseGun {
        public:
        };

        // Has Trivial Destructor
        // Local Type Scope
        class CLogicRelayAPI {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoWorldLayer : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_pOutputOnEntitiesSpawned = 0X04A8; // CEntityIOOutput
            static constexpr std::uintptr_t m_worldName                = 0X04C0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_layerName                = 0X04C8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bWorldLayerVisible       = 0X04D0; // bool
            static constexpr std::uintptr_t m_bEntitiesSpawned         = 0X04D1; // bool
            static constexpr std::uintptr_t m_bCreateAsChildSpawnGroup = 0X04D2; // bool
            static constexpr std::uintptr_t m_hLayerSpawnGroup         = 0X04D4; // uint32
        };

        // Has VTable
        // Local Type Scope
        class CBodyComponentBaseModelEntity : public CBodyComponentSkeletonInstance {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicProximity : public CPointEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointGiveAmmo : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_pActivator = 0X04A8; // CHandle<CBaseEntity>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class FilterDamageType : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_iDamageType = 0X04E0; // int32
        };

        // Has VTable
        // Local Type Scope
        class CAttributeList {
        public:
            static constexpr std::uintptr_t m_Attributes = 0X0008; // CUtlVectorEmbeddedNetworkVar<CEconItemAttribute>
            static constexpr std::uintptr_t m_pManager   = 0X0070; // CAttributeManager*
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
        class CFilterProximity : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_flRadius = 0X04E0; // float32
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CAnimGraphControllerBase {
        public:
            static constexpr std::uintptr_t m_hExternalGraph = 0X0018; // ExternalAnimGraphHandle_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCS2WeaponGraphController : public CAnimGraphControllerBase {
        public:
            static constexpr std::uintptr_t m_action                   = 0X0090; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            static constexpr std::uintptr_t m_bActionReset             = 0X00A8; // CAnimGraph2ParamOptionalRef<bool>
            static constexpr std::uintptr_t m_flWeaponActionSpeedScale = 0X00C0; // CAnimGraph2ParamOptionalRef<float32>
            static constexpr std::uintptr_t m_weaponCategory           = 0X00D8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            static constexpr std::uintptr_t m_weaponType               = 0X00F0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            static constexpr std::uintptr_t m_weaponExtraInfo          = 0X0108; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            static constexpr std::uintptr_t m_flWeaponAmmo             = 0X0120; // CAnimGraph2ParamOptionalRef<float32>
            static constexpr std::uintptr_t m_flWeaponAmmoMax          = 0X0138; // CAnimGraph2ParamOptionalRef<float32>
            static constexpr std::uintptr_t m_flWeaponAmmoReserve      = 0X0150; // CAnimGraph2ParamOptionalRef<float32>
            static constexpr std::uintptr_t m_bWeaponIsSilenced        = 0X0168; // CAnimGraph2ParamOptionalRef<bool>
            static constexpr std::uintptr_t m_flWeaponIronsightAmount  = 0X0180; // CAnimGraph2ParamOptionalRef<float32>
            static constexpr std::uintptr_t m_bIsUsingLegacyModel      = 0X0198; // CAnimGraph2ParamOptionalRef<bool>
            static constexpr std::uintptr_t m_idleVariation            = 0X01B0; // CAnimGraph2ParamOptionalRef<float32>
            static constexpr std::uintptr_t m_deployVariation          = 0X01C8; // CAnimGraph2ParamOptionalRef<float32>
            static constexpr std::uintptr_t m_attackType               = 0X01E0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            static constexpr std::uintptr_t m_attackThrowStrength      = 0X01F8; // CAnimGraph2ParamOptionalRef<float32>
            static constexpr std::uintptr_t m_flAttackVariation        = 0X0210; // CAnimGraph2ParamOptionalRef<float32>
            static constexpr std::uintptr_t m_inspectVariation         = 0X0228; // CAnimGraph2ParamOptionalRef<float32>
            static constexpr std::uintptr_t m_inspectExtraInfo         = 0X0240; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            static constexpr std::uintptr_t m_reloadStage              = 0X0258; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
        };

        // Has VTable
        // Has Trivial Destructor
        // Local Type Scope
        class CEffectData {
        public:
            static constexpr std::uintptr_t m_vOrigin          = 0X0008; // VectorWS
            static constexpr std::uintptr_t m_vStart           = 0X0014; // VectorWS
            static constexpr std::uintptr_t m_vNormal          = 0X0020; // Vector
            static constexpr std::uintptr_t m_vAngles          = 0X002C; // QAngle
            static constexpr std::uintptr_t m_hEntity          = 0X0038; // CEntityHandle
            static constexpr std::uintptr_t m_hOtherEntity     = 0X003C; // CEntityHandle
            static constexpr std::uintptr_t m_flScale          = 0X0040; // float32
            static constexpr std::uintptr_t m_flMagnitude      = 0X0044; // float32
            static constexpr std::uintptr_t m_flRadius         = 0X0048; // float32
            static constexpr std::uintptr_t m_nSurfaceProp     = 0X004C; // CUtlStringToken
            static constexpr std::uintptr_t m_nEffectIndex     = 0X0050; // CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>
            static constexpr std::uintptr_t m_nDamageType      = 0X0058; // uint32
            static constexpr std::uintptr_t m_nPenetrate       = 0X005C; // uint8
            static constexpr std::uintptr_t m_nMaterial        = 0X005E; // uint16
            static constexpr std::uintptr_t m_nHitBox          = 0X0060; // int16
            static constexpr std::uintptr_t m_nColor           = 0X0062; // uint8
            static constexpr std::uintptr_t m_fFlags           = 0X0063; // uint8
            static constexpr std::uintptr_t m_nAttachmentIndex = 0X0064; // AttachmentHandle_t
            static constexpr std::uintptr_t m_nAttachmentName  = 0X0068; // CUtlStringToken
            static constexpr std::uintptr_t m_iEffectName      = 0X006C; // uint16
            static constexpr std::uintptr_t m_nExplosionType   = 0X006E; // uint8
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEntityDissolve : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_flFadeInStart        = 0X0730; // float32
            static constexpr std::uintptr_t m_flFadeInLength       = 0X0734; // float32
            static constexpr std::uintptr_t m_flFadeOutModelStart  = 0X0738; // float32
            static constexpr std::uintptr_t m_flFadeOutModelLength = 0X073C; // float32
            static constexpr std::uintptr_t m_flFadeOutStart       = 0X0740; // float32
            static constexpr std::uintptr_t m_flFadeOutLength      = 0X0744; // float32
            static constexpr std::uintptr_t m_flStartTime          = 0X0748; // GameTime_t
            static constexpr std::uintptr_t m_nDissolveType        = 0X074C; // EntityDisolveType_t
            static constexpr std::uintptr_t m_vDissolverOrigin     = 0X0750; // Vector
            static constexpr std::uintptr_t m_nMagnitude           = 0X075C; // uint32
        };

        // Has VTable
        // Is Absract
        // Local Type Scope
        class CTeamplayRules : public CMultiplayRules {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CCSGameRules : public CTeamplayRules {
        public:
            static constexpr std::uintptr_t m_bFreezePeriod                       = 0X00D8; // bool
            static constexpr std::uintptr_t m_bWarmupPeriod                       = 0X00D9; // bool
            static constexpr std::uintptr_t m_fWarmupPeriodEnd                    = 0X00DC; // GameTime_t
            static constexpr std::uintptr_t m_fWarmupPeriodStart                  = 0X00E0; // GameTime_t
            static constexpr std::uintptr_t m_bTerroristTimeOutActive             = 0X00E4; // bool
            static constexpr std::uintptr_t m_bCTTimeOutActive                    = 0X00E5; // bool
            static constexpr std::uintptr_t m_flTerroristTimeOutRemaining         = 0X00E8; // float32
            static constexpr std::uintptr_t m_flCTTimeOutRemaining                = 0X00EC; // float32
            static constexpr std::uintptr_t m_nTerroristTimeOuts                  = 0X00F0; // int32
            static constexpr std::uintptr_t m_nCTTimeOuts                         = 0X00F4; // int32
            static constexpr std::uintptr_t m_bTechnicalTimeOut                   = 0X00F8; // bool
            static constexpr std::uintptr_t m_bMatchWaitingForResume              = 0X00F9; // bool
            static constexpr std::uintptr_t m_iFreezeTime                         = 0X00FC; // int32
            static constexpr std::uintptr_t m_iRoundTime                          = 0X0100; // int32
            static constexpr std::uintptr_t m_fMatchStartTime                     = 0X0104; // float32
            static constexpr std::uintptr_t m_fRoundStartTime                     = 0X0108; // GameTime_t
            static constexpr std::uintptr_t m_flRestartRoundTime                  = 0X010C; // GameTime_t
            static constexpr std::uintptr_t m_bGameRestart                        = 0X0110; // bool
            static constexpr std::uintptr_t m_flGameStartTime                     = 0X0114; // float32
            static constexpr std::uintptr_t m_timeUntilNextPhaseStarts            = 0X0118; // float32
            static constexpr std::uintptr_t m_gamePhase                           = 0X011C; // int32
            static constexpr std::uintptr_t m_totalRoundsPlayed                   = 0X0120; // int32
            static constexpr std::uintptr_t m_nRoundsPlayedThisPhase              = 0X0124; // int32
            static constexpr std::uintptr_t m_nOvertimePlaying                    = 0X0128; // int32
            static constexpr std::uintptr_t m_iHostagesRemaining                  = 0X012C; // int32
            static constexpr std::uintptr_t m_bAnyHostageReached                  = 0X0130; // bool
            static constexpr std::uintptr_t m_bMapHasBombTarget                   = 0X0131; // bool
            static constexpr std::uintptr_t m_bMapHasRescueZone                   = 0X0132; // bool
            static constexpr std::uintptr_t m_bMapHasBuyZone                      = 0X0133; // bool
            static constexpr std::uintptr_t m_bIsQueuedMatchmaking                = 0X0134; // bool
            static constexpr std::uintptr_t m_nQueuedMatchmakingMode              = 0X0138; // int32
            static constexpr std::uintptr_t m_bIsValveDS                          = 0X013C; // bool
            static constexpr std::uintptr_t m_bLogoMap                            = 0X013D; // bool
            static constexpr std::uintptr_t m_bPlayAllStepSoundsOnServer          = 0X013E; // bool
            static constexpr std::uintptr_t m_iSpectatorSlotCount                 = 0X0140; // int32
            static constexpr std::uintptr_t m_MatchDevice                         = 0X0144; // int32
            static constexpr std::uintptr_t m_bHasMatchStarted                    = 0X0148; // bool
            static constexpr std::uintptr_t m_nNextMapInMapgroup                  = 0X014C; // int32
            static constexpr std::uintptr_t m_szTournamentEventName               = 0X0150; // char[512]
            static constexpr std::uintptr_t m_szTournamentEventStage              = 0X0350; // char[512]
            static constexpr std::uintptr_t m_szMatchStatTxt                      = 0X0550; // char[512]
            static constexpr std::uintptr_t m_szTournamentPredictionsTxt          = 0X0750; // char[512]
            static constexpr std::uintptr_t m_nTournamentPredictionsPct           = 0X0950; // int32
            static constexpr std::uintptr_t m_flCMMItemDropRevealStartTime        = 0X0954; // GameTime_t
            static constexpr std::uintptr_t m_flCMMItemDropRevealEndTime          = 0X0958; // GameTime_t
            static constexpr std::uintptr_t m_bIsDroppingItems                    = 0X095C; // bool
            static constexpr std::uintptr_t m_bIsQuestEligible                    = 0X095D; // bool
            static constexpr std::uintptr_t m_bIsHltvActive                       = 0X095E; // bool
            static constexpr std::uintptr_t m_bBombPlanted                        = 0X095F; // bool
            static constexpr std::uintptr_t m_arrProhibitedItemIndices            = 0X0960; // uint16[100]
            static constexpr std::uintptr_t m_arrTournamentActiveCasterAccounts   = 0X0A28; // uint32[4]
            static constexpr std::uintptr_t m_numBestOfMaps                       = 0X0A38; // int32
            static constexpr std::uintptr_t m_nHalloweenMaskListSeed              = 0X0A3C; // int32
            static constexpr std::uintptr_t m_bBombDropped                        = 0X0A40; // bool
            static constexpr std::uintptr_t m_iRoundWinStatus                     = 0X0A44; // int32
            static constexpr std::uintptr_t m_eRoundWinReason                     = 0X0A48; // int32
            static constexpr std::uintptr_t m_bTCantBuy                           = 0X0A4C; // bool
            static constexpr std::uintptr_t m_bCTCantBuy                          = 0X0A4D; // bool
            static constexpr std::uintptr_t m_iMatchStats_RoundResults            = 0X0A50; // int32[30]
            static constexpr std::uintptr_t m_iMatchStats_PlayersAlive_CT         = 0X0AC8; // int32[30]
            static constexpr std::uintptr_t m_iMatchStats_PlayersAlive_T          = 0X0B40; // int32[30]
            static constexpr std::uintptr_t m_TeamRespawnWaveTimes                = 0X0BB8; // float32[32]
            static constexpr std::uintptr_t m_flNextRespawnWave                   = 0X0C38; // GameTime_t[32]
            static constexpr std::uintptr_t m_vMinimapMins                        = 0X0CB8; // Vector
            static constexpr std::uintptr_t m_vMinimapMaxs                        = 0X0CC4; // Vector
            static constexpr std::uintptr_t m_MinimapVerticalSectionHeights       = 0X0CD0; // float32[8]
            static constexpr std::uintptr_t m_ullLocalMatchID                     = 0X0CF0; // uint64
            static constexpr std::uintptr_t m_nEndMatchMapGroupVoteTypes          = 0X0CF8; // int32[10]
            static constexpr std::uintptr_t m_nEndMatchMapGroupVoteOptions        = 0X0D20; // int32[10]
            static constexpr std::uintptr_t m_nEndMatchMapVoteWinner              = 0X0D48; // int32
            static constexpr std::uintptr_t m_iNumConsecutiveCTLoses              = 0X0D4C; // int32
            static constexpr std::uintptr_t m_iNumConsecutiveTerroristLoses       = 0X0D50; // int32
            static constexpr std::uintptr_t m_bHasHostageBeenTouched              = 0X0D70; // bool
            static constexpr std::uintptr_t m_flIntermissionStartTime             = 0X0D74; // GameTime_t
            static constexpr std::uintptr_t m_flIntermissionEndTime               = 0X0D78; // GameTime_t
            static constexpr std::uintptr_t m_bLevelInitialized                   = 0X0D7C; // bool
            static constexpr std::uintptr_t m_iTotalRoundsPlayed                  = 0X0D80; // int32
            static constexpr std::uintptr_t m_iUnBalancedRounds                   = 0X0D84; // int32
            static constexpr std::uintptr_t m_endMatchOnRoundReset                = 0X0D88; // bool
            static constexpr std::uintptr_t m_endMatchOnThink                     = 0X0D89; // bool
            static constexpr std::uintptr_t m_iNumTerrorist                       = 0X0D8C; // int32
            static constexpr std::uintptr_t m_iNumCT                              = 0X0D90; // int32
            static constexpr std::uintptr_t m_iNumSpawnableTerrorist              = 0X0D94; // int32
            static constexpr std::uintptr_t m_iNumSpawnableCT                     = 0X0D98; // int32
            static constexpr std::uintptr_t m_arrSelectedHostageSpawnIndices      = 0X0DA0; // CUtlVector<int32>
            static constexpr std::uintptr_t m_nSpawnPointsRandomSeed              = 0X0DB8; // int32
            static constexpr std::uintptr_t m_bFirstConnected                     = 0X0DBC; // bool
            static constexpr std::uintptr_t m_bCompleteReset                      = 0X0DBD; // bool
            static constexpr std::uintptr_t m_bPickNewTeamsOnReset                = 0X0DBE; // bool
            static constexpr std::uintptr_t m_bScrambleTeamsOnRestart             = 0X0DBF; // bool
            static constexpr std::uintptr_t m_bSwapTeamsOnRestart                 = 0X0DC0; // bool
            static constexpr std::uintptr_t m_nEndMatchTiedVotes                  = 0X0DC8; // CUtlVector<int32>
            static constexpr std::uintptr_t m_bNeedToAskPlayersForContinueVote    = 0X0DE4; // bool
            static constexpr std::uintptr_t m_numQueuedMatchmakingAccounts        = 0X0DE8; // uint32
            static constexpr std::uintptr_t m_fAvgPlayerRank                      = 0X0DEC; // float32
            static constexpr std::uintptr_t m_pQueuedMatchmakingReservationString = 0X0DF0; // char*
            static constexpr std::uintptr_t m_numTotalTournamentDrops             = 0X0DF8; // uint32
            static constexpr std::uintptr_t m_numSpectatorsCountMax               = 0X0DFC; // uint32
            static constexpr std::uintptr_t m_numSpectatorsCountMaxTV             = 0X0E00; // uint32
            static constexpr std::uintptr_t m_numSpectatorsCountMaxLnk            = 0X0E04; // uint32
            static constexpr std::uintptr_t m_nCTsAliveAtFreezetimeEnd            = 0X0E10; // int32
            static constexpr std::uintptr_t m_nTerroristsAliveAtFreezetimeEnd     = 0X0E14; // int32
            static constexpr std::uintptr_t m_bForceTeamChangeSilent              = 0X0E18; // bool
            static constexpr std::uintptr_t m_bLoadingRoundBackupData             = 0X0E19; // bool
            static constexpr std::uintptr_t m_nMatchInfoShowType                  = 0X0E50; // int32
            static constexpr std::uintptr_t m_flMatchInfoDecidedTime              = 0X0E54; // float32
            static constexpr std::uintptr_t mTeamDMLastWinningTeamNumber          = 0X0E70; // int32
            static constexpr std::uintptr_t mTeamDMLastThinkTime                  = 0X0E74; // float32
            static constexpr std::uintptr_t m_flTeamDMLastAnnouncementTime        = 0X0E78; // float32
            static constexpr std::uintptr_t m_iAccountTerrorist                   = 0X0E7C; // int32
            static constexpr std::uintptr_t m_iAccountCT                          = 0X0E80; // int32
            static constexpr std::uintptr_t m_iSpawnPointCount_Terrorist          = 0X0E84; // int32
            static constexpr std::uintptr_t m_iSpawnPointCount_CT                 = 0X0E88; // int32
            static constexpr std::uintptr_t m_iMaxNumTerrorists                   = 0X0E8C; // int32
            static constexpr std::uintptr_t m_iMaxNumCTs                          = 0X0E90; // int32
            static constexpr std::uintptr_t m_iLoserBonusMostRecentTeam           = 0X0E94; // int32
            static constexpr std::uintptr_t m_tmNextPeriodicThink                 = 0X0E98; // float32
            static constexpr std::uintptr_t m_bVoiceWonMatchBragFired             = 0X0E9C; // bool
            static constexpr std::uintptr_t m_fWarmupNextChatNoticeTime           = 0X0EA0; // float32
            static constexpr std::uintptr_t m_iHostagesRescued                    = 0X0EA8; // int32
            static constexpr std::uintptr_t m_iHostagesTouched                    = 0X0EAC; // int32
            static constexpr std::uintptr_t m_flNextHostageAnnouncement           = 0X0EB0; // float32
            static constexpr std::uintptr_t m_bNoTerroristsKilled                 = 0X0EB4; // bool
            static constexpr std::uintptr_t m_bNoCTsKilled                        = 0X0EB5; // bool
            static constexpr std::uintptr_t m_bNoEnemiesKilled                    = 0X0EB6; // bool
            static constexpr std::uintptr_t m_bCanDonateWeapons                   = 0X0EB7; // bool
            static constexpr std::uintptr_t m_firstKillTime                       = 0X0EBC; // float32
            static constexpr std::uintptr_t m_firstBloodTime                      = 0X0EC4; // float32
            static constexpr std::uintptr_t m_hostageWasInjured                   = 0X0EE0; // bool
            static constexpr std::uintptr_t m_hostageWasKilled                    = 0X0EE1; // bool
            static constexpr std::uintptr_t m_bVoteCalled                         = 0X0EF0; // bool
            static constexpr std::uintptr_t m_bServerVoteOnReset                  = 0X0EF1; // bool
            static constexpr std::uintptr_t m_flVoteCheckThrottle                 = 0X0EF4; // float32
            static constexpr std::uintptr_t m_bBuyTimeEnded                       = 0X0EF8; // bool
            static constexpr std::uintptr_t m_nLastFreezeEndBeep                  = 0X0EFC; // int32
            static constexpr std::uintptr_t m_bTargetBombed                       = 0X0F00; // bool
            static constexpr std::uintptr_t m_bBombDefused                        = 0X0F01; // bool
            static constexpr std::uintptr_t m_bMapHasBombZone                     = 0X0F02; // bool
            static constexpr std::uintptr_t m_vecMainCTSpawnPos                   = 0X0F50; // Vector
            static constexpr std::uintptr_t m_CTSpawnPointsMasterList             = 0X0F60; // CUtlVector<CHandle<SpawnPoint>>
            static constexpr std::uintptr_t m_TerroristSpawnPointsMasterList      = 0X0F78; // CUtlVector<CHandle<SpawnPoint>>
            static constexpr std::uintptr_t m_bRespawningAllRespawnablePlayers    = 0X0F90; // bool
            static constexpr std::uintptr_t m_iNextCTSpawnPoint                   = 0X0F94; // int32
            static constexpr std::uintptr_t m_flCTSpawnPointUsedTime              = 0X0F98; // float32
            static constexpr std::uintptr_t m_iNextTerroristSpawnPoint            = 0X0F9C; // int32
            static constexpr std::uintptr_t m_flTerroristSpawnPointUsedTime       = 0X0FA0; // float32
            static constexpr std::uintptr_t m_CTSpawnPoints                       = 0X0FA8; // CUtlVector<CHandle<SpawnPoint>>
            static constexpr std::uintptr_t m_TerroristSpawnPoints                = 0X0FC0; // CUtlVector<CHandle<SpawnPoint>>
            static constexpr std::uintptr_t m_bIsUnreservedGameServer             = 0X0FD8; // bool
            static constexpr std::uintptr_t m_fAutobalanceDisplayTime             = 0X0FDC; // float32
            static constexpr std::uintptr_t m_bAllowWeaponSwitch                  = 0X1018; // bool
            static constexpr std::uintptr_t m_bRoundTimeWarningTriggered          = 0X1019; // bool
            static constexpr std::uintptr_t m_phaseChangeAnnouncementTime         = 0X101C; // GameTime_t
            static constexpr std::uintptr_t m_fNextUpdateTeamClanNamesTime        = 0X1020; // float32
            static constexpr std::uintptr_t m_flLastThinkTime                     = 0X1024; // GameTime_t
            static constexpr std::uintptr_t m_fAccumulatedRoundOffDamage          = 0X1028; // float32
            static constexpr std::uintptr_t m_nShorthandedBonusLastEvalRound      = 0X102C; // int32
            static constexpr std::uintptr_t m_nMatchAbortedEarlyReason            = 0X1078; // int32
            static constexpr std::uintptr_t m_bHasTriggeredRoundStartMusic        = 0X107C; // bool
            static constexpr std::uintptr_t m_bSwitchingTeamsAtRoundReset         = 0X107D; // bool
            static constexpr std::uintptr_t m_pGameModeRules                      = 0X1098; // CCSGameModeRules*
            static constexpr std::uintptr_t m_BtGlobalBlackboard                  = 0X10A0; // KeyValues3
            static constexpr std::uintptr_t m_hPlayerResource                     = 0X1138; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_RetakeRules                         = 0X1140; // CRetakeGameRules
            static constexpr std::uintptr_t m_arrTeamUniqueKillWeaponsMatch       = 0X1330; // CUtlVector<int32>[4]
            static constexpr std::uintptr_t m_bTeamLastKillUsedUniqueWeaponMatch  = 0X1390; // bool[4]
            static constexpr std::uintptr_t m_nMatchEndCount                      = 0X13B8; // uint8
            static constexpr std::uintptr_t m_nTTeamIntroVariant                  = 0X13BC; // int32
            static constexpr std::uintptr_t m_nCTTeamIntroVariant                 = 0X13C0; // int32
            static constexpr std::uintptr_t m_bTeamIntroPeriod                    = 0X13C4; // bool
            static constexpr std::uintptr_t m_fTeamIntroPeriodEnd                 = 0X13C8; // GameTime_t
            static constexpr std::uintptr_t m_bPlayedTeamIntroVO                  = 0X13CC; // bool
            static constexpr std::uintptr_t m_iRoundEndWinnerTeam                 = 0X13D0; // int32
            static constexpr std::uintptr_t m_eRoundEndReason                     = 0X13D4; // int32
            static constexpr std::uintptr_t m_bRoundEndShowTimerDefend            = 0X13D8; // bool
            static constexpr std::uintptr_t m_iRoundEndTimerTime                  = 0X13DC; // int32
            static constexpr std::uintptr_t m_sRoundEndFunFactToken               = 0X13E0; // CUtlString
            static constexpr std::uintptr_t m_iRoundEndFunFactPlayerSlot          = 0X13E8; // CPlayerSlot
            static constexpr std::uintptr_t m_iRoundEndFunFactData1               = 0X13EC; // int32
            static constexpr std::uintptr_t m_iRoundEndFunFactData2               = 0X13F0; // int32
            static constexpr std::uintptr_t m_iRoundEndFunFactData3               = 0X13F4; // int32
            static constexpr std::uintptr_t m_sRoundEndMessage                    = 0X13F8; // CUtlString
            static constexpr std::uintptr_t m_iRoundEndPlayerCount                = 0X1400; // int32
            static constexpr std::uintptr_t m_bRoundEndNoMusic                    = 0X1404; // bool
            static constexpr std::uintptr_t m_iRoundEndLegacy                     = 0X1408; // int32
            static constexpr std::uintptr_t m_nRoundEndCount                      = 0X140C; // uint8
            static constexpr std::uintptr_t m_iRoundStartRoundNumber              = 0X1410; // int32
            static constexpr std::uintptr_t m_nRoundStartCount                    = 0X1414; // uint8
            static constexpr std::uintptr_t m_flLastPerfSampleTime                = 0X5420; // float64
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
        class CLogicAchievement : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled             = 0X04A8; // bool
            static constexpr std::uintptr_t m_iszAchievementEventID = 0X04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_OnFired               = 0X04B8; // CEntityIOOutput
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Local Type Scope
        struct CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t {
        public:
            static constexpr std::uintptr_t pItem = 0X0000; // CEconItemView*
            static constexpr std::uintptr_t team  = 0X0008; // uint16
            static constexpr std::uintptr_t slot  = 0X000A; // uint16
        };

        // Has VTable
        // Local Type Scope
        class CLightComponent : public CEntityComponent {
        public:
            static constexpr std::uintptr_t __m_pChainEntity              = 0X0038; // CNetworkVarChainer
            static constexpr std::uintptr_t m_Color                       = 0X0075; // Color
            static constexpr std::uintptr_t m_SecondaryColor              = 0X0079; // Color
            static constexpr std::uintptr_t m_flBrightness                = 0X0080; // float32
            static constexpr std::uintptr_t m_flBrightnessScale           = 0X0084; // float32
            static constexpr std::uintptr_t m_flBrightnessMult            = 0X0088; // float32
            static constexpr std::uintptr_t m_flRange                     = 0X008C; // float32
            static constexpr std::uintptr_t m_flFalloff                   = 0X0090; // float32
            static constexpr std::uintptr_t m_flAttenuation0              = 0X0094; // float32
            static constexpr std::uintptr_t m_flAttenuation1              = 0X0098; // float32
            static constexpr std::uintptr_t m_flAttenuation2              = 0X009C; // float32
            static constexpr std::uintptr_t m_flTheta                     = 0X00A0; // float32
            static constexpr std::uintptr_t m_flPhi                       = 0X00A4; // float32
            static constexpr std::uintptr_t m_hLightCookie                = 0X00A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_nCascades                   = 0X00B0; // int32
            static constexpr std::uintptr_t m_nCastShadows                = 0X00B4; // int32
            static constexpr std::uintptr_t m_nShadowWidth                = 0X00B8; // int32
            static constexpr std::uintptr_t m_nShadowHeight               = 0X00BC; // int32
            static constexpr std::uintptr_t m_bRenderDiffuse              = 0X00C0; // bool
            static constexpr std::uintptr_t m_nRenderSpecular             = 0X00C4; // int32
            static constexpr std::uintptr_t m_bRenderTransmissive         = 0X00C8; // bool
            static constexpr std::uintptr_t m_flOrthoLightWidth           = 0X00CC; // float32
            static constexpr std::uintptr_t m_flOrthoLightHeight          = 0X00D0; // float32
            static constexpr std::uintptr_t m_nStyle                      = 0X00D4; // int32
            static constexpr std::uintptr_t m_Pattern                     = 0X00D8; // CUtlString
            static constexpr std::uintptr_t m_nCascadeRenderStaticObjects = 0X00E0; // int32
            static constexpr std::uintptr_t m_flShadowCascadeCrossFade    = 0X00E4; // float32
            static constexpr std::uintptr_t m_flShadowCascadeDistanceFade = 0X00E8; // float32
            static constexpr std::uintptr_t m_flShadowCascadeDistance0    = 0X00EC; // float32
            static constexpr std::uintptr_t m_flShadowCascadeDistance1    = 0X00F0; // float32
            static constexpr std::uintptr_t m_flShadowCascadeDistance2    = 0X00F4; // float32
            static constexpr std::uintptr_t m_flShadowCascadeDistance3    = 0X00F8; // float32
            static constexpr std::uintptr_t m_nShadowCascadeResolution0   = 0X00FC; // int32
            static constexpr std::uintptr_t m_nShadowCascadeResolution1   = 0X0100; // int32
            static constexpr std::uintptr_t m_nShadowCascadeResolution2   = 0X0104; // int32
            static constexpr std::uintptr_t m_nShadowCascadeResolution3   = 0X0108; // int32
            static constexpr std::uintptr_t m_bUsesBakedShadowing         = 0X010C; // bool
            static constexpr std::uintptr_t m_nShadowPriority             = 0X0110; // int32
            static constexpr std::uintptr_t m_nBakedShadowIndex           = 0X0114; // int32
            static constexpr std::uintptr_t m_nLightPathUniqueId          = 0X0118; // int32
            static constexpr std::uintptr_t m_nLightMapUniqueId           = 0X011C; // int32
            static constexpr std::uintptr_t m_bRenderToCubemaps           = 0X0120; // bool
            static constexpr std::uintptr_t m_bAllowSSTGeneration         = 0X0121; // bool
            static constexpr std::uintptr_t m_nDirectLight                = 0X0124; // int32
            static constexpr std::uintptr_t m_nIndirectLight              = 0X0128; // int32
            static constexpr std::uintptr_t m_bDynamicBounce              = 0X012C; // bool
            static constexpr std::uintptr_t m_flFadeMinDist               = 0X0130; // float32
            static constexpr std::uintptr_t m_flFadeMaxDist               = 0X0134; // float32
            static constexpr std::uintptr_t m_flShadowFadeMinDist         = 0X0138; // float32
            static constexpr std::uintptr_t m_flShadowFadeMaxDist         = 0X013C; // float32
            static constexpr std::uintptr_t m_bEnabled                    = 0X0140; // bool
            static constexpr std::uintptr_t m_bFlicker                    = 0X0141; // bool
            static constexpr std::uintptr_t m_bPrecomputedFieldsValid     = 0X0142; // bool
            static constexpr std::uintptr_t m_vPrecomputedBoundsMins      = 0X0144; // Vector
            static constexpr std::uintptr_t m_vPrecomputedBoundsMaxs      = 0X0150; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBOrigin       = 0X015C; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBAngles       = 0X0168; // QAngle
            static constexpr std::uintptr_t m_vPrecomputedOBBExtent       = 0X0174; // Vector
            static constexpr std::uintptr_t m_flPrecomputedMaxRange       = 0X0180; // float32
            static constexpr std::uintptr_t m_nFogLightingMode            = 0X0184; // int32
            static constexpr std::uintptr_t m_flFogContributionStength    = 0X0188; // float32
            static constexpr std::uintptr_t m_flNearClipPlane             = 0X018C; // float32
            static constexpr std::uintptr_t m_SkyColor                    = 0X0190; // Color
            static constexpr std::uintptr_t m_flSkyIntensity              = 0X0194; // float32
            static constexpr std::uintptr_t m_SkyAmbientBounce            = 0X0198; // Color
            static constexpr std::uintptr_t m_bUseSecondaryColor          = 0X019C; // bool
            static constexpr std::uintptr_t m_bMixedShadows               = 0X019D; // bool
            static constexpr std::uintptr_t m_flLightStyleStartTime       = 0X01A0; // GameTime_t
            static constexpr std::uintptr_t m_flCapsuleLength             = 0X01A4; // float32
            static constexpr std::uintptr_t m_flMinRoughness              = 0X01A8; // float32
            static constexpr std::uintptr_t m_bPvsModifyEntity            = 0X01B8; // bool
        };

        // Has VTable
        // Local Type Scope
        class CBaseClientUIEntity : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_bEnabled       = 0X0730; // bool
            static constexpr std::uintptr_t m_DialogXMLName  = 0X0738; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_PanelClassName = 0X0740; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_PanelID        = 0X0748; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_CustomOutput0  = 0X0750; // CEntityOutputTemplate<CUtlString,char*>
            static constexpr std::uintptr_t m_CustomOutput1  = 0X0770; // CEntityOutputTemplate<CUtlString,char*>
            static constexpr std::uintptr_t m_CustomOutput2  = 0X0790; // CEntityOutputTemplate<CUtlString,char*>
            static constexpr std::uintptr_t m_CustomOutput3  = 0X07B0; // CEntityOutputTemplate<CUtlString,char*>
            static constexpr std::uintptr_t m_CustomOutput4  = 0X07D0; // CEntityOutputTemplate<CUtlString,char*>
            static constexpr std::uintptr_t m_CustomOutput5  = 0X07F0; // CEntityOutputTemplate<CUtlString,char*>
            static constexpr std::uintptr_t m_CustomOutput6  = 0X0810; // CEntityOutputTemplate<CUtlString,char*>
            static constexpr std::uintptr_t m_CustomOutput7  = 0X0830; // CEntityOutputTemplate<CUtlString,char*>
            static constexpr std::uintptr_t m_CustomOutput8  = 0X0850; // CEntityOutputTemplate<CUtlString,char*>
            static constexpr std::uintptr_t m_CustomOutput9  = 0X0870; // CEntityOutputTemplate<CUtlString,char*>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointClientUIDialog : public CBaseClientUIEntity {
        public:
            static constexpr std::uintptr_t m_hActivator    = 0X0890; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_bStartEnabled = 0X0894; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicLineToEntity : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_Line        = 0X04A8; // CEntityOutputTemplate<Vector,Vector>
            static constexpr std::uintptr_t m_SourceName  = 0X04D0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_StartEntity = 0X04D8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_EndEntity   = 0X04DC; // CHandle<CBaseEntity>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundAreaEntitySphere : public CSoundAreaEntityBase {
        public:
            static constexpr std::uintptr_t m_flRadius = 0X04C8; // float32
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_ActionTrackingServices : public CPlayerPawnComponent {
        public:
            static constexpr std::uintptr_t m_hLastWeaponBeforeC4AutoSwitch = 0X01F8; // CHandle<CBasePlayerWeapon>
            static constexpr std::uintptr_t m_bIsRescuing                   = 0X0224; // bool
            static constexpr std::uintptr_t m_weaponPurchasesThisMatch      = 0X0228; // WeaponPurchaseTracker_t
            static constexpr std::uintptr_t m_weaponPurchasesThisRound      = 0X0298; // WeaponPurchaseTracker_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysicalButton : public CBaseButton {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoSpawnGroupLoadUnload : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_OnSpawnGroupLoadStarted      = 0X04A8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnSpawnGroupLoadFinished     = 0X04C0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnSpawnGroupUnloadStarted    = 0X04D8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnSpawnGroupUnloadFinished   = 0X04F0; // CEntityIOOutput
            static constexpr std::uintptr_t m_iszSpawnGroupName            = 0X0508; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszSpawnGroupFilterName      = 0X0510; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszLandmarkName              = 0X0518; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_sFixedSpawnGroupName         = 0X0520; // CUtlString
            static constexpr std::uintptr_t m_flTimeoutInterval            = 0X0528; // float32
            static constexpr std::uintptr_t m_bAutoActivate                = 0X052C; // bool
            static constexpr std::uintptr_t m_bUnloadingStarted            = 0X052D; // bool
            static constexpr std::uintptr_t m_bQueueActiveSpawnGroupChange = 0X052E; // bool
            static constexpr std::uintptr_t m_bQueueFinishLoading          = 0X052F; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundAreaEntityOrientedBox : public CSoundAreaEntityBase {
        public:
            static constexpr std::uintptr_t m_vMin = 0X04C8; // Vector
            static constexpr std::uintptr_t m_vMax = 0X04D4; // Vector
        };

        // Has VTable
        // Local Type Scope
        class CCSObserver_MovementServices : public CPlayer_MovementServices {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Outflow_ListenForAnimgraphTag : public CPulseCell_BaseYieldingInflow {
        public:
            static constexpr std::uintptr_t m_OnStart    = 0X0048; // CPulse_ResumePoint
            static constexpr std::uintptr_t m_OnEnd      = 0X0090; // CPulse_ResumePoint
            static constexpr std::uintptr_t m_OnCanceled = 0X00D8; // CPulse_ResumePoint
            static constexpr std::uintptr_t m_TagName    = 0X0120; // CGlobalSymbol
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
        class CDecoyGrenade : public CBaseCSGrenade {
        public:
        };

        // Has VTable
        // Is Absract
        class IEconItemInterface {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CEconItemView : public IEconItemInterface {
        public:
            static constexpr std::uintptr_t m_iItemDefinitionIndex       = 0X0038; // uint16
            static constexpr std::uintptr_t m_iEntityQuality             = 0X003C; // int32
            static constexpr std::uintptr_t m_iEntityLevel               = 0X0040; // uint32
            static constexpr std::uintptr_t m_iItemID                    = 0X0048; // uint64
            static constexpr std::uintptr_t m_iItemIDHigh                = 0X0050; // uint32
            static constexpr std::uintptr_t m_iItemIDLow                 = 0X0054; // uint32
            static constexpr std::uintptr_t m_iAccountID                 = 0X0058; // uint32
            static constexpr std::uintptr_t m_iInventoryPosition         = 0X005C; // uint32
            static constexpr std::uintptr_t m_bInitialized               = 0X0068; // bool
            static constexpr std::uintptr_t m_AttributeList              = 0X0070; // CAttributeList
            static constexpr std::uintptr_t m_NetworkedDynamicAttributes = 0X00E8; // CAttributeList
            static constexpr std::uintptr_t m_szCustomName               = 0X0160; // char[161]
            static constexpr std::uintptr_t m_szCustomNameOverride       = 0X0201; // char[161]
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CIncendiaryGrenade : public CMolotovGrenade {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBaseDMStart : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_Master = 0X04A8; // CUtlSymbolLarge
        };

        // Has VTable
        // Has Trivial Destructor
        // Local Type Scope
        struct fogplayerparams_t {
        public:
            static constexpr std::uintptr_t m_hCtrl              = 0X0008; // CHandle<CFogController>
            static constexpr std::uintptr_t m_flTransitionTime   = 0X000C; // float32
            static constexpr std::uintptr_t m_OldColor           = 0X0010; // Color
            static constexpr std::uintptr_t m_flOldStart         = 0X0014; // float32
            static constexpr std::uintptr_t m_flOldEnd           = 0X0018; // float32
            static constexpr std::uintptr_t m_flOldMaxDensity    = 0X001C; // float32
            static constexpr std::uintptr_t m_flOldHDRColorScale = 0X0020; // float32
            static constexpr std::uintptr_t m_flOldFarZ          = 0X0024; // float32
            static constexpr std::uintptr_t m_NewColor           = 0X0028; // Color
            static constexpr std::uintptr_t m_flNewStart         = 0X002C; // float32
            static constexpr std::uintptr_t m_flNewEnd           = 0X0030; // float32
            static constexpr std::uintptr_t m_flNewMaxDensity    = 0X0034; // float32
            static constexpr std::uintptr_t m_flNewHDRColorScale = 0X0038; // float32
            static constexpr std::uintptr_t m_flNewFarZ          = 0X003C; // float32
        };

        // Has VTable
        // Local Type Scope
        class CGlowProperty {
        public:
            static constexpr std::uintptr_t m_fGlowColor                  = 0X0008; // Vector
            static constexpr std::uintptr_t m_iGlowType                   = 0X0030; // int32
            static constexpr std::uintptr_t m_iGlowTeam                   = 0X0034; // int32
            static constexpr std::uintptr_t m_nGlowRange                  = 0X0038; // int32
            static constexpr std::uintptr_t m_nGlowRangeMin               = 0X003C; // int32
            static constexpr std::uintptr_t m_glowColorOverride           = 0X0040; // Color
            static constexpr std::uintptr_t m_bFlashing                   = 0X0044; // bool
            static constexpr std::uintptr_t m_flGlowTime                  = 0X0048; // float32
            static constexpr std::uintptr_t m_flGlowStartTime             = 0X004C; // float32
            static constexpr std::uintptr_t m_bEligibleForScreenHighlight = 0X0050; // bool
            static constexpr std::uintptr_t m_bGlowing                    = 0X0051; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInstancedSceneEntity : public CSceneEntity {
        public:
            static constexpr std::uintptr_t m_hOwner              = 0X0730; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_bHadOwner           = 0X0734; // bool
            static constexpr std::uintptr_t m_flPostSpeakDelay    = 0X0738; // float32
            static constexpr std::uintptr_t m_flPreDelay          = 0X073C; // float32
            static constexpr std::uintptr_t m_bIsBackground       = 0X0740; // bool
            static constexpr std::uintptr_t m_bRemoveOnCompletion = 0X0741; // bool
            static constexpr std::uintptr_t m_hTarget             = 0X0744; // CHandle<CBaseEntity>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCitadelSoundOpvarSetOBB : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_iszStackName       = 0X04A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszOperatorName    = 0X04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszOpvarName       = 0X04B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_vDistanceInnerMins = 0X04C0; // Vector
            static constexpr std::uintptr_t m_vDistanceInnerMaxs = 0X04CC; // Vector
            static constexpr std::uintptr_t m_vDistanceOuterMins = 0X04D8; // Vector
            static constexpr std::uintptr_t m_vDistanceOuterMaxs = 0X04E4; // Vector
            static constexpr std::uintptr_t m_nAABBDirection     = 0X04F0; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundEventParameter : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_iszParamName = 0X04C0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flFloatValue = 0X04C8; // float32
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
        class CRotButton : public CBaseButton {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvViewPunch : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_flRadius     = 0X04A8; // float32
            static constexpr std::uintptr_t m_angViewPunch = 0X04AC; // QAngle
        };

        // Has VTable
        // Local Type Scope
        class CDamageRecord {
        public:
            static constexpr std::uintptr_t m_PlayerDamager              = 0X0030; // CHandle<CCSPlayerPawn>
            static constexpr std::uintptr_t m_PlayerRecipient            = 0X0034; // CHandle<CCSPlayerPawn>
            static constexpr std::uintptr_t m_hPlayerControllerDamager   = 0X0038; // CHandle<CCSPlayerController>
            static constexpr std::uintptr_t m_hPlayerControllerRecipient = 0X003C; // CHandle<CCSPlayerController>
            static constexpr std::uintptr_t m_szPlayerDamagerName        = 0X0040; // CUtlString
            static constexpr std::uintptr_t m_szPlayerRecipientName      = 0X0048; // CUtlString
            static constexpr std::uintptr_t m_DamagerXuid                = 0X0050; // uint64
            static constexpr std::uintptr_t m_RecipientXuid              = 0X0058; // uint64
            static constexpr std::uintptr_t m_flBulletsDamage            = 0X0060; // float32
            static constexpr std::uintptr_t m_flDamage                   = 0X0064; // float32
            static constexpr std::uintptr_t m_flActualHealthRemoved      = 0X0068; // float32
            static constexpr std::uintptr_t m_iNumHits                   = 0X006C; // int32
            static constexpr std::uintptr_t m_iLastBulletUpdate          = 0X0070; // int32
            static constexpr std::uintptr_t m_bIsOtherEnemy              = 0X0074; // bool
            static constexpr std::uintptr_t m_killType                   = 0X0075; // EKillTypes_t
        };

        // Has VTable
        // Has Trivial Destructor
        // Local Type Scope
        struct VPhysicsCollisionAttribute_t {
        public:
            static constexpr std::uintptr_t m_nInteractsAs           = 0X0008; // uint64
            static constexpr std::uintptr_t m_nInteractsWith         = 0X0010; // uint64
            static constexpr std::uintptr_t m_nInteractsExclude      = 0X0018; // uint64
            static constexpr std::uintptr_t m_nEntityId              = 0X0020; // uint32
            static constexpr std::uintptr_t m_nOwnerId               = 0X0024; // uint32
            static constexpr std::uintptr_t m_nHierarchyId           = 0X0028; // uint16
            static constexpr std::uintptr_t m_nDetailLayerMask       = 0X002A; // uint16
            static constexpr std::uintptr_t m_nDetailLayerMaskType   = 0X002C; // uint8
            static constexpr std::uintptr_t m_nTargetDetailLayer     = 0X002D; // uint8
            static constexpr std::uintptr_t m_nCollisionGroup        = 0X002E; // uint8
            static constexpr std::uintptr_t m_nCollisionFunctionMask = 0X002F; // uint8
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CItemKevlar : public CItem {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncShatterglass : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_matPanelTransform               = 0X0730; // matrix3x4_t
            static constexpr std::uintptr_t m_matPanelTransformWsTemp         = 0X0760; // matrix3x4_t
            static constexpr std::uintptr_t m_vecShatterGlassShards           = 0X0790; // CUtlVector<uint32>
            static constexpr std::uintptr_t m_PanelSize                       = 0X07A8; // Vector2D
            static constexpr std::uintptr_t m_flLastShatterSoundEmitTime      = 0X07B0; // GameTime_t
            static constexpr std::uintptr_t m_flLastCleanupTime               = 0X07B4; // GameTime_t
            static constexpr std::uintptr_t m_flInitAtTime                    = 0X07B8; // GameTime_t
            static constexpr std::uintptr_t m_flGlassThickness                = 0X07BC; // float32
            static constexpr std::uintptr_t m_flSpawnInvulnerability          = 0X07C0; // float32
            static constexpr std::uintptr_t m_bBreakSilent                    = 0X07C4; // bool
            static constexpr std::uintptr_t m_bBreakShardless                 = 0X07C5; // bool
            static constexpr std::uintptr_t m_bBroken                         = 0X07C6; // bool
            static constexpr std::uintptr_t m_bGlassNavIgnore                 = 0X07C7; // bool
            static constexpr std::uintptr_t m_bGlassInFrame                   = 0X07C8; // bool
            static constexpr std::uintptr_t m_bStartBroken                    = 0X07C9; // bool
            static constexpr std::uintptr_t m_iInitialDamageType              = 0X07CA; // uint8
            static constexpr std::uintptr_t m_szDamagePositioningEntityName01 = 0X07D0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_szDamagePositioningEntityName02 = 0X07D8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_szDamagePositioningEntityName03 = 0X07E0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_szDamagePositioningEntityName04 = 0X07E8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_vInitialDamagePositions         = 0X07F0; // CUtlVector<Vector>
            static constexpr std::uintptr_t m_vExtraDamagePositions           = 0X0808; // CUtlVector<Vector>
            static constexpr std::uintptr_t m_vInitialPanelVertices           = 0X0820; // CUtlVector<Vector4D>
            static constexpr std::uintptr_t m_OnBroken                        = 0X0838; // CEntityIOOutput
            static constexpr std::uintptr_t m_iSurfaceType                    = 0X0850; // uint8
            static constexpr std::uintptr_t m_hMaterialDamageBase             = 0X0858; // CStrongHandle<InfoForResourceTypeIMaterial2>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CNavWalkable : public CPointEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPlantedC4 : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_bBombTicking                         = 0X0A28; // bool
            static constexpr std::uintptr_t m_flC4Blow                             = 0X0A2C; // GameTime_t
            static constexpr std::uintptr_t m_nBombSite                            = 0X0A30; // int32
            static constexpr std::uintptr_t m_nSourceSoundscapeHash                = 0X0A34; // int32
            static constexpr std::uintptr_t m_bAbortDetonationBecauseWorldIsFrozen = 0X0A38; // bool
            static constexpr std::uintptr_t m_AttributeManager                     = 0X0A40; // CAttributeContainer
            static constexpr std::uintptr_t m_OnBombDefused                        = 0X0D38; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnBombBeginDefuse                    = 0X0D50; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnBombDefuseAborted                  = 0X0D68; // CEntityIOOutput
            static constexpr std::uintptr_t m_bCannotBeDefused                     = 0X0D80; // bool
            static constexpr std::uintptr_t m_entitySpottedState                   = 0X0D88; // EntitySpottedState_t
            static constexpr std::uintptr_t m_nSpotRules                           = 0X0DA0; // int32
            static constexpr std::uintptr_t m_bHasExploded                         = 0X0DA4; // bool
            static constexpr std::uintptr_t m_bBombDefused                         = 0X0DA5; // bool
            static constexpr std::uintptr_t m_bTrainingPlacedByPlayer              = 0X0DA6; // bool
            static constexpr std::uintptr_t m_flTimerLength                        = 0X0DA8; // float32
            static constexpr std::uintptr_t m_bBeingDefused                        = 0X0DAC; // bool
            static constexpr std::uintptr_t m_fLastDefuseTime                      = 0X0DB4; // GameTime_t
            static constexpr std::uintptr_t m_flDefuseLength                       = 0X0DBC; // float32
            static constexpr std::uintptr_t m_flDefuseCountDown                    = 0X0DC0; // GameTime_t
            static constexpr std::uintptr_t m_hBombDefuser                         = 0X0DC4; // CHandle<CCSPlayerPawn>
            static constexpr std::uintptr_t m_iProgressBarTime                     = 0X0DC8; // int32
            static constexpr std::uintptr_t m_bVoiceAlertFired                     = 0X0DCC; // bool
            static constexpr std::uintptr_t m_bVoiceAlertPlayed                    = 0X0DCD; // bool[4]
            static constexpr std::uintptr_t m_flNextBotBeepTime                    = 0X0DD4; // GameTime_t
            static constexpr std::uintptr_t m_angCatchUpToPlayerEye                = 0X0DDC; // QAngle
            static constexpr std::uintptr_t m_flLastSpinDetectionTime              = 0X0DE8; // GameTime_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvSoundscapeProxyAlias_snd_soundscape_proxy : public CEnvSoundscapeProxy {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CVoteController : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_iActiveIssueIndex     = 0X04A8; // int32
            static constexpr std::uintptr_t m_iOnlyTeamToVote       = 0X04AC; // int32
            static constexpr std::uintptr_t m_nVoteOptionCount      = 0X04B0; // int32[5]
            static constexpr std::uintptr_t m_nPotentialVotes       = 0X04C4; // int32
            static constexpr std::uintptr_t m_bIsYesNoVote          = 0X04C8; // bool
            static constexpr std::uintptr_t m_acceptingVotesTimer   = 0X04D0; // CountdownTimer
            static constexpr std::uintptr_t m_executeCommandTimer   = 0X04E8; // CountdownTimer
            static constexpr std::uintptr_t m_resetVoteTimer        = 0X0500; // CountdownTimer
            static constexpr std::uintptr_t m_nVotesCast            = 0X0518; // int32[64]
            static constexpr std::uintptr_t m_playerHoldingVote     = 0X0618; // CPlayerSlot
            static constexpr std::uintptr_t m_playerOverrideForVote = 0X061C; // CPlayerSlot
            static constexpr std::uintptr_t m_nHighestCountIndex    = 0X0620; // int32
            static constexpr std::uintptr_t m_potentialIssues       = 0X0628; // CUtlVector<CBaseIssue*>
            static constexpr std::uintptr_t m_VoteOptions           = 0X0640; // CUtlVector<char*>
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
        class CPhysImpact : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_damage              = 0X04A8; // float32
            static constexpr std::uintptr_t m_distance            = 0X04AC; // float32
            static constexpr std::uintptr_t m_directionEntityName = 0X04B0; // CUtlSymbolLarge
        };

        // Has VTable
        // Has Trivial Destructor
        // Local Type Scope
        class CGameSceneNodeHandle {
        public:
            static constexpr std::uintptr_t m_hOwner = 0X0008; // CEntityHandle
            static constexpr std::uintptr_t m_name   = 0X000C; // CUtlStringToken
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
        class CRagdollMagnet : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled = 0X04A8; // bool
            static constexpr std::uintptr_t m_radius    = 0X04AC; // float32
            static constexpr std::uintptr_t m_force     = 0X04B0; // float32
            static constexpr std::uintptr_t m_axis      = 0X04B4; // VectorWS
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoInstructorHintTarget : public CPointEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSpriteAlias_env_glow : public CSprite {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFireCrackerBlast : public CInferno {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSpotlightEnd : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_flLightScale  = 0X0730; // float32
            static constexpr std::uintptr_t m_Radius        = 0X0734; // float32
            static constexpr std::uintptr_t m_vSpotlightDir = 0X0738; // Vector
            static constexpr std::uintptr_t m_vSpotlightOrg = 0X0744; // VectorWS
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvSky : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_hSkyMaterial             = 0X0730; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_hSkyMaterialLightingOnly = 0X0738; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_bStartDisabled           = 0X0740; // bool
            static constexpr std::uintptr_t m_vTintColor               = 0X0741; // Color
            static constexpr std::uintptr_t m_vTintColorLightingOnly   = 0X0745; // Color
            static constexpr std::uintptr_t m_flBrightnessScale        = 0X074C; // float32
            static constexpr std::uintptr_t m_nFogType                 = 0X0750; // int32
            static constexpr std::uintptr_t m_flFogMinStart            = 0X0754; // float32
            static constexpr std::uintptr_t m_flFogMinEnd              = 0X0758; // float32
            static constexpr std::uintptr_t m_flFogMaxStart            = 0X075C; // float32
            static constexpr std::uintptr_t m_flFogMaxEnd              = 0X0760; // float32
            static constexpr std::uintptr_t m_bEnabled                 = 0X0764; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoSpawnGroupLandmark : public CPointEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointAngleSensor : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled         = 0X04A8; // bool
            static constexpr std::uintptr_t m_nLookAtName       = 0X04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hTargetEntity     = 0X04B8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hLookAtEntity     = 0X04BC; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_flDuration        = 0X04C0; // float32
            static constexpr std::uintptr_t m_flDotTolerance    = 0X04C4; // float32
            static constexpr std::uintptr_t m_flFacingTime      = 0X04C8; // GameTime_t
            static constexpr std::uintptr_t m_bFired            = 0X04CC; // bool
            static constexpr std::uintptr_t m_OnFacingLookat    = 0X04D0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnNotFacingLookat = 0X04E8; // CEntityIOOutput
            static constexpr std::uintptr_t m_TargetDir         = 0X0500; // CEntityOutputTemplate<Vector,Vector>
            static constexpr std::uintptr_t m_FacingPercentage  = 0X0528; // CEntityOutputTemplate<float32,float32>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvWindController : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_EnvWindShared       = 0X04A8; // CEnvWindShared
            static constexpr std::uintptr_t m_fDirectionVariation = 0X05D8; // float32
            static constexpr std::uintptr_t m_fSpeedVariation     = 0X05DC; // float32
            static constexpr std::uintptr_t m_fTurbulence         = 0X05E0; // float32
            static constexpr std::uintptr_t m_fVolumeHalfExtentXY = 0X05E4; // float32
            static constexpr std::uintptr_t m_fVolumeHalfExtentZ  = 0X05E8; // float32
            static constexpr std::uintptr_t m_nVolumeResolutionXY = 0X05EC; // int32
            static constexpr std::uintptr_t m_nVolumeResolutionZ  = 0X05F0; // int32
            static constexpr std::uintptr_t m_nClipmapLevels      = 0X05F4; // int32
            static constexpr std::uintptr_t m_bIsMaster           = 0X05F8; // bool
            static constexpr std::uintptr_t m_bFirstTime          = 0X05F9; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CGenericConstraint : public CPhysConstraint {
        public:
            static constexpr std::uintptr_t m_nLinearMotionX             = 0X0510; // JointMotion_t
            static constexpr std::uintptr_t m_nLinearMotionY             = 0X0514; // JointMotion_t
            static constexpr std::uintptr_t m_nLinearMotionZ             = 0X0518; // JointMotion_t
            static constexpr std::uintptr_t m_flLinearFrequencyX         = 0X051C; // float32
            static constexpr std::uintptr_t m_flLinearFrequencyY         = 0X0520; // float32
            static constexpr std::uintptr_t m_flLinearFrequencyZ         = 0X0524; // float32
            static constexpr std::uintptr_t m_flLinearDampingRatioX      = 0X0528; // float32
            static constexpr std::uintptr_t m_flLinearDampingRatioY      = 0X052C; // float32
            static constexpr std::uintptr_t m_flLinearDampingRatioZ      = 0X0530; // float32
            static constexpr std::uintptr_t m_flMaxLinearImpulseX        = 0X0534; // float32
            static constexpr std::uintptr_t m_flMaxLinearImpulseY        = 0X0538; // float32
            static constexpr std::uintptr_t m_flMaxLinearImpulseZ        = 0X053C; // float32
            static constexpr std::uintptr_t m_flBreakAfterTimeX          = 0X0540; // float32
            static constexpr std::uintptr_t m_flBreakAfterTimeY          = 0X0544; // float32
            static constexpr std::uintptr_t m_flBreakAfterTimeZ          = 0X0548; // float32
            static constexpr std::uintptr_t m_flBreakAfterTimeStartTimeX = 0X054C; // GameTime_t
            static constexpr std::uintptr_t m_flBreakAfterTimeStartTimeY = 0X0550; // GameTime_t
            static constexpr std::uintptr_t m_flBreakAfterTimeStartTimeZ = 0X0554; // GameTime_t
            static constexpr std::uintptr_t m_flBreakAfterTimeThresholdX = 0X0558; // float32
            static constexpr std::uintptr_t m_flBreakAfterTimeThresholdY = 0X055C; // float32
            static constexpr std::uintptr_t m_flBreakAfterTimeThresholdZ = 0X0560; // float32
            static constexpr std::uintptr_t m_flNotifyForceX             = 0X0564; // float32
            static constexpr std::uintptr_t m_flNotifyForceY             = 0X0568; // float32
            static constexpr std::uintptr_t m_flNotifyForceZ             = 0X056C; // float32
            static constexpr std::uintptr_t m_flNotifyForceMinTimeX      = 0X0570; // float32
            static constexpr std::uintptr_t m_flNotifyForceMinTimeY      = 0X0574; // float32
            static constexpr std::uintptr_t m_flNotifyForceMinTimeZ      = 0X0578; // float32
            static constexpr std::uintptr_t m_flNotifyForceLastTimeX     = 0X057C; // GameTime_t
            static constexpr std::uintptr_t m_flNotifyForceLastTimeY     = 0X0580; // GameTime_t
            static constexpr std::uintptr_t m_flNotifyForceLastTimeZ     = 0X0584; // GameTime_t
            static constexpr std::uintptr_t m_bAxisNotifiedX             = 0X0588; // bool
            static constexpr std::uintptr_t m_bAxisNotifiedY             = 0X0589; // bool
            static constexpr std::uintptr_t m_bAxisNotifiedZ             = 0X058A; // bool
            static constexpr std::uintptr_t m_nAngularMotionX            = 0X058C; // JointMotion_t
            static constexpr std::uintptr_t m_nAngularMotionY            = 0X0590; // JointMotion_t
            static constexpr std::uintptr_t m_nAngularMotionZ            = 0X0594; // JointMotion_t
            static constexpr std::uintptr_t m_flAngularFrequencyX        = 0X0598; // float32
            static constexpr std::uintptr_t m_flAngularFrequencyY        = 0X059C; // float32
            static constexpr std::uintptr_t m_flAngularFrequencyZ        = 0X05A0; // float32
            static constexpr std::uintptr_t m_flAngularDampingRatioX     = 0X05A4; // float32
            static constexpr std::uintptr_t m_flAngularDampingRatioY     = 0X05A8; // float32
            static constexpr std::uintptr_t m_flAngularDampingRatioZ     = 0X05AC; // float32
            static constexpr std::uintptr_t m_flMaxAngularImpulseX       = 0X05B0; // float32
            static constexpr std::uintptr_t m_flMaxAngularImpulseY       = 0X05B4; // float32
            static constexpr std::uintptr_t m_flMaxAngularImpulseZ       = 0X05B8; // float32
            static constexpr std::uintptr_t m_NotifyForceReachedX        = 0X05C0; // CEntityIOOutput
            static constexpr std::uintptr_t m_NotifyForceReachedY        = 0X05D8; // CEntityIOOutput
            static constexpr std::uintptr_t m_NotifyForceReachedZ        = 0X05F0; // CEntityIOOutput
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

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvLaser : public CBeam {
        public:
            static constexpr std::uintptr_t m_iszLaserTarget = 0X07D0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_pSprite        = 0X07D8; // CSprite*
            static constexpr std::uintptr_t m_iszSpriteName  = 0X07E0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_firePosition   = 0X07E8; // Vector
            static constexpr std::uintptr_t m_flStartFrame   = 0X07F4; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundOpvarSetEntity : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_iszStackName     = 0X04C0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszOperatorName  = 0X04C8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszOpvarName     = 0X04D0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_nOpvarType       = 0X04D8; // int32
            static constexpr std::uintptr_t m_nOpvarIndex      = 0X04DC; // int32
            static constexpr std::uintptr_t m_flOpvarValue     = 0X04E0; // float32
            static constexpr std::uintptr_t m_OpvarValueString = 0X04E8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bSetOnSpawn      = 0X04F0; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvBeverage : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_CanInDispenser = 0X04A8; // bool
            static constexpr std::uintptr_t m_nBeverageType  = 0X04AC; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysMotor : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_nameAttach                         = 0X04A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_nameAnchor                         = 0X04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hAttachedObject                    = 0X04B8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hAnchorObject                      = 0X04BC; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_spinUp                             = 0X04C0; // float32
            static constexpr std::uintptr_t m_spinDown                           = 0X04C4; // float32
            static constexpr std::uintptr_t m_flMotorFriction                    = 0X04C8; // float32
            static constexpr std::uintptr_t m_additionalAcceleration             = 0X04CC; // float32
            static constexpr std::uintptr_t m_angularAcceleration                = 0X04D0; // float32
            static constexpr std::uintptr_t m_flTorqueScale                      = 0X04D4; // float32
            static constexpr std::uintptr_t m_flTargetSpeed                      = 0X04D8; // float32
            static constexpr std::uintptr_t m_flSpeedWhenSpinUpOrSpinDownStarted = 0X04DC; // float32
            static constexpr std::uintptr_t m_motor                              = 0X04F0; // CMotorController
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicGameEvent : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_iszEventName = 0X04A8; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysicsPropMultiplayer : public CPhysicsProp {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysExplosion : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_bExplodeOnSpawn              = 0X04A8; // bool
            static constexpr std::uintptr_t m_flMagnitude                  = 0X04AC; // float32
            static constexpr std::uintptr_t m_flDamage                     = 0X04B0; // float32
            static constexpr std::uintptr_t m_radius                       = 0X04B4; // float32
            static constexpr std::uintptr_t m_targetEntityName             = 0X04B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flInnerRadius                = 0X04C0; // float32
            static constexpr std::uintptr_t m_flPushScale                  = 0X04C4; // float32
            static constexpr std::uintptr_t m_bConvertToDebrisWhenPossible = 0X04C8; // bool
            static constexpr std::uintptr_t m_bAffectInvulnerableEnts      = 0X04C9; // bool
            static constexpr std::uintptr_t m_OnPushedPlayer               = 0X04D0; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSplineConstraint : public CPhysConstraint {
        public:
            static constexpr std::uintptr_t m_vAnchorOffsetRestore                 = 0X0558; // Vector
            static constexpr std::uintptr_t m_hSplineEntity                        = 0X0564; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_bEnableLateralConstraint             = 0X0570; // bool
            static constexpr std::uintptr_t m_bEnableVerticalConstraint            = 0X0571; // bool
            static constexpr std::uintptr_t m_bEnableAngularConstraint             = 0X0572; // bool
            static constexpr std::uintptr_t m_bEnableLimit                         = 0X0573; // bool
            static constexpr std::uintptr_t m_bFireEventsOnPath                    = 0X0574; // bool
            static constexpr std::uintptr_t m_flLinearFrequency                    = 0X0578; // float32
            static constexpr std::uintptr_t m_flLinarDampingRatio                  = 0X057C; // float32
            static constexpr std::uintptr_t m_flJointFriction                      = 0X0580; // float32
            static constexpr std::uintptr_t m_flTransitionTime                     = 0X0584; // float32
            static constexpr std::uintptr_t m_vPreSolveAnchorPos                   = 0X0598; // VectorWS
            static constexpr std::uintptr_t m_StartTransitionTime                  = 0X05A4; // GameTime_t
            static constexpr std::uintptr_t m_vTangentSpaceAnchorAtTransitionStart = 0X05A8; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicCompare : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_flInValue      = 0X04A8; // float32
            static constexpr std::uintptr_t m_flCompareValue = 0X04AC; // float32
            static constexpr std::uintptr_t m_OnLessThan     = 0X04B0; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnEqualTo      = 0X04D0; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnNotEqualTo   = 0X04F0; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnGreaterThan  = 0X0510; // CEntityOutputTemplate<float32,float32>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSGameModeRules_Noop : public CCSGameModeRules {
        public:
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
        class CFuncTankTrain : public CFuncTrackTrain {
        public:
            static constexpr std::uintptr_t m_OnDeath = 0X0858; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointClientUIWorldPanel : public CBaseClientUIEntity {
        public:
            static constexpr std::uintptr_t m_bIgnoreInput                        = 0X0890; // bool
            static constexpr std::uintptr_t m_bLit                                = 0X0891; // bool
            static constexpr std::uintptr_t m_bFollowPlayerAcrossTeleport         = 0X0892; // bool
            static constexpr std::uintptr_t m_flWidth                             = 0X0894; // float32
            static constexpr std::uintptr_t m_flHeight                            = 0X0898; // float32
            static constexpr std::uintptr_t m_flDPI                               = 0X089C; // float32
            static constexpr std::uintptr_t m_flInteractDistance                  = 0X08A0; // float32
            static constexpr std::uintptr_t m_flDepthOffset                       = 0X08A4; // float32
            static constexpr std::uintptr_t m_unOwnerContext                      = 0X08A8; // uint32
            static constexpr std::uintptr_t m_unHorizontalAlign                   = 0X08AC; // uint32
            static constexpr std::uintptr_t m_unVerticalAlign                     = 0X08B0; // uint32
            static constexpr std::uintptr_t m_unOrientation                       = 0X08B4; // uint32
            static constexpr std::uintptr_t m_bAllowInteractionFromAllSceneWorlds = 0X08B8; // bool
            static constexpr std::uintptr_t m_vecCSSClasses                       = 0X08C0; // CNetworkUtlVectorBase<CUtlSymbolLarge>
            static constexpr std::uintptr_t m_bOpaque                             = 0X08D8; // bool
            static constexpr std::uintptr_t m_bNoDepth                            = 0X08D9; // bool
            static constexpr std::uintptr_t m_bVisibleWhenParentNoDraw            = 0X08DA; // bool
            static constexpr std::uintptr_t m_bRenderBackface                     = 0X08DB; // bool
            static constexpr std::uintptr_t m_bUseOffScreenIndicator              = 0X08DC; // bool
            static constexpr std::uintptr_t m_bExcludeFromSaveGames               = 0X08DD; // bool
            static constexpr std::uintptr_t m_bGrabbable                          = 0X08DE; // bool
            static constexpr std::uintptr_t m_bOnlyRenderToTexture                = 0X08DF; // bool
            static constexpr std::uintptr_t m_bDisableMipGen                      = 0X08E0; // bool
            static constexpr std::uintptr_t m_nExplicitImageLayout                = 0X08E4; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundEventSphereEntity : public CSoundEventEntity {
        public:
            static constexpr std::uintptr_t m_flRadius = 0X0558; // float32
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayerController_InGameMoneyServices : public CPlayerControllerComponent {
        public:
            static constexpr std::uintptr_t m_bReceivesMoneyNextRound  = 0X0040; // bool
            static constexpr std::uintptr_t m_iMoneyEarnedForNextRound = 0X0044; // int32
            static constexpr std::uintptr_t m_iAccount                 = 0X0048; // int32
            static constexpr std::uintptr_t m_iStartAccount            = 0X004C; // int32
            static constexpr std::uintptr_t m_iTotalCashSpent          = 0X0050; // int32
            static constexpr std::uintptr_t m_iCashSpentThisRound      = 0X0054; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CMapVetoPickController : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_bPlayedIntroVcd                 = 0X04A8; // bool
            static constexpr std::uintptr_t m_bNeedToPlayFiveSecondsRemaining = 0X04A9; // bool
            static constexpr std::uintptr_t m_dblPreMatchDraftSequenceTime    = 0X04C8; // float64
            static constexpr std::uintptr_t m_bPreMatchDraftStateChanged      = 0X04D0; // bool
            static constexpr std::uintptr_t m_nDraftType                      = 0X04D4; // int32
            static constexpr std::uintptr_t m_nTeamWinningCoinToss            = 0X04D8; // int32
            static constexpr std::uintptr_t m_nTeamWithFirstChoice            = 0X04DC; // int32[64]
            static constexpr std::uintptr_t m_nVoteMapIdsList                 = 0X05DC; // int32[7]
            static constexpr std::uintptr_t m_nAccountIDs                     = 0X05F8; // int32[64]
            static constexpr std::uintptr_t m_nMapId0                         = 0X06F8; // int32[64]
            static constexpr std::uintptr_t m_nMapId1                         = 0X07F8; // int32[64]
            static constexpr std::uintptr_t m_nMapId2                         = 0X08F8; // int32[64]
            static constexpr std::uintptr_t m_nMapId3                         = 0X09F8; // int32[64]
            static constexpr std::uintptr_t m_nMapId4                         = 0X0AF8; // int32[64]
            static constexpr std::uintptr_t m_nMapId5                         = 0X0BF8; // int32[64]
            static constexpr std::uintptr_t m_nStartingSide0                  = 0X0CF8; // int32[64]
            static constexpr std::uintptr_t m_nCurrentPhase                   = 0X0DF8; // int32
            static constexpr std::uintptr_t m_nPhaseStartTick                 = 0X0DFC; // int32
            static constexpr std::uintptr_t m_nPhaseDurationTicks             = 0X0E00; // int32
            static constexpr std::uintptr_t m_OnMapVetoed                     = 0X0E08; // CEntityOutputTemplate<CUtlSymbolLarge,CUtlSymbolLarge>
            static constexpr std::uintptr_t m_OnMapPicked                     = 0X0E28; // CEntityOutputTemplate<CUtlSymbolLarge,CUtlSymbolLarge>
            static constexpr std::uintptr_t m_OnSidesPicked                   = 0X0E48; // CEntityOutputTemplate<int32,int32>
            static constexpr std::uintptr_t m_OnNewPhaseStarted               = 0X0E68; // CEntityOutputTemplate<int32,int32>
            static constexpr std::uintptr_t m_OnLevelTransition               = 0X0E88; // CEntityOutputTemplate<int32,int32>
        };

        // Has VTable
        // Local Type Scope
        class CAnimGraphNetworkedVariables {
        public:
            static constexpr std::uintptr_t m_PredNetBoolVariables                  = 0X0008; // CNetworkUtlVectorBase<uint32>
            static constexpr std::uintptr_t m_PredNetByteVariables                  = 0X0020; // CNetworkUtlVectorBase<uint8>
            static constexpr std::uintptr_t m_PredNetUInt16Variables                = 0X0038; // CNetworkUtlVectorBase<uint16>
            static constexpr std::uintptr_t m_PredNetIntVariables                   = 0X0050; // CNetworkUtlVectorBase<int32>
            static constexpr std::uintptr_t m_PredNetUInt32Variables                = 0X0068; // CNetworkUtlVectorBase<uint32>
            static constexpr std::uintptr_t m_PredNetUInt64Variables                = 0X0080; // CNetworkUtlVectorBase<uint64>
            static constexpr std::uintptr_t m_PredNetFloatVariables                 = 0X0098; // CNetworkUtlVectorBase<float32>
            static constexpr std::uintptr_t m_PredNetVectorVariables                = 0X00B0; // CNetworkUtlVectorBase<Vector>
            static constexpr std::uintptr_t m_PredNetQuaternionVariables            = 0X00C8; // CNetworkUtlVectorBase<Quaternion>
            static constexpr std::uintptr_t m_PredNetGlobalSymbolVariables          = 0X00E0; // CNetworkUtlVectorBase<CGlobalSymbol>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetBoolVariables         = 0X00F8; // CNetworkUtlVectorBase<uint32>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetByteVariables         = 0X0110; // CNetworkUtlVectorBase<uint8>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetUInt16Variables       = 0X0128; // CNetworkUtlVectorBase<uint16>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetIntVariables          = 0X0140; // CNetworkUtlVectorBase<int32>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetUInt32Variables       = 0X0158; // CNetworkUtlVectorBase<uint32>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetUInt64Variables       = 0X0170; // CNetworkUtlVectorBase<uint64>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetFloatVariables        = 0X0188; // CNetworkUtlVectorBase<float32>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetVectorVariables       = 0X01A0; // CNetworkUtlVectorBase<Vector>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetQuaternionVariables   = 0X01B8; // CNetworkUtlVectorBase<Quaternion>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetGlobalSymbolVariables = 0X01D0; // CNetworkUtlVectorBase<CGlobalSymbol>
            static constexpr std::uintptr_t m_nBoolVariablesCount                   = 0X01E8; // int32
            static constexpr std::uintptr_t m_nOwnerOnlyBoolVariablesCount          = 0X01EC; // int32
            static constexpr std::uintptr_t m_nRandomSeedOffset                     = 0X01F0; // int32
            static constexpr std::uintptr_t m_flLastTeleportTime                    = 0X01F4; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncPropRespawnZone : public CBaseEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFilterModel : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_iFilterModel = 0X04E0; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponP90 : public CCSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CNavSpaceInfo : public CPointEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysSlideConstraint : public CPhysConstraint {
        public:
            static constexpr std::uintptr_t m_axisEnd                  = 0X0510; // VectorWS
            static constexpr std::uintptr_t m_slideFriction            = 0X051C; // float32
            static constexpr std::uintptr_t m_systemLoadScale          = 0X0520; // float32
            static constexpr std::uintptr_t m_initialOffset            = 0X0524; // float32
            static constexpr std::uintptr_t m_bEnableLinearConstraint  = 0X0528; // bool
            static constexpr std::uintptr_t m_bEnableAngularConstraint = 0X0529; // bool
            static constexpr std::uintptr_t m_flMotorFrequency         = 0X052C; // float32
            static constexpr std::uintptr_t m_flMotorDampingRatio      = 0X0530; // float32
            static constexpr std::uintptr_t m_bUseEntityPivot          = 0X0534; // bool
            static constexpr std::uintptr_t m_soundInfo                = 0X0538; // ConstraintSoundInfo
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseGameBlackboard : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_strGraphName = 0X04B0; // CUtlString
            static constexpr std::uintptr_t m_strStateBlob = 0X04B8; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundEventEntityAlias_snd_event_point : public CSoundEventEntity {
        public:
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
        class CPointGamestatsCounter : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_strStatisticName = 0X04A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bDisabled        = 0X04B0; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTextureBasedAnimatable : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_bLoop               = 0X0730; // bool
            static constexpr std::uintptr_t m_flFPS               = 0X0734; // float32
            static constexpr std::uintptr_t m_hPositionKeys       = 0X0738; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_hRotationKeys       = 0X0740; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_vAnimationBoundsMin = 0X0748; // Vector
            static constexpr std::uintptr_t m_vAnimationBoundsMax = 0X0754; // Vector
            static constexpr std::uintptr_t m_flStartTime         = 0X0760; // float32
            static constexpr std::uintptr_t m_flStartFrame        = 0X0764; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPathKeyFrame : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_Origin      = 0X04A8; // Vector
            static constexpr std::uintptr_t m_Angles      = 0X04B4; // QAngle
            static constexpr std::uintptr_t m_qAngle      = 0X04C0; // Quaternion
            static constexpr std::uintptr_t m_iNextKey    = 0X04D0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flNextTime  = 0X04D8; // float32
            static constexpr std::uintptr_t m_pNextKey    = 0X04E0; // CPathKeyFrame*
            static constexpr std::uintptr_t m_pPrevKey    = 0X04E8; // CPathKeyFrame*
            static constexpr std::uintptr_t m_flMoveSpeed = 0X04F0; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBaseMoveBehavior : public CPathKeyFrame {
        public:
            static constexpr std::uintptr_t m_iPositionInterpolator     = 0X0500; // int32
            static constexpr std::uintptr_t m_iRotationInterpolator     = 0X0504; // int32
            static constexpr std::uintptr_t m_flAnimStartTime           = 0X0508; // float32
            static constexpr std::uintptr_t m_flAnimEndTime             = 0X050C; // float32
            static constexpr std::uintptr_t m_flAverageSpeedAcrossFrame = 0X0510; // float32
            static constexpr std::uintptr_t m_pCurrentKeyFrame          = 0X0518; // CPathKeyFrame*
            static constexpr std::uintptr_t m_pTargetKeyFrame           = 0X0520; // CPathKeyFrame*
            static constexpr std::uintptr_t m_pPreKeyFrame              = 0X0528; // CPathKeyFrame*
            static constexpr std::uintptr_t m_pPostKeyFrame             = 0X0530; // CPathKeyFrame*
            static constexpr std::uintptr_t m_flTimeIntoFrame           = 0X0538; // float32
            static constexpr std::uintptr_t m_iDirection                = 0X053C; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CDynamicLight : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_ActualFlags = 0X0730; // uint8
            static constexpr std::uintptr_t m_Flags       = 0X0731; // uint8
            static constexpr std::uintptr_t m_LightStyle  = 0X0732; // uint8
            static constexpr std::uintptr_t m_On          = 0X0733; // bool
            static constexpr std::uintptr_t m_Radius      = 0X0734; // float32
            static constexpr std::uintptr_t m_Exponent    = 0X0738; // int32
            static constexpr std::uintptr_t m_InnerAngle  = 0X073C; // float32
            static constexpr std::uintptr_t m_OuterAngle  = 0X0740; // float32
            static constexpr std::uintptr_t m_SpotRadius  = 0X0744; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponTaser : public CCSWeaponBaseGun {
        public:
            static constexpr std::uintptr_t m_fFireTime       = 0X1150; // GameTime_t
            static constexpr std::uintptr_t m_nLastAttackTick = 0X1154; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvCubemap : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_Entity_hCubemapTexture                = 0X0528; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_bCustomCubemapTexture          = 0X0530; // bool
            static constexpr std::uintptr_t m_Entity_flInfluenceRadius              = 0X0534; // float32
            static constexpr std::uintptr_t m_Entity_vBoxProjectMins                = 0X0538; // Vector
            static constexpr std::uintptr_t m_Entity_vBoxProjectMaxs                = 0X0544; // Vector
            static constexpr std::uintptr_t m_Entity_bMoveable                      = 0X0550; // bool
            static constexpr std::uintptr_t m_Entity_nHandshake                     = 0X0554; // int32
            static constexpr std::uintptr_t m_Entity_nEnvCubeMapArrayIndex          = 0X0558; // int32
            static constexpr std::uintptr_t m_Entity_nPriority                      = 0X055C; // int32
            static constexpr std::uintptr_t m_Entity_flEdgeFadeDist                 = 0X0560; // float32
            static constexpr std::uintptr_t m_Entity_vEdgeFadeDists                 = 0X0564; // Vector
            static constexpr std::uintptr_t m_Entity_flDiffuseScale                 = 0X0570; // float32
            static constexpr std::uintptr_t m_Entity_bStartDisabled                 = 0X0574; // bool
            static constexpr std::uintptr_t m_Entity_bDefaultEnvMap                 = 0X0575; // bool
            static constexpr std::uintptr_t m_Entity_bDefaultSpecEnvMap             = 0X0576; // bool
            static constexpr std::uintptr_t m_Entity_bIndoorCubeMap                 = 0X0577; // bool
            static constexpr std::uintptr_t m_Entity_bCopyDiffuseFromDefaultCubemap = 0X0578; // bool
            static constexpr std::uintptr_t m_Entity_bEnabled                       = 0X0588; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvCubemapBox : public CEnvCubemap {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBaseDoor : public CBaseToggle {
        public:
            static constexpr std::uintptr_t m_angMoveEntitySpace    = 0X07C0; // QAngle
            static constexpr std::uintptr_t m_vecMoveDirParentSpace = 0X07CC; // Vector
            static constexpr std::uintptr_t m_ls                    = 0X07D8; // locksound_t
            static constexpr std::uintptr_t m_bForceClosed          = 0X07F8; // bool
            static constexpr std::uintptr_t m_bDoorGroup            = 0X07F9; // bool
            static constexpr std::uintptr_t m_bLocked               = 0X07FA; // bool
            static constexpr std::uintptr_t m_bIgnoreDebris         = 0X07FB; // bool
            static constexpr std::uintptr_t m_bNoNPCs               = 0X07FC; // bool
            static constexpr std::uintptr_t m_eSpawnPosition        = 0X0800; // FuncDoorSpawnPos_t
            static constexpr std::uintptr_t m_flBlockDamage         = 0X0804; // float32
            static constexpr std::uintptr_t m_NoiseMoving           = 0X0808; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_NoiseArrived          = 0X0810; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_NoiseMovingClosed     = 0X0818; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_NoiseArrivedClosed    = 0X0820; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_ChainTarget           = 0X0828; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_OnBlockedClosing      = 0X0830; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnBlockedOpening      = 0X0848; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnUnblockedClosing    = 0X0860; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnUnblockedOpening    = 0X0878; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnFullyClosed         = 0X0890; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnFullyOpen           = 0X08A8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnClose               = 0X08C0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnOpen                = 0X08D8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnLockedUse           = 0X08F0; // CEntityIOOutput
            static constexpr std::uintptr_t m_bLoopMoveSound        = 0X0908; // bool
            static constexpr std::uintptr_t m_bCreateNavObstacle    = 0X0928; // bool
            static constexpr std::uintptr_t m_isChaining            = 0X0929; // bool
            static constexpr std::uintptr_t m_bIsUsable             = 0X092A; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CRotDoor : public CBaseDoor {
        public:
            static constexpr std::uintptr_t m_bSolidBsp = 0X0930; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPathSimple : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_CPathQueryComponent = 0X04B0; // CPathQueryComponent
            static constexpr std::uintptr_t m_pathString          = 0X05A0; // CUtlString
            static constexpr std::uintptr_t m_bClosedLoop         = 0X05A8; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPathWithDynamicNodes : public CPathSimple {
        public:
            static constexpr std::uintptr_t m_vecPathNodes             = 0X05B0; // CNetworkUtlVectorBase<CHandle<CPathNode>>
            static constexpr std::uintptr_t m_xInitialPathWorldToLocal = 0X05D0; // CTransform
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPathMover : public CPathWithDynamicNodes {
        public:
            static constexpr std::uintptr_t m_vecMovers           = 0X05F0; // CUtlVector<CHandle<CFuncMover>>
            static constexpr std::uintptr_t m_hMoverSpawner       = 0X0608; // CHandle<CPathMoverEntitySpawner>
            static constexpr std::uintptr_t m_iszMoverSpawnerName = 0X0610; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncVPhysicsClip : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled = 0X0730; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysFixed : public CPhysConstraint {
        public:
            static constexpr std::uintptr_t m_flLinearFrequency        = 0X0508; // float32
            static constexpr std::uintptr_t m_flLinearDampingRatio     = 0X050C; // float32
            static constexpr std::uintptr_t m_flAngularFrequency       = 0X0510; // float32
            static constexpr std::uintptr_t m_flAngularDampingRatio    = 0X0514; // float32
            static constexpr std::uintptr_t m_bEnableLinearConstraint  = 0X0518; // bool
            static constexpr std::uintptr_t m_bEnableAngularConstraint = 0X0519; // bool
            static constexpr std::uintptr_t m_sBoneName1               = 0X0520; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_sBoneName2               = 0X0528; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicNavigation : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_isOn        = 0X04B0; // bool
            static constexpr std::uintptr_t m_navProperty = 0X04B4; // navproperties_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPathParticleRopeAlias_path_particle_rope_clientside : public CPathParticleRope {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Local Type Scope
        class CCSPointPulseAPI {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvWindVolume : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_bActive                           = 0X04A8; // bool
            static constexpr std::uintptr_t m_vBoxMins                          = 0X04AC; // Vector
            static constexpr std::uintptr_t m_vBoxMaxs                          = 0X04B8; // Vector
            static constexpr std::uintptr_t m_bStartDisabled                    = 0X04C4; // bool
            static constexpr std::uintptr_t m_nShape                            = 0X04C8; // int32
            static constexpr std::uintptr_t m_fWindSpeedMultiplier              = 0X04CC; // float32
            static constexpr std::uintptr_t m_fWindTurbulenceMultiplier         = 0X04D0; // float32
            static constexpr std::uintptr_t m_fWindSpeedVariationMultiplier     = 0X04D4; // float32
            static constexpr std::uintptr_t m_fWindDirectionVariationMultiplier = 0X04D8; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncElectrifiedVolume : public CFuncBrush {
        public:
            static constexpr std::uintptr_t m_EffectName               = 0X0750; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_EffectInterpenetrateName = 0X0758; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_EffectZapName            = 0X0760; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszEffectSource          = 0X0768; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSMinimapBoundary : public CBaseEntity {
        public:
        };

        // Has VTable
        // Local Type Scope
        struct EntitySpottedState_t {
        public:
            static constexpr std::uintptr_t m_bSpotted       = 0X0008; // bool
            static constexpr std::uintptr_t m_bSpottedByMask = 0X000C; // uint32[2]
        };

        // Has VTable
        // Has Trivial Destructor
        // Local Type Scope
        struct fogparams_t {
        public:
            static constexpr std::uintptr_t dirPrimary            = 0X0008; // Vector
            static constexpr std::uintptr_t colorPrimary          = 0X0014; // Color
            static constexpr std::uintptr_t colorSecondary        = 0X0018; // Color
            static constexpr std::uintptr_t colorPrimaryLerpTo    = 0X001C; // Color
            static constexpr std::uintptr_t colorSecondaryLerpTo  = 0X0020; // Color
            static constexpr std::uintptr_t start                 = 0X0024; // float32
            static constexpr std::uintptr_t end                   = 0X0028; // float32
            static constexpr std::uintptr_t farz                  = 0X002C; // float32
            static constexpr std::uintptr_t maxdensity            = 0X0030; // float32
            static constexpr std::uintptr_t exponent              = 0X0034; // float32
            static constexpr std::uintptr_t HDRColorScale         = 0X0038; // float32
            static constexpr std::uintptr_t skyboxFogFactor       = 0X003C; // float32
            static constexpr std::uintptr_t skyboxFogFactorLerpTo = 0X0040; // float32
            static constexpr std::uintptr_t startLerpTo           = 0X0044; // float32
            static constexpr std::uintptr_t endLerpTo             = 0X0048; // float32
            static constexpr std::uintptr_t maxdensityLerpTo      = 0X004C; // float32
            static constexpr std::uintptr_t lerptime              = 0X0050; // GameTime_t
            static constexpr std::uintptr_t duration              = 0X0054; // float32
            static constexpr std::uintptr_t blendtobackground     = 0X0058; // float32
            static constexpr std::uintptr_t scattering            = 0X005C; // float32
            static constexpr std::uintptr_t locallightscale       = 0X0060; // float32
            static constexpr std::uintptr_t enable                = 0X0064; // bool
            static constexpr std::uintptr_t blend                 = 0X0065; // bool
            static constexpr std::uintptr_t m_bPadding2           = 0X0066; // bool
            static constexpr std::uintptr_t m_bPadding            = 0X0067; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundEventOBBEntity : public CSoundEventEntity {
        public:
            static constexpr std::uintptr_t m_vMins = 0X0558; // Vector
            static constexpr std::uintptr_t m_vMaxs = 0X0564; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFlashbangProjectile : public CBaseCSGrenadeProjectile {
        public:
            static constexpr std::uintptr_t m_flTimeToDetonate = 0X0BB0; // float32
            static constexpr std::uintptr_t m_numOpponentsHit  = 0X0BB4; // uint8
            static constexpr std::uintptr_t m_numTeammatesHit  = 0X0BB5; // uint8
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysBallSocket : public CPhysConstraint {
        public:
            static constexpr std::uintptr_t m_flJointFriction   = 0X0508; // float32
            static constexpr std::uintptr_t m_bEnableSwingLimit = 0X050C; // bool
            static constexpr std::uintptr_t m_flSwingLimit      = 0X0510; // float32
            static constexpr std::uintptr_t m_bEnableTwistLimit = 0X0514; // bool
            static constexpr std::uintptr_t m_flMinTwistAngle   = 0X0518; // float32
            static constexpr std::uintptr_t m_flMaxTwistAngle   = 0X051C; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CDebugHistory : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_nNpcEvents = 0X3E84E8; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponCZ75a : public CCSWeaponBaseGun {
        public:
            static constexpr std::uintptr_t m_bMagazineRemoved = 0X1150; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CScriptTriggerPush : public CTriggerPush {
        public:
            static constexpr std::uintptr_t m_vExtent = 0X08C8; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CRevertSaved : public CModelPointEntity {
        public:
            static constexpr std::uintptr_t m_loadTime = 0X0730; // float32
            static constexpr std::uintptr_t m_Duration = 0X0734; // float32
            static constexpr std::uintptr_t m_HoldTime = 0X0738; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerBombReset : public CBaseTrigger {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerHurt : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_flOriginalDamage   = 0X0890; // float32
            static constexpr std::uintptr_t m_flDamage           = 0X0894; // float32
            static constexpr std::uintptr_t m_flDamageCap        = 0X0898; // float32
            static constexpr std::uintptr_t m_flLastDmgTime      = 0X089C; // GameTime_t
            static constexpr std::uintptr_t m_flForgivenessDelay = 0X08A0; // float32
            static constexpr std::uintptr_t m_bitsDamageInflict  = 0X08A4; // DamageTypes_t
            static constexpr std::uintptr_t m_damageModel        = 0X08A8; // int32
            static constexpr std::uintptr_t m_bNoDmgForce        = 0X08AC; // bool
            static constexpr std::uintptr_t m_vDamageForce       = 0X08B0; // Vector
            static constexpr std::uintptr_t m_thinkAlways        = 0X08BC; // bool
            static constexpr std::uintptr_t m_hurtThinkPeriod    = 0X08C0; // float32
            static constexpr std::uintptr_t m_OnHurt             = 0X08C8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnHurtPlayer       = 0X08E0; // CEntityIOOutput
            static constexpr std::uintptr_t m_hurtEntities       = 0X08F8; // CUtlVector<CHandle<CBaseEntity>>
        };

        // Has VTable
        // Local Type Scope
        class CPlayer_WeaponServices : public CPlayerPawnComponent {
        public:
            static constexpr std::uintptr_t m_hMyWeapons           = 0X0048; // CNetworkUtlVectorBase<CHandle<CBasePlayerWeapon>>
            static constexpr std::uintptr_t m_hActiveWeapon        = 0X0060; // CHandle<CBasePlayerWeapon>
            static constexpr std::uintptr_t m_hLastWeapon          = 0X0064; // CHandle<CBasePlayerWeapon>
            static constexpr std::uintptr_t m_iAmmo                = 0X0068; // uint16[32]
            static constexpr std::uintptr_t m_bPreventWeaponPickup = 0X00A8; // bool
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_WeaponServices : public CPlayer_WeaponServices {
        public:
            static constexpr std::uintptr_t m_flNextAttack                      = 0X00C0; // GameTime_t
            static constexpr std::uintptr_t m_bIsLookingAtWeapon                = 0X00C4; // bool
            static constexpr std::uintptr_t m_bIsHoldingLookAtWeapon            = 0X00C5; // bool
            static constexpr std::uintptr_t m_hSavedWeapon                      = 0X00C8; // CHandle<CBasePlayerWeapon>
            static constexpr std::uintptr_t m_nTimeToMelee                      = 0X00CC; // int32
            static constexpr std::uintptr_t m_nTimeToSecondary                  = 0X00D0; // int32
            static constexpr std::uintptr_t m_nTimeToPrimary                    = 0X00D4; // int32
            static constexpr std::uintptr_t m_nTimeToSniperRifle                = 0X00D8; // int32
            static constexpr std::uintptr_t m_bIsBeingGivenItem                 = 0X00DC; // bool
            static constexpr std::uintptr_t m_bIsPickingUpItemWithUse           = 0X00DD; // bool
            static constexpr std::uintptr_t m_bPickedUpWeapon                   = 0X00DE; // bool
            static constexpr std::uintptr_t m_bDisableAutoDeploy                = 0X00DF; // bool
            static constexpr std::uintptr_t m_bIsPickingUpGroundWeapon          = 0X00E0; // bool
            static constexpr std::uintptr_t m_networkAnimTiming                 = 0X18B8; // CNetworkUtlVectorBase<uint8>
            static constexpr std::uintptr_t m_bBlockInspectUntilNextGraphUpdate = 0X18D0; // bool
        };

        // Has VTable
        // Local Type Scope
        class CRetakeGameRules {
        public:
            static constexpr std::uintptr_t m_nMatchSeed            = 0X0138; // int32
            static constexpr std::uintptr_t m_bBlockersPresent      = 0X013C; // bool
            static constexpr std::uintptr_t m_bRoundInProgress      = 0X013D; // bool
            static constexpr std::uintptr_t m_iFirstSecondHalfRound = 0X0140; // int32
            static constexpr std::uintptr_t m_iBombSite             = 0X0144; // int32
            static constexpr std::uintptr_t m_hBombPlanter          = 0X0148; // CHandle<CCSPlayerPawn>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvSoundscapeTriggerable : public CEnvSoundscape {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable : public CEnvSoundscapeTriggerable {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoInstructorHintBombTargetA : public CPointEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CScriptTriggerHurt : public CTriggerHurt {
        public:
            static constexpr std::uintptr_t m_vExtent = 0X0910; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponMP9 : public CCSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerDetectExplosion : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_OnDetectedExplosion = 0X08B8; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFilterName : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_iFilterName = 0X04E0; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSmokeGrenadeProjectile : public CBaseCSGrenadeProjectile {
        public:
            static constexpr std::uintptr_t m_nSmokeEffectTickBegin = 0X0BD8; // int32
            static constexpr std::uintptr_t m_bDidSmokeEffect       = 0X0BDC; // bool
            static constexpr std::uintptr_t m_nRandomSeed           = 0X0BE0; // int32
            static constexpr std::uintptr_t m_vSmokeColor           = 0X0BE4; // Vector
            static constexpr std::uintptr_t m_vSmokeDetonationPos   = 0X0BF0; // Vector
            static constexpr std::uintptr_t m_VoxelFrameData        = 0X0C00; // CNetworkUtlVectorBase<uint8>
            static constexpr std::uintptr_t m_nVoxelFrameDataSize   = 0X0C18; // int32
            static constexpr std::uintptr_t m_nVoxelUpdate          = 0X0C1C; // int32
            static constexpr std::uintptr_t m_flLastBounce          = 0X0C20; // GameTime_t
            static constexpr std::uintptr_t m_fllastSimulationTime  = 0X0C24; // GameTime_t
            static constexpr std::uintptr_t m_bExplodeFromInferno   = 0X2EA8; // bool
            static constexpr std::uintptr_t m_bDidGroundScorch      = 0X2EA9; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBlood : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_vecSprayAngles = 0X04A8; // QAngle
            static constexpr std::uintptr_t m_vecSprayDir    = 0X04B4; // Vector
            static constexpr std::uintptr_t m_flAmount       = 0X04C0; // float32
            static constexpr std::uintptr_t m_Color          = 0X04C4; // BloodType
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSTeam : public CTeam {
        public:
            static constexpr std::uintptr_t m_nLastRecievedShorthandedRoundBonus = 0X0560; // int32
            static constexpr std::uintptr_t m_nShorthandedRoundBonusStartRound   = 0X0564; // int32
            static constexpr std::uintptr_t m_bSurrendered                       = 0X0568; // bool
            static constexpr std::uintptr_t m_szTeamMatchStat                    = 0X0569; // char[512]
            static constexpr std::uintptr_t m_numMapVictories                    = 0X076C; // int32
            static constexpr std::uintptr_t m_scoreFirstHalf                     = 0X0770; // int32
            static constexpr std::uintptr_t m_scoreSecondHalf                    = 0X0774; // int32
            static constexpr std::uintptr_t m_scoreOvertime                      = 0X0778; // int32
            static constexpr std::uintptr_t m_szClanTeamname                     = 0X077C; // char[129]
            static constexpr std::uintptr_t m_iClanID                            = 0X0800; // uint32
            static constexpr std::uintptr_t m_szTeamFlagImage                    = 0X0804; // char[8]
            static constexpr std::uintptr_t m_szTeamLogoImage                    = 0X080C; // char[8]
            static constexpr std::uintptr_t m_flNextResourceTime                 = 0X0814; // float32
            static constexpr std::uintptr_t m_iLastUpdateSentAt                  = 0X0818; // int32
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
        class CFuncMoveLinearAlias_momentary_door : public CFuncMoveLinear {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvCubemapFog : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_flEndDistance        = 0X04A8; // float32
            static constexpr std::uintptr_t m_flStartDistance      = 0X04AC; // float32
            static constexpr std::uintptr_t m_flFogFalloffExponent = 0X04B0; // float32
            static constexpr std::uintptr_t m_bHeightFogEnabled    = 0X04B4; // bool
            static constexpr std::uintptr_t m_flFogHeightWidth     = 0X04B8; // float32
            static constexpr std::uintptr_t m_flFogHeightEnd       = 0X04BC; // float32
            static constexpr std::uintptr_t m_flFogHeightStart     = 0X04C0; // float32
            static constexpr std::uintptr_t m_flFogHeightExponent  = 0X04C4; // float32
            static constexpr std::uintptr_t m_flLODBias            = 0X04C8; // float32
            static constexpr std::uintptr_t m_bActive              = 0X04CC; // bool
            static constexpr std::uintptr_t m_bStartDisabled       = 0X04CD; // bool
            static constexpr std::uintptr_t m_flFogMaxOpacity      = 0X04D0; // float32
            static constexpr std::uintptr_t m_nCubemapSourceType   = 0X04D4; // int32
            static constexpr std::uintptr_t m_hSkyMaterial         = 0X04D8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_iszSkyEntity         = 0X04E0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hFogCubemapTexture   = 0X04E8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_bHasHeightFogEnd     = 0X04F0; // bool
            static constexpr std::uintptr_t m_bFirstTime           = 0X04F1; // bool
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
        class CGameMoney : public CRulePointEntity {
        public:
            static constexpr std::uintptr_t m_OnMoneySpent     = 0X0740; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnMoneySpentFail = 0X0758; // CEntityIOOutput
            static constexpr std::uintptr_t m_nMoney           = 0X0770; // int32
            static constexpr std::uintptr_t m_strAwardText     = 0X0778; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvHudHint : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_iszMessage = 0X04A8; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CNullEntity : public CBaseEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CItemGenericTriggerHelper : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_hParentItem = 0X0730; // CHandle<CItemGeneric>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CRagdollPropAttached : public CRagdollProp {
        public:
            static constexpr std::uintptr_t m_boneIndexAttached                     = 0X0B70; // uint32
            static constexpr std::uintptr_t m_ragdollAttachedObjectIndex            = 0X0B74; // uint32
            static constexpr std::uintptr_t m_attachmentPointBoneSpace              = 0X0B78; // Vector
            static constexpr std::uintptr_t m_attachmentPointRagdollSpace           = 0X0B84; // Vector
            static constexpr std::uintptr_t m_bShouldDetach                         = 0X0B90; // bool
            static constexpr std::uintptr_t m_bShouldDeleteAttachedActivationRecord = 0X0BA0; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CItemDogtags : public CItem {
        public:
            static constexpr std::uintptr_t m_OwningPlayer  = 0X0AC0; // CHandle<CCSPlayerPawn>
            static constexpr std::uintptr_t m_KillingPlayer = 0X0AC4; // CHandle<CCSPlayerPawn>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInstructorEventEntity : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_iszName             = 0X04A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszHintTargetEntity = 0X04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hTargetPlayer       = 0X04B8; // CHandle<CBasePlayerPawn>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponTec9 : public CCSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerSndSosOpvar : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_hTouchingPlayers = 0X0890; // CUtlVector<CHandle<CBaseEntity>>
            static constexpr std::uintptr_t m_flPosition       = 0X08A8; // Vector
            static constexpr std::uintptr_t m_flCenterSize     = 0X08B4; // float32
            static constexpr std::uintptr_t m_flMinVal         = 0X08B8; // float32
            static constexpr std::uintptr_t m_flMaxVal         = 0X08BC; // float32
            static constexpr std::uintptr_t m_opvarName        = 0X08C0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_stackName        = 0X08C8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_operatorName     = 0X08D0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bVolIs2D         = 0X08D8; // bool
            static constexpr std::uintptr_t m_opvarNameChar    = 0X08D9; // char[256]
            static constexpr std::uintptr_t m_stackNameChar    = 0X09D9; // char[256]
            static constexpr std::uintptr_t m_operatorNameChar = 0X0AD9; // char[256]
            static constexpr std::uintptr_t m_VecNormPos       = 0X0BDC; // Vector
            static constexpr std::uintptr_t m_flNormCenterSize = 0X0BE8; // float32
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

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointCommentaryNode : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_iszPreCommands             = 0X0A20; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszPostCommands            = 0X0A28; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszCommentaryFile          = 0X0A30; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszViewTarget              = 0X0A38; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hViewTarget                = 0X0A40; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hViewTargetAngles          = 0X0A44; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_iszViewPosition            = 0X0A48; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hViewPosition              = 0X0A50; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hViewPositionMover         = 0X0A54; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_bPreventMovement           = 0X0A58; // bool
            static constexpr std::uintptr_t m_bUnderCrosshair            = 0X0A59; // bool
            static constexpr std::uintptr_t m_bUnstoppable               = 0X0A5A; // bool
            static constexpr std::uintptr_t m_flFinishedTime             = 0X0A5C; // GameTime_t
            static constexpr std::uintptr_t m_vecFinishOrigin            = 0X0A60; // Vector
            static constexpr std::uintptr_t m_vecOriginalAngles          = 0X0A6C; // QAngle
            static constexpr std::uintptr_t m_vecFinishAngles            = 0X0A78; // QAngle
            static constexpr std::uintptr_t m_bPreventChangesWhileMoving = 0X0A84; // bool
            static constexpr std::uintptr_t m_bDisabled                  = 0X0A85; // bool
            static constexpr std::uintptr_t m_vecTeleportOrigin          = 0X0A88; // VectorWS
            static constexpr std::uintptr_t m_flAbortedPlaybackAt        = 0X0A94; // GameTime_t
            static constexpr std::uintptr_t m_pOnCommentaryStarted       = 0X0A98; // CEntityIOOutput
            static constexpr std::uintptr_t m_pOnCommentaryStopped       = 0X0AB0; // CEntityIOOutput
            static constexpr std::uintptr_t m_bActive                    = 0X0AC8; // bool
            static constexpr std::uintptr_t m_flStartTime                = 0X0ACC; // GameTime_t
            static constexpr std::uintptr_t m_flStartTimeInCommentary    = 0X0AD0; // float32
            static constexpr std::uintptr_t m_iszTitle                   = 0X0AD8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszSpeakers                = 0X0AE0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iNodeNumber                = 0X0AE8; // int32
            static constexpr std::uintptr_t m_iNodeNumberMax             = 0X0AEC; // int32
            static constexpr std::uintptr_t m_bListenedTo                = 0X0AF0; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CMomentaryRotButton : public CRotButton {
        public:
            static constexpr std::uintptr_t m_Position          = 0X08B0; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnUnpressed       = 0X08D0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnFullyOpen       = 0X08E8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnFullyClosed     = 0X0900; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnReachedPosition = 0X0918; // CEntityIOOutput
            static constexpr std::uintptr_t m_lastUsed          = 0X0930; // int32
            static constexpr std::uintptr_t m_start             = 0X0934; // QAngle
            static constexpr std::uintptr_t m_end               = 0X0940; // QAngle
            static constexpr std::uintptr_t m_IdealYaw          = 0X094C; // float32
            static constexpr std::uintptr_t m_sNoise            = 0X0950; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bUpdateTarget     = 0X0958; // bool
            static constexpr std::uintptr_t m_direction         = 0X095C; // int32
            static constexpr std::uintptr_t m_returnSpeed       = 0X0960; // float32
            static constexpr std::uintptr_t m_flStartPosition   = 0X0964; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSceneListManager : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_hListManagers = 0X04A8; // CUtlVector<CHandle<CSceneListManager>>
            static constexpr std::uintptr_t m_iszScenes     = 0X04C0; // CUtlSymbolLarge[16]
            static constexpr std::uintptr_t m_hScenes       = 0X0540; // CHandle<CBaseEntity>[16]
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvTilt : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_Duration = 0X04A8; // float32
            static constexpr std::uintptr_t m_Radius   = 0X04AC; // float32
            static constexpr std::uintptr_t m_TiltTime = 0X04B0; // float32
            static constexpr std::uintptr_t m_stopTime = 0X04B4; // GameTime_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncMover : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_iszPathName                               = 0X0730; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hPathMover                                = 0X0738; // CHandle<CPathMover>
            static constexpr std::uintptr_t m_hPrevPathMover                            = 0X073C; // CHandle<CPathMover>
            static constexpr std::uintptr_t m_iszPathNodeStart                          = 0X0740; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszPathNodeEnd                            = 0X0748; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_eMoveType                                 = 0X0750; // CFuncMover::Move_t
            static constexpr std::uintptr_t m_bIsReversing                              = 0X0754; // bool
            static constexpr std::uintptr_t m_flStartSpeed                              = 0X0758; // float32
            static constexpr std::uintptr_t m_flPathLocation                            = 0X075C; // float32
            static constexpr std::uintptr_t m_flT                                       = 0X0760; // float32
            static constexpr std::uintptr_t m_nCurrentNodeIndex                         = 0X0764; // int32
            static constexpr std::uintptr_t m_nPreviousNodeIndex                        = 0X0768; // int32
            static constexpr std::uintptr_t m_eSolidType                                = 0X076C; // SolidType_t
            static constexpr std::uintptr_t m_bIsMoving                                 = 0X076D; // bool
            static constexpr std::uintptr_t m_flTimeToReachMaxSpeed                     = 0X0770; // float32
            static constexpr std::uintptr_t m_flDistanceToReachMaxSpeed                 = 0X0774; // float32
            static constexpr std::uintptr_t m_flTimeToReachZeroSpeed                    = 0X0778; // float32
            static constexpr std::uintptr_t m_flComputedDistanceToReachMaxSpeed         = 0X077C; // float32
            static constexpr std::uintptr_t m_flComputedDistanceToReachZeroSpeed        = 0X0780; // float32
            static constexpr std::uintptr_t m_flStartCurveScale                         = 0X0784; // float32
            static constexpr std::uintptr_t m_flStopCurveScale                          = 0X0788; // float32
            static constexpr std::uintptr_t m_flDistanceToReachZeroSpeed                = 0X078C; // float32
            static constexpr std::uintptr_t m_flTimeMovementStart                       = 0X0790; // GameTime_t
            static constexpr std::uintptr_t m_flTimeMovementStop                        = 0X0794; // GameTime_t
            static constexpr std::uintptr_t m_hStopAtNode                               = 0X0798; // CHandle<CMoverPathNode>
            static constexpr std::uintptr_t m_flPathLocationToBeginStop                 = 0X079C; // float32
            static constexpr std::uintptr_t m_flPathLocationStart                       = 0X07A0; // float32
            static constexpr std::uintptr_t m_flBeginStopT                              = 0X07A4; // float32
            static constexpr std::uintptr_t m_iszStartForwardSound                      = 0X07A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszLoopForwardSound                       = 0X07B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszStopForwardSound                       = 0X07B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszStartReverseSound                      = 0X07C0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszLoopReverseSound                       = 0X07C8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszStopReverseSound                       = 0X07D0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszArriveAtDestinationSound               = 0X07D8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_OnMovementEnd                             = 0X07F8; // CEntityIOOutput
            static constexpr std::uintptr_t m_bStartAtClosestPoint                      = 0X0810; // bool
            static constexpr std::uintptr_t m_bStartAtEnd                               = 0X0811; // bool
            static constexpr std::uintptr_t m_bStartFollowingClosestMover               = 0X0812; // bool
            static constexpr std::uintptr_t m_eOrientationUpdate                        = 0X0814; // CFuncMover::OrientationUpdate_t
            static constexpr std::uintptr_t m_flTimeStartOrientationChange              = 0X0818; // GameTime_t
            static constexpr std::uintptr_t m_flTimeToBlendToNewOrientation             = 0X081C; // float32
            static constexpr std::uintptr_t m_flDurationBlendToNewOrientationRan        = 0X0820; // float32
            static constexpr std::uintptr_t m_nOriginalOrientationIndex                 = 0X0824; // int32
            static constexpr std::uintptr_t m_bCreateMovableNavMesh                     = 0X0828; // bool
            static constexpr std::uintptr_t m_bAllowMovableNavMeshDockingOnEntireEntity = 0X0829; // bool
            static constexpr std::uintptr_t m_OnNodePassed                              = 0X0830; // CEntityOutputTemplate<CUtlString,char*>
            static constexpr std::uintptr_t m_iszOrientationMatchEntityName             = 0X0850; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hOrientationMatchEntity                   = 0X0858; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_flTimeToTraverseToNextNode                = 0X085C; // float32
            static constexpr std::uintptr_t m_vLerpToNewPosStartInPathEntitySpace       = 0X0860; // Vector
            static constexpr std::uintptr_t m_vLerpToNewPosEndInPathEntitySpace         = 0X086C; // Vector
            static constexpr std::uintptr_t m_flLerpToPositionT                         = 0X0878; // float32
            static constexpr std::uintptr_t m_flLerpToPositionDeltaT                    = 0X087C; // float32
            static constexpr std::uintptr_t m_OnLerpToPositionComplete                  = 0X0880; // CEntityIOOutput
            static constexpr std::uintptr_t m_bIsPaused                                 = 0X0898; // bool
            static constexpr std::uintptr_t m_eTransitionedToPathNodeAction             = 0X089C; // CFuncMover::TransitionToPathNodeAction_t
            static constexpr std::uintptr_t m_nDelayedTeleportToNode                    = 0X08A0; // int32
            static constexpr std::uintptr_t m_bIsVerboseLogging                         = 0X08A4; // bool
            static constexpr std::uintptr_t m_hFollowEntity                             = 0X08A8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_flFollowDistance                          = 0X08AC; // float32
            static constexpr std::uintptr_t m_flFollowMinimumSpeed                      = 0X08B0; // float32
            static constexpr std::uintptr_t m_flCurFollowEntityT                        = 0X08B4; // float32
            static constexpr std::uintptr_t m_flCurFollowSpeed                          = 0X08B8; // float32
            static constexpr std::uintptr_t m_strOrientationFaceEntityName              = 0X08C0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hOrientationFaceEntity                    = 0X08C8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_OnStart                                   = 0X08D0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnStartForward                            = 0X08E8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnStartReverse                            = 0X0900; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnStop                                    = 0X0918; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnStopped                                 = 0X0930; // CEntityIOOutput
            static constexpr std::uintptr_t m_bNextNodeReturnsCurrent                   = 0X0948; // bool
            static constexpr std::uintptr_t m_bStartedMoving                            = 0X0949; // bool
            static constexpr std::uintptr_t m_eFollowEntityDirection                    = 0X0968; // CFuncMover::FollowEntityDirection_t
            static constexpr std::uintptr_t m_hFollowMover                              = 0X096C; // CHandle<CFuncMover>
            static constexpr std::uintptr_t m_iszFollowMoverEntityName                  = 0X0970; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flFollowMoverDistance                     = 0X0978; // float32
            static constexpr std::uintptr_t m_flFollowMoverCalculatedDistance           = 0X097C; // float32
            static constexpr std::uintptr_t m_flFollowMoverSpringStrength               = 0X0980; // float32
            static constexpr std::uintptr_t m_bFollowConstraintsInitialized             = 0X0984; // bool
            static constexpr std::uintptr_t m_eFollowConstraint                         = 0X0988; // CFuncMover::FollowConstraint_t
            static constexpr std::uintptr_t m_flFollowMoverSpeed                        = 0X098C; // float32
            static constexpr std::uintptr_t m_flFollowMoverVelocity                     = 0X0990; // float32
            static constexpr std::uintptr_t m_nTickMovementRan                          = 0X0994; // GameTick_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncNavObstruction : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled               = 0X0748; // bool
            static constexpr std::uintptr_t m_bUseAsyncObstacleUpdate = 0X0749; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysWheelConstraint : public CPhysConstraint {
        public:
            static constexpr std::uintptr_t m_flSuspensionFrequency    = 0X0508; // float32
            static constexpr std::uintptr_t m_flSuspensionDampingRatio = 0X050C; // float32
            static constexpr std::uintptr_t m_flSuspensionHeightOffset = 0X0510; // float32
            static constexpr std::uintptr_t m_bEnableSuspensionLimit   = 0X0514; // bool
            static constexpr std::uintptr_t m_flMinSuspensionOffset    = 0X0518; // float32
            static constexpr std::uintptr_t m_flMaxSuspensionOffset    = 0X051C; // float32
            static constexpr std::uintptr_t m_bEnableSteeringLimit     = 0X0520; // bool
            static constexpr std::uintptr_t m_flMinSteeringAngle       = 0X0524; // float32
            static constexpr std::uintptr_t m_flMaxSteeringAngle       = 0X0528; // float32
            static constexpr std::uintptr_t m_flSteeringAxisFriction   = 0X052C; // float32
            static constexpr std::uintptr_t m_flSpinAxisFriction       = 0X0530; // float32
            static constexpr std::uintptr_t m_hSteeringMimicsEntity    = 0X0534; // CHandle<CBaseEntity>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSkyboxReference : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_worldGroupId = 0X04A8; // WorldGroupId_t
            static constexpr std::uintptr_t m_hSkyCamera   = 0X04AC; // CHandle<CSkyCamera>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointPulse : public CBaseEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CMolotovProjectile : public CBaseCSGrenadeProjectile {
        public:
            static constexpr std::uintptr_t m_bIsIncGrenade = 0X0BB0; // bool
            static constexpr std::uintptr_t m_bDetonated    = 0X0BC8; // bool
            static constexpr std::uintptr_t m_stillTimer    = 0X0BD0; // IntervalTimer
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFilterClass : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_iFilterClass = 0X04E0; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerToggleSave : public CBaseTrigger {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CColorCorrection : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_flFadeInDuration     = 0X04A8; // float32
            static constexpr std::uintptr_t m_flFadeOutDuration    = 0X04AC; // float32
            static constexpr std::uintptr_t m_flStartFadeInWeight  = 0X04B0; // float32
            static constexpr std::uintptr_t m_flStartFadeOutWeight = 0X04B4; // float32
            static constexpr std::uintptr_t m_flTimeStartFadeIn    = 0X04B8; // GameTime_t
            static constexpr std::uintptr_t m_flTimeStartFadeOut   = 0X04BC; // GameTime_t
            static constexpr std::uintptr_t m_flMaxWeight          = 0X04C0; // float32
            static constexpr std::uintptr_t m_bStartDisabled       = 0X04C4; // bool
            static constexpr std::uintptr_t m_bEnabled             = 0X04C5; // bool
            static constexpr std::uintptr_t m_bMaster              = 0X04C6; // bool
            static constexpr std::uintptr_t m_bClientSide          = 0X04C7; // bool
            static constexpr std::uintptr_t m_bExclusive           = 0X04C8; // bool
            static constexpr std::uintptr_t m_MinFalloff           = 0X04CC; // float32
            static constexpr std::uintptr_t m_MaxFalloff           = 0X04D0; // float32
            static constexpr std::uintptr_t m_flCurWeight          = 0X04D4; // float32
            static constexpr std::uintptr_t m_netlookupFilename    = 0X04D8; // char[512]
            static constexpr std::uintptr_t m_lookupFilename       = 0X06D8; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPropDoorRotatingBreakable : public CPropDoorRotating {
        public:
            static constexpr std::uintptr_t m_bBreakable               = 0X0EF0; // bool
            static constexpr std::uintptr_t m_isAbleToCloseAreaPortals = 0X0EF1; // bool
            static constexpr std::uintptr_t m_currentDamageState       = 0X0EF4; // int32
            static constexpr std::uintptr_t m_damageStates             = 0X0EF8; // CUtlVector<CUtlSymbolLarge>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoLandmark : public CPointEntity {
        public:
        };

        // Has VTable
        // Local Type Scope
        struct WeaponPurchaseTracker_t {
        public:
            static constexpr std::uintptr_t m_weaponPurchases = 0X0008; // CUtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
        };

        // Has Trivial Destructor
        // Construct Allowed
        // Local Type Scope
        struct CPulseCell_Outflow_PlaySceneBase__CursorState_t {
        public:
            static constexpr std::uintptr_t m_sceneInstance = 0X0000; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_mainActor     = 0X0004; // CHandle<CBaseEntity>
        };

        // Construct Allowed
        // Local Type Scope
        struct PulseObservableBoolExpression_t {
        public:
            static constexpr std::uintptr_t m_EvaluateConnection                      = 0X0000; // CPulse_OutflowConnection
            static constexpr std::uintptr_t m_DependentObservableVars                 = 0X0048; // CUtlVector<PulseRuntimeVarIndex_t>
            static constexpr std::uintptr_t m_DependentObservableBlackboardReferences = 0X0060; // CUtlVector<PulseRuntimeBlackboardReferenceIndex_t>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CMapInfo : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_iBuyingStatus                 = 0X04A8; // int32
            static constexpr std::uintptr_t m_flBombRadius                  = 0X04AC; // float32
            static constexpr std::uintptr_t m_iPetPopulation                = 0X04B0; // int32
            static constexpr std::uintptr_t m_bUseNormalSpawnsForDM         = 0X04B4; // bool
            static constexpr std::uintptr_t m_bDisableAutoGeneratedDMSpawns = 0X04B5; // bool
            static constexpr std::uintptr_t m_flBotMaxVisionDistance        = 0X04B8; // float32
            static constexpr std::uintptr_t m_iHostageCount                 = 0X04BC; // int32
            static constexpr std::uintptr_t m_bFadePlayerVisibilityFarZ     = 0X04C0; // bool
            static constexpr std::uintptr_t m_bRainTraceToSkyEnabled        = 0X04C1; // bool
            static constexpr std::uintptr_t m_flEnvRainStrength             = 0X04C4; // float32
            static constexpr std::uintptr_t m_flEnvPuddleRippleStrength     = 0X04C8; // float32
            static constexpr std::uintptr_t m_flEnvPuddleRippleDirection    = 0X04CC; // float32
            static constexpr std::uintptr_t m_flEnvWetnessCoverage          = 0X04D0; // float32
            static constexpr std::uintptr_t m_flEnvWetnessDryingAmount      = 0X04D4; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CGradientFog : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_hGradientFogTexture       = 0X04A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_flFogStartDistance        = 0X04B0; // float32
            static constexpr std::uintptr_t m_flFogEndDistance          = 0X04B4; // float32
            static constexpr std::uintptr_t m_bHeightFogEnabled         = 0X04B8; // bool
            static constexpr std::uintptr_t m_flFogStartHeight          = 0X04BC; // float32
            static constexpr std::uintptr_t m_flFogEndHeight            = 0X04C0; // float32
            static constexpr std::uintptr_t m_flFarZ                    = 0X04C4; // float32
            static constexpr std::uintptr_t m_flFogMaxOpacity           = 0X04C8; // float32
            static constexpr std::uintptr_t m_flFogFalloffExponent      = 0X04CC; // float32
            static constexpr std::uintptr_t m_flFogVerticalExponent     = 0X04D0; // float32
            static constexpr std::uintptr_t m_fogColor                  = 0X04D4; // Color
            static constexpr std::uintptr_t m_flFogStrength             = 0X04D8; // float32
            static constexpr std::uintptr_t m_flFadeTime                = 0X04DC; // float32
            static constexpr std::uintptr_t m_bStartDisabled            = 0X04E0; // bool
            static constexpr std::uintptr_t m_bIsEnabled                = 0X04E1; // bool
            static constexpr std::uintptr_t m_bGradientFogNeedsTextures = 0X04E2; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Outflow_PlaySequence : public CPulseCell_Outflow_PlaySceneBase {
        public:
            static constexpr std::uintptr_t m_ParamSequenceName = 0X00F0; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointClientUIWorldTextPanel : public CPointClientUIWorldPanel {
        public:
            static constexpr std::uintptr_t m_messageText = 0X08E8; // char[512]
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
        // Local Type Scope
        struct CPulseCell_LimitCount__Criteria_t {
        public:
            static constexpr std::uintptr_t m_bLimitCountPasses = 0X0000; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncRotator : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_hRotatorTarget                  = 0X0730; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_bIsRotating                     = 0X0734; // bool
            static constexpr std::uintptr_t m_bIsReversing                    = 0X0735; // bool
            static constexpr std::uintptr_t m_flTimeToReachMaxSpeed           = 0X0738; // float32
            static constexpr std::uintptr_t m_flTimeToReachZeroSpeed          = 0X073C; // float32
            static constexpr std::uintptr_t m_flDistanceAlongArcTraveled      = 0X0740; // float32
            static constexpr std::uintptr_t m_flTimeToWaitOscillate           = 0X0744; // float32
            static constexpr std::uintptr_t m_flTimeRotationStart             = 0X0748; // GameTime_t
            static constexpr std::uintptr_t m_qLSPrevChange                   = 0X0750; // Quaternion
            static constexpr std::uintptr_t m_qWSPrev                         = 0X0760; // Quaternion
            static constexpr std::uintptr_t m_qWSInit                         = 0X0770; // Quaternion
            static constexpr std::uintptr_t m_qLSInit                         = 0X0780; // Quaternion
            static constexpr std::uintptr_t m_qLSOrientation                  = 0X0790; // Quaternion
            static constexpr std::uintptr_t m_OnRotationStarted               = 0X07A0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnRotationCompleted             = 0X07B8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnOscillate                     = 0X07D0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnOscillateStartArrive          = 0X07E8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnOscillateStartDepart          = 0X0800; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnOscillateEndArrive            = 0X0818; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnOscillateEndDepart            = 0X0830; // CEntityIOOutput
            static constexpr std::uintptr_t m_bOscillateDepart                = 0X0848; // bool
            static constexpr std::uintptr_t m_nOscillateCount                 = 0X084C; // int32
            static constexpr std::uintptr_t m_eRotateType                     = 0X0850; // CFuncRotator::Rotate_t
            static constexpr std::uintptr_t m_ePrevRotateType                 = 0X0854; // CFuncRotator::Rotate_t
            static constexpr std::uintptr_t m_bHasTargetOverride              = 0X0858; // bool
            static constexpr std::uintptr_t m_qOrientationOverride            = 0X0860; // Quaternion
            static constexpr std::uintptr_t m_eSpaceOverride                  = 0X0870; // RotatorTargetSpace_t
            static constexpr std::uintptr_t m_qAngularVelocity                = 0X0874; // QAngle
            static constexpr std::uintptr_t m_vLookAtForcedUp                 = 0X0880; // Vector
            static constexpr std::uintptr_t m_strRotatorTarget                = 0X0890; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bRecordHistory                  = 0X0898; // bool
            static constexpr std::uintptr_t m_vecRotatorHistory               = 0X08A0; // CUtlVector<RotatorHistoryEntry_t>
            static constexpr std::uintptr_t m_bReturningToPreviousOrientation = 0X08B8; // bool
            static constexpr std::uintptr_t m_vecRotatorQueue                 = 0X08C0; // CUtlVector<RotatorQueueEntry_t>
            static constexpr std::uintptr_t m_vecRotatorQueueHistory          = 0X08D8; // CUtlVector<RotatorHistoryEntry_t>
            static constexpr std::uintptr_t m_eSolidType                      = 0X08F0; // SolidType_t
            static constexpr std::uintptr_t m_hSpeedFromMover                 = 0X08F4; // CHandle<CFuncMover>
            static constexpr std::uintptr_t m_iszSpeedFromMover               = 0X08F8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flSpeedScale                    = 0X0900; // float32
            static constexpr std::uintptr_t m_flMinYawRotation                = 0X0904; // float32
            static constexpr std::uintptr_t m_flMaxYawRotation                = 0X0908; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoPlayerCounterterrorist : public SpawnPoint {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvFade : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_fadeColor    = 0X04A8; // Color
            static constexpr std::uintptr_t m_Duration     = 0X04AC; // float32
            static constexpr std::uintptr_t m_HoldDuration = 0X04B0; // float32
            static constexpr std::uintptr_t m_OnBeginFade  = 0X04B8; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBasePlayerVData : public CEntitySubclassVDataBase {
        public:
            static constexpr std::uintptr_t m_sModelName                = 0X0028; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            static constexpr std::uintptr_t m_flHeadDamageMultiplier    = 0X0108; // CSkillFloat
            static constexpr std::uintptr_t m_flChestDamageMultiplier   = 0X0118; // CSkillFloat
            static constexpr std::uintptr_t m_flStomachDamageMultiplier = 0X0128; // CSkillFloat
            static constexpr std::uintptr_t m_flArmDamageMultiplier     = 0X0138; // CSkillFloat
            static constexpr std::uintptr_t m_flLegDamageMultiplier     = 0X0148; // CSkillFloat
            static constexpr std::uintptr_t m_flHoldBreathTime          = 0X0158; // float32
            static constexpr std::uintptr_t m_flDrowningDamageInterval  = 0X015C; // float32
            static constexpr std::uintptr_t m_nDrowningDamageInitial    = 0X0160; // int32
            static constexpr std::uintptr_t m_nDrowningDamageMax        = 0X0164; // int32
            static constexpr std::uintptr_t m_nWaterSpeed               = 0X0168; // int32
            static constexpr std::uintptr_t m_flUseRange                = 0X016C; // float32
            static constexpr std::uintptr_t m_flUseAngleTolerance       = 0X0170; // float32
            static constexpr std::uintptr_t m_flCrouchTime              = 0X0174; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerImpact : public CTriggerMultiple {
        public:
            static constexpr std::uintptr_t m_flMagnitude  = 0X08A8; // float32
            static constexpr std::uintptr_t m_flNoise      = 0X08AC; // float32
            static constexpr std::uintptr_t m_flViewkick   = 0X08B0; // float32
            static constexpr std::uintptr_t m_pOutputForce = 0X08B8; // CEntityOutputTemplate<Vector,Vector>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSGameModeRules_Deathmatch : public CCSGameModeRules {
        public:
            static constexpr std::uintptr_t m_flDMBonusStartTime  = 0X0030; // GameTime_t
            static constexpr std::uintptr_t m_flDMBonusTimeLength = 0X0034; // float32
            static constexpr std::uintptr_t m_sDMBonusWeapon      = 0X0038; // CUtlString
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
        // Construct Allowed
        // Local Type Scope
        class CLogicBranchList : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_nLogicBranchNames = 0X04A8; // CUtlSymbolLarge[16]
            static constexpr std::uintptr_t m_LogicBranchList   = 0X0528; // CUtlVector<CHandle<CBaseEntity>>
            static constexpr std::uintptr_t m_eLastState        = 0X0540; // CLogicBranchList::LogicBranchListenerLastState_t
            static constexpr std::uintptr_t m_OnAllTrue         = 0X0548; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnAllFalse        = 0X0560; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnMixed           = 0X0578; // CEntityIOOutput
        };

        // Has VTable
        // Local Type Scope
        class CBtActionParachutePositioning : public CBtNode {
        public:
            static constexpr std::uintptr_t m_ActionTimer = 0X0058; // CountdownTimer
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CAK47 : public CCSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CHostageAlias_info_hostage_spawn : public CHostage {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFilterTeam : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_iFilterTeam = 0X04E0; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncConveyor : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_szConveyorModels            = 0X0730; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flTransitionDurationSeconds = 0X0738; // float32
            static constexpr std::uintptr_t m_angMoveEntitySpace          = 0X073C; // QAngle
            static constexpr std::uintptr_t m_vecMoveDirEntitySpace       = 0X0748; // Vector
            static constexpr std::uintptr_t m_flTargetSpeed               = 0X0754; // float32
            static constexpr std::uintptr_t m_nTransitionStartTick        = 0X0758; // GameTick_t
            static constexpr std::uintptr_t m_nTransitionDurationTicks    = 0X075C; // int32
            static constexpr std::uintptr_t m_flTransitionStartSpeed      = 0X0760; // float32
            static constexpr std::uintptr_t m_hConveyorModels             = 0X0768; // CNetworkUtlVectorBase<CHandle<CBaseEntity>>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerPhysics : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_gravityScale                 = 0X08A0; // float32
            static constexpr std::uintptr_t m_linearLimit                  = 0X08A4; // float32
            static constexpr std::uintptr_t m_linearDamping                = 0X08A8; // float32
            static constexpr std::uintptr_t m_angularLimit                 = 0X08AC; // float32
            static constexpr std::uintptr_t m_angularDamping               = 0X08B0; // float32
            static constexpr std::uintptr_t m_linearForce                  = 0X08B4; // float32
            static constexpr std::uintptr_t m_flFrequency                  = 0X08B8; // float32
            static constexpr std::uintptr_t m_flDampingRatio               = 0X08BC; // float32
            static constexpr std::uintptr_t m_vecLinearForcePointAt        = 0X08C0; // Vector
            static constexpr std::uintptr_t m_bCollapseToForcePoint        = 0X08CC; // bool
            static constexpr std::uintptr_t m_vecLinearForcePointAtWorld   = 0X08D0; // Vector
            static constexpr std::uintptr_t m_vecLinearForceDirection      = 0X08DC; // Vector
            static constexpr std::uintptr_t m_bConvertToDebrisWhenPossible = 0X08E8; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoInstructorHintBombTargetB : public CPointEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncTimescale : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_flDesiredTimescale     = 0X04A8; // float32
            static constexpr std::uintptr_t m_flAcceleration         = 0X04AC; // float32
            static constexpr std::uintptr_t m_flMinBlendRate         = 0X04B0; // float32
            static constexpr std::uintptr_t m_flBlendDeltaMultiplier = 0X04B4; // float32
            static constexpr std::uintptr_t m_isStarted              = 0X04B8; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoInteraction : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_strSlotEntityName = 0X04A8; // CUtlSymbolLarge[8]
            static constexpr std::uintptr_t m_strInteractVData  = 0X04E8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flInteractRadius  = 0X04F0; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoTargetServerOnly : public CServerOnlyPointEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CServerRagdollTrigger : public CBaseTrigger {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CDynamicPropAlias_dynamic_prop : public CDynamicProp {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoParticleTarget : public CPointEntity {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_DamageReactServices : public CPlayerPawnComponent {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponXM1014 : public CCSWeaponBaseShotgun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerLerpObject : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_iszLerpTarget              = 0X0890; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hLerpTarget                = 0X0898; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_iszLerpTargetAttachment    = 0X08A0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hLerpTargetAttachment      = 0X08A8; // AttachmentHandle_t
            static constexpr std::uintptr_t m_flLerpDuration             = 0X08AC; // float32
            static constexpr std::uintptr_t m_bAttachedEntityWasParented = 0X08B0; // bool
            static constexpr std::uintptr_t m_bLerpRestoreMoveType       = 0X08B1; // bool
            static constexpr std::uintptr_t m_bSingleLerpObject          = 0X08B2; // bool
            static constexpr std::uintptr_t m_vecLerpingObjects          = 0X08B8; // CUtlVector<lerpdata_t>
            static constexpr std::uintptr_t m_iszLerpEffect              = 0X08D0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszLerpSound               = 0X08D8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bAttachTouchingObject      = 0X08E0; // bool
            static constexpr std::uintptr_t m_hEntityToWaitForDisconnect = 0X08E4; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_OnLerpStarted              = 0X08E8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnLerpFinished             = 0X0900; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnDetached                 = 0X0918; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysicsPropOverride : public CPhysicsProp {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerSave : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_bForceNewLevelUnit = 0X0890; // bool
            static constexpr std::uintptr_t m_fDangerousTimer    = 0X0894; // float32
            static constexpr std::uintptr_t m_minHitPoints       = 0X0898; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointHurt : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_nDamage        = 0X04A8; // int32
            static constexpr std::uintptr_t m_bitsDamageType = 0X04AC; // DamageTypes_t
            static constexpr std::uintptr_t m_flRadius       = 0X04B0; // float32
            static constexpr std::uintptr_t m_flDelay        = 0X04B4; // float32
            static constexpr std::uintptr_t m_strTarget      = 0X04B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_pActivator     = 0X04C0; // CHandle<CBaseEntity>
        };

        // Has Trivial Destructor
        class CRangeFloat {
        public:
            static constexpr std::uintptr_t m_pValue = 0X0000; // float32[2]
        };

        // Construct Allowed
        class CDestructiblePart {
        public:
            static constexpr std::uintptr_t m_DebugName                                   = 0X0000; // CGlobalSymbol
            static constexpr std::uintptr_t m_nHitGroup                                   = 0X0008; // HitGroup_t
            static constexpr std::uintptr_t m_bDisableHitGroupWhenDestroyed               = 0X000C; // bool
            static constexpr std::uintptr_t m_nOtherHitgroupsToDestroyWhenFullyDestructed = 0X0010; // CUtlVector<HitGroup_t>
            static constexpr std::uintptr_t m_bOnlyDestroyWhenGibbing                     = 0X0028; // bool
            static constexpr std::uintptr_t m_sBodyGroupName                              = 0X0030; // CGlobalSymbol
            static constexpr std::uintptr_t m_DamageLevels                                = 0X0038; // CUtlVector<CDestructiblePart_DamageLevel>
        };

        // Has Trivial Destructor
        class CAnimEventListenerBase {
        public:
        };

        // Has VTable
        // Has Trivial Destructor
        class CAnimEventQueueListener : public CAnimEventListenerBase {
        public:
        };

        // Has Trivial Destructor
        struct Relationship_t {
        public:
            static constexpr std::uintptr_t disposition = 0X0000; // Disposition_t
            static constexpr std::uintptr_t priority    = 0X0004; // int32
        };

        // Has Trivial Destructor
        struct RelationshipOverride_t : public Relationship_t {
        public:
            static constexpr std::uintptr_t entity    = 0X0008; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t classType = 0X000C; // Class_T
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        struct AutoRoomDoorwayPairs_t {
        public:
            static constexpr std::uintptr_t vP1 = 0X0000; // Vector
            static constexpr std::uintptr_t vP2 = 0X000C; // Vector
        };

        // Has Trivial Destructor
        class CRemapFloat {
        public:
            static constexpr std::uintptr_t m_pValue = 0X0000; // float32[4]
        };

        class CHintMessage {
        public:
            static constexpr std::uintptr_t m_hintString = 0X0000; // char*
            static constexpr std::uintptr_t m_args       = 0X0008; // CUtlVector<char*>
            static constexpr std::uintptr_t m_duration   = 0X0020; // float32
        };

        // Has Trivial Destructor
        struct ParticleNode_t {
        public:
            static constexpr std::uintptr_t m_hEntity          = 0X0000; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_iIndex           = 0X0004; // ParticleIndex_t
            static constexpr std::uintptr_t m_flStartTime      = 0X0008; // GameTime_t
            static constexpr std::uintptr_t m_flGrowthDuration = 0X000C; // float32
            static constexpr std::uintptr_t m_vecGrowthOrigin  = 0X0010; // Vector
            static constexpr std::uintptr_t m_flEndcapTime     = 0X001C; // float32
            static constexpr std::uintptr_t m_bMarkedForDelete = 0X0020; // bool
        };

        // Has Trivial Destructor
        class CFootstepTableHandle {
        public:
        };

        // Construct Allowed
        class CDecalGroupVData {
        public:
            static constexpr std::uintptr_t m_vecOptions         = 0X0000; // CUtlVector<DecalGroupOption_t>
            static constexpr std::uintptr_t m_flTotalProbability = 0X0018; // float32
        };

        // Has VTable
        // Construct Allowed
        class CNmSnapWeaponTask : public CNmPoseTask {
        public:
        };

        class CResponseQueue {
        public:
            static constexpr std::uintptr_t m_ExpresserTargets = 0X0038; // CUtlVector<CAI_Expresser*>
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        struct CodeGenAABB_t {
        public:
            static constexpr std::uintptr_t m_vMinBounds = 0X0000; // Vector
            static constexpr std::uintptr_t m_vMaxBounds = 0X000C; // Vector
        };

        // Has VTable
        class CScriptUniformRandomStream {
        public:
            static constexpr std::uintptr_t m_hScriptScope = 0X0008; // HSCRIPT
            static constexpr std::uintptr_t m_nInitialSeed = 0X009C; // int32
        };

        // Has Trivial Destructor
        struct lerpdata_t {
        public:
            static constexpr std::uintptr_t m_hEnt           = 0X0000; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_MoveType       = 0X0004; // MoveType_t
            static constexpr std::uintptr_t m_flStartTime    = 0X0008; // GameTime_t
            static constexpr std::uintptr_t m_vecStartOrigin = 0X000C; // Vector
            static constexpr std::uintptr_t m_qStartRot      = 0X0020; // Quaternion
            static constexpr std::uintptr_t m_nFXIndex       = 0X0030; // ParticleIndex_t
        };

        // Has Trivial Destructor
        struct WrappedPhysicsJoint_t {
        public:
        };

        // Has VTable
        // Has Trivial Destructor
        class SimpleConstraintSoundProfile {
        public:
            static constexpr std::uintptr_t m_flKeyPointMinSoundThreshold  = 0X0008; // float32
            static constexpr std::uintptr_t m_flKeyPointMaxSoundThreshold  = 0X000C; // float32
            static constexpr std::uintptr_t m_reversalSoundThresholdSmall  = 0X0010; // float32
            static constexpr std::uintptr_t m_reversalSoundThresholdMedium = 0X0014; // float32
            static constexpr std::uintptr_t m_reversalSoundThresholdLarge  = 0X0018; // float32
        };

        // Has Trivial Destructor
        class CSimpleSimTimer {
        public:
            static constexpr std::uintptr_t m_flNext        = 0X0000; // GameTime_t
            static constexpr std::uintptr_t m_nWorldGroupId = 0X0004; // WorldGroupId_t
        };

        // Construct Allowed
        class CPhysicsBodyGameMarkupData {
        public:
            static constexpr std::uintptr_t m_PhysicsBodyMarkupByBoneName = 0X0000; // CUtlOrderedMap<CUtlString,CPhysicsBodyGameMarkup>
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CSkillDamage {
        public:
            static constexpr std::uintptr_t m_flDamage               = 0X0000; // CSkillFloat
            static constexpr std::uintptr_t m_flNPCDamageScalarVsNPC = 0X0010; // float32
            static constexpr std::uintptr_t m_flPhysicsForceDamage   = 0X0014; // float32
        };

        // Has Trivial Destructor
        class CFloatExponentialMovingAverage {
        public:
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CNmEventConsumer {
        public:
        };

        // Has Trivial Destructor
        class CNetworkViewOffsetVector {
        public:
            static constexpr std::uintptr_t m_vecX = 0X0010; // CNetworkedQuantizedFloat
            static constexpr std::uintptr_t m_vecY = 0X0018; // CNetworkedQuantizedFloat
            static constexpr std::uintptr_t m_vecZ = 0X0020; // CNetworkedQuantizedFloat
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct AmmoIndex_t {
        public:
            static constexpr std::uintptr_t m_Value = 0X0000; // int8
        };

        // Construct Allowed
        class CDestructiblePartsSystemData {
        public:
            static constexpr std::uintptr_t m_PartsDataByHitGroup                        = 0X0000; // CUtlOrderedMap<HitGroup_t,CDestructiblePart>
            static constexpr std::uintptr_t m_nMinMaxNumberHitGroupsToDestroyWhenGibbing = 0X0028; // CRangeInt
        };

        class CRopeOverlapHit {
        public:
            static constexpr std::uintptr_t m_hEntity             = 0X0000; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_vecOverlappingLinks = 0X0008; // CUtlVector<int32>
        };

        // Has Trivial Destructor
        struct ResponseContext_t {
        public:
            static constexpr std::uintptr_t m_iszName         = 0X0000; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszValue        = 0X0008; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_fExpirationTime = 0X0010; // GameTime_t
        };

        // Has VTable
        // Is Absract
        class CNavVolume {
        public:
        };

        // Has VTable
        class CNavVolumeSphere : public CNavVolume {
        public:
            static constexpr std::uintptr_t m_vCenter  = 0X0078; // Vector
            static constexpr std::uintptr_t m_flRadius = 0X0084; // float32
        };

        // Has VTable
        class CNavVolumeSphericalShell : public CNavVolumeSphere {
        public:
            static constexpr std::uintptr_t m_flRadiusInner = 0X0088; // float32
        };

        class CDecalInstance {
        public:
            static constexpr std::uintptr_t m_sDecalGroup            = 0X0000; // CGlobalSymbol
            static constexpr std::uintptr_t m_hMaterial              = 0X0008; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_sSequenceName          = 0X0010; // CUtlStringToken
            static constexpr std::uintptr_t m_hEntity                = 0X0014; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_nBoneIndex             = 0X0018; // int32
            static constexpr std::uintptr_t m_nTriangleIndex         = 0X001C; // int32
            static constexpr std::uintptr_t m_vPositionLS            = 0X0020; // Vector
            static constexpr std::uintptr_t m_vNormalLS              = 0X002C; // Vector
            static constexpr std::uintptr_t m_vSAxisLS               = 0X0038; // Vector
            static constexpr std::uintptr_t m_nFlags                 = 0X0044; // DecalFlags_t
            static constexpr std::uintptr_t m_Color                  = 0X0048; // Color
            static constexpr std::uintptr_t m_flWidth                = 0X004C; // float32
            static constexpr std::uintptr_t m_flHeight               = 0X0050; // float32
            static constexpr std::uintptr_t m_flDepth                = 0X0054; // float32
            static constexpr std::uintptr_t m_transform              = 0X0060; // CTransformWS
            static constexpr std::uintptr_t m_flAnimationScale       = 0X0080; // float32
            static constexpr std::uintptr_t m_flAnimationStartTime   = 0X0084; // float32
            static constexpr std::uintptr_t m_flPlaceTime            = 0X0088; // GameTime_t
            static constexpr std::uintptr_t m_flFadeStartTime        = 0X008C; // float32
            static constexpr std::uintptr_t m_flFadeDuration         = 0X0090; // float32
            static constexpr std::uintptr_t m_flLightingOriginOffset = 0X0094; // float32
            static constexpr std::uintptr_t m_flBoundingRadiusSqr    = 0X00A0; // float32
            static constexpr std::uintptr_t m_nSequenceIndex         = 0X00A4; // int16
            static constexpr std::uintptr_t m_bIsAdjacent            = 0X00A6; // bool
            static constexpr std::uintptr_t m_bDoDecalLightmapping   = 0X00A7; // bool
            static constexpr std::uintptr_t m_nDecalRtEncoding       = 0X00A8; // DecalRtEncoding_t
            static constexpr std::uintptr_t m_bProjectToBackfaces    = 0X00A9; // bool
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CGameScriptedMoveData {
        public:
            static constexpr std::uintptr_t m_vAccumulatedRootMotion           = 0X0000; // Vector
            static constexpr std::uintptr_t m_angAccumulatedRootMotionRotation = 0X000C; // QAngle
            static constexpr std::uintptr_t m_vSrc                             = 0X0018; // VectorWS
            static constexpr std::uintptr_t m_angSrc                           = 0X0024; // QAngle
            static constexpr std::uintptr_t m_angCurrent                       = 0X0030; // QAngle
            static constexpr std::uintptr_t m_flLockedSpeed                    = 0X003C; // float32
            static constexpr std::uintptr_t m_flAngRate                        = 0X0040; // float32
            static constexpr std::uintptr_t m_flDuration                       = 0X0044; // float32
            static constexpr std::uintptr_t m_flStartTime                      = 0X0048; // GameTime_t
            static constexpr std::uintptr_t m_bActive                          = 0X004C; // bool
            static constexpr std::uintptr_t m_bTeleportOnEnd                   = 0X004D; // bool
            static constexpr std::uintptr_t m_bIgnoreRotation                  = 0X004E; // bool
            static constexpr std::uintptr_t m_bSuccess                         = 0X004F; // bool
            static constexpr std::uintptr_t m_nForcedCrouchState               = 0X0050; // ForcedCrouchState_t
            static constexpr std::uintptr_t m_bIgnoreCollisions                = 0X0054; // bool
            static constexpr std::uintptr_t m_vDest                            = 0X0058; // Vector
            static constexpr std::uintptr_t m_angDst                           = 0X0064; // QAngle
            static constexpr std::uintptr_t m_hDestEntity                      = 0X0070; // CHandle<CBaseEntity>
        };

        // Has VTable
        class CNavVolumeMarkupVolume : public CNavVolume {
        public:
        };

        class CPathMoverEntitySpawn {
        public:
            static constexpr std::uintptr_t hMover           = 0X0000; // CHandle<CFuncMover>
            static constexpr std::uintptr_t vecOtherEntities = 0X0008; // CUtlVector<CHandle<CBaseEntity>>
        };

        // Has VTable
        class CResponseCriteriaSet {
        public:
            static constexpr std::uintptr_t m_nNumPrefixedContexts = 0X0030; // int32
            static constexpr std::uintptr_t m_bOverrideOnAppend    = 0X0034; // bool
        };

        // Has VTable
        class CAI_Expresser {
        public:
            static constexpr std::uintptr_t m_flStopTalkTime                    = 0X0060; // GameTime_t
            static constexpr std::uintptr_t m_flStopTalkTimeWithoutDelay        = 0X0064; // GameTime_t
            static constexpr std::uintptr_t m_flQueuedSpeechTime                = 0X0068; // GameTime_t
            static constexpr std::uintptr_t m_flBlockedTalkTime                 = 0X006C; // GameTime_t
            static constexpr std::uintptr_t m_voicePitch                        = 0X0070; // int32
            static constexpr std::uintptr_t m_flLastTimeAcceptedSpeak           = 0X0074; // GameTime_t
            static constexpr std::uintptr_t m_bAllowSpeakingInterrupts          = 0X0078; // bool
            static constexpr std::uintptr_t m_bConsiderSceneInvolvementAsSpeech = 0X0079; // bool
            static constexpr std::uintptr_t m_bSceneEntityDisabled              = 0X007A; // bool
            static constexpr std::uintptr_t m_nLastSpokenPriority               = 0X007C; // int32
            static constexpr std::uintptr_t m_pOuter                            = 0X0098; // CBaseFlex*
        };

        // Has VTable
        // Is Absract
        class IChoreoServices {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CNmEventConsumerAttributes : public CNmEventConsumer {
        public:
        };

        // Has Trivial Destructor
        class CStopwatchBase : public CSimpleSimTimer {
        public:
            static constexpr std::uintptr_t m_fIsRunning = 0X0008; // bool
        };

        // Has Trivial Destructor
        class CStopwatch : public CStopwatchBase {
        public:
            static constexpr std::uintptr_t m_flInterval = 0X000C; // float32
        };

        // Has Trivial Destructor
        class ResponseParams {
        public:
            static constexpr std::uintptr_t odds        = 0X0010; // int16
            static constexpr std::uintptr_t flags       = 0X0012; // int16
            static constexpr std::uintptr_t m_pFollowup = 0X0018; // ResponseFollowup*
        };

        // Has VTable
        class ConstraintSoundInfo {
        public:
            static constexpr std::uintptr_t m_vSampler               = 0X0008; // VelocitySampler
            static constexpr std::uintptr_t m_soundProfile           = 0X0020; // SimpleConstraintSoundProfile
            static constexpr std::uintptr_t m_forwardAxis            = 0X0040; // Vector
            static constexpr std::uintptr_t m_iszTravelSoundFwd      = 0X0050; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszTravelSoundBack     = 0X0058; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszReversalSoundSmall  = 0X0078; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszReversalSoundMedium = 0X0080; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszReversalSoundLarge  = 0X0088; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bPlayTravelSound       = 0X0090; // bool
            static constexpr std::uintptr_t m_bPlayReversalSound     = 0X0091; // bool
        };

        // Construct Allowed
        class CPhysicsBodyGameMarkup {
        public:
            static constexpr std::uintptr_t m_TargetBody = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_Tag        = 0X0008; // CGlobalSymbol
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct PointCameraSettings_t {
        public:
            static constexpr std::uintptr_t m_flNearBlurryDistance = 0X0000; // float32
            static constexpr std::uintptr_t m_flNearCrispDistance  = 0X0004; // float32
            static constexpr std::uintptr_t m_flFarCrispDistance   = 0X0008; // float32
            static constexpr std::uintptr_t m_flFarBlurryDistance  = 0X000C; // float32
        };

        class CVectorMovingAverage {
        public:
        };

        // Has Trivial Destructor
        class CSoundEnvelope {
        public:
            static constexpr std::uintptr_t m_current     = 0X0000; // float32
            static constexpr std::uintptr_t m_target      = 0X0004; // float32
            static constexpr std::uintptr_t m_rate        = 0X0008; // float32
            static constexpr std::uintptr_t m_forceupdate = 0X000C; // bool
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        struct dynpitchvol_base_t {
        public:
            static constexpr std::uintptr_t preset      = 0X0000; // int32
            static constexpr std::uintptr_t pitchrun    = 0X0004; // int32
            static constexpr std::uintptr_t pitchstart  = 0X0008; // int32
            static constexpr std::uintptr_t spinup      = 0X000C; // int32
            static constexpr std::uintptr_t spindown    = 0X0010; // int32
            static constexpr std::uintptr_t volrun      = 0X0014; // int32
            static constexpr std::uintptr_t volstart    = 0X0018; // int32
            static constexpr std::uintptr_t fadein      = 0X001C; // int32
            static constexpr std::uintptr_t fadeout     = 0X0020; // int32
            static constexpr std::uintptr_t lfotype     = 0X0024; // int32
            static constexpr std::uintptr_t lforate     = 0X0028; // int32
            static constexpr std::uintptr_t lfomodpitch = 0X002C; // int32
            static constexpr std::uintptr_t lfomodvol   = 0X0030; // int32
            static constexpr std::uintptr_t cspinup     = 0X0034; // int32
            static constexpr std::uintptr_t cspincount  = 0X0038; // int32
            static constexpr std::uintptr_t pitch       = 0X003C; // int32
            static constexpr std::uintptr_t spinupsav   = 0X0040; // int32
            static constexpr std::uintptr_t spindownsav = 0X0044; // int32
            static constexpr std::uintptr_t pitchfrac   = 0X0048; // int32
            static constexpr std::uintptr_t vol         = 0X004C; // int32
            static constexpr std::uintptr_t fadeinsav   = 0X0050; // int32
            static constexpr std::uintptr_t fadeoutsav  = 0X0054; // int32
            static constexpr std::uintptr_t volfrac     = 0X0058; // int32
            static constexpr std::uintptr_t lfofrac     = 0X005C; // int32
            static constexpr std::uintptr_t lfomult     = 0X0060; // int32
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct SceneRequestHandle_t {
        public:
            static constexpr std::uintptr_t m_Value = 0X0000; // int32
        };

        // Has VTable
        class CNavVolumeVector : public CNavVolume {
        public:
            static constexpr std::uintptr_t m_bHasBeenPreFiltered = 0X0080; // bool
        };

        // Has Trivial Destructor
        struct NavGravity_t {
        public:
            static constexpr std::uintptr_t m_vGravity = 0X0000; // Vector
            static constexpr std::uintptr_t m_bDefault = 0X000C; // bool
        };

        // Construct Allowed
        // Global Type Scope
        struct PulseScriptedSequenceData_t {
        public:
            static constexpr std::uintptr_t m_nActorID              = 0X0000; // int32
            static constexpr std::uintptr_t m_szPreIdleSequence     = 0X0008; // CUtlString
            static constexpr std::uintptr_t m_szEntrySequence       = 0X0010; // CUtlString
            static constexpr std::uintptr_t m_szSequence            = 0X0018; // CUtlString
            static constexpr std::uintptr_t m_szExitSequence        = 0X0020; // CUtlString
            static constexpr std::uintptr_t m_nMoveTo               = 0X0028; // ScriptedMoveTo_t
            static constexpr std::uintptr_t m_nMoveToGait           = 0X002C; // SharedMovementGait_t
            static constexpr std::uintptr_t m_nHeldWeaponBehavior   = 0X0030; // ScriptedHeldWeaponBehavior_t
            static constexpr std::uintptr_t m_bLoopPreIdleSequence  = 0X0034; // bool
            static constexpr std::uintptr_t m_bLoopActionSequence   = 0X0035; // bool
            static constexpr std::uintptr_t m_bLoopPostIdleSequence = 0X0036; // bool
            static constexpr std::uintptr_t m_bIgnoreLookAt         = 0X0037; // bool
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        struct RotatorQueueEntry_t {
        public:
            static constexpr std::uintptr_t qTarget = 0X0000; // Quaternion
            static constexpr std::uintptr_t eSpace  = 0X0010; // RotatorTargetSpace_t
        };

        // Has VTable
        // Construct Allowed
        class CBaseAnimGraphDestructibleParts_GraphController : public CAnimGraphControllerBase {
        public:
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct ExternalAnimGraphHandle_t {
        public:
            static constexpr std::uintptr_t m_Value = 0X0000; // uint32
        };

        // Has VTable
        // Has Trivial Destructor
        class CPhysicsShake {
        public:
            static constexpr std::uintptr_t m_force = 0X0008; // Vector
        };

        // Has Trivial Destructor
        class VelocitySampler {
        public:
            static constexpr std::uintptr_t m_prevSample       = 0X0000; // Vector
            static constexpr std::uintptr_t m_fPrevSampleTime  = 0X000C; // GameTime_t
            static constexpr std::uintptr_t m_fIdealSampleRate = 0X0010; // float32
        };

        // Has Trivial Destructor
        class CTakeDamageResult {
        public:
            static constexpr std::uintptr_t m_pOriginatingInfo            = 0X0000; // CTakeDamageInfo*
            static constexpr std::uintptr_t m_nHealthLost                 = 0X0008; // int32
            static constexpr std::uintptr_t m_nHealthBefore               = 0X000C; // int32
            static constexpr std::uintptr_t m_nDamageDealt                = 0X0010; // int32
            static constexpr std::uintptr_t m_flPreModifiedDamage         = 0X0014; // float32
            static constexpr std::uintptr_t m_nTotalledHealthLost         = 0X0018; // int32
            static constexpr std::uintptr_t m_nTotalledDamageDealt        = 0X001C; // int32
            static constexpr std::uintptr_t m_flTotalledPreModifiedDamage = 0X0020; // float32
            static constexpr std::uintptr_t m_bWasDamageSuppressed        = 0X0024; // bool
            static constexpr std::uintptr_t m_bSuppressFlinch             = 0X0025; // bool
            static constexpr std::uintptr_t m_nOverrideFlinchHitGroup     = 0X0028; // HitGroup_t
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct SceneEventId_t {
        public:
            static constexpr std::uintptr_t m_Value = 0X0000; // uint32
        };

        struct ExternalAnimGraph_t {
        public:
            static constexpr std::uintptr_t m_hExtGraphHandle      = 0X0000; // ExternalAnimGraphHandle_t
            static constexpr std::uintptr_t m_sExternalGraphSlotID = 0X0008; // CGlobalSymbol
            static constexpr std::uintptr_t m_hGraphDefinition     = 0X0010; // CStrongHandleCopyable<InfoForResourceTypeCNmGraphDefinition>
            static constexpr std::uintptr_t m_hExternalGraphOwner  = 0X0018; // CHandle<CBaseAnimGraph>
            static constexpr std::uintptr_t m_nInactiveBehavior    = 0X0030; // ExternalAnimGraphInactiveBehavior_t
        };

        // Has VTable
        class CCommentarySystem {
        public:
            static constexpr std::uintptr_t m_bCommentaryConvarsChanging = 0X0011; // bool
            static constexpr std::uintptr_t m_bCommentaryEnabledMidGame  = 0X0012; // bool
            static constexpr std::uintptr_t m_flNextTeleportTime         = 0X0014; // GameTime_t
            static constexpr std::uintptr_t m_iTeleportStage             = 0X0018; // int32
            static constexpr std::uintptr_t m_bCheatState                = 0X001C; // bool
            static constexpr std::uintptr_t m_bIsFirstSpawnGroupToLoad   = 0X001D; // bool
            static constexpr std::uintptr_t m_hCurrentNode               = 0X0038; // CHandle<CPointCommentaryNode>
            static constexpr std::uintptr_t m_hActiveCommentaryNode      = 0X003C; // CHandle<CPointCommentaryNode>
            static constexpr std::uintptr_t m_hLastCommentaryNode        = 0X0040; // CHandle<CPointCommentaryNode>
            static constexpr std::uintptr_t m_vecNodes                   = 0X0048; // CUtlVector<CHandle<CPointCommentaryNode>>
        };

        // Has Trivial Destructor
        class ResponseFollowup {
        public:
            static constexpr std::uintptr_t followup_concept        = 0X0000; // char*
            static constexpr std::uintptr_t followup_contexts       = 0X0008; // char*
            static constexpr std::uintptr_t followup_delay          = 0X0010; // float32
            static constexpr std::uintptr_t followup_target         = 0X0014; // char*
            static constexpr std::uintptr_t followup_entityiotarget = 0X001C; // char*
            static constexpr std::uintptr_t followup_entityioinput  = 0X0024; // char*
            static constexpr std::uintptr_t followup_entityiodelay  = 0X002C; // float32
            static constexpr std::uintptr_t bFired                  = 0X0030; // bool
        };

        // Has VTable
        // Construct Allowed
        struct AmmoTypeInfo_t {
        public:
            static constexpr std::uintptr_t m_nMaxCarry   = 0X0010; // int32
            static constexpr std::uintptr_t m_nSplashSize = 0X001C; // CRangeInt
            static constexpr std::uintptr_t m_nFlags      = 0X0024; // AmmoFlags_t
            static constexpr std::uintptr_t m_flMass      = 0X0028; // float32
            static constexpr std::uintptr_t m_flSpeed     = 0X002C; // CRangeFloat
        };

        // Has VTable
        class CNetworkTransmitComponent {
        public:
            static constexpr std::uintptr_t m_nTransmitStateOwnedCounter = 0X0184; // uint8
        };

        class CPathQueryUtil {
        public:
            static constexpr std::uintptr_t m_PathToEntityTransform   = 0X0010; // CTransform
            static constexpr std::uintptr_t m_vecPathSamplePositions  = 0X0030; // CUtlVector<Vector>
            static constexpr std::uintptr_t m_vecPathSampleParameters = 0X0048; // CUtlVector<float32>
            static constexpr std::uintptr_t m_vecPathSampleDistances  = 0X0060; // CUtlVector<float32>
            static constexpr std::uintptr_t m_bIsClosedLoop           = 0X0078; // bool
        };

        // Has Trivial Destructor
        struct RagdollCreationParams_t {
        public:
            static constexpr std::uintptr_t m_vForce                      = 0X0000; // Vector
            static constexpr std::uintptr_t m_nForceBone                  = 0X000C; // int32
            static constexpr std::uintptr_t m_bForceCurrentWorldTransform = 0X0010; // bool
            static constexpr std::uintptr_t m_bUseLRURetirement           = 0X0011; // bool
            static constexpr std::uintptr_t m_nHealthToGrant              = 0X0014; // int32
        };

        // Has Trivial Destructor
        class CRangeInt {
        public:
            static constexpr std::uintptr_t m_pValue = 0X0000; // int32[2]
        };

        struct CWorldCompositionChunkReferenceElement_t {
        public:
            static constexpr std::uintptr_t m_strMapToLoad    = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_strLandmarkName = 0X0008; // CUtlString
        };

        // Has Trivial Destructor
        class CRandStopwatch : public CStopwatchBase {
        public:
            static constexpr std::uintptr_t m_flMinInterval = 0X000C; // float32
            static constexpr std::uintptr_t m_flMaxInterval = 0X0010; // float32
        };

        // Has VTable
        // Has Trivial Destructor
        class CMovementStatsProperty {
        public:
            static constexpr std::uintptr_t m_nUseCounter          = 0X0010; // int32
            static constexpr std::uintptr_t m_emaMovementDirection = 0X0014; // CVectorExponentialMovingAverage
        };

        // Has VTable
        class CGameChoreoServices : public IChoreoServices {
        public:
            static constexpr std::uintptr_t m_hOwner             = 0X0008; // CHandle<CBaseAnimGraph>
            static constexpr std::uintptr_t m_hScriptedSequence  = 0X000C; // CHandle<CScriptedSequence>
            static constexpr std::uintptr_t m_scriptState        = 0X0010; // IChoreoServices::ScriptState_t
            static constexpr std::uintptr_t m_choreoState        = 0X0014; // IChoreoServices::ChoreoState_t
            static constexpr std::uintptr_t m_flTimeStartedState = 0X0018; // GameTime_t
        };

        // Has Trivial Destructor
        class CSimpleStopwatch : public CStopwatchBase {
        public:
        };

        // Has VTable
        class CShatterGlassShard {
        public:
            static constexpr std::uintptr_t m_hShardHandle                 = 0X0008; // uint32
            static constexpr std::uintptr_t m_vecPanelVertices             = 0X0010; // CUtlVector<Vector2D>
            static constexpr std::uintptr_t m_vLocalPanelSpaceOrigin       = 0X0028; // Vector2D
            static constexpr std::uintptr_t m_hModel                       = 0X0030; // CStrongHandle<InfoForResourceTypeCModel>
            static constexpr std::uintptr_t m_hPhysicsEntity               = 0X0038; // CHandle<CShatterGlassShardPhysics>
            static constexpr std::uintptr_t m_hParentPanel                 = 0X003C; // CHandle<CFuncShatterglass>
            static constexpr std::uintptr_t m_hParentShard                 = 0X0040; // uint32
            static constexpr std::uintptr_t m_ShatterStressType            = 0X0044; // ShatterGlassStressType
            static constexpr std::uintptr_t m_vecStressVelocity            = 0X0048; // Vector
            static constexpr std::uintptr_t m_bCreatedModel                = 0X0054; // bool
            static constexpr std::uintptr_t m_flLongestEdge                = 0X0058; // float32
            static constexpr std::uintptr_t m_flShortestEdge               = 0X005C; // float32
            static constexpr std::uintptr_t m_flLongestAcross              = 0X0060; // float32
            static constexpr std::uintptr_t m_flShortestAcross             = 0X0064; // float32
            static constexpr std::uintptr_t m_flSumOfAllEdges              = 0X0068; // float32
            static constexpr std::uintptr_t m_flArea                       = 0X006C; // float32
            static constexpr std::uintptr_t m_nOnFrameEdge                 = 0X0070; // OnFrame
            static constexpr std::uintptr_t m_nSubShardGeneration          = 0X0074; // int32
            static constexpr std::uintptr_t m_vecAverageVertPosition       = 0X0078; // Vector2D
            static constexpr std::uintptr_t m_bAverageVertPositionIsValid  = 0X0080; // bool
            static constexpr std::uintptr_t m_vecPanelSpaceStressPositionA = 0X0084; // Vector2D
            static constexpr std::uintptr_t m_vecPanelSpaceStressPositionB = 0X008C; // Vector2D
            static constexpr std::uintptr_t m_bStressPositionAIsValid      = 0X0094; // bool
            static constexpr std::uintptr_t m_bStressPositionBIsValid      = 0X0095; // bool
            static constexpr std::uintptr_t m_bFlaggedForRemoval           = 0X0096; // bool
            static constexpr std::uintptr_t m_flPhysicsEntitySpawnedAtTime = 0X0098; // GameTime_t
            static constexpr std::uintptr_t m_hEntityHittingMe             = 0X009C; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_vecNeighbors                 = 0X00A0; // CUtlVector<uint32>
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        struct ragdollelement_t {
        public:
            static constexpr std::uintptr_t originParentSpace = 0X0000; // Vector
            static constexpr std::uintptr_t parentIndex       = 0X0020; // int32
            static constexpr std::uintptr_t m_flRadius        = 0X0024; // float32
            static constexpr std::uintptr_t m_nHeight         = 0X0028; // int32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct CGameScriptedMoveDef_t {
        public:
            static constexpr std::uintptr_t m_vDestOffset        = 0X0000; // Vector
            static constexpr std::uintptr_t m_hDestEntity        = 0X000C; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_angDest            = 0X0010; // QAngle
            static constexpr std::uintptr_t m_flDuration         = 0X001C; // float32
            static constexpr std::uintptr_t m_flAngRate          = 0X0020; // float32
            static constexpr std::uintptr_t m_flMoveSpeed        = 0X0024; // float32
            static constexpr std::uintptr_t m_bAimDisabled       = 0X0028; // bool
            static constexpr std::uintptr_t m_bIgnoreRotation    = 0X0029; // bool
            static constexpr std::uintptr_t m_nForcedCrouchState = 0X002C; // ForcedCrouchState_t
        };

        // Has Trivial Destructor
        class CNetworkOriginCellCoordQuantizedVector {
        public:
            static constexpr std::uintptr_t m_cellX         = 0X0010; // uint16
            static constexpr std::uintptr_t m_cellY         = 0X0012; // uint16
            static constexpr std::uintptr_t m_cellZ         = 0X0014; // uint16
            static constexpr std::uintptr_t m_nOutsideWorld = 0X0016; // uint16
            static constexpr std::uintptr_t m_vecX          = 0X0018; // CNetworkedQuantizedFloat
            static constexpr std::uintptr_t m_vecY          = 0X0020; // CNetworkedQuantizedFloat
            static constexpr std::uintptr_t m_vecZ          = 0X0028; // CNetworkedQuantizedFloat
        };

        // Has VTable
        // Construct Allowed
        class CBaseAnimGraphVariationUserData : public CNmGraphVariationUserData {
        public:
        };

        // Has Trivial Destructor
        struct DynamicVolumeDef_t {
        public:
            static constexpr std::uintptr_t m_source           = 0X0000; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_target           = 0X0004; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_nHullIdx         = 0X0008; // int32
            static constexpr std::uintptr_t m_vSourceAnchorPos = 0X000C; // Vector
            static constexpr std::uintptr_t m_vTargetAnchorPos = 0X0018; // Vector
            static constexpr std::uintptr_t m_nAreaSrc         = 0X0024; // uint32
            static constexpr std::uintptr_t m_nAreaDst         = 0X0028; // uint32
            static constexpr std::uintptr_t m_bAttached        = 0X002C; // bool
        };

        // Has Trivial Destructor
        class CNetworkOriginQuantizedVector {
        public:
            static constexpr std::uintptr_t m_vecX = 0X0010; // CNetworkedQuantizedFloat
            static constexpr std::uintptr_t m_vecY = 0X0018; // CNetworkedQuantizedFloat
            static constexpr std::uintptr_t m_vecZ = 0X0020; // CNetworkedQuantizedFloat
        };

        // Has Trivial Destructor
        struct magnetted_objects_t {
        public:
            static constexpr std::uintptr_t hEntity = 0X0008; // CHandle<CBaseEntity>
        };

        class CHintMessageQueue {
        public:
            static constexpr std::uintptr_t m_tmMessageEnd      = 0X0000; // float32
            static constexpr std::uintptr_t m_messages          = 0X0008; // CUtlVector<CHintMessage*>
            static constexpr std::uintptr_t m_pPlayerController = 0X0020; // CBasePlayerController*
        };

        // Has Trivial Destructor
        class CSkillInt {
        public:
            static constexpr std::uintptr_t m_pValue = 0X0000; // int32[4]
        };

        // Has Trivial Destructor
        struct thinkfunc_t {
        public:
            static constexpr std::uintptr_t m_hFn            = 0X0008; // HSCRIPT
            static constexpr std::uintptr_t m_nContext       = 0X0010; // CUtlStringToken
            static constexpr std::uintptr_t m_nNextThinkTick = 0X0014; // GameTick_t
            static constexpr std::uintptr_t m_nLastThinkTick = 0X0018; // GameTick_t
        };

        // Construct Allowed
        class CNavHullPresetVData {
        public:
            static constexpr std::uintptr_t m_vecNavHulls = 0X0000; // CUtlVector<CUtlString>
        };

        // Has Trivial Destructor
        class CSkillFloat {
        public:
            static constexpr std::uintptr_t m_pValue = 0X0000; // float32[4]
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct WaterWheelFrictionScale_t {
        public:
            static constexpr std::uintptr_t m_flFractionOfWheelSubmerged = 0X0000; // float32
            static constexpr std::uintptr_t m_flFrictionScale            = 0X0004; // float32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        struct ragdollhierarchyjoint_t {
        public:
            static constexpr std::uintptr_t parentIndex = 0X0000; // int32
            static constexpr std::uintptr_t childIndex  = 0X0004; // int32
        };

        class CSceneEventInfo {
        public:
            static constexpr std::uintptr_t m_iLayer              = 0X0000; // int32
            static constexpr std::uintptr_t m_iPriority           = 0X0004; // int32
            static constexpr std::uintptr_t m_hSequence           = 0X0008; // HSequence
            static constexpr std::uintptr_t m_flWeight            = 0X000C; // float32
            static constexpr std::uintptr_t m_hAnimClip           = 0X0010; // CStrongHandle<InfoForResourceTypeCNmClip>
            static constexpr std::uintptr_t m_sAnimClipSlot       = 0X0018; // CGlobalSymbol
            static constexpr std::uintptr_t m_sAnimClipSlotWeight = 0X0020; // CGlobalSymbol
            static constexpr std::uintptr_t m_bHasArrived         = 0X0028; // bool
            static constexpr std::uintptr_t m_nType               = 0X002C; // int32
            static constexpr std::uintptr_t m_flNext              = 0X0030; // GameTime_t
            static constexpr std::uintptr_t m_bIsGesture          = 0X0034; // bool
            static constexpr std::uintptr_t m_bShouldRemove       = 0X0035; // bool
            static constexpr std::uintptr_t m_hTarget             = 0X005C; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_nSceneEventId       = 0X0060; // SceneEventId_t
            static constexpr std::uintptr_t m_bClientSide         = 0X0064; // bool
            static constexpr std::uintptr_t m_bStarted            = 0X0065; // bool
        };

        // Has Trivial Destructor
        struct SoundeventPathCornerPairNetworked_t {
        public:
            static constexpr std::uintptr_t vP1             = 0X0000; // Vector
            static constexpr std::uintptr_t vP2             = 0X000C; // Vector
            static constexpr std::uintptr_t flPathLengthSqr = 0X0018; // float32
            static constexpr std::uintptr_t flP1Pct         = 0X001C; // float32
            static constexpr std::uintptr_t flP2Pct         = 0X0020; // float32
        };

        // Has VTable
        class CSoundPatch {
        public:
            static constexpr std::uintptr_t m_pitch                  = 0X0008; // CSoundEnvelope
            static constexpr std::uintptr_t m_volume                 = 0X0018; // CSoundEnvelope
            static constexpr std::uintptr_t m_shutdownTime           = 0X003C; // float32
            static constexpr std::uintptr_t m_flLastTime             = 0X0040; // float32
            static constexpr std::uintptr_t m_iszSoundScriptName     = 0X0048; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hEnt                   = 0X0050; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_soundEntityIndex       = 0X0054; // CEntityIndex
            static constexpr std::uintptr_t m_soundOrigin            = 0X0058; // Vector
            static constexpr std::uintptr_t m_isPlaying              = 0X0064; // int32
            static constexpr std::uintptr_t m_Filter                 = 0X0068; // CCopyRecipientFilter
            static constexpr std::uintptr_t m_flCloseCaptionDuration = 0X00A0; // float32
            static constexpr std::uintptr_t m_bUpdatedSoundOrigin    = 0X00A4; // bool
            static constexpr std::uintptr_t m_iszClassName           = 0X00A8; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        class CCS2ChickenGraphController : public CAnimGraphControllerBase {
        public:
            static constexpr std::uintptr_t m_action                    = 0X0090; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            static constexpr std::uintptr_t m_actionSubtype             = 0X00A8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            static constexpr std::uintptr_t m_bActionReset              = 0X00C0; // CAnimGraph2ParamAutoResetOptionalRef
            static constexpr std::uintptr_t m_idleVariation             = 0X00E0; // CAnimGraph2ParamOptionalRef<float32>
            static constexpr std::uintptr_t m_runVariation              = 0X00F8; // CAnimGraph2ParamOptionalRef<float32>
            static constexpr std::uintptr_t m_panicVariation            = 0X0110; // CAnimGraph2ParamOptionalRef<float32>
            static constexpr std::uintptr_t m_squatVariation            = 0X0128; // CAnimGraph2ParamOptionalRef<float32>
            static constexpr std::uintptr_t m_bInWater                  = 0X0140; // CAnimGraph2ParamOptionalRef<bool>
            static constexpr std::uintptr_t m_bHasActionCompletedEvent  = 0X0158; // bool
            static constexpr std::uintptr_t m_bWaitingForCompletedEvent = 0X0159; // bool
        };

        // Has VTable
        // Has Trivial Destructor
        struct locksound_t {
        public:
            static constexpr std::uintptr_t sLockedSound   = 0X0008; // CUtlSymbolLarge
            static constexpr std::uintptr_t sUnlockedSound = 0X0010; // CUtlSymbolLarge
            static constexpr std::uintptr_t flwaitSound    = 0X0018; // GameTime_t
        };

        // Construct Allowed
        struct DecalGroupOption_t {
        public:
            static constexpr std::uintptr_t m_hMaterial                                = 0X0000; // CStrongHandleCopyable<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_sSequenceName                            = 0X0008; // CGlobalSymbol
            static constexpr std::uintptr_t m_flProbability                            = 0X0010; // float32
            static constexpr std::uintptr_t m_bEnableAngleBetweenNormalAndGravityRange = 0X0014; // bool
            static constexpr std::uintptr_t m_flMinAngleBetweenNormalAndGravity        = 0X0018; // float32
            static constexpr std::uintptr_t m_flMaxAngleBetweenNormalAndGravity        = 0X001C; // float32
        };

        class CAnimGraphControllerManager {
        public:
            static constexpr std::uintptr_t m_controllers           = 0X0000; // CUtlVector<CAnimGraphControllerBase*>
            static constexpr std::uintptr_t m_bGraphBindingsCreated = 0X00A8; // bool
        };

        // Has Trivial Destructor
        class CFiringModeFloat {
        public:
            static constexpr std::uintptr_t m_flValues = 0X0000; // float32[2]
        };

        // Has VTable
        class CCopyRecipientFilter {
        public:
            static constexpr std::uintptr_t m_Flags                             = 0X0008; // int32
            static constexpr std::uintptr_t m_Recipients                        = 0X0010; // CUtlVector<CPlayerSlot>
            static constexpr std::uintptr_t m_slotPlayerExcludedDueToPrediction = 0X0030; // CPlayerSlot
        };

        class CFloatMovingAverage {
        public:
        };

        // Has VTable
        // Has Trivial Destructor
        class CSmoothFunc {
        public:
            static constexpr std::uintptr_t m_flSmoothAmplitude     = 0X0008; // float32
            static constexpr std::uintptr_t m_flSmoothBias          = 0X000C; // float32
            static constexpr std::uintptr_t m_flSmoothDuration      = 0X0010; // float32
            static constexpr std::uintptr_t m_flSmoothRemainingTime = 0X0014; // float32
            static constexpr std::uintptr_t m_nSmoothDir            = 0X0018; // int32
        };

        // Has VTable
        // Is Absract
        // Has Trivial Destructor
        class IHasAttributes {
        public:
        };

        struct ragdoll_t {
        public:
            static constexpr std::uintptr_t list            = 0X0000; // CUtlVector<ragdollelement_t>
            static constexpr std::uintptr_t hierarchyJoints = 0X0018; // CUtlVector<ragdollhierarchyjoint_t>
            static constexpr std::uintptr_t boneIndex       = 0X0030; // CUtlVector<int32>
            static constexpr std::uintptr_t allowStretch    = 0X0048; // bool
            static constexpr std::uintptr_t unused          = 0X0049; // bool
        };

        // Has Trivial Destructor
        struct HullFlags_t {
        public:
            static constexpr std::uintptr_t m_bHull_Human         = 0X0000; // bool
            static constexpr std::uintptr_t m_bHull_SmallCentered = 0X0001; // bool
            static constexpr std::uintptr_t m_bHull_WideHuman     = 0X0002; // bool
            static constexpr std::uintptr_t m_bHull_Tiny          = 0X0003; // bool
            static constexpr std::uintptr_t m_bHull_Medium        = 0X0004; // bool
            static constexpr std::uintptr_t m_bHull_TinyCentered  = 0X0005; // bool
            static constexpr std::uintptr_t m_bHull_Large         = 0X0006; // bool
            static constexpr std::uintptr_t m_bHull_LargeCentered = 0X0007; // bool
            static constexpr std::uintptr_t m_bHull_MediumTall    = 0X0008; // bool
            static constexpr std::uintptr_t m_bHull_Small         = 0X0009; // bool
        };

        // Has Trivial Destructor
        struct RotatorHistoryEntry_t {
        public:
            static constexpr std::uintptr_t qInvChange          = 0X0000; // Quaternion
            static constexpr std::uintptr_t flTimeRotationStart = 0X0010; // GameTime_t
        };

        // Has VTable
        // Construct Allowed
        struct GameAmmoTypeInfo_t : public AmmoTypeInfo_t {
        public:
            static constexpr std::uintptr_t m_nBuySize = 0X0038; // int32
            static constexpr std::uintptr_t m_nCost    = 0X003C; // int32
        };

        // Has VTable
        // Has Trivial Destructor
        class CMotorController {
        public:
            static constexpr std::uintptr_t m_speed         = 0X0008; // float32
            static constexpr std::uintptr_t m_maxTorque     = 0X000C; // float32
            static constexpr std::uintptr_t m_axis          = 0X0010; // VectorWS
            static constexpr std::uintptr_t m_inertiaFactor = 0X001C; // float32
        };

        // Has Trivial Destructor
        class CSimTimer : public CSimpleSimTimer {
        public:
            static constexpr std::uintptr_t m_flInterval = 0X0008; // float32
        };

        // Has VTable
        // Is Absract
        class CBaseIssue {
        public:
            static constexpr std::uintptr_t m_szTypeString       = 0X0020; // char[64]
            static constexpr std::uintptr_t m_szDetailsString    = 0X0060; // char[260]
            static constexpr std::uintptr_t m_iNumYesVotes       = 0X0164; // int32
            static constexpr std::uintptr_t m_iNumNoVotes        = 0X0168; // int32
            static constexpr std::uintptr_t m_iNumPotentialVotes = 0X016C; // int32
            static constexpr std::uintptr_t m_pVoteController    = 0X0170; // CVoteController*
        };

        struct SummaryTakeDamageInfo_t {
        public:
            static constexpr std::uintptr_t nSummarisedCount = 0X0000; // int32
            static constexpr std::uintptr_t info             = 0X0008; // CTakeDamageInfo
            static constexpr std::uintptr_t result           = 0X0128; // CTakeDamageResult
            static constexpr std::uintptr_t hTarget          = 0X0158; // CHandle<CBaseEntity>
        };

        // Has Trivial Destructor
        class CSceneRequest {
        public:
            static constexpr std::uintptr_t m_szPayloadTypeName = 0X0000; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_uHandle           = 0X0008; // SceneRequestHandle_t
            static constexpr std::uintptr_t m_state             = 0X000C; // ESceneRequestState_t
        };

        // Has Trivial Destructor
        struct DestructiblePartDestructionRequest_t {
        public:
            static constexpr std::uintptr_t m_nDestroyFlags       = 0X0000; // EDestructibleParts_DestroyParameterFlags
            static constexpr std::uintptr_t m_nDamageType         = 0X0004; // DamageTypes_t
            static constexpr std::uintptr_t m_flPartDamage        = 0X0008; // float32
            static constexpr std::uintptr_t m_flPartDamageRadius  = 0X000C; // float32
            static constexpr std::uintptr_t m_vWsPartDamageOrigin = 0X0010; // VectorWS
            static constexpr std::uintptr_t m_vWsPartDamageForce  = 0X001C; // Vector
        };

        // Has Trivial Destructor
        struct DestructibleHitGroupToDestroy_t {
        public:
            static constexpr std::uintptr_t m_nHitGroup       = 0X0000; // HitGroup_t
            static constexpr std::uintptr_t m_nMaxDamageLevel = 0X0004; // int32
        };

        class CRR_Response {
        public:
            static constexpr std::uintptr_t m_Type                        = 0X0000; // uint8
            static constexpr std::uintptr_t m_szResponseName              = 0X0001; // char[192]
            static constexpr std::uintptr_t m_szMatchingRule              = 0X00C1; // char[128]
            static constexpr std::uintptr_t m_Params                      = 0X0160; // ResponseParams
            static constexpr std::uintptr_t m_fMatchScore                 = 0X0180; // float32
            static constexpr std::uintptr_t m_bAnyMatchingRulesInCooldown = 0X0184; // bool
            static constexpr std::uintptr_t m_szSpeakerContext            = 0X0188; // char*
            static constexpr std::uintptr_t m_szWorldContext              = 0X0190; // char*
            static constexpr std::uintptr_t m_Followup                    = 0X0198; // ResponseFollowup
            static constexpr std::uintptr_t m_recipientFilter             = 0X01CA; // CUtlSymbol
        };

        // Has Trivial Destructor
        class CVectorExponentialMovingAverage {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CNmAimCSNode__CDefinition : public CNmPassthroughNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nVerticalAngleNodeIdx        = 0X0018; // int16
            static constexpr std::uintptr_t m_nHorizontalAngleNodeIdx      = 0X001A; // int16
            static constexpr std::uintptr_t m_nWeaponCategoryNodeIdx       = 0X001C; // int16
            static constexpr std::uintptr_t m_nWeaponTypeNodeIdx           = 0X001E; // int16
            static constexpr std::uintptr_t m_nIsWeaponActionActiveNodeIdx = 0X0020; // int16
            static constexpr std::uintptr_t m_nWeaponDropNodeIdx           = 0X0022; // int16
            static constexpr std::uintptr_t m_nEnabledNodeIdx              = 0X0024; // int16
            static constexpr std::uintptr_t m_flBlendTimeSeconds           = 0X0028; // float32
            static constexpr std::uintptr_t m_flReduceRangeTimeSeconds     = 0X002C; // float32
        };

        // Has VTable
        // Has Trivial Destructor
        class CConstantForceController {
        public:
            static constexpr std::uintptr_t m_linear      = 0X000C; // Vector
            static constexpr std::uintptr_t m_angular     = 0X0018; // RotationVector
            static constexpr std::uintptr_t m_linearSave  = 0X0024; // Vector
            static constexpr std::uintptr_t m_angularSave = 0X0030; // RotationVector
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct WaterWheelDrag_t {
        public:
            static constexpr std::uintptr_t m_flFractionOfWheelSubmerged = 0X0000; // float32
            static constexpr std::uintptr_t m_flWheelDrag                = 0X0004; // float32
        };

        // Has VTable
        class CTakeDamageInfo {
        public:
            static constexpr std::uintptr_t m_vecDamageForce                       = 0X0008; // Vector
            static constexpr std::uintptr_t m_vecDamagePosition                    = 0X0014; // VectorWS
            static constexpr std::uintptr_t m_vecReportedPosition                  = 0X0020; // VectorWS
            static constexpr std::uintptr_t m_vecDamageDirection                   = 0X002C; // Vector
            static constexpr std::uintptr_t m_hInflictor                           = 0X0038; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hAttacker                            = 0X003C; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hAbility                             = 0X0040; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_flDamage                             = 0X0044; // float32
            static constexpr std::uintptr_t m_flTotalledDamage                     = 0X0048; // float32
            static constexpr std::uintptr_t m_bitsDamageType                       = 0X004C; // DamageTypes_t
            static constexpr std::uintptr_t m_iDamageCustom                        = 0X0050; // int32
            static constexpr std::uintptr_t m_iAmmoType                            = 0X0054; // AmmoIndex_t
            static constexpr std::uintptr_t m_flOriginalDamage                     = 0X0060; // float32
            static constexpr std::uintptr_t m_bShouldBleed                         = 0X0064; // bool
            static constexpr std::uintptr_t m_bShouldSpark                         = 0X0065; // bool
            static constexpr std::uintptr_t m_nDamageFlags                         = 0X0070; // TakeDamageFlags_t
            static constexpr std::uintptr_t m_iHitGroupId                          = 0X0078; // HitGroup_t
            static constexpr std::uintptr_t m_nNumObjectsPenetrated                = 0X007C; // int32
            static constexpr std::uintptr_t m_flFriendlyFireDamageReductionRatio   = 0X0080; // float32
            static constexpr std::uintptr_t m_bStoppedBullet                       = 0X0084; // bool
            static constexpr std::uintptr_t m_nDestructibleHitGroupsToForceDestroy = 0X0100; // CUtlVector<DestructibleHitGroupToDestroy_t>
            static constexpr std::uintptr_t m_bInTakeDamageFlow                    = 0X0118; // bool
        };

        // Has Trivial Destructor
        class CRandSimTimer : public CSimpleSimTimer {
        public:
            static constexpr std::uintptr_t m_flMinInterval = 0X0008; // float32
            static constexpr std::uintptr_t m_flMaxInterval = 0X000C; // float32
        };

        // Has VTable
        // Is Absract
        class CBtNodeComposite : public CBtNode {
        public:
        };

        // Has Trivial Destructor
        class CRelativeLocation {
        public:
            static constexpr std::uintptr_t m_Type            = 0X0018; // RelativeLocationType_t
            static constexpr std::uintptr_t m_vRelativeOffset = 0X001C; // Vector
            static constexpr std::uintptr_t m_vWorldSpacePos  = 0X0028; // VectorWS
            static constexpr std::uintptr_t m_hEntity         = 0X0034; // CHandle<CBaseEntity>
        };

        // Has Trivial Destructor
        class Extent {
        public:
            static constexpr std::uintptr_t lo = 0X0000; // VectorWS
            static constexpr std::uintptr_t hi = 0X000C; // VectorWS
        };

        // Has VTable
        // Has Trivial Destructor
        struct sndopvarlatchdata_t {
        public:
            static constexpr std::uintptr_t m_iszStack    = 0X0008; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszOperator = 0X0010; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszOpvar    = 0X0018; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flVal       = 0X0020; // float32
            static constexpr std::uintptr_t m_vPos        = 0X0024; // Vector
        };

        // Has VTable
        class CAI_ExpresserWithFollowup : public CAI_Expresser {
        public:
        };

        // Has VTable
        class CMultiplayer_Expresser : public CAI_ExpresserWithFollowup {
        public:
            static constexpr std::uintptr_t m_bAllowMultipleScenes = 0X00A0; // bool
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        class QuestProgress {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CNmAimCSTask : public CNmPoseTask {
        public:
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct ParticleIndex_t {
        public:
            static constexpr std::uintptr_t m_Value = 0X0000; // int32
        };

        // Has VTable
        class CTakeDamageSummaryScopeGuard {
        public:
            static constexpr std::uintptr_t m_vecSummaries = 0X0008; // CUtlVector<SummaryTakeDamageInfo_t*>
        };

        // Has VTable
        class CIronSightController {
        public:
            static constexpr std::uintptr_t m_bIronSightAvailable     = 0X0008; // bool
            static constexpr std::uintptr_t m_flIronSightAmount       = 0X000C; // float32
            static constexpr std::uintptr_t m_flIronSightAmountGained = 0X0010; // float32
            static constexpr std::uintptr_t m_flIronSightAmountBiased = 0X0014; // float32
        };

        // Has VTable
        // Construct Allowed
        class CNmEventConsumerSound : public CNmEventConsumer {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CNmEventConsumerLegacy : public CNmEventConsumer {
        public:
        };

        // Has VTable
        // Has Trivial Destructor
        class CInButtonState {
        public:
            static constexpr std::uintptr_t m_pButtonStates = 0X0008; // uint64[3]
        };

        // Has VTable
        // Construct Allowed
        class CNmEventConsumerParticle : public CNmEventConsumer {
        public:
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CNavHullVData {
        public:
            static constexpr std::uintptr_t m_bAgentEnabled             = 0X0000; // bool
            static constexpr std::uintptr_t m_agentRadius               = 0X0004; // float32
            static constexpr std::uintptr_t m_agentHeight               = 0X0008; // float32
            static constexpr std::uintptr_t m_agentShortHeightEnabled   = 0X000C; // bool
            static constexpr std::uintptr_t m_agentShortHeight          = 0X0010; // float32
            static constexpr std::uintptr_t m_agentCrawlEnabled         = 0X0014; // bool
            static constexpr std::uintptr_t m_agentCrawlHeight          = 0X0018; // float32
            static constexpr std::uintptr_t m_agentMaxClimb             = 0X001C; // float32
            static constexpr std::uintptr_t m_agentMaxSlope             = 0X0020; // int32
            static constexpr std::uintptr_t m_agentMaxJumpDownDist      = 0X0024; // float32
            static constexpr std::uintptr_t m_agentMaxJumpHorizDistBase = 0X0028; // float32
            static constexpr std::uintptr_t m_agentMaxJumpUpDist        = 0X002C; // float32
            static constexpr std::uintptr_t m_agentBorderErosion        = 0X0030; // int32
            static constexpr std::uintptr_t m_flowMapGenerationEnabled  = 0X0034; // bool
            static constexpr std::uintptr_t m_flowMapNodeMaxRadius      = 0X0038; // float32
        };

        // Has VTable
        // Construct Allowed
        class CNmSnapWeaponNode__CDefinition : public CNmPassthroughNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nEnabledNodeIdx      = 0X0018; // int16
            static constexpr std::uintptr_t m_nLockLeftHandNodeIdx = 0X001A; // int16
            static constexpr std::uintptr_t m_flBlendTimeSeconds   = 0X001C; // float32
        };

        // Has Trivial Destructor
        struct SoundOpvarTraceResult_t {
        public:
            static constexpr std::uintptr_t vPos              = 0X0000; // Vector
            static constexpr std::uintptr_t bDidHit           = 0X000C; // bool
            static constexpr std::uintptr_t flDistSqrToCenter = 0X0010; // float32
        };

        // Has VTable
        // Has Trivial Destructor
        class CAnimEventListener : public CAnimEventListenerBase {
        public:
        };

        // Has VTable
        // Is Absract
        class CNavVolumeCalculatedVector : public CNavVolume {
        public:
        };

        // Has Trivial Destructor
        class CFiringModeInt {
        public:
            static constexpr std::uintptr_t m_nValues = 0X0000; // int32[2]
        };

        struct CSAdditionalPerRoundStats_t {
        public:
            static constexpr std::uintptr_t m_numChickensKilled      = 0X0000; // int32
            static constexpr std::uintptr_t m_killsWhileBlind        = 0X0004; // int32
            static constexpr std::uintptr_t m_bombCarrierkills       = 0X0008; // int32
            static constexpr std::uintptr_t m_flBurnDamageInflicted  = 0X000C; // float32
            static constexpr std::uintptr_t m_flBlastDamageInflicted = 0X0010; // float32
            static constexpr std::uintptr_t m_iDinks                 = 0X0014; // int32
            static constexpr std::uintptr_t m_bFreshStartThisRound   = 0X0018; // bool
            static constexpr std::uintptr_t m_bBombPlantedAndAlive   = 0X0019; // bool
            static constexpr std::uintptr_t m_nDefuseStarts          = 0X001C; // int32
            static constexpr std::uintptr_t m_nHostagePickUps        = 0X0020; // int32
            static constexpr std::uintptr_t m_numTeammatesFlashed    = 0X0024; // int32
        };

        // Has VTable
        // Construct Allowed
        class CEmptyGraphController : public CAnimGraphControllerBase {
        public:
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct ModelConfigHandle_t {
        public:
            static constexpr std::uintptr_t m_Value = 0X0000; // uint32
        };

        class CBreakableStageHelper {
        public:
            static constexpr std::uintptr_t m_nCurrentStage = 0X0008; // int32
            static constexpr std::uintptr_t m_nStageCount   = 0X000C; // int32
        };

        // Has VTable
        class CNavVolumeBreadthFirstSearch : public CNavVolumeCalculatedVector {
        public:
            static constexpr std::uintptr_t m_vStartPos    = 0X00A8; // Vector
            static constexpr std::uintptr_t m_flSearchDist = 0X00B4; // float32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        struct dynpitchvol_t : public dynpitchvol_base_t {
        public:
        };

        struct CSAdditionalMatchStats_t : public CSAdditionalPerRoundStats_t {
        public:
            static constexpr std::uintptr_t m_numRoundsSurvivedStreak        = 0X00F0; // int32
            static constexpr std::uintptr_t m_maxNumRoundsSurvivedStreak     = 0X00F4; // int32
            static constexpr std::uintptr_t m_numRoundsSurvivedTotal         = 0X00F8; // int32
            static constexpr std::uintptr_t m_iRoundsWonWithoutPurchase      = 0X00FC; // int32
            static constexpr std::uintptr_t m_iRoundsWonWithoutPurchaseTotal = 0X0100; // int32
            static constexpr std::uintptr_t m_numFirstKills                  = 0X0104; // int32
            static constexpr std::uintptr_t m_numClutchKills                 = 0X0108; // int32
            static constexpr std::uintptr_t m_numPistolKills                 = 0X010C; // int32
            static constexpr std::uintptr_t m_numSniperKills                 = 0X0110; // int32
            static constexpr std::uintptr_t m_iNumSuicides                   = 0X0114; // int32
            static constexpr std::uintptr_t m_iNumTeamKills                  = 0X0118; // int32
            static constexpr std::uintptr_t m_flTeamDamage                   = 0X011C; // float32
        };

        // Has VTable
        // Is Absract
        class IRagdoll {
        public:
        };

        // Has Trivial Destructor
        struct hudtextparms_t {
        public:
            static constexpr std::uintptr_t color1  = 0X0000; // Color
            static constexpr std::uintptr_t color2  = 0X0004; // Color
            static constexpr std::uintptr_t effect  = 0X0008; // uint8
            static constexpr std::uintptr_t channel = 0X0009; // uint8
            static constexpr std::uintptr_t x       = 0X000C; // float32
            static constexpr std::uintptr_t y       = 0X0010; // float32
        };

        // Has Trivial Destructor
        class CNetworkVelocityVector {
        public:
            static constexpr std::uintptr_t m_vecX = 0X0010; // CNetworkedQuantizedFloat
            static constexpr std::uintptr_t m_vecY = 0X0018; // CNetworkedQuantizedFloat
            static constexpr std::uintptr_t m_vecZ = 0X0020; // CNetworkedQuantizedFloat
        };

        // Construct Allowed
        class CDestructiblePart_DamageLevel {
        public:
            static constexpr std::uintptr_t m_sName                     = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_sBreakablePieceName       = 0X0008; // CGlobalSymbol
            static constexpr std::uintptr_t m_nBodyGroupValue           = 0X0010; // int32
            static constexpr std::uintptr_t m_nHealth                   = 0X0014; // CSkillInt
            static constexpr std::uintptr_t m_flCriticalDamagePercent   = 0X0024; // float32
            static constexpr std::uintptr_t m_nDamagePassthroughType    = 0X0028; // EDestructiblePartDamagePassThroughType
            static constexpr std::uintptr_t m_nDestructionDeathBehavior = 0X002C; // DestructiblePartDestructionDeathBehavior_t
            static constexpr std::uintptr_t m_sCustomDeathHandshake     = 0X0030; // CGlobalSymbol
            static constexpr std::uintptr_t m_bShouldDestroyOnDeath     = 0X0038; // bool
            static constexpr std::uintptr_t m_flDeathDestroyTime        = 0X003C; // CRangeFloat
        };

        // Has VTable
        class CNavVolumeAll : public CNavVolumeVector {
        public:
        };
    }
}

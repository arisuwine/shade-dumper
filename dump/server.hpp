#pragma once
#include <cstdint>

namespace offsets {
    namespace server {
        /* --- UNRESOLVED CLASSES --- */
        class CPulseCell_BaseLerp__CursorState_t {}; 
        class CNmGraphVariationUserData {}; 
        class CNmPoseTask {}; 
        class CNmPassthroughNode__CDefinition {}; 
        /* --- END --- */

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

        enum class NavDirType : std::uint32_t {
            NORTH                       = 0x0,
            EAST                        = 0x1,
            SOUTH                       = 0x2,
            WEST                        = 0x3,
            NUM_NAV_DIR_TYPE_DIRECTIONS = 0x4
        };

        enum class SequenceFinishNotifyState_t : std::uint8_t {
            eDoNotNotify        = 0x0,
            eNotifyWhenFinished = 0x1,
            eNotifyTriggered    = 0x2
        };

        enum class PointOrientConstraint_t : std::uint32_t {
            eNone           = 0x0,
            ePreserveUpAxis = 0x1
        };

        enum class PointOrientGoalDirectionType_t : std::uint32_t {
            eAbsOrigin   = 0x0,
            eCenter      = 0x1,
            eHead        = 0x2,
            eForward     = 0x3,
            eEyesForward = 0x4
        };

        enum class PointTemplateOwnerSpawnGroupType_t : std::uint32_t {
            INSERT_INTO_POINT_TEMPLATE_SPAWN_GROUP   = 0x0,
            INSERT_INTO_CURRENTLY_ACTIVE_SPAWN_GROUP = 0x1,
            INSERT_INTO_NEWLY_CREATED_SPAWN_GROUP    = 0x2
        };

        enum class PointTemplateClientOnlyEntityBehavior_t : std::uint32_t {
            CREATE_FOR_CURRENTLY_CONNECTED_CLIENTS_ONLY = 0x0,
            CREATE_FOR_CLIENTS_WHO_CONNECT_LATER        = 0x1
        };

        enum class PerformanceMode_t : std::uint32_t {
            PM_NORMAL  = 0x0,
            PM_NO_GIBS = 0x1
        };

        enum class BreakableContentsType_t : std::uint32_t {
            BC_DEFAULT                  = 0x0,
            BC_EMPTY                    = 0x1,
            BC_PROP_GROUP_OVERRIDE      = 0x2,
            BC_PARTICLE_SYSTEM_OVERRIDE = 0x3
        };

        enum class DecalFlags_t : std::uint32_t {
            eNone                    = 0x0,
            eCannotClear             = 0x1,
            eDecalProjectToBackfaces = 0x2,
            eAll                     = 0xFFFFFFFF,
            eAllButCannotClear       = 0xFFFFFFFE
        };

        enum class AmmoPosition_t : std::uint32_t {
            AMMO_POSITION_INVALID   = 0xFFFFFFFF,
            AMMO_POSITION_PRIMARY   = 0x0,
            AMMO_POSITION_SECONDARY = 0x1,
            AMMO_POSITION_COUNT     = 0x2
        };

        enum class ChatIgnoreType_t : std::uint32_t {
            CHAT_IGNORE_NONE = 0x0,
            CHAT_IGNORE_ALL  = 0x1,
            CHAT_IGNORE_TEAM = 0x2
        };

        enum class FixAngleSet_t : std::uint8_t {
            None     = 0x0,
            Absolute = 0x1,
            Relative = 0x2
        };

        enum class filter_t : std::uint32_t {
            FILTER_AND = 0x0,
            FILTER_OR  = 0x1
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

        enum class ObserverMode_t : std::uint32_t {
            OBS_MODE_NONE      = 0x0,
            OBS_MODE_FIXED     = 0x1,
            OBS_MODE_IN_EYE    = 0x2,
            OBS_MODE_CHASE     = 0x3,
            OBS_MODE_ROAMING   = 0x4,
            NUM_OBSERVER_MODES = 0x5
        };

        enum class ObserverInterpState_t : std::uint32_t {
            OBSERVER_INTERP_NONE      = 0x0,
            OBSERVER_INTERP_STARTING  = 0x1,
            OBSERVER_INTERP_TRAVELING = 0x2,
            OBSERVER_INTERP_SETTLING  = 0x3
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

        enum class AmmoFlags_t : std::uint32_t {
            AMMO_FORCE_DROP_IF_CARRIED     = 0x1,
            AMMO_RESERVE_STAYS_WITH_WEAPON = 0x2,
            AMMO_FLAG_MAX                  = 0x2
        };

        enum class EProceduralRagdollWeightIndexPropagationMethod : std::uint32_t {
            Bone            = 0x0,
            BoneAndChildren = 0x1
        };

        enum class AnimGraphDebugDrawType_t : std::uint32_t {
            None        = 0x0,
            WsPosition  = 0x1,
            MsPosition  = 0x2,
            WsDirection = 0x3,
            MsDirection = 0x4
        };

        enum class ExternalAnimGraphInactiveBehavior_t : std::uint8_t {
            eNone            = 0x0,
            eUnbind          = 0x1,
            eUnbindAndDelete = 0x2
        };

        enum class EDestructiblePartRadiusDamageApplyType : std::uint32_t {
            ScaleByExplosionRadius = 0x0,
            PrioritizeClosestPart  = 0x1
        };

        enum class EDestructiblePartDamagePassThroughType : std::uint32_t {
            Normal                = 0x0,
            Absorb                = 0x1,
            InvincibleAbsorb      = 0x2,
            InvinciblePassthrough = 0x3
        };

        enum class DestructiblePartDestructionDeathBehavior_t : std::uint32_t {
            eDoNotKill = 0x0,
            eKill      = 0x1,
            eGib       = 0x2,
            eRemove    = 0x3
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

        enum class CDebugOverlayFilterTextType_t : std::uint32_t {
            FILTER_TEXT_NONE = 0x0,
            MATCH            = 0x1,
            HIERARCHY        = 0x2,
            COUNT            = 0x3
        };

        enum class CDebugOverlayCombinedTypes_t : std::uint32_t {
            ALL   = 0x0,
            ANY   = 0x1,
            COUNT = 0x2
        };

        enum class HierarchyType_t : std::uint32_t {
            HIERARCHY_NONE       = 0x0,
            HIERARCHY_BONE_MERGE = 0x1,
            HIERARCHY_ATTACHMENT = 0x2,
            HIERARCHY_ABSORIGIN  = 0x3,
            HIERARCHY_BONE       = 0x4,
            HIERARCHY_TYPE_COUNT = 0x5
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

        enum class CanPlaySequence_t : std::uint32_t {
            CANNOT_PLAY       = 0x0,
            CAN_PLAY_NOW      = 0x1,
            CAN_PLAY_ENQUEUED = 0x2
        };

        enum class ForcedCrouchState_t : std::uint32_t {
            FORCEDCROUCH_NONE       = 0x0,
            FORCEDCROUCH_CROUCHED   = 0x1,
            FORCEDCROUCH_UNCROUCHED = 0x2
        };

        enum class ScriptedOnDeath_t : std::uint32_t {
            SS_ONDEATH_NOT_APPLICABLE = 0xFFFFFFFF,
            SS_ONDEATH_UNDEFINED      = 0x0,
            SS_ONDEATH_RAGDOLL        = 0x1,
            SS_ONDEATH_ANIMATED_DEATH = 0x2
        };

        enum class IChoreoServices__ScriptState_t : std::uint32_t {
            SCRIPT_PLAYING      = 0x0,
            SCRIPT_WAIT         = 0x1,
            SCRIPT_POST_IDLE    = 0x2,
            SCRIPT_CLEANUP      = 0x3,
            SCRIPT_MOVE_TO_MARK = 0x4
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

        enum class ShakeCommand_t : std::uint32_t {
            SHAKE_START            = 0x0,
            SHAKE_STOP             = 0x1,
            SHAKE_AMPLITUDE        = 0x2,
            SHAKE_FREQUENCY        = 0x3,
            SHAKE_START_RUMBLEONLY = 0x4,
            SHAKE_START_NORUMBLE   = 0x5
        };

        enum class TimelineCompression_t : std::uint32_t {
            TIMELINE_COMPRESSION_SUM                = 0x0,
            TIMELINE_COMPRESSION_COUNT_PER_INTERVAL = 0x1,
            TIMELINE_COMPRESSION_AVERAGE            = 0x2,
            TIMELINE_COMPRESSION_AVERAGE_BLEND      = 0x3,
            TIMELINE_COMPRESSION_TOTAL              = 0x4
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

        enum class ChoreoLookAtMode_t : std::uint32_t {
            eInvalid  = 0xFFFFFFFF,
            eChest    = 0x0,
            eHead     = 0x1,
            eEyesOnly = 0x2
        };

        enum class ChoreoLookAtSpeed_t : std::uint32_t {
            eInvalid = 0xFFFFFFFF,
            eSlow    = 0x0,
            eMedium  = 0x1,
            eFast    = 0x2
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

        enum class MoveCollide_t : std::uint8_t {
            MOVECOLLIDE_DEFAULT    = 0x0,
            MOVECOLLIDE_FLY_BOUNCE = 0x1,
            MOVECOLLIDE_FLY_CUSTOM = 0x2,
            MOVECOLLIDE_FLY_SLIDE  = 0x3,
            MOVECOLLIDE_COUNT      = 0x4,
            MOVECOLLIDE_MAX_BITS   = 0x3
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

        enum class BrushSolidities_e : std::uint32_t {
            BRUSHSOLID_TOGGLE = 0x0,
            BRUSHSOLID_NEVER  = 0x1,
            BRUSHSOLID_ALWAYS = 0x2
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

        enum class RenderMode_t : std::uint8_t {
            kRenderNormal     = 0x0,
            kRenderTransAlpha = 0x1,
            kRenderNone       = 0x2,
            kRenderModeCount  = 0x3
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

        enum class CRR_Response__ResponseEnum_t : std::uint32_t {
            MAX_RESPONSE_NAME = 0xC0,
            MAX_RULE_NAME     = 0x80
        };

        enum class LessonPanelLayoutFileTypes_t : std::uint32_t {
            LAYOUT_HAND_DEFAULT  = 0x0,
            LAYOUT_WORLD_DEFAULT = 0x1,
            LAYOUT_CUSTOM        = 0x2
        };

        enum class Touch_t : std::uint32_t {
            touch_none                         = 0x0,
            touch_player_only                  = 0x1,
            touch_npc_only                     = 0x2,
            touch_player_or_npc                = 0x3,
            touch_player_or_npc_or_physicsprop = 0x4
        };

        enum class navproperties_t : std::uint32_t {
            NAV_IGNORE = 0x1
        };

        // Local Type Scope
        enum class CLogicBranchList__LogicBranchListenerLastState_t : std::uint32_t {
            LOGIC_BRANCH_LISTENER_NOT_INIT  = 0x0,
            LOGIC_BRANCH_LISTENER_ALL_TRUE  = 0x1,
            LOGIC_BRANCH_LISTENER_ALL_FALSE = 0x2,
            LOGIC_BRANCH_LISTENER_MIXED     = 0x3
        };

        enum class EntFinderMethod_t : std::uint32_t {
            ENT_FIND_METHOD_NEAREST  = 0x0,
            ENT_FIND_METHOD_FARTHEST = 0x1,
            ENT_FIND_METHOD_RANDOM   = 0x2
        };

        enum class ValueRemapperInputType_t : std::uint32_t {
            InputType_PlayerShootPosition           = 0x0,
            InputType_PlayerShootPositionAroundAxis = 0x1
        };

        enum class ValueRemapperOutputType_t : std::uint32_t {
            OutputType_AnimationCycle = 0x0,
            OutputType_RotationX      = 0x1,
            OutputType_RotationY      = 0x2,
            OutputType_RotationZ      = 0x3
        };

        enum class ValueRemapperHapticsType_t : std::uint32_t {
            HaticsType_Default = 0x0,
            HaticsType_None    = 0x1
        };

        enum class ValueRemapperMomentumType_t : std::uint32_t {
            MomentumType_None                    = 0x0,
            MomentumType_Friction                = 0x1,
            MomentumType_SpringTowardSnapValue   = 0x2,
            MomentumType_SpringAwayFromSnapValue = 0x3
        };

        enum class ValueRemapperRatchetType_t : std::uint32_t {
            RatchetType_Absolute   = 0x0,
            RatchetType_EachEngage = 0x1
        };

        enum class PointWorldTextJustifyHorizontal_t : std::uint32_t {
            POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_LEFT   = 0x0,
            POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_CENTER = 0x1,
            POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_RIGHT  = 0x2
        };

        enum class PointWorldTextJustifyVertical_t : std::uint32_t {
            POINT_WORLD_TEXT_JUSTIFY_VERTICAL_BOTTOM = 0x0,
            POINT_WORLD_TEXT_JUSTIFY_VERTICAL_CENTER = 0x1,
            POINT_WORLD_TEXT_JUSTIFY_VERTICAL_TOP    = 0x2
        };

        enum class PointWorldTextReorientMode_t : std::uint32_t {
            POINT_WORLD_TEXT_REORIENT_NONE      = 0x0,
            POINT_WORLD_TEXT_REORIENT_AROUND_UP = 0x1
        };

        enum class doorCheck_e : std::uint32_t {
            DOOR_CHECK_FORWARD  = 0x0,
            DOOR_CHECK_BACKWARD = 0x1,
            DOOR_CHECK_FULL     = 0x2
        };

        enum class PropDoorRotatingSpawnPos_t : std::uint32_t {
            DOOR_SPAWN_CLOSED       = 0x0,
            DOOR_SPAWN_OPEN_FORWARD = 0x1,
            DOOR_SPAWN_OPEN_BACK    = 0x2,
            DOOR_SPAWN_AJAR         = 0x3
        };

        enum class PropDoorRotatingOpenDirection_e : std::uint32_t {
            DOOR_ROTATING_OPEN_BOTH_WAYS = 0x0,
            DOOR_ROTATING_OPEN_FORWARD   = 0x1,
            DOOR_ROTATING_OPEN_BACKWARD  = 0x2
        };

        enum class SceneOnPlayerDeath_t : std::uint32_t {
            SCENE_ONPLAYERDEATH_DO_NOTHING = 0x0,
            SCENE_ONPLAYERDEATH_CANCEL     = 0x1
        };

        enum class ScriptedConflictResponse_t : std::uint32_t {
            SS_CONFLICT_ENQUEUE   = 0x0,
            SS_CONFLICT_INTERRUPT = 0x1
        };

        enum class TRAIN_CODE : std::uint32_t {
            TRAIN_SAFE      = 0x0,
            TRAIN_BLOCKING  = 0x1,
            TRAIN_FOLLOWING = 0x2
        };

        enum class eSplinePushType : std::uint32_t {
            k_eSplinePushAlong   = 0x0,
            k_eSplinePushAway    = 0x1,
            k_eSplinePushTowards = 0x2
        };

        enum class NPCFollowFormation_t : std::uint32_t {
            Default      = 0xFFFFFFFF,
            CloseCircle  = 0x0,
            WideCircle   = 0x1,
            MediumCircle = 0x5,
            Sidekick     = 0x6
        };

        enum class PulseNPCCondition_t : std::uint32_t {
            COND_SEE_PLAYER      = 0x1,
            COND_LOST_PLAYER     = 0x2,
            COND_HEAR_PLAYER     = 0x3,
            COND_PLAYER_PUSHING  = 0x4,
            COND_NO_PRIMARY_AMMO = 0x5
        };

        enum class PulseTraceContents_t : std::uint32_t {
            STATIC_LEVEL = 0x0,
            SOLID        = 0x1
        };

        enum class PulseCollisionGroup_t : std::uint32_t {
            DEFAULT = 0x0
        };

        enum class SoundEventStartType_t : std::uint32_t {
            SOUNDEVENT_START_PLAYER = 0x0,
            SOUNDEVENT_START_WORLD  = 0x1,
            SOUNDEVENT_START_ENTITY = 0x2
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

        enum class FuncDoorSpawnPos_t : std::uint32_t {
            FUNC_DOOR_SPAWN_CLOSED = 0x0,
            FUNC_DOOR_SPAWN_OPEN   = 0x1
        };

        enum class Explosions : std::uint32_t {
            expRandom     = 0x0,
            expDirected   = 0x1,
            expUsePrecise = 0x2
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

        enum class EOverrideBlockLOS_t : std::uint32_t {
            BLOCK_LOS_DEFAULT     = 0x0,
            BLOCK_LOS_FORCE_FALSE = 0x1,
            BLOCK_LOS_FORCE_TRUE  = 0x2
        };

        enum class MoveLinearAuthoredPos_t : std::uint32_t {
            MOVELINEAR_AUTHORED_AT_START_POSITION  = 0x0,
            MOVELINEAR_AUTHORED_AT_OPEN_POSITION   = 0x1,
            MOVELINEAR_AUTHORED_AT_CLOSED_POSITION = 0x2
        };

        // Local Type Scope
        enum class CFuncMover__Move_t : std::uint32_t {
            MOVE_LOOP        = 0x0,
            MOVE_OSCILLATE   = 0x1,
            MOVE_STOP_AT_END = 0x2
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

        // Local Type Scope
        enum class CFuncMover__TransitionToPathNodeAction_t : std::uint32_t {
            TRANSITION_TO_PATH_NODE_ACTION_NONE          = 0x0,
            TRANSITION_TO_PATH_NODE_ACTION_START_FORWARD = 0x1,
            TRANSITION_TO_PATH_NODE_ACTION_START_REVERSE = 0x2,
            TRANSITION_TO_PATH_NODE_TRANSITIONING        = 0x3
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

        enum class RotatorTargetSpace_t : std::uint32_t {
            ROTATOR_TARGET_WORLDSPACE = 0x0,
            ROTATOR_TARGET_LOCALSPACE = 0x1
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

        enum class TestInputOutputCombinationsEnum_t : std::uint32_t {
            ZERO = 0x0,
            ONE  = 0x1,
            TWO  = 0x2
        };

        enum class TrackOrientationType_t : std::uint32_t {
            TrackOrientation_Fixed          = 0x0,
            TrackOrientation_FacePath       = 0x1,
            TrackOrientation_FacePathAngles = 0x2
        };

        enum class HoverPoseFlags_t : std::uint8_t {
            eNone     = 0x0,
            ePosition = 0x1,
            eAngles   = 0x2
        };

        // Local Type Scope
        enum class CPhysicsProp__CrateType_t : std::uint32_t {
            CRATE_SPECIFIC_ITEM = 0x0,
            CRATE_TYPE_COUNT    = 0x1
        };

        enum class ESceneRequestState_t : std::uint32_t {
            INACTIVE = 0x0,
            ACTIVE   = 0x1
        };

        enum class TrainVelocityType_t : std::uint32_t {
            TrainVelocity_Instantaneous = 0x0,
            TrainVelocity_LinearBlend   = 0x1,
            TrainVelocity_EaseInEaseOut = 0x2
        };

        enum class TrainOrientationType_t : std::uint32_t {
            TrainOrientation_Fixed         = 0x0,
            TrainOrientation_AtPathTracks  = 0x1,
            TrainOrientation_LinearBlend   = 0x2,
            TrainOrientation_EaseInEaseOut = 0x3
        };

        enum class RelativeLocationType_t : std::uint8_t {
            WORLD_SPACE_POSITION              = 0x0,
            RELATIVE_TO_ENTITY_IN_LOCAL_SPACE = 0x1,
            RELATIVE_TO_ENTITY_YAW_ONLY       = 0x2,
            RELATIVE_TO_ENTITY_IN_WORLD_SPACE = 0x3
        };

        enum class NavScope_t : std::uint8_t {
            eGround  = 0x0,
            eAir     = 0x1,
            eCount   = 0x2,
            eFirst   = 0x0,
            eInvalid = 0xFF
        };

        enum class NavScopeFlags_t : std::uint8_t {
            eGround = 0x1,
            eAir    = 0x2,
            eAll    = 0x3,
            eNone   = 0x0
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

        enum class BeamClipStyle_t : std::uint32_t {
            kNOCLIP                = 0x0,
            kGEOCLIP               = 0x1,
            kMODELCLIP             = 0x2,
            kBEAMCLIPSTYLE_NUMBITS = 0x2
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

        enum class ShatterDamageCause : std::uint8_t {
            SHATTERDAMAGE_BULLET    = 0x0,
            SHATTERDAMAGE_MELEE     = 0x1,
            SHATTERDAMAGE_THROWN    = 0x2,
            SHATTERDAMAGE_SCRIPT    = 0x3,
            SHATTERDAMAGE_EXPLOSIVE = 0x4
        };

        enum class ShatterGlassStressType : std::uint8_t {
            SHATTERGLASS_BLUNT     = 0x0,
            SHATTERGLASS_BALLISTIC = 0x1,
            SHATTERGLASS_PULSE     = 0x2,
            SHATTERGLASS_EXPLOSIVE = 0x3
        };

        enum class OnFrame : std::uint8_t {
            ONFRAME_UNKNOWN = 0x0,
            ONFRAME_TRUE    = 0x1,
            ONFRAME_FALSE   = 0x2
        };

        enum class ShardSolid_t : std::uint8_t {
            SHARD_SOLID  = 0x0,
            SHARD_DEBRIS = 0x1
        };

        enum class AnimLoopMode_t : std::uint32_t {
            ANIM_LOOP_MODE_INVALID               = 0xFFFFFFFF,
            ANIM_LOOP_MODE_NOT_LOOPING           = 0x0,
            ANIM_LOOP_MODE_LOOPING               = 0x1,
            ANIM_LOOP_MODE_USE_SEQUENCE_SETTINGS = 0x2,
            ANIM_LOOP_MODE_COUNT                 = 0x3
        };

        enum class BodySectionAuthority_t : std::uint32_t {
            eNone      = 0x0,
            eLowerBody = 0x1,
            eUpperBody = 0x2,
            eFullBody  = 0x3
        };

        enum class EntityAttachmentType_t : std::uint32_t {
            eAbsOrigin  = 0x0,
            eCenter     = 0x1,
            eEyes       = 0x2,
            eAttachment = 0x3
        };

        enum class EntitySubclassScope_t : std::uint32_t {
            SUBCLASS_SCOPE_NONE           = 0xFFFFFFFF,
            SUBCLASS_SCOPE_PRECIPITATION  = 0x0,
            SUBCLASS_SCOPE_PLAYER_WEAPONS = 0x1,
            SUBCLASS_SCOPE_COUNT          = 0x2
        };

        enum class SubclassVDataChangeType_t : std::uint32_t {
            SUBCLASS_VDATA_CREATED          = 0x0,
            SUBCLASS_VDATA_SUBCLASS_CHANGED = 0x1,
            SUBCLASS_VDATA_RELOADED         = 0x2
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

        enum class EntityDistanceMode_t : std::uint32_t {
            eOriginToOrigin = 0x0,
            eCenterToCenter = 0x1,
            eAxisToAxis     = 0x2
        };

        enum class WeaponSwitchReason_t : std::uint32_t {
            eDrawn                     = 0x0,
            eEquipped                  = 0x1,
            eUserInitiatedSwitchToLast = 0x2,
            eUserInitiatedUIKeyPress   = 0x3,
            eUserInitiatedSwitchHands  = 0x4
        };

        enum class WeaponAttackType_t : std::uint32_t {
            eInvalid   = 0xFFFFFFFF,
            ePrimary   = 0x0,
            eSecondary = 0x1,
            eCount     = 0x2
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

        enum class EntityDisolveType_t : std::uint32_t {
            ENTITY_DISSOLVE_INVALID          = 0xFFFFFFFF,
            ENTITY_DISSOLVE_NORMAL           = 0x0,
            ENTITY_DISSOLVE_ELECTRICAL       = 0x1,
            ENTITY_DISSOLVE_ELECTRICAL_LIGHT = 0x2,
            ENTITY_DISSOLVE_CORE             = 0x3
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

        enum class WaterLevel_t : std::uint8_t {
            WL_NotInWater      = 0x0,
            WL_Feet            = 0x1,
            WL_Knees           = 0x2,
            WL_Waist           = 0x3,
            WL_Chest           = 0x4,
            WL_FullyUnderwater = 0x5,
            WL_Count           = 0x6
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

        enum class DoorState_t : std::uint32_t {
            DOOR_STATE_CLOSED  = 0x0,
            DOOR_STATE_OPENING = 0x1,
            DOOR_STATE_OPEN    = 0x2,
            DOOR_STATE_CLOSING = 0x3,
            DOOR_STATE_AJAR    = 0x4
        };

        enum class ShadowType_t : std::uint32_t {
            SHADOWS_NONE   = 0x0,
            SHADOWS_SIMPLE = 0x1
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

        enum class LatchDirtyPermission_t : std::uint32_t {
            LATCH_DIRTY_DISALLOW          = 0x0,
            LATCH_DIRTY_SERVER_CONTROLLED = 0x1,
            LATCH_DIRTY_CLIENT_SIMULATED  = 0x2,
            LATCH_DIRTY_PREDICTION        = 0x3,
            LATCH_DIRTY_FRAMESIMULATE     = 0x4,
            LATCH_DIRTY_PARTICLE_SIMULATE = 0x5
        };

        enum class LifeState_t : std::uint32_t {
            LIFE_ALIVE       = 0x0,
            LIFE_DYING       = 0x1,
            LIFE_DEAD        = 0x2,
            LIFE_RESPAWNABLE = 0x3,
            LIFE_RESPAWNING  = 0x4,
            NUM_LIFESTATES   = 0x5
        };

        enum class StanceType_t : std::uint32_t {
            STANCE_CURRENT   = 0xFFFFFFFF,
            STANCE_DEFAULT   = 0x0,
            STANCE_CROUCHING = 0x1,
            STANCE_PRONE     = 0x2,
            NUM_STANCES      = 0x3
        };

        enum class ModifyDamageReturn_t : std::uint32_t {
            CONTINUE_TO_APPLY_DAMAGE  = 0x0,
            ABORT_DO_NOT_APPLY_DAMAGE = 0x1
        };

        enum class BeginDeathLifeStateTransition_t : std::uint8_t {
            TRANSITION_TO_LIFESTATE_DYING = 0x0,
            TRANSITION_TO_LIFESTATE_DEAD  = 0x1
        };

        enum class EntityPlatformTypes_t : std::uint8_t {
            ENTITY_NOT_PLATFORM                = 0x0,
            ENTITY_PLATFORM_PLAYER_FOLLOWS_YAW = 0x1,
            ENTITY_PLATFORM_PLAYER_IGNORES_YAW = 0x2
        };

        enum class WorldTextPanelHorizontalAlign_t : std::uint32_t {
            WORLDTEXT_HORIZONTAL_ALIGN_LEFT   = 0x0,
            WORLDTEXT_HORIZONTAL_ALIGN_CENTER = 0x1,
            WORLDTEXT_HORIZONTAL_ALIGN_RIGHT  = 0x2
        };

        enum class WorldTextPanelVerticalAlign_t : std::uint32_t {
            WORLDTEXT_VERTICAL_ALIGN_TOP    = 0x0,
            WORLDTEXT_VERTICAL_ALIGN_CENTER = 0x1,
            WORLDTEXT_VERTICAL_ALIGN_BOTTOM = 0x2
        };

        enum class WorldTextPanelOrientation_t : std::uint32_t {
            WORLDTEXT_ORIENTATION_DEFAULT          = 0x0,
            WORLDTEXT_ORIENTATION_FACEUSER         = 0x1,
            WORLDTEXT_ORIENTATION_FACEUSER_UPRIGHT = 0x2
        };

        enum class attributeprovidertypes_t : std::uint32_t {
            PROVIDER_GENERIC = 0x0,
            PROVIDER_WEAPON  = 0x1
        };

        enum class MoveMountingAmount_t : std::uint32_t {
            MOVE_MOUNT_NONE     = 0x0,
            MOVE_MOUNT_LOW      = 0x1,
            MOVE_MOUNT_HIGH     = 0x2,
            MOVE_MOUNT_MAXCOUNT = 0x3
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

        enum class GrenadeType_t : std::uint32_t {
            GRENADE_TYPE_EXPLOSIVE = 0x0,
            GRENADE_TYPE_FLASH     = 0x1,
            GRENADE_TYPE_FIRE      = 0x2,
            GRENADE_TYPE_DECOY     = 0x3,
            GRENADE_TYPE_SMOKE     = 0x4,
            GRENADE_TYPE_TOTAL     = 0x5
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

        enum class EContributionScoreFlag_t : std::uint8_t {
            k_EContributionScoreFlag_Default   = 0x0,
            k_EContributionScoreFlag_Objective = 0x1,
            k_EContributionScoreFlag_Bullets   = 0x2
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

        enum class PreviewWeaponState : std::uint32_t {
            DROPPED   = 0x0,
            HOLSTERED = 0x1,
            DEPLOYED  = 0x2,
            PLANTED   = 0x3,
            INSPECT   = 0x4,
            ICON      = 0x5
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

        enum class CSWeaponCategory : std::uint32_t {
            WEAPONCATEGORY_OTHER     = 0x0,
            WEAPONCATEGORY_MELEE     = 0x1,
            WEAPONCATEGORY_SECONDARY = 0x2,
            WEAPONCATEGORY_SMG       = 0x3,
            WEAPONCATEGORY_RIFLE     = 0x4,
            WEAPONCATEGORY_HEAVY     = 0x5,
            WEAPONCATEGORY_COUNT     = 0x6
        };

        enum class CSWeaponSilencerType : std::uint32_t {
            WEAPONSILENCER_NONE       = 0x0,
            WEAPONSILENCER_DETACHABLE = 0x1,
            WEAPONSILENCER_INTEGRATED = 0x2
        };

        enum class MedalRank_t : std::uint32_t {
            MEDAL_RANK_NONE   = 0x0,
            MEDAL_RANK_BRONZE = 0x1,
            MEDAL_RANK_SILVER = 0x2,
            MEDAL_RANK_GOLD   = 0x3,
            MEDAL_RANK_COUNT  = 0x4
        };

        enum class CSWeaponMode : std::uint32_t {
            Primary_Mode   = 0x0,
            Secondary_Mode = 0x1,
            WeaponMode_MAX = 0x2
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

        enum class C4LightEffect_t : std::uint32_t {
            eLightEffectNone            = 0x0,
            eLightEffectDropped         = 0x1,
            eLightEffectThirdPersonHeld = 0x2
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

        // Has Trivial Destructor
        // Global Type Scope
        struct ParticleIndex_t {
        public:
            static constexpr std::uintptr_t m_Value = 0x0000; // int32
        };

        // Has VTable
        // Has Trivial Destructor
        // Local Type Scope
        class CountdownTimer {
        public:
            static constexpr std::uintptr_t m_duration      = 0x0008; // float32
            static constexpr std::uintptr_t m_timestamp     = 0x000C; // GameTime_t
            static constexpr std::uintptr_t m_timescale     = 0x0010; // float32
            static constexpr std::uintptr_t m_nWorldGroupId = 0x0014; // WorldGroupId_t
        };

        // Has Trivial Destructor
        class CSkillFloat {
        public:
            static constexpr std::uintptr_t m_pValue = 0x0000; // float32[4]
        };

        // Has Trivial Destructor
        class CSkillInt {
        public:
            static constexpr std::uintptr_t m_pValue = 0x0000; // int32[4]
        };

        // Has Trivial Destructor
        class CRangeInt {
        public:
            static constexpr std::uintptr_t m_pValue = 0x0000; // int32[2]
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

        // Has Trivial Destructor
        struct NavGravity_t {
        public:
            static constexpr std::uintptr_t m_vGravity = 0x0000; // Vector
            static constexpr std::uintptr_t m_bDefault = 0x000C; // bool
        };

        // Has Trivial Destructor
        class Extent {
        public:
            static constexpr std::uintptr_t lo = 0x0000; // VectorWS
            static constexpr std::uintptr_t hi = 0x000C; // VectorWS
        };

        // Has VTable
        // Is Absract
        class CNavVolume {
        public:
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CNavHullVData {
        public:
            static constexpr std::uintptr_t m_bAgentEnabled             = 0x0000; // bool
            static constexpr std::uintptr_t m_agentRadius               = 0x0004; // float32
            static constexpr std::uintptr_t m_agentHeight               = 0x0008; // float32
            static constexpr std::uintptr_t m_agentShortHeightEnabled   = 0x000C; // bool
            static constexpr std::uintptr_t m_agentShortHeight          = 0x0010; // float32
            static constexpr std::uintptr_t m_agentCrawlEnabled         = 0x0014; // bool
            static constexpr std::uintptr_t m_agentCrawlHeight          = 0x0018; // float32
            static constexpr std::uintptr_t m_agentMaxClimb             = 0x001C; // float32
            static constexpr std::uintptr_t m_agentMaxSlope             = 0x0020; // int32
            static constexpr std::uintptr_t m_agentMaxJumpDownDist      = 0x0024; // float32
            static constexpr std::uintptr_t m_agentMaxJumpHorizDistBase = 0x0028; // float32
            static constexpr std::uintptr_t m_agentMaxJumpUpDist        = 0x002C; // float32
            static constexpr std::uintptr_t m_agentBorderErosion        = 0x0030; // int32
            static constexpr std::uintptr_t m_flowMapGenerationEnabled  = 0x0034; // bool
            static constexpr std::uintptr_t m_flowMapNodeMaxRadius      = 0x0038; // float32
        };

        // Construct Allowed
        class CNavHullPresetVData {
        public:
            static constexpr std::uintptr_t m_vecNavHulls = 0x0000; // CUtlVector<CUtlString>
        };

        // Has VTable
        // Is Absract
        // Has Trivial Destructor
        // Local Type Scope
        class CEntityComponent {
        public:
        };

        // Local Type Scope
        class CEntityIdentity {
        public:
            static constexpr std::uintptr_t m_nameStringableIndex = 0x0014; // int32
            static constexpr std::uintptr_t m_name                = 0x0018; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_designerName        = 0x0020; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flags               = 0x0030; // uint32
            static constexpr std::uintptr_t m_worldGroupId        = 0x0038; // WorldGroupId_t
            static constexpr std::uintptr_t m_fDataObjectTypes    = 0x003C; // uint32
            static constexpr std::uintptr_t m_PathIndex           = 0x0040; // ChangeAccessorFieldPathIndex_t
            static constexpr std::uintptr_t m_pAttributes         = 0x0048; // CEntityAttributeTable*
            static constexpr std::uintptr_t m_pPrev               = 0x0050; // CEntityIdentity*
            static constexpr std::uintptr_t m_pNext               = 0x0058; // CEntityIdentity*
            static constexpr std::uintptr_t m_pPrevByClass        = 0x0060; // CEntityIdentity*
            static constexpr std::uintptr_t m_pNextByClass        = 0x0068; // CEntityIdentity*
        };

        // Has VTable
        // Local Type Scope
        class CEntityInstance {
        public:
            static constexpr std::uintptr_t m_iszPrivateVScripts = 0x0008; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_pEntity            = 0x0010; // CEntityIdentity*
            static constexpr std::uintptr_t m_CScriptComponent   = 0x0030; // CScriptComponent*
        };

        // Has VTable
        // Local Type Scope
        class CGameSceneNode {
        public:
            static constexpr std::uintptr_t m_nodeToWorld                               = 0x0010; // CTransformWS
            static constexpr std::uintptr_t m_pOwner                                    = 0x0030; // CEntityInstance*
            static constexpr std::uintptr_t m_pParent                                   = 0x0038; // CGameSceneNode*
            static constexpr std::uintptr_t m_pChild                                    = 0x0040; // CGameSceneNode*
            static constexpr std::uintptr_t m_pNextSibling                              = 0x0048; // CGameSceneNode*
            static constexpr std::uintptr_t m_hParent                                   = 0x0078; // CGameSceneNodeHandle
            static constexpr std::uintptr_t m_vecOrigin                                 = 0x0088; // CNetworkOriginCellCoordQuantizedVector
            static constexpr std::uintptr_t m_angRotation                               = 0x00C0; // QAngle
            static constexpr std::uintptr_t m_flScale                                   = 0x00CC; // float32
            static constexpr std::uintptr_t m_vecAbsOrigin                              = 0x00D0; // VectorWS
            static constexpr std::uintptr_t m_angAbsRotation                            = 0x00DC; // QAngle
            static constexpr std::uintptr_t m_flAbsScale                                = 0x00E8; // float32
            static constexpr std::uintptr_t m_nParentAttachmentOrBone                   = 0x00EC; // int16
            static constexpr std::uintptr_t m_bDebugAbsOriginChanges                    = 0x00EE; // bool
            static constexpr std::uintptr_t m_bDormant                                  = 0x00EF; // bool
            static constexpr std::uintptr_t m_bForceParentToBeNetworked                 = 0x00F0; // bool
            static constexpr std::uintptr_t m_bDirtyHierarchy                           = 0x0000; // bitfield:1
            static constexpr std::uintptr_t m_bDirtyBoneMergeInfo                       = 0x0000; // bitfield:1
            static constexpr std::uintptr_t m_bNetworkedPositionChanged                 = 0x0000; // bitfield:1
            static constexpr std::uintptr_t m_bNetworkedAnglesChanged                   = 0x0000; // bitfield:1
            static constexpr std::uintptr_t m_bNetworkedScaleChanged                    = 0x0000; // bitfield:1
            static constexpr std::uintptr_t m_bWillBeCallingPostDataUpdate              = 0x0000; // bitfield:1
            static constexpr std::uintptr_t m_bBoneMergeFlex                            = 0x0000; // bitfield:1
            static constexpr std::uintptr_t m_nLatchAbsOrigin                           = 0x0000; // bitfield:2
            static constexpr std::uintptr_t m_bDirtyBoneMergeBoneToRoot                 = 0x0000; // bitfield:1
            static constexpr std::uintptr_t m_nHierarchicalDepth                        = 0x00F3; // uint8
            static constexpr std::uintptr_t m_nHierarchyType                            = 0x00F4; // uint8
            static constexpr std::uintptr_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0x00F5; // uint8
            static constexpr std::uintptr_t m_name                                      = 0x00F8; // CUtlStringToken
            static constexpr std::uintptr_t m_hierarchyAttachName                       = 0x010C; // CUtlStringToken
            static constexpr std::uintptr_t m_flZOffset                                 = 0x0110; // float32
            static constexpr std::uintptr_t m_flClientLocalScale                        = 0x0114; // float32
            static constexpr std::uintptr_t m_vRenderOrigin                             = 0x0118; // Vector
        };

        // Has VTable
        class CNetworkTransmitComponent {
        public:
            static constexpr std::uintptr_t m_nTransmitStateOwnedCounter = 0x0184; // uint8
        };

        // Has Trivial Destructor
        class CAnimEventListenerBase {
        public:
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct PointCameraSettings_t {
        public:
            static constexpr std::uintptr_t m_flNearBlurryDistance = 0x0000; // float32
            static constexpr std::uintptr_t m_flNearCrispDistance  = 0x0004; // float32
            static constexpr std::uintptr_t m_flFarCrispDistance   = 0x0008; // float32
            static constexpr std::uintptr_t m_flFarBlurryDistance  = 0x000C; // float32
        };

        // Has Trivial Destructor
        // Local Type Scope
        class CPointTemplateAPI {
        public:
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct WaterWheelFrictionScale_t {
        public:
            static constexpr std::uintptr_t m_flFractionOfWheelSubmerged = 0x0000; // float32
            static constexpr std::uintptr_t m_flFrictionScale            = 0x0004; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct WaterWheelDrag_t {
        public:
            static constexpr std::uintptr_t m_flFractionOfWheelSubmerged = 0x0000; // float32
            static constexpr std::uintptr_t m_flWheelDrag                = 0x0004; // float32
        };

        // Has VTable
        // Local Type Scope
        class CBuoyancyHelper {
        public:
            static constexpr std::uintptr_t m_nFluidType                                  = 0x0018; // CUtlStringToken
            static constexpr std::uintptr_t m_flFluidDensity                              = 0x001C; // float32
            static constexpr std::uintptr_t m_flNeutrallyBuoyantGravity                   = 0x0020; // float32
            static constexpr std::uintptr_t m_flNeutrallyBuoyantLinearDamping             = 0x0024; // float32
            static constexpr std::uintptr_t m_flNeutrallyBuoyantAngularDamping            = 0x0028; // float32
            static constexpr std::uintptr_t m_bNeutrallyBuoyant                           = 0x002C; // bool
            static constexpr std::uintptr_t m_vecFractionOfWheelSubmergedForWheelFriction = 0x0030; // CUtlVector<float32>
            static constexpr std::uintptr_t m_vecWheelFrictionScales                      = 0x0048; // CUtlVector<float32>
            static constexpr std::uintptr_t m_vecFractionOfWheelSubmergedForWheelDrag     = 0x0060; // CUtlVector<float32>
            static constexpr std::uintptr_t m_vecWheelDrag                                = 0x0078; // CUtlVector<float32>
        };

        // Has Trivial Destructor
        struct SoundeventPathCornerPairNetworked_t {
        public:
            static constexpr std::uintptr_t vP1             = 0x0000; // Vector
            static constexpr std::uintptr_t vP2             = 0x000C; // Vector
            static constexpr std::uintptr_t flPathLengthSqr = 0x0018; // float32
            static constexpr std::uintptr_t flP1Pct         = 0x001C; // float32
            static constexpr std::uintptr_t flP2Pct         = 0x0020; // float32
        };

        // Has Trivial Destructor
        // Local Type Scope
        class CBaseTriggerAPI {
        public:
        };

        struct CWorldCompositionChunkReferenceElement_t {
        public:
            static constexpr std::uintptr_t m_strMapToLoad    = 0x0000; // CUtlString
            static constexpr std::uintptr_t m_strLandmarkName = 0x0008; // CUtlString
        };

        class CDecalInstance {
        public:
            static constexpr std::uintptr_t m_sDecalGroup            = 0x0000; // CGlobalSymbol
            static constexpr std::uintptr_t m_hMaterial              = 0x0008; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_sSequenceName          = 0x0010; // CUtlStringToken
            static constexpr std::uintptr_t m_hEntity                = 0x0014; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_nBoneIndex             = 0x0018; // int32
            static constexpr std::uintptr_t m_nTriangleIndex         = 0x001C; // int32
            static constexpr std::uintptr_t m_vPositionLS            = 0x0020; // Vector
            static constexpr std::uintptr_t m_vNormalLS              = 0x002C; // Vector
            static constexpr std::uintptr_t m_vSAxisLS               = 0x0038; // Vector
            static constexpr std::uintptr_t m_nFlags                 = 0x0044; // DecalFlags_t
            static constexpr std::uintptr_t m_Color                  = 0x0048; // Color
            static constexpr std::uintptr_t m_flWidth                = 0x004C; // float32
            static constexpr std::uintptr_t m_flHeight               = 0x0050; // float32
            static constexpr std::uintptr_t m_flDepth                = 0x0054; // float32
            static constexpr std::uintptr_t m_transform              = 0x0060; // CTransformWS
            static constexpr std::uintptr_t m_flAnimationScale       = 0x0080; // float32
            static constexpr std::uintptr_t m_flAnimationStartTime   = 0x0084; // float32
            static constexpr std::uintptr_t m_flPlaceTime            = 0x0088; // GameTime_t
            static constexpr std::uintptr_t m_flFadeStartTime        = 0x008C; // float32
            static constexpr std::uintptr_t m_flFadeDuration         = 0x0090; // float32
            static constexpr std::uintptr_t m_flLightingOriginOffset = 0x0094; // float32
            static constexpr std::uintptr_t m_flBoundingRadiusSqr    = 0x00A0; // float32
            static constexpr std::uintptr_t m_nSequenceIndex         = 0x00A4; // int16
            static constexpr std::uintptr_t m_bIsAdjacent            = 0x00A6; // bool
            static constexpr std::uintptr_t m_bDoDecalLightmapping   = 0x00A7; // bool
            static constexpr std::uintptr_t m_nDecalRtEncoding       = 0x00A8; // DecalRtEncoding_t
            static constexpr std::uintptr_t m_bProjectToBackfaces    = 0x00A9; // bool
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CSkillDamage {
        public:
            static constexpr std::uintptr_t m_flDamage               = 0x0000; // CSkillFloat
            static constexpr std::uintptr_t m_flNPCDamageScalarVsNPC = 0x0010; // float32
            static constexpr std::uintptr_t m_flPhysicsForceDamage   = 0x0014; // float32
        };

        // Has Trivial Destructor
        class CRemapFloat {
        public:
            static constexpr std::uintptr_t m_pValue = 0x0000; // float32[4]
        };

        // Has VTable
        class CScriptUniformRandomStream {
        public:
            static constexpr std::uintptr_t m_hScriptScope = 0x0008; // HSCRIPT
            static constexpr std::uintptr_t m_nInitialSeed = 0x009C; // int32
        };

        // Has Trivial Destructor
        // Construct Allowed
        // Local Type Scope
        struct CPulseCell_PlaySequence__CursorState_t {
        public:
            static constexpr std::uintptr_t m_hTarget = 0x0000; // CHandle<CBaseAnimGraph>
        };

        // Has Trivial Destructor
        // Local Type Scope
        class CPulseAnimFuncs {
        public:
        };

        // Has Trivial Destructor
        // Local Type Scope
        class CBasePlayerControllerAPI {
        public:
        };

        // Has VTable
        // Local Type Scope
        struct ViewAngleServerChange_t {
        public:
            static constexpr std::uintptr_t nType  = 0x0030; // FixAngleSet_t
            static constexpr std::uintptr_t qAngle = 0x0034; // QAngle
            static constexpr std::uintptr_t nIndex = 0x0040; // uint32
        };

        class CBreakableStageHelper {
        public:
            static constexpr std::uintptr_t m_nCurrentStage = 0x0008; // int32
            static constexpr std::uintptr_t m_nStageCount   = 0x000C; // int32
        };

        // Construct Allowed
        struct DecalGroupOption_t {
        public:
            static constexpr std::uintptr_t m_hMaterial                                = 0x0000; // CStrongHandleCopyable<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_sSequenceName                            = 0x0008; // CGlobalSymbol
            static constexpr std::uintptr_t m_flProbability                            = 0x0010; // float32
            static constexpr std::uintptr_t m_bEnableAngleBetweenNormalAndGravityRange = 0x0014; // bool
            static constexpr std::uintptr_t m_flMinAngleBetweenNormalAndGravity        = 0x0018; // float32
            static constexpr std::uintptr_t m_flMaxAngleBetweenNormalAndGravity        = 0x001C; // float32
        };

        // Construct Allowed
        class CDecalGroupVData {
        public:
            static constexpr std::uintptr_t m_vecOptions         = 0x0000; // CUtlVector<DecalGroupOption_t>
            static constexpr std::uintptr_t m_flTotalProbability = 0x0018; // float32
        };

        // Has Trivial Destructor
        // Local Type Scope
        class CFilterMultipleAPI {
        public:
        };

        // Has VTable
        class CPlayerPawnComponent {
        public:
            static constexpr std::uintptr_t __m_pChainEntity = 0x0008; // CNetworkVarChainer
        };

        // Has VTable
        class CPlayerControllerComponent {
        public:
            static constexpr std::uintptr_t __m_pChainEntity = 0x0008; // CNetworkVarChainer
        };

        // Has VTable
        // Has Trivial Destructor
        // Local Type Scope
        struct audioparams_t {
        public:
            static constexpr std::uintptr_t localSound                = 0x0008; // Vector[8]
            static constexpr std::uintptr_t soundscapeIndex           = 0x0068; // int32
            static constexpr std::uintptr_t localBits                 = 0x006C; // uint8
            static constexpr std::uintptr_t soundscapeEntityListIndex = 0x0070; // int32
            static constexpr std::uintptr_t soundEventHash            = 0x0074; // uint32
        };

        // Has VTable
        // Has Trivial Destructor
        // Local Type Scope
        struct fogplayerparams_t {
        public:
            static constexpr std::uintptr_t m_hCtrl              = 0x0008; // CHandle<CFogController>
            static constexpr std::uintptr_t m_flTransitionTime   = 0x000C; // float32
            static constexpr std::uintptr_t m_OldColor           = 0x0010; // Color
            static constexpr std::uintptr_t m_flOldStart         = 0x0014; // float32
            static constexpr std::uintptr_t m_flOldEnd           = 0x0018; // float32
            static constexpr std::uintptr_t m_flOldMaxDensity    = 0x001C; // float32
            static constexpr std::uintptr_t m_flOldHDRColorScale = 0x0020; // float32
            static constexpr std::uintptr_t m_flOldFarZ          = 0x0024; // float32
            static constexpr std::uintptr_t m_NewColor           = 0x0028; // Color
            static constexpr std::uintptr_t m_flNewStart         = 0x002C; // float32
            static constexpr std::uintptr_t m_flNewEnd           = 0x0030; // float32
            static constexpr std::uintptr_t m_flNewMaxDensity    = 0x0034; // float32
            static constexpr std::uintptr_t m_flNewHDRColorScale = 0x0038; // float32
            static constexpr std::uintptr_t m_flNewFarZ          = 0x003C; // float32
        };

        // Has VTable
        // Has Trivial Destructor
        class CInButtonState {
        public:
            static constexpr std::uintptr_t m_pButtonStates = 0x0008; // uint64[3]
        };

        // Has VTable
        // Construct Allowed
        struct AmmoTypeInfo_t {
        public:
            static constexpr std::uintptr_t m_nMaxCarry   = 0x0010; // int32
            static constexpr std::uintptr_t m_nSplashSize = 0x001C; // CRangeInt
            static constexpr std::uintptr_t m_nFlags      = 0x0024; // AmmoFlags_t
            static constexpr std::uintptr_t m_flMass      = 0x0028; // float32
            static constexpr std::uintptr_t m_flSpeed     = 0x002C; // CRangeFloat
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CAnimGraphControllerBase {
        public:
            static constexpr std::uintptr_t m_hExternalGraph = 0x0018; // ExternalAnimGraphHandle_t
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct ExternalAnimGraphHandle_t {
        public:
            static constexpr std::uintptr_t m_Value = 0x0000; // uint32
        };

        class CAnimGraphControllerManager {
        public:
            static constexpr std::uintptr_t m_controllers           = 0x0000; // CUtlVector<CAnimGraphControllerBase*>
            static constexpr std::uintptr_t m_bGraphBindingsCreated = 0x00A8; // bool
        };

        struct ExternalAnimGraph_t {
        public:
            static constexpr std::uintptr_t m_hExtGraphHandle      = 0x0000; // ExternalAnimGraphHandle_t
            static constexpr std::uintptr_t m_sExternalGraphSlotID = 0x0008; // CGlobalSymbol
            static constexpr std::uintptr_t m_hGraphDefinition     = 0x0010; // CStrongHandleCopyable<InfoForResourceTypeCNmGraphDefinition>
            static constexpr std::uintptr_t m_hExternalGraphOwner  = 0x0018; // CHandle<CBaseAnimGraph>
            static constexpr std::uintptr_t m_nInactiveBehavior    = 0x0030; // ExternalAnimGraphInactiveBehavior_t
        };

        // Has VTable
        // Local Type Scope
        struct EntityRenderAttribute_t {
        public:
            static constexpr std::uintptr_t m_ID     = 0x0030; // CUtlStringToken
            static constexpr std::uintptr_t m_Values = 0x0034; // Vector4D
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct ModelConfigHandle_t {
        public:
            static constexpr std::uintptr_t m_Value = 0x0000; // uint32
        };

        // Has VTable
        // Local Type Scope
        struct ActiveModelConfig_t {
        public:
            static constexpr std::uintptr_t m_Handle                = 0x0030; // ModelConfigHandle_t
            static constexpr std::uintptr_t m_Name                  = 0x0038; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_AssociatedEntities    = 0x0040; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
            static constexpr std::uintptr_t m_AssociatedEntityNames = 0x0058; // CNetworkUtlVectorBase<CUtlSymbolLarge>
        };

        // Construct Allowed
        class CPhysicsBodyGameMarkup {
        public:
            static constexpr std::uintptr_t m_TargetBody = 0x0000; // CUtlString
            static constexpr std::uintptr_t m_Tag        = 0x0008; // CGlobalSymbol
        };

        // Construct Allowed
        class CPhysicsBodyGameMarkupData {
        public:
            static constexpr std::uintptr_t m_PhysicsBodyMarkupByBoneName = 0x0000; // CUtlOrderedMap<CUtlString,CPhysicsBodyGameMarkup>
        };

        // Has Trivial Destructor
        // Local Type Scope
        class CBaseModelEntityAPI {
        public:
        };

        // Construct Allowed
        class CDestructiblePart_DamageLevel {
        public:
            static constexpr std::uintptr_t m_sName                     = 0x0000; // CUtlString
            static constexpr std::uintptr_t m_sBreakablePieceName       = 0x0008; // CGlobalSymbol
            static constexpr std::uintptr_t m_nBodyGroupValue           = 0x0010; // int32
            static constexpr std::uintptr_t m_nHealth                   = 0x0014; // CSkillInt
            static constexpr std::uintptr_t m_flCriticalDamagePercent   = 0x0024; // float32
            static constexpr std::uintptr_t m_nDamagePassthroughType    = 0x0028; // EDestructiblePartDamagePassThroughType
            static constexpr std::uintptr_t m_nDestructionDeathBehavior = 0x002C; // DestructiblePartDestructionDeathBehavior_t
            static constexpr std::uintptr_t m_sCustomDeathHandshake     = 0x0030; // CGlobalSymbol
            static constexpr std::uintptr_t m_bShouldDestroyOnDeath     = 0x0038; // bool
            static constexpr std::uintptr_t m_flDeathDestroyTime        = 0x003C; // CRangeFloat
        };

        // Construct Allowed
        class CDestructiblePart {
        public:
            static constexpr std::uintptr_t m_DebugName                                   = 0x0000; // CGlobalSymbol
            static constexpr std::uintptr_t m_nHitGroup                                   = 0x0008; // HitGroup_t
            static constexpr std::uintptr_t m_bDisableHitGroupWhenDestroyed               = 0x000C; // bool
            static constexpr std::uintptr_t m_nOtherHitgroupsToDestroyWhenFullyDestructed = 0x0010; // CUtlVector<HitGroup_t>
            static constexpr std::uintptr_t m_bOnlyDestroyWhenGibbing                     = 0x0028; // bool
            static constexpr std::uintptr_t m_sBodyGroupName                              = 0x0030; // CGlobalSymbol
            static constexpr std::uintptr_t m_DamageLevels                                = 0x0038; // CUtlVector<CDestructiblePart_DamageLevel>
        };

        // Construct Allowed
        class CDestructiblePartsSystemData {
        public:
            static constexpr std::uintptr_t m_PartsDataByHitGroup                        = 0x0000; // CUtlOrderedMap<HitGroup_t,CDestructiblePart>
            static constexpr std::uintptr_t m_nMinMaxNumberHitGroupsToDestroyWhenGibbing = 0x0028; // CRangeInt
        };

        // Construct Allowed
        // Local Type Scope
        class CDestructiblePartsComponent {
        public:
            static constexpr std::uintptr_t __m_pChainEntity           = 0x0000; // CNetworkVarChainer
            static constexpr std::uintptr_t m_vecDamageTakenByHitGroup = 0x0048; // CUtlVector<uint16>
            static constexpr std::uintptr_t m_hOwner                   = 0x0060; // CHandle<CBaseModelEntity>
        };

        // Has Trivial Destructor
        struct DestructiblePartDestructionRequest_t {
        public:
            static constexpr std::uintptr_t m_nDestroyFlags       = 0x0000; // EDestructibleParts_DestroyParameterFlags
            static constexpr std::uintptr_t m_nDamageType         = 0x0004; // DamageTypes_t
            static constexpr std::uintptr_t m_flPartDamage        = 0x0008; // float32
            static constexpr std::uintptr_t m_flPartDamageRadius  = 0x000C; // float32
            static constexpr std::uintptr_t m_vWsPartDamageOrigin = 0x0010; // VectorWS
            static constexpr std::uintptr_t m_vWsPartDamageForce  = 0x001C; // Vector
        };

        // Has Trivial Destructor
        class CNetworkOriginCellCoordQuantizedVector {
        public:
            static constexpr std::uintptr_t m_cellX         = 0x0010; // uint16
            static constexpr std::uintptr_t m_cellY         = 0x0012; // uint16
            static constexpr std::uintptr_t m_cellZ         = 0x0014; // uint16
            static constexpr std::uintptr_t m_nOutsideWorld = 0x0016; // uint16
            static constexpr std::uintptr_t m_vecX          = 0x0018; // CNetworkedQuantizedFloat
            static constexpr std::uintptr_t m_vecY          = 0x0020; // CNetworkedQuantizedFloat
            static constexpr std::uintptr_t m_vecZ          = 0x0028; // CNetworkedQuantizedFloat
        };

        // Has Trivial Destructor
        class CNetworkOriginQuantizedVector {
        public:
            static constexpr std::uintptr_t m_vecX = 0x0010; // CNetworkedQuantizedFloat
            static constexpr std::uintptr_t m_vecY = 0x0018; // CNetworkedQuantizedFloat
            static constexpr std::uintptr_t m_vecZ = 0x0020; // CNetworkedQuantizedFloat
        };

        // Has Trivial Destructor
        class CNetworkVelocityVector {
        public:
            static constexpr std::uintptr_t m_vecX = 0x0010; // CNetworkedQuantizedFloat
            static constexpr std::uintptr_t m_vecY = 0x0018; // CNetworkedQuantizedFloat
            static constexpr std::uintptr_t m_vecZ = 0x0020; // CNetworkedQuantizedFloat
        };

        // Has Trivial Destructor
        class CNetworkViewOffsetVector {
        public:
            static constexpr std::uintptr_t m_vecX = 0x0010; // CNetworkedQuantizedFloat
            static constexpr std::uintptr_t m_vecY = 0x0018; // CNetworkedQuantizedFloat
            static constexpr std::uintptr_t m_vecZ = 0x0020; // CNetworkedQuantizedFloat
        };

        // Has Trivial Destructor
        struct ParticleNode_t {
        public:
            static constexpr std::uintptr_t m_hEntity          = 0x0000; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_iIndex           = 0x0004; // ParticleIndex_t
            static constexpr std::uintptr_t m_flStartTime      = 0x0008; // GameTime_t
            static constexpr std::uintptr_t m_flGrowthDuration = 0x000C; // float32
            static constexpr std::uintptr_t m_vecGrowthOrigin  = 0x0010; // Vector
            static constexpr std::uintptr_t m_flEndcapTime     = 0x001C; // float32
            static constexpr std::uintptr_t m_bMarkedForDelete = 0x0020; // bool
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Local Type Scope
        class CPulseFuncs_GameParticleManager {
        public:
        };

        class CRopeOverlapHit {
        public:
            static constexpr std::uintptr_t m_hEntity             = 0x0000; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_vecOverlappingLinks = 0x0008; // CUtlVector<int32>
        };

        // Has VTable
        // Has Trivial Destructor
        // Local Type Scope
        class CGameSceneNodeHandle {
        public:
            static constexpr std::uintptr_t m_hOwner = 0x0008; // CEntityHandle
            static constexpr std::uintptr_t m_name   = 0x000C; // CUtlStringToken
        };

        // Has Trivial Destructor
        struct HullFlags_t {
        public:
            static constexpr std::uintptr_t m_bHull_Human         = 0x0000; // bool
            static constexpr std::uintptr_t m_bHull_SmallCentered = 0x0001; // bool
            static constexpr std::uintptr_t m_bHull_WideHuman     = 0x0002; // bool
            static constexpr std::uintptr_t m_bHull_Tiny          = 0x0003; // bool
            static constexpr std::uintptr_t m_bHull_Medium        = 0x0004; // bool
            static constexpr std::uintptr_t m_bHull_TinyCentered  = 0x0005; // bool
            static constexpr std::uintptr_t m_bHull_Large         = 0x0006; // bool
            static constexpr std::uintptr_t m_bHull_LargeCentered = 0x0007; // bool
            static constexpr std::uintptr_t m_bHull_MediumTall    = 0x0008; // bool
            static constexpr std::uintptr_t m_bHull_Small         = 0x0009; // bool
        };

        // Has VTable
        // Is Absract
        class IChoreoServices {
        public:
        };

        // Has Trivial Destructor
        // Local Type Scope
        class CLogicRelayAPI {
        public:
        };

        class CPathQueryUtil {
        public:
            static constexpr std::uintptr_t m_PathToEntityTransform   = 0x0010; // CTransform
            static constexpr std::uintptr_t m_vecPathSamplePositions  = 0x0030; // CUtlVector<Vector>
            static constexpr std::uintptr_t m_vecPathSampleParameters = 0x0048; // CUtlVector<float32>
            static constexpr std::uintptr_t m_vecPathSampleDistances  = 0x0060; // CUtlVector<float32>
            static constexpr std::uintptr_t m_bIsClosedLoop           = 0x0078; // bool
        };

        // Has Trivial Destructor
        // Local Type Scope
        class CPathSimpleAPI {
        public:
        };

        // Has Trivial Destructor
        // Local Type Scope
        struct SequenceHistory_t {
        public:
            static constexpr std::uintptr_t m_hSequence         = 0x0000; // HSequence
            static constexpr std::uintptr_t m_flSeqStartTime    = 0x0004; // GameTime_t
            static constexpr std::uintptr_t m_flSeqFixedCycle   = 0x0008; // float32
            static constexpr std::uintptr_t m_nSeqLoopMode      = 0x000C; // AnimLoopMode_t
            static constexpr std::uintptr_t m_flPlaybackRate    = 0x0010; // float32
            static constexpr std::uintptr_t m_flCyclesPerSecond = 0x0014; // float32
        };

        // Has VTable
        // Is Absract
        // Has Trivial Destructor
        class ISkeletonAnimationController {
        public:
        };

        // Has VTable
        // Has Trivial Destructor
        // Local Type Scope
        class CNetworkedSequenceOperation {
        public:
            static constexpr std::uintptr_t m_hSequence                        = 0x0008; // HSequence
            static constexpr std::uintptr_t m_flPrevCycle                      = 0x000C; // float32
            static constexpr std::uintptr_t m_flCycle                          = 0x0010; // float32
            static constexpr std::uintptr_t m_flWeight                         = 0x0014; // CNetworkedQuantizedFloat
            static constexpr std::uintptr_t m_bSequenceChangeNetworked         = 0x001C; // bool
            static constexpr std::uintptr_t m_bDiscontinuity                   = 0x001D; // bool
            static constexpr std::uintptr_t m_flPrevCycleFromDiscontinuity     = 0x0020; // float32
            static constexpr std::uintptr_t m_flPrevCycleForAnimEventDetection = 0x0024; // float32
        };

        // Has VTable
        // Local Type Scope
        class CModelState {
        public:
            static constexpr std::uintptr_t m_hModel                         = 0x00A0; // CStrongHandle<InfoForResourceTypeCModel>
            static constexpr std::uintptr_t m_ModelName                      = 0x00A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bClientClothCreationSuppressed = 0x00F5; // bool
            static constexpr std::uintptr_t m_MeshGroupMask                  = 0x01A0; // uint64
            static constexpr std::uintptr_t m_nBodyGroupChoices              = 0x01F0; // CNetworkUtlVectorBase<int32>
            static constexpr std::uintptr_t m_nIdealMotionType               = 0x023A; // int8
            static constexpr std::uintptr_t m_nForceLOD                      = 0x023B; // int8
            static constexpr std::uintptr_t m_nClothUpdateFlags              = 0x023C; // int8
        };

        // Has Trivial Destructor
        class CFloatExponentialMovingAverage {
        public:
        };

        // Has Trivial Destructor
        class CVectorExponentialMovingAverage {
        public:
        };

        class CFloatMovingAverage {
        public:
        };

        class CVectorMovingAverage {
        public:
        };

        // Has VTable
        // Has Trivial Destructor
        // Local Type Scope
        class IntervalTimer {
        public:
            static constexpr std::uintptr_t m_timestamp     = 0x0008; // GameTime_t
            static constexpr std::uintptr_t m_nWorldGroupId = 0x000C; // WorldGroupId_t
        };

        // Has VTable
        // Has Trivial Destructor
        // Local Type Scope
        class EngineCountdownTimer {
        public:
            static constexpr std::uintptr_t m_duration  = 0x0008; // float32
            static constexpr std::uintptr_t m_timestamp = 0x000C; // float32
            static constexpr std::uintptr_t m_timescale = 0x0010; // float32
        };

        // Has VTable
        // Is Absract
        // Construct Allowed
        class CNmEventConsumer {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CAnimGraphNetworkedVariables {
        public:
            static constexpr std::uintptr_t m_PredNetBoolVariables                  = 0x0008; // CNetworkUtlVectorBase<uint32>
            static constexpr std::uintptr_t m_PredNetByteVariables                  = 0x0020; // CNetworkUtlVectorBase<uint8>
            static constexpr std::uintptr_t m_PredNetUInt16Variables                = 0x0038; // CNetworkUtlVectorBase<uint16>
            static constexpr std::uintptr_t m_PredNetIntVariables                   = 0x0050; // CNetworkUtlVectorBase<int32>
            static constexpr std::uintptr_t m_PredNetUInt32Variables                = 0x0068; // CNetworkUtlVectorBase<uint32>
            static constexpr std::uintptr_t m_PredNetUInt64Variables                = 0x0080; // CNetworkUtlVectorBase<uint64>
            static constexpr std::uintptr_t m_PredNetFloatVariables                 = 0x0098; // CNetworkUtlVectorBase<float32>
            static constexpr std::uintptr_t m_PredNetVectorVariables                = 0x00B0; // CNetworkUtlVectorBase<Vector>
            static constexpr std::uintptr_t m_PredNetQuaternionVariables            = 0x00C8; // CNetworkUtlVectorBase<Quaternion>
            static constexpr std::uintptr_t m_PredNetGlobalSymbolVariables          = 0x00E0; // CNetworkUtlVectorBase<CGlobalSymbol>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetBoolVariables         = 0x00F8; // CNetworkUtlVectorBase<uint32>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetByteVariables         = 0x0110; // CNetworkUtlVectorBase<uint8>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetUInt16Variables       = 0x0128; // CNetworkUtlVectorBase<uint16>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetIntVariables          = 0x0140; // CNetworkUtlVectorBase<int32>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetUInt32Variables       = 0x0158; // CNetworkUtlVectorBase<uint32>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetUInt64Variables       = 0x0170; // CNetworkUtlVectorBase<uint64>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetFloatVariables        = 0x0188; // CNetworkUtlVectorBase<float32>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetVectorVariables       = 0x01A0; // CNetworkUtlVectorBase<Vector>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetQuaternionVariables   = 0x01B8; // CNetworkUtlVectorBase<Quaternion>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetGlobalSymbolVariables = 0x01D0; // CNetworkUtlVectorBase<CGlobalSymbol>
            static constexpr std::uintptr_t m_nBoolVariablesCount                   = 0x01E8; // int32
            static constexpr std::uintptr_t m_nOwnerOnlyBoolVariablesCount          = 0x01EC; // int32
            static constexpr std::uintptr_t m_nRandomSeedOffset                     = 0x01F0; // int32
            static constexpr std::uintptr_t m_flLastTeleportTime                    = 0x01F4; // float32
        };

        // Has Trivial Destructor
        class CFootstepTableHandle {
        public:
        };

        // Has Trivial Destructor
        class ResponseFollowup {
        public:
            static constexpr std::uintptr_t followup_concept        = 0x0000; // char*
            static constexpr std::uintptr_t followup_contexts       = 0x0008; // char*
            static constexpr std::uintptr_t followup_delay          = 0x0010; // float32
            static constexpr std::uintptr_t followup_target         = 0x0014; // char*
            static constexpr std::uintptr_t followup_entityiotarget = 0x001C; // char*
            static constexpr std::uintptr_t followup_entityioinput  = 0x0024; // char*
            static constexpr std::uintptr_t followup_entityiodelay  = 0x002C; // float32
            static constexpr std::uintptr_t bFired                  = 0x0030; // bool
        };

        // Has Trivial Destructor
        class ResponseParams {
        public:
            static constexpr std::uintptr_t odds        = 0x0010; // int16
            static constexpr std::uintptr_t flags       = 0x0012; // int16
            static constexpr std::uintptr_t m_pFollowup = 0x0018; // ResponseFollowup*
        };

        // Has VTable
        class CResponseCriteriaSet {
        public:
            static constexpr std::uintptr_t m_nNumPrefixedContexts = 0x0030; // int32
            static constexpr std::uintptr_t m_bOverrideOnAppend    = 0x0034; // bool
        };

        class CRR_Response {
        public:
            static constexpr std::uintptr_t m_Type                        = 0x0000; // uint8
            static constexpr std::uintptr_t m_szResponseName              = 0x0001; // char[192]
            static constexpr std::uintptr_t m_szMatchingRule              = 0x00C1; // char[128]
            static constexpr std::uintptr_t m_Params                      = 0x0160; // ResponseParams
            static constexpr std::uintptr_t m_fMatchScore                 = 0x0180; // float32
            static constexpr std::uintptr_t m_bAnyMatchingRulesInCooldown = 0x0184; // bool
            static constexpr std::uintptr_t m_szSpeakerContext            = 0x0188; // char*
            static constexpr std::uintptr_t m_szWorldContext              = 0x0190; // char*
            static constexpr std::uintptr_t m_Followup                    = 0x0198; // ResponseFollowup
            static constexpr std::uintptr_t m_recipientFilter             = 0x01CA; // CUtlSymbol
        };

        // Has VTable
        class CAI_Expresser {
        public:
            static constexpr std::uintptr_t m_flStopTalkTime                    = 0x0060; // GameTime_t
            static constexpr std::uintptr_t m_flStopTalkTimeWithoutDelay        = 0x0064; // GameTime_t
            static constexpr std::uintptr_t m_flQueuedSpeechTime                = 0x0068; // GameTime_t
            static constexpr std::uintptr_t m_flBlockedTalkTime                 = 0x006C; // GameTime_t
            static constexpr std::uintptr_t m_voicePitch                        = 0x0070; // int32
            static constexpr std::uintptr_t m_flLastTimeAcceptedSpeak           = 0x0074; // GameTime_t
            static constexpr std::uintptr_t m_bAllowSpeakingInterrupts          = 0x0078; // bool
            static constexpr std::uintptr_t m_bConsiderSceneInvolvementAsSpeech = 0x0079; // bool
            static constexpr std::uintptr_t m_bSceneEntityDisabled              = 0x007A; // bool
            static constexpr std::uintptr_t m_nLastSpokenPriority               = 0x007C; // int32
            static constexpr std::uintptr_t m_pOuter                            = 0x0098; // CBaseFlex*
        };

        class CResponseQueue {
        public:
            static constexpr std::uintptr_t m_ExpresserTargets = 0x0038; // CUtlVector<CAI_Expresser*>
        };

        // Has Trivial Destructor
        // Local Type Scope
        class CBaseEntityAPI {
        public:
        };

        // Has VTable
        class CCommentarySystem {
        public:
            static constexpr std::uintptr_t m_bCommentaryConvarsChanging = 0x0011; // bool
            static constexpr std::uintptr_t m_bCommentaryEnabledMidGame  = 0x0012; // bool
            static constexpr std::uintptr_t m_flNextTeleportTime         = 0x0014; // GameTime_t
            static constexpr std::uintptr_t m_iTeleportStage             = 0x0018; // int32
            static constexpr std::uintptr_t m_bCheatState                = 0x001C; // bool
            static constexpr std::uintptr_t m_bIsFirstSpawnGroupToLoad   = 0x001D; // bool
            static constexpr std::uintptr_t m_hCurrentNode               = 0x0038; // CHandle<CPointCommentaryNode>
            static constexpr std::uintptr_t m_hActiveCommentaryNode      = 0x003C; // CHandle<CPointCommentaryNode>
            static constexpr std::uintptr_t m_hLastCommentaryNode        = 0x0040; // CHandle<CPointCommentaryNode>
            static constexpr std::uintptr_t m_vecNodes                   = 0x0048; // CUtlVector<CHandle<CPointCommentaryNode>>
        };

        // Has VTable
        // Has Trivial Destructor
        class CPhysicsShake {
        public:
            static constexpr std::uintptr_t m_force = 0x0008; // Vector
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CGameScriptedMoveData {
        public:
            static constexpr std::uintptr_t m_vAccumulatedRootMotion           = 0x0000; // Vector
            static constexpr std::uintptr_t m_angAccumulatedRootMotionRotation = 0x000C; // QAngle
            static constexpr std::uintptr_t m_vSrc                             = 0x0018; // VectorWS
            static constexpr std::uintptr_t m_angSrc                           = 0x0024; // QAngle
            static constexpr std::uintptr_t m_angCurrent                       = 0x0030; // QAngle
            static constexpr std::uintptr_t m_flLockedSpeed                    = 0x003C; // float32
            static constexpr std::uintptr_t m_flAngRate                        = 0x0040; // float32
            static constexpr std::uintptr_t m_flDuration                       = 0x0044; // float32
            static constexpr std::uintptr_t m_flStartTime                      = 0x0048; // GameTime_t
            static constexpr std::uintptr_t m_bActive                          = 0x004C; // bool
            static constexpr std::uintptr_t m_bTeleportOnEnd                   = 0x004D; // bool
            static constexpr std::uintptr_t m_bIgnoreRotation                  = 0x004E; // bool
            static constexpr std::uintptr_t m_bSuccess                         = 0x004F; // bool
            static constexpr std::uintptr_t m_nForcedCrouchState               = 0x0050; // ForcedCrouchState_t
            static constexpr std::uintptr_t m_bIgnoreCollisions                = 0x0054; // bool
            static constexpr std::uintptr_t m_vDest                            = 0x0058; // Vector
            static constexpr std::uintptr_t m_angDst                           = 0x0064; // QAngle
            static constexpr std::uintptr_t m_hDestEntity                      = 0x0070; // CHandle<CBaseEntity>
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct CGameScriptedMoveDef_t {
        public:
            static constexpr std::uintptr_t m_vDestOffset        = 0x0000; // Vector
            static constexpr std::uintptr_t m_hDestEntity        = 0x000C; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_angDest            = 0x0010; // QAngle
            static constexpr std::uintptr_t m_flDuration         = 0x001C; // float32
            static constexpr std::uintptr_t m_flAngRate          = 0x0020; // float32
            static constexpr std::uintptr_t m_flMoveSpeed        = 0x0024; // float32
            static constexpr std::uintptr_t m_bAimDisabled       = 0x0028; // bool
            static constexpr std::uintptr_t m_bIgnoreRotation    = 0x0029; // bool
            static constexpr std::uintptr_t m_nForcedCrouchState = 0x002C; // ForcedCrouchState_t
        };

        // Has VTable
        // Has Trivial Destructor
        class CConstantForceController {
        public:
            static constexpr std::uintptr_t m_linear      = 0x000C; // Vector
            static constexpr std::uintptr_t m_angular     = 0x0018; // RotationVector
            static constexpr std::uintptr_t m_linearSave  = 0x0024; // Vector
            static constexpr std::uintptr_t m_angularSave = 0x0030; // RotationVector
        };

        // Has Trivial Destructor
        // Local Type Scope
        class CPhysMotorAPI {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Local Type Scope
        class CPulsePhysicsConstraintsFuncs {
        public:
        };

        // Has Trivial Destructor
        // Local Type Scope
        class CPointTeleportAPI {
        public:
        };

        // Has Trivial Destructor
        // Local Type Scope
        class CTakeDamageInfoAPI {
        public:
        };

        // Has Trivial Destructor
        // Construct Allowed
        // Local Type Scope
        struct CPulseCell_Outflow_ListenForEntityOutput__CursorState_t {
        public:
            static constexpr std::uintptr_t m_entity = 0x0000; // CHandle<CBaseEntity>
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Local Type Scope
        class CPulseServerFuncs {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Local Type Scope
        class CPulseServerFuncs_Sounds {
        public:
        };

        // Has Trivial Destructor
        // Construct Allowed
        // Local Type Scope
        struct CPulseCell_Outflow_PlaySceneBase__CursorState_t {
        public:
            static constexpr std::uintptr_t m_sceneInstance = 0x0000; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_mainActor     = 0x0004; // CHandle<CBaseEntity>
        };

        // Construct Allowed
        // Global Type Scope
        struct PulseScriptedSequenceData_t {
        public:
            static constexpr std::uintptr_t m_nActorID              = 0x0000; // int32
            static constexpr std::uintptr_t m_szPreIdleSequence     = 0x0008; // CUtlString
            static constexpr std::uintptr_t m_szEntrySequence       = 0x0010; // CUtlString
            static constexpr std::uintptr_t m_szSequence            = 0x0018; // CUtlString
            static constexpr std::uintptr_t m_szExitSequence        = 0x0020; // CUtlString
            static constexpr std::uintptr_t m_nMoveTo               = 0x0028; // ScriptedMoveTo_t
            static constexpr std::uintptr_t m_nMoveToGait           = 0x002C; // SharedMovementGait_t
            static constexpr std::uintptr_t m_nHeldWeaponBehavior   = 0x0030; // ScriptedHeldWeaponBehavior_t
            static constexpr std::uintptr_t m_bLoopPreIdleSequence  = 0x0034; // bool
            static constexpr std::uintptr_t m_bLoopActionSequence   = 0x0035; // bool
            static constexpr std::uintptr_t m_bLoopPostIdleSequence = 0x0036; // bool
            static constexpr std::uintptr_t m_bIgnoreLookAt         = 0x0037; // bool
        };

        // Has Trivial Destructor
        // Construct Allowed
        // Local Type Scope
        struct CPulseCell_Outflow_ScriptedSequence__CursorState_t {
        public:
            static constexpr std::uintptr_t m_scriptedSequence = 0x0000; // CHandle<CBaseEntity>
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        struct dynpitchvol_base_t {
        public:
            static constexpr std::uintptr_t preset      = 0x0000; // int32
            static constexpr std::uintptr_t pitchrun    = 0x0004; // int32
            static constexpr std::uintptr_t pitchstart  = 0x0008; // int32
            static constexpr std::uintptr_t spinup      = 0x000C; // int32
            static constexpr std::uintptr_t spindown    = 0x0010; // int32
            static constexpr std::uintptr_t volrun      = 0x0014; // int32
            static constexpr std::uintptr_t volstart    = 0x0018; // int32
            static constexpr std::uintptr_t fadein      = 0x001C; // int32
            static constexpr std::uintptr_t fadeout     = 0x0020; // int32
            static constexpr std::uintptr_t lfotype     = 0x0024; // int32
            static constexpr std::uintptr_t lforate     = 0x0028; // int32
            static constexpr std::uintptr_t lfomodpitch = 0x002C; // int32
            static constexpr std::uintptr_t lfomodvol   = 0x0030; // int32
            static constexpr std::uintptr_t cspinup     = 0x0034; // int32
            static constexpr std::uintptr_t cspincount  = 0x0038; // int32
            static constexpr std::uintptr_t pitch       = 0x003C; // int32
            static constexpr std::uintptr_t spinupsav   = 0x0040; // int32
            static constexpr std::uintptr_t spindownsav = 0x0044; // int32
            static constexpr std::uintptr_t pitchfrac   = 0x0048; // int32
            static constexpr std::uintptr_t vol         = 0x004C; // int32
            static constexpr std::uintptr_t fadeinsav   = 0x0050; // int32
            static constexpr std::uintptr_t fadeoutsav  = 0x0054; // int32
            static constexpr std::uintptr_t volfrac     = 0x0058; // int32
            static constexpr std::uintptr_t lfofrac     = 0x005C; // int32
            static constexpr std::uintptr_t lfomult     = 0x0060; // int32
        };

        // Has Trivial Destructor
        struct ResponseContext_t {
        public:
            static constexpr std::uintptr_t m_iszName         = 0x0000; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszValue        = 0x0008; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_fExpirationTime = 0x0010; // GameTime_t
        };

        // Has Trivial Destructor
        struct Relationship_t {
        public:
            static constexpr std::uintptr_t disposition = 0x0000; // Disposition_t
            static constexpr std::uintptr_t priority    = 0x0004; // int32
        };

        // Has Trivial Destructor
        struct thinkfunc_t {
        public:
            static constexpr std::uintptr_t m_hFn            = 0x0008; // HSCRIPT
            static constexpr std::uintptr_t m_nContext       = 0x0010; // CUtlStringToken
            static constexpr std::uintptr_t m_nNextThinkTick = 0x0014; // GameTick_t
            static constexpr std::uintptr_t m_nLastThinkTick = 0x0018; // GameTick_t
        };

        // Has VTable
        // Local Type Scope
        class CCollisionProperty {
        public:
            static constexpr std::uintptr_t m_collisionAttribute          = 0x0010; // VPhysicsCollisionAttribute_t
            static constexpr std::uintptr_t m_vecMins                     = 0x0040; // Vector
            static constexpr std::uintptr_t m_vecMaxs                     = 0x004C; // Vector
            static constexpr std::uintptr_t m_usSolidFlags                = 0x005A; // uint8
            static constexpr std::uintptr_t m_nSolidType                  = 0x005B; // SolidType_t
            static constexpr std::uintptr_t m_triggerBloat                = 0x005C; // uint8
            static constexpr std::uintptr_t m_nSurroundType               = 0x005D; // SurroundingBoundsType_t
            static constexpr std::uintptr_t m_CollisionGroup              = 0x005E; // uint8
            static constexpr std::uintptr_t m_nEnablePhysics              = 0x005F; // uint8
            static constexpr std::uintptr_t m_flBoundingRadius            = 0x0060; // float32
            static constexpr std::uintptr_t m_vecSpecifiedSurroundingMins = 0x0064; // Vector
            static constexpr std::uintptr_t m_vecSpecifiedSurroundingMaxs = 0x0070; // Vector
            static constexpr std::uintptr_t m_vecSurroundingMaxs          = 0x007C; // Vector
            static constexpr std::uintptr_t m_vecSurroundingMins          = 0x0088; // Vector
            static constexpr std::uintptr_t m_vCapsuleCenter1             = 0x0094; // Vector
            static constexpr std::uintptr_t m_vCapsuleCenter2             = 0x00A0; // Vector
            static constexpr std::uintptr_t m_flCapsuleRadius             = 0x00AC; // float32
        };

        class CPathMoverEntitySpawn {
        public:
            static constexpr std::uintptr_t hMover           = 0x0000; // CHandle<CFuncMover>
            static constexpr std::uintptr_t vecOtherEntities = 0x0008; // CUtlVector<CHandle<CBaseEntity>>
        };

        // Has Trivial Destructor
        // Local Type Scope
        class CFuncMoverAPI {
        public:
        };

        // Has Trivial Destructor
        struct RotatorHistoryEntry_t {
        public:
            static constexpr std::uintptr_t qInvChange          = 0x0000; // Quaternion
            static constexpr std::uintptr_t flTimeRotationStart = 0x0010; // GameTime_t
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        struct RotatorQueueEntry_t {
        public:
            static constexpr std::uintptr_t qTarget = 0x0000; // Quaternion
            static constexpr std::uintptr_t eSpace  = 0x0010; // RotatorTargetSpace_t
        };

        // Has VTable
        // Has Trivial Destructor
        struct locksound_t {
        public:
            static constexpr std::uintptr_t sLockedSound   = 0x0008; // CUtlSymbolLarge
            static constexpr std::uintptr_t sUnlockedSound = 0x0010; // CUtlSymbolLarge
            static constexpr std::uintptr_t flwaitSound    = 0x0018; // GameTime_t
        };

        // Has Trivial Destructor
        // Local Type Scope
        class CTestPulseIOAPI {
        public:
        };

        // Has Trivial Destructor
        struct DynamicVolumeDef_t {
        public:
            static constexpr std::uintptr_t m_source           = 0x0000; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_target           = 0x0004; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_nHullIdx         = 0x0008; // int32
            static constexpr std::uintptr_t m_vSourceAnchorPos = 0x000C; // Vector
            static constexpr std::uintptr_t m_vTargetAnchorPos = 0x0018; // Vector
            static constexpr std::uintptr_t m_nAreaSrc         = 0x0024; // uint32
            static constexpr std::uintptr_t m_nAreaDst         = 0x0028; // uint32
            static constexpr std::uintptr_t m_bAttached        = 0x002C; // bool
        };

        // Has VTable
        // Has Trivial Destructor
        class CMotorController {
        public:
            static constexpr std::uintptr_t m_speed         = 0x0008; // float32
            static constexpr std::uintptr_t m_maxTorque     = 0x000C; // float32
            static constexpr std::uintptr_t m_axis          = 0x0010; // VectorWS
            static constexpr std::uintptr_t m_inertiaFactor = 0x001C; // float32
        };

        // Has Trivial Destructor
        class VelocitySampler {
        public:
            static constexpr std::uintptr_t m_prevSample       = 0x0000; // Vector
            static constexpr std::uintptr_t m_fPrevSampleTime  = 0x000C; // GameTime_t
            static constexpr std::uintptr_t m_fIdealSampleRate = 0x0010; // float32
        };

        // Has VTable
        // Has Trivial Destructor
        class SimpleConstraintSoundProfile {
        public:
            static constexpr std::uintptr_t m_flKeyPointMinSoundThreshold  = 0x0008; // float32
            static constexpr std::uintptr_t m_flKeyPointMaxSoundThreshold  = 0x000C; // float32
            static constexpr std::uintptr_t m_reversalSoundThresholdSmall  = 0x0010; // float32
            static constexpr std::uintptr_t m_reversalSoundThresholdMedium = 0x0014; // float32
            static constexpr std::uintptr_t m_reversalSoundThresholdLarge  = 0x0018; // float32
        };

        // Has VTable
        class ConstraintSoundInfo {
        public:
            static constexpr std::uintptr_t m_vSampler               = 0x0008; // VelocitySampler
            static constexpr std::uintptr_t m_soundProfile           = 0x0020; // SimpleConstraintSoundProfile
            static constexpr std::uintptr_t m_forwardAxis            = 0x0040; // Vector
            static constexpr std::uintptr_t m_iszTravelSoundFwd      = 0x0050; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszTravelSoundBack     = 0x0058; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszReversalSoundSmall  = 0x0078; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszReversalSoundMedium = 0x0080; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszReversalSoundLarge  = 0x0088; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bPlayTravelSound       = 0x0090; // bool
            static constexpr std::uintptr_t m_bPlayReversalSound     = 0x0091; // bool
        };

        // Has VTable
        // Has Trivial Destructor
        class CSmoothFunc {
        public:
            static constexpr std::uintptr_t m_flSmoothAmplitude     = 0x0008; // float32
            static constexpr std::uintptr_t m_flSmoothBias          = 0x000C; // float32
            static constexpr std::uintptr_t m_flSmoothDuration      = 0x0010; // float32
            static constexpr std::uintptr_t m_flSmoothRemainingTime = 0x0014; // float32
            static constexpr std::uintptr_t m_nSmoothDir            = 0x0018; // int32
        };

        // Has Trivial Destructor
        struct magnetted_objects_t {
        public:
            static constexpr std::uintptr_t hEntity = 0x0008; // CHandle<CBaseEntity>
        };

        // Construct Allowed
        // Local Type Scope
        class CScenePayloadVData {
        public:
            static constexpr std::uintptr_t m_sSceneFile = 0x0000; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCChoreoSceneResource>>
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct SceneRequestHandle_t {
        public:
            static constexpr std::uintptr_t m_Value = 0x0000; // int32
        };

        // Has Trivial Destructor
        class CSceneRequest {
        public:
            static constexpr std::uintptr_t m_szPayloadTypeName = 0x0000; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_uHandle           = 0x0008; // SceneRequestHandle_t
            static constexpr std::uintptr_t m_state             = 0x000C; // ESceneRequestState_t
        };

        // Has VTable
        // Has Trivial Destructor
        // Local Type Scope
        struct sky3dparams_t {
        public:
            static constexpr std::uintptr_t scale                              = 0x0008; // int16
            static constexpr std::uintptr_t origin                             = 0x000C; // Vector
            static constexpr std::uintptr_t bClip3DSkyBoxNearToWorldFar        = 0x0018; // bool
            static constexpr std::uintptr_t flClip3DSkyBoxNearToWorldFarOffset = 0x001C; // float32
            static constexpr std::uintptr_t fog                                = 0x0020; // fogparams_t
            static constexpr std::uintptr_t m_nWorldGroupID                    = 0x0088; // WorldGroupId_t
        };

        // Has Trivial Destructor
        struct lerpdata_t {
        public:
            static constexpr std::uintptr_t m_hEnt           = 0x0000; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_MoveType       = 0x0004; // MoveType_t
            static constexpr std::uintptr_t m_flStartTime    = 0x0008; // GameTime_t
            static constexpr std::uintptr_t m_vecStartOrigin = 0x000C; // Vector
            static constexpr std::uintptr_t m_qStartRot      = 0x0020; // Quaternion
            static constexpr std::uintptr_t m_nFXIndex       = 0x0030; // ParticleIndex_t
        };

        // Has VTable
        // Has Trivial Destructor
        class CMovementStatsProperty {
        public:
            static constexpr std::uintptr_t m_nUseCounter          = 0x0010; // int32
            static constexpr std::uintptr_t m_emaMovementDirection = 0x0014; // CVectorExponentialMovingAverage
        };

        // Has Trivial Destructor
        class CRelativeLocation {
        public:
            static constexpr std::uintptr_t m_Type            = 0x0018; // RelativeLocationType_t
            static constexpr std::uintptr_t m_vRelativeOffset = 0x001C; // Vector
            static constexpr std::uintptr_t m_vWorldSpacePos  = 0x0028; // VectorWS
            static constexpr std::uintptr_t m_hEntity         = 0x0034; // CHandle<CBaseEntity>
        };

        // Has VTable
        // Has Trivial Destructor
        // Local Type Scope
        struct VPhysicsCollisionAttribute_t {
        public:
            static constexpr std::uintptr_t m_nInteractsAs           = 0x0008; // uint64
            static constexpr std::uintptr_t m_nInteractsWith         = 0x0010; // uint64
            static constexpr std::uintptr_t m_nInteractsExclude      = 0x0018; // uint64
            static constexpr std::uintptr_t m_nEntityId              = 0x0020; // uint32
            static constexpr std::uintptr_t m_nOwnerId               = 0x0024; // uint32
            static constexpr std::uintptr_t m_nHierarchyId           = 0x0028; // uint16
            static constexpr std::uintptr_t m_nDetailLayerMask       = 0x002A; // uint16
            static constexpr std::uintptr_t m_nDetailLayerMaskType   = 0x002C; // uint8
            static constexpr std::uintptr_t m_nTargetDetailLayer     = 0x002D; // uint8
            static constexpr std::uintptr_t m_nCollisionGroup        = 0x002E; // uint8
            static constexpr std::uintptr_t m_nCollisionFunctionMask = 0x002F; // uint8
        };

        // Has VTable
        // Has Trivial Destructor
        // Local Type Scope
        class CEffectData {
        public:
            static constexpr std::uintptr_t m_vOrigin          = 0x0008; // VectorWS
            static constexpr std::uintptr_t m_vStart           = 0x0014; // VectorWS
            static constexpr std::uintptr_t m_vNormal          = 0x0020; // Vector
            static constexpr std::uintptr_t m_vAngles          = 0x002C; // QAngle
            static constexpr std::uintptr_t m_hEntity          = 0x0038; // CEntityHandle
            static constexpr std::uintptr_t m_hOtherEntity     = 0x003C; // CEntityHandle
            static constexpr std::uintptr_t m_flScale          = 0x0040; // float32
            static constexpr std::uintptr_t m_flMagnitude      = 0x0044; // float32
            static constexpr std::uintptr_t m_flRadius         = 0x0048; // float32
            static constexpr std::uintptr_t m_nSurfaceProp     = 0x004C; // CUtlStringToken
            static constexpr std::uintptr_t m_nEffectIndex     = 0x0050; // CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>
            static constexpr std::uintptr_t m_nDamageType      = 0x0058; // uint32
            static constexpr std::uintptr_t m_nPenetrate       = 0x005C; // uint8
            static constexpr std::uintptr_t m_nMaterial        = 0x005E; // uint16
            static constexpr std::uintptr_t m_nHitBox          = 0x0060; // int16
            static constexpr std::uintptr_t m_nColor           = 0x0062; // uint8
            static constexpr std::uintptr_t m_fFlags           = 0x0063; // uint8
            static constexpr std::uintptr_t m_nAttachmentIndex = 0x0064; // AttachmentHandle_t
            static constexpr std::uintptr_t m_nAttachmentName  = 0x0068; // CUtlStringToken
            static constexpr std::uintptr_t m_iEffectName      = 0x006C; // uint16
            static constexpr std::uintptr_t m_nExplosionType   = 0x006E; // uint8
        };

        // Has VTable
        // Local Type Scope
        class CEnvWindShared {
        public:
            static constexpr std::uintptr_t m_flStartTime        = 0x0008; // GameTime_t
            static constexpr std::uintptr_t m_iWindSeed          = 0x000C; // uint32
            static constexpr std::uintptr_t m_iMinWind           = 0x0010; // uint16
            static constexpr std::uintptr_t m_iMaxWind           = 0x0012; // uint16
            static constexpr std::uintptr_t m_windRadius         = 0x0014; // int32
            static constexpr std::uintptr_t m_iMinGust           = 0x0018; // uint16
            static constexpr std::uintptr_t m_iMaxGust           = 0x001A; // uint16
            static constexpr std::uintptr_t m_flMinGustDelay     = 0x001C; // float32
            static constexpr std::uintptr_t m_flMaxGustDelay     = 0x0020; // float32
            static constexpr std::uintptr_t m_flGustDuration     = 0x0024; // float32
            static constexpr std::uintptr_t m_iGustDirChange     = 0x0028; // uint16
            static constexpr std::uintptr_t m_iInitialWindDir    = 0x002A; // uint16
            static constexpr std::uintptr_t m_flInitialWindSpeed = 0x002C; // float32
            static constexpr std::uintptr_t m_location           = 0x0030; // Vector
            static constexpr std::uintptr_t m_OnGustStart        = 0x0040; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnGustEnd          = 0x0058; // CEntityIOOutput
            static constexpr std::uintptr_t m_hEntOwner          = 0x0070; // CHandle<CBaseEntity>
        };

        // Has VTable
        // Local Type Scope
        struct shard_model_desc_t {
        public:
            static constexpr std::uintptr_t m_nModelID               = 0x0008; // int32
            static constexpr std::uintptr_t m_hMaterialBase          = 0x0010; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_hMaterialDamageOverlay = 0x0018; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_solid                  = 0x0020; // ShardSolid_t
            static constexpr std::uintptr_t m_vecPanelSize           = 0x0024; // Vector2D
            static constexpr std::uintptr_t m_vecStressPositionA     = 0x002C; // Vector2D
            static constexpr std::uintptr_t m_vecStressPositionB     = 0x0034; // Vector2D
            static constexpr std::uintptr_t m_vecPanelVertices       = 0x0040; // CNetworkUtlVectorBase<Vector2D>
            static constexpr std::uintptr_t m_vInitialPanelVertices  = 0x0058; // CNetworkUtlVectorBase<Vector4D>
            static constexpr std::uintptr_t m_flGlassHalfThickness   = 0x0070; // float32
            static constexpr std::uintptr_t m_bHasParent             = 0x0074; // bool
            static constexpr std::uintptr_t m_bParentFrozen          = 0x0075; // bool
            static constexpr std::uintptr_t m_SurfacePropStringToken = 0x0078; // CUtlStringToken
        };

        // Has VTable
        class CShatterGlassShard {
        public:
            static constexpr std::uintptr_t m_hShardHandle                 = 0x0008; // uint32
            static constexpr std::uintptr_t m_vecPanelVertices             = 0x0010; // CUtlVector<Vector2D>
            static constexpr std::uintptr_t m_vLocalPanelSpaceOrigin       = 0x0028; // Vector2D
            static constexpr std::uintptr_t m_hModel                       = 0x0030; // CStrongHandle<InfoForResourceTypeCModel>
            static constexpr std::uintptr_t m_hPhysicsEntity               = 0x0038; // CHandle<CShatterGlassShardPhysics>
            static constexpr std::uintptr_t m_hParentPanel                 = 0x003C; // CHandle<CFuncShatterglass>
            static constexpr std::uintptr_t m_hParentShard                 = 0x0040; // uint32
            static constexpr std::uintptr_t m_ShatterStressType            = 0x0044; // ShatterGlassStressType
            static constexpr std::uintptr_t m_vecStressVelocity            = 0x0048; // Vector
            static constexpr std::uintptr_t m_bCreatedModel                = 0x0054; // bool
            static constexpr std::uintptr_t m_flLongestEdge                = 0x0058; // float32
            static constexpr std::uintptr_t m_flShortestEdge               = 0x005C; // float32
            static constexpr std::uintptr_t m_flLongestAcross              = 0x0060; // float32
            static constexpr std::uintptr_t m_flShortestAcross             = 0x0064; // float32
            static constexpr std::uintptr_t m_flSumOfAllEdges              = 0x0068; // float32
            static constexpr std::uintptr_t m_flArea                       = 0x006C; // float32
            static constexpr std::uintptr_t m_nOnFrameEdge                 = 0x0070; // OnFrame
            static constexpr std::uintptr_t m_nSubShardGeneration          = 0x0074; // int32
            static constexpr std::uintptr_t m_vecAverageVertPosition       = 0x0078; // Vector2D
            static constexpr std::uintptr_t m_bAverageVertPositionIsValid  = 0x0080; // bool
            static constexpr std::uintptr_t m_vecPanelSpaceStressPositionA = 0x0084; // Vector2D
            static constexpr std::uintptr_t m_vecPanelSpaceStressPositionB = 0x008C; // Vector2D
            static constexpr std::uintptr_t m_bStressPositionAIsValid      = 0x0094; // bool
            static constexpr std::uintptr_t m_bStressPositionBIsValid      = 0x0095; // bool
            static constexpr std::uintptr_t m_bFlaggedForRemoval           = 0x0096; // bool
            static constexpr std::uintptr_t m_flPhysicsEntitySpawnedAtTime = 0x0098; // GameTime_t
            static constexpr std::uintptr_t m_hEntityHittingMe             = 0x009C; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_vecNeighbors                 = 0x00A0; // CUtlVector<uint32>
        };

        // Has VTable
        // Is Absract
        // Local Type Scope
        class CGameRules {
        public:
            static constexpr std::uintptr_t __m_pChainEntity           = 0x0008; // CNetworkVarChainer
            static constexpr std::uintptr_t m_szQuestName              = 0x0030; // char[128]
            static constexpr std::uintptr_t m_nQuestPhase              = 0x00B0; // int32
            static constexpr std::uintptr_t m_nLastMatchTime           = 0x00B4; // uint32
            static constexpr std::uintptr_t m_nLastMatchTime_MatchID64 = 0x00B8; // uint64
            static constexpr std::uintptr_t m_nTotalPausedTicks        = 0x00C0; // int32
            static constexpr std::uintptr_t m_nPauseStartTick          = 0x00C4; // int32
            static constexpr std::uintptr_t m_bGamePaused              = 0x00C8; // bool
        };

        // Has VTable
        // Local Type Scope
        class CGlowProperty {
        public:
            static constexpr std::uintptr_t m_fGlowColor                  = 0x0008; // Vector
            static constexpr std::uintptr_t m_iGlowType                   = 0x0030; // int32
            static constexpr std::uintptr_t m_iGlowTeam                   = 0x0034; // int32
            static constexpr std::uintptr_t m_nGlowRange                  = 0x0038; // int32
            static constexpr std::uintptr_t m_nGlowRangeMin               = 0x003C; // int32
            static constexpr std::uintptr_t m_glowColorOverride           = 0x0040; // Color
            static constexpr std::uintptr_t m_bFlashing                   = 0x0044; // bool
            static constexpr std::uintptr_t m_flGlowTime                  = 0x0048; // float32
            static constexpr std::uintptr_t m_flGlowStartTime             = 0x004C; // float32
            static constexpr std::uintptr_t m_bEligibleForScreenHighlight = 0x0050; // bool
            static constexpr std::uintptr_t m_bGlowing                    = 0x0051; // bool
        };

        // Has Trivial Destructor
        struct WrappedPhysicsJoint_t {
        public:
        };

        // Has VTable
        // Has Trivial Destructor
        // Local Type Scope
        struct fogparams_t {
        public:
            static constexpr std::uintptr_t dirPrimary            = 0x0008; // Vector
            static constexpr std::uintptr_t colorPrimary          = 0x0014; // Color
            static constexpr std::uintptr_t colorSecondary        = 0x0018; // Color
            static constexpr std::uintptr_t colorPrimaryLerpTo    = 0x001C; // Color
            static constexpr std::uintptr_t colorSecondaryLerpTo  = 0x0020; // Color
            static constexpr std::uintptr_t start                 = 0x0024; // float32
            static constexpr std::uintptr_t end                   = 0x0028; // float32
            static constexpr std::uintptr_t farz                  = 0x002C; // float32
            static constexpr std::uintptr_t maxdensity            = 0x0030; // float32
            static constexpr std::uintptr_t exponent              = 0x0034; // float32
            static constexpr std::uintptr_t HDRColorScale         = 0x0038; // float32
            static constexpr std::uintptr_t skyboxFogFactor       = 0x003C; // float32
            static constexpr std::uintptr_t skyboxFogFactorLerpTo = 0x0040; // float32
            static constexpr std::uintptr_t startLerpTo           = 0x0044; // float32
            static constexpr std::uintptr_t endLerpTo             = 0x0048; // float32
            static constexpr std::uintptr_t maxdensityLerpTo      = 0x004C; // float32
            static constexpr std::uintptr_t lerptime              = 0x0050; // GameTime_t
            static constexpr std::uintptr_t duration              = 0x0054; // float32
            static constexpr std::uintptr_t blendtobackground     = 0x0058; // float32
            static constexpr std::uintptr_t scattering            = 0x005C; // float32
            static constexpr std::uintptr_t locallightscale       = 0x0060; // float32
            static constexpr std::uintptr_t enable                = 0x0064; // bool
            static constexpr std::uintptr_t blend                 = 0x0065; // bool
            static constexpr std::uintptr_t m_bPadding2           = 0x0066; // bool
            static constexpr std::uintptr_t m_bPadding            = 0x0067; // bool
        };

        // Has VTable
        // Has Trivial Destructor
        struct sndopvarlatchdata_t {
        public:
            static constexpr std::uintptr_t m_iszStack    = 0x0008; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszOperator = 0x0010; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszOpvar    = 0x0018; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flVal       = 0x0020; // float32
            static constexpr std::uintptr_t m_vPos        = 0x0024; // Vector
        };

        // Has VTable
        // Is Absract
        class IRagdoll {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        struct ragdollelement_t {
        public:
            static constexpr std::uintptr_t originParentSpace = 0x0000; // Vector
            static constexpr std::uintptr_t parentIndex       = 0x0020; // int32
            static constexpr std::uintptr_t m_flRadius        = 0x0024; // float32
            static constexpr std::uintptr_t m_nHeight         = 0x0028; // int32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        struct ragdollhierarchyjoint_t {
        public:
            static constexpr std::uintptr_t parentIndex = 0x0000; // int32
            static constexpr std::uintptr_t childIndex  = 0x0004; // int32
        };

        struct ragdoll_t {
        public:
            static constexpr std::uintptr_t list            = 0x0000; // CUtlVector<ragdollelement_t>
            static constexpr std::uintptr_t hierarchyJoints = 0x0018; // CUtlVector<ragdollhierarchyjoint_t>
            static constexpr std::uintptr_t boneIndex       = 0x0030; // CUtlVector<int32>
            static constexpr std::uintptr_t allowStretch    = 0x0048; // bool
            static constexpr std::uintptr_t unused          = 0x0049; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        struct PhysicsRagdollPose_t {
        public:
            static constexpr std::uintptr_t m_Transforms           = 0x0008; // CNetworkUtlVectorBase<CTransform>
            static constexpr std::uintptr_t m_hOwner               = 0x0020; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_bSetFromDebugHistory = 0x0024; // bool
        };

        class CSceneEventInfo {
        public:
            static constexpr std::uintptr_t m_iLayer              = 0x0000; // int32
            static constexpr std::uintptr_t m_iPriority           = 0x0004; // int32
            static constexpr std::uintptr_t m_hSequence           = 0x0008; // HSequence
            static constexpr std::uintptr_t m_flWeight            = 0x000C; // float32
            static constexpr std::uintptr_t m_hAnimClip           = 0x0010; // CStrongHandle<InfoForResourceTypeCNmClip>
            static constexpr std::uintptr_t m_sAnimClipSlot       = 0x0018; // CGlobalSymbol
            static constexpr std::uintptr_t m_sAnimClipSlotWeight = 0x0020; // CGlobalSymbol
            static constexpr std::uintptr_t m_bHasArrived         = 0x0028; // bool
            static constexpr std::uintptr_t m_nType               = 0x002C; // int32
            static constexpr std::uintptr_t m_flNext              = 0x0030; // GameTime_t
            static constexpr std::uintptr_t m_bIsGesture          = 0x0034; // bool
            static constexpr std::uintptr_t m_bShouldRemove       = 0x0035; // bool
            static constexpr std::uintptr_t m_hTarget             = 0x005C; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_nSceneEventId       = 0x0060; // SceneEventId_t
            static constexpr std::uintptr_t m_bClientSide         = 0x0064; // bool
            static constexpr std::uintptr_t m_bStarted            = 0x0065; // bool
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct SceneEventId_t {
        public:
            static constexpr std::uintptr_t m_Value = 0x0000; // uint32
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct AmmoIndex_t {
        public:
            static constexpr std::uintptr_t m_Value = 0x0000; // int8
        };

        // Has VTable
        // Construct Allowed
        class CEntitySubclassVDataBase {
        public:
        };

        // Has Trivial Destructor
        struct RagdollCreationParams_t {
        public:
            static constexpr std::uintptr_t m_vForce                      = 0x0000; // Vector
            static constexpr std::uintptr_t m_nForceBone                  = 0x000C; // int32
            static constexpr std::uintptr_t m_bForceCurrentWorldTransform = 0x0010; // bool
            static constexpr std::uintptr_t m_bUseLRURetirement           = 0x0011; // bool
            static constexpr std::uintptr_t m_nHealthToGrant              = 0x0014; // int32
        };

        // Has Trivial Destructor
        struct hudtextparms_t {
        public:
            static constexpr std::uintptr_t color1  = 0x0000; // Color
            static constexpr std::uintptr_t color2  = 0x0004; // Color
            static constexpr std::uintptr_t effect  = 0x0008; // uint8
            static constexpr std::uintptr_t channel = 0x0009; // uint8
            static constexpr std::uintptr_t x       = 0x000C; // float32
            static constexpr std::uintptr_t y       = 0x0010; // float32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        struct CodeGenAABB_t {
        public:
            static constexpr std::uintptr_t m_vMinBounds = 0x0000; // Vector
            static constexpr std::uintptr_t m_vMaxBounds = 0x000C; // Vector
        };

        // Has Trivial Destructor
        class CSimpleSimTimer {
        public:
            static constexpr std::uintptr_t m_flNext        = 0x0000; // GameTime_t
            static constexpr std::uintptr_t m_nWorldGroupId = 0x0004; // WorldGroupId_t
        };

        // Has VTable
        class CCopyRecipientFilter {
        public:
            static constexpr std::uintptr_t m_Flags                             = 0x0008; // int32
            static constexpr std::uintptr_t m_Recipients                        = 0x0010; // CUtlVector<CPlayerSlot>
            static constexpr std::uintptr_t m_slotPlayerExcludedDueToPrediction = 0x0030; // CPlayerSlot
        };

        // Has Trivial Destructor
        class CSoundEnvelope {
        public:
            static constexpr std::uintptr_t m_current     = 0x0000; // float32
            static constexpr std::uintptr_t m_target      = 0x0004; // float32
            static constexpr std::uintptr_t m_rate        = 0x0008; // float32
            static constexpr std::uintptr_t m_forceupdate = 0x000C; // bool
        };

        // Has VTable
        class CSoundPatch {
        public:
            static constexpr std::uintptr_t m_pitch                  = 0x0008; // CSoundEnvelope
            static constexpr std::uintptr_t m_volume                 = 0x0018; // CSoundEnvelope
            static constexpr std::uintptr_t m_shutdownTime           = 0x003C; // float32
            static constexpr std::uintptr_t m_flLastTime             = 0x0040; // float32
            static constexpr std::uintptr_t m_iszSoundScriptName     = 0x0048; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hEnt                   = 0x0050; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_soundEntityIndex       = 0x0054; // CEntityIndex
            static constexpr std::uintptr_t m_soundOrigin            = 0x0058; // Vector
            static constexpr std::uintptr_t m_isPlaying              = 0x0064; // int32
            static constexpr std::uintptr_t m_Filter                 = 0x0068; // CCopyRecipientFilter
            static constexpr std::uintptr_t m_flCloseCaptionDuration = 0x00A0; // float32
            static constexpr std::uintptr_t m_bUpdatedSoundOrigin    = 0x00A4; // bool
            static constexpr std::uintptr_t m_iszClassName           = 0x00A8; // CUtlSymbolLarge
        };

        // Has Trivial Destructor
        struct SoundOpvarTraceResult_t {
        public:
            static constexpr std::uintptr_t vPos              = 0x0000; // Vector
            static constexpr std::uintptr_t bDidHit           = 0x000C; // bool
            static constexpr std::uintptr_t flDistSqrToCenter = 0x0010; // float32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        struct AutoRoomDoorwayPairs_t {
        public:
            static constexpr std::uintptr_t vP1 = 0x0000; // Vector
            static constexpr std::uintptr_t vP2 = 0x000C; // Vector
        };

        // Has Trivial Destructor
        struct DestructibleHitGroupToDestroy_t {
        public:
            static constexpr std::uintptr_t m_nHitGroup       = 0x0000; // HitGroup_t
            static constexpr std::uintptr_t m_nMaxDamageLevel = 0x0004; // int32
        };

        // Has VTable
        class CTakeDamageInfo {
        public:
            static constexpr std::uintptr_t m_vecDamageForce                       = 0x0008; // Vector
            static constexpr std::uintptr_t m_vecDamagePosition                    = 0x0014; // VectorWS
            static constexpr std::uintptr_t m_vecReportedPosition                  = 0x0020; // VectorWS
            static constexpr std::uintptr_t m_vecDamageDirection                   = 0x002C; // Vector
            static constexpr std::uintptr_t m_hInflictor                           = 0x0038; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hAttacker                            = 0x003C; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hAbility                             = 0x0040; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_flDamage                             = 0x0044; // float32
            static constexpr std::uintptr_t m_flTotalledDamage                     = 0x0048; // float32
            static constexpr std::uintptr_t m_bitsDamageType                       = 0x004C; // DamageTypes_t
            static constexpr std::uintptr_t m_iDamageCustom                        = 0x0050; // int32
            static constexpr std::uintptr_t m_iAmmoType                            = 0x0054; // AmmoIndex_t
            static constexpr std::uintptr_t m_flOriginalDamage                     = 0x0060; // float32
            static constexpr std::uintptr_t m_bShouldBleed                         = 0x0064; // bool
            static constexpr std::uintptr_t m_bShouldSpark                         = 0x0065; // bool
            static constexpr std::uintptr_t m_nDamageFlags                         = 0x0070; // TakeDamageFlags_t
            static constexpr std::uintptr_t m_iHitGroupId                          = 0x0078; // HitGroup_t
            static constexpr std::uintptr_t m_nNumObjectsPenetrated                = 0x007C; // int32
            static constexpr std::uintptr_t m_flFriendlyFireDamageReductionRatio   = 0x0080; // float32
            static constexpr std::uintptr_t m_bStoppedBullet                       = 0x0084; // bool
            static constexpr std::uintptr_t m_nDestructibleHitGroupsToForceDestroy = 0x0100; // CUtlVector<DestructibleHitGroupToDestroy_t>
            static constexpr std::uintptr_t m_bInTakeDamageFlow                    = 0x0118; // bool
        };

        // Has Trivial Destructor
        class CTakeDamageResult {
        public:
            static constexpr std::uintptr_t m_pOriginatingInfo            = 0x0000; // CTakeDamageInfo*
            static constexpr std::uintptr_t m_nHealthLost                 = 0x0008; // int32
            static constexpr std::uintptr_t m_nHealthBefore               = 0x000C; // int32
            static constexpr std::uintptr_t m_nDamageDealt                = 0x0010; // int32
            static constexpr std::uintptr_t m_flPreModifiedDamage         = 0x0014; // float32
            static constexpr std::uintptr_t m_nTotalledHealthLost         = 0x0018; // int32
            static constexpr std::uintptr_t m_nTotalledDamageDealt        = 0x001C; // int32
            static constexpr std::uintptr_t m_flTotalledPreModifiedDamage = 0x0020; // float32
            static constexpr std::uintptr_t m_bWasDamageSuppressed        = 0x0024; // bool
            static constexpr std::uintptr_t m_bSuppressFlinch             = 0x0025; // bool
            static constexpr std::uintptr_t m_nOverrideFlinchHitGroup     = 0x0028; // HitGroup_t
        };

        struct SummaryTakeDamageInfo_t {
        public:
            static constexpr std::uintptr_t nSummarisedCount = 0x0000; // int32
            static constexpr std::uintptr_t info             = 0x0008; // CTakeDamageInfo
            static constexpr std::uintptr_t result           = 0x0128; // CTakeDamageResult
            static constexpr std::uintptr_t hTarget          = 0x0158; // CHandle<CBaseEntity>
        };

        // Has VTable
        class CTakeDamageSummaryScopeGuard {
        public:
            static constexpr std::uintptr_t m_vecSummaries = 0x0008; // CUtlVector<SummaryTakeDamageInfo_t*>
        };

        // Has VTable
        // Local Type Scope
        class CEconItemAttribute {
        public:
            static constexpr std::uintptr_t m_iAttributeDefinitionIndex = 0x0030; // uint16
            static constexpr std::uintptr_t m_flValue                   = 0x0034; // float32
            static constexpr std::uintptr_t m_flInitialValue            = 0x0038; // float32
            static constexpr std::uintptr_t m_nRefundableCurrency       = 0x003C; // int32
            static constexpr std::uintptr_t m_bSetBonus                 = 0x0040; // bool
        };

        // Has VTable
        // Local Type Scope
        class CAttributeManager {
        public:
            static constexpr std::uintptr_t m_Providers               = 0x0008; // CUtlVector<CHandle<CBaseEntity>>
            static constexpr std::uintptr_t m_iReapplyProvisionParity = 0x0020; // int32
            static constexpr std::uintptr_t m_hOuter                  = 0x0024; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_bPreventLoopback        = 0x0028; // bool
            static constexpr std::uintptr_t m_ProviderType            = 0x002C; // attributeprovidertypes_t
            static constexpr std::uintptr_t m_CachedResults           = 0x0030; // CUtlVector<CAttributeManager::cached_attribute_float_t>
        };

        // Has VTable
        // Local Type Scope
        class CAttributeList {
        public:
            static constexpr std::uintptr_t m_Attributes = 0x0008; // CUtlVectorEmbeddedNetworkVar<CEconItemAttribute>
            static constexpr std::uintptr_t m_pManager   = 0x0070; // CAttributeManager*
        };

        // Has VTable
        // Is Absract
        class IEconItemInterface {
        public:
        };

        // Has Trivial Destructor
        // Local Type Scope
        struct CAttributeManager__cached_attribute_float_t {
        public:
            static constexpr std::uintptr_t flIn        = 0x0000; // float32
            static constexpr std::uintptr_t iAttribHook = 0x0008; // CUtlSymbolLarge
            static constexpr std::uintptr_t flOut       = 0x0010; // float32
        };

        // Has VTable
        // Is Absract
        // Has Trivial Destructor
        class IHasAttributes {
        public:
        };

        // Has VTable
        // Local Type Scope
        struct EntitySpottedState_t {
        public:
            static constexpr std::uintptr_t m_bSpotted       = 0x0008; // bool
            static constexpr std::uintptr_t m_bSpottedByMask = 0x000C; // uint32[2]
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSGameModeRules {
        public:
            static constexpr std::uintptr_t __m_pChainEntity = 0x0008; // CNetworkVarChainer
        };

        // Has VTable
        // Local Type Scope
        class CRetakeGameRules {
        public:
            static constexpr std::uintptr_t m_nMatchSeed            = 0x0138; // int32
            static constexpr std::uintptr_t m_bBlockersPresent      = 0x013C; // bool
            static constexpr std::uintptr_t m_bRoundInProgress      = 0x013D; // bool
            static constexpr std::uintptr_t m_iFirstSecondHalfRound = 0x0140; // int32
            static constexpr std::uintptr_t m_iBombSite             = 0x0144; // int32
            static constexpr std::uintptr_t m_hBombPlanter          = 0x0148; // CHandle<CCSPlayerPawn>
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        class QuestProgress {
        public:
        };

        // Has VTable
        // Local Type Scope
        struct CSPerRoundStats_t {
        public:
            static constexpr std::uintptr_t m_iKills          = 0x0030; // int32
            static constexpr std::uintptr_t m_iDeaths         = 0x0034; // int32
            static constexpr std::uintptr_t m_iAssists        = 0x0038; // int32
            static constexpr std::uintptr_t m_iDamage         = 0x003C; // int32
            static constexpr std::uintptr_t m_iEquipmentValue = 0x0040; // int32
            static constexpr std::uintptr_t m_iMoneySaved     = 0x0044; // int32
            static constexpr std::uintptr_t m_iKillReward     = 0x0048; // int32
            static constexpr std::uintptr_t m_iLiveTime       = 0x004C; // int32
            static constexpr std::uintptr_t m_iHeadShotKills  = 0x0050; // int32
            static constexpr std::uintptr_t m_iObjective      = 0x0054; // int32
            static constexpr std::uintptr_t m_iCashEarned     = 0x0058; // int32
            static constexpr std::uintptr_t m_iUtilityDamage  = 0x005C; // int32
            static constexpr std::uintptr_t m_iEnemiesFlashed = 0x0060; // int32
        };

        // Has VTable
        // Local Type Scope
        struct PredictedDamageTag_t {
        public:
            static constexpr std::uintptr_t nTagTick                           = 0x0030; // GameTick_t
            static constexpr std::uintptr_t flFlinchModSmall                   = 0x0034; // float32
            static constexpr std::uintptr_t flFlinchModLarge                   = 0x0038; // float32
            static constexpr std::uintptr_t flFriendlyFireDamageReductionRatio = 0x003C; // float32
        };

        // Has VTable
        // Local Type Scope
        struct WeaponPurchaseCount_t {
        public:
            static constexpr std::uintptr_t m_nItemDefIndex = 0x0030; // uint16
            static constexpr std::uintptr_t m_nCount        = 0x0032; // uint16
        };

        // Has VTable
        // Local Type Scope
        struct WeaponPurchaseTracker_t {
        public:
            static constexpr std::uintptr_t m_weaponPurchases = 0x0008; // CUtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
        };

        // Has VTable
        // Local Type Scope
        struct SellbackPurchaseEntry_t {
        public:
            static constexpr std::uintptr_t m_unDefIdx    = 0x0030; // uint16
            static constexpr std::uintptr_t m_nCost       = 0x0034; // int32
            static constexpr std::uintptr_t m_nPrevArmor  = 0x0038; // int32
            static constexpr std::uintptr_t m_bPrevHelmet = 0x003C; // bool
            static constexpr std::uintptr_t m_hItem       = 0x0040; // CEntityHandle
        };

        // Has VTable
        // Has Trivial Destructor
        // Local Type Scope
        class CCSPlayerLegacyJump {
        public:
            static constexpr std::uintptr_t m_bOldJumpPressed   = 0x0010; // bool
            static constexpr std::uintptr_t m_flJumpPressedTime = 0x0014; // float32
        };

        // Has VTable
        // Has Trivial Destructor
        // Local Type Scope
        class CCSPlayerModernJump {
        public:
            static constexpr std::uintptr_t m_nLastActualJumpPressTick  = 0x0010; // GameTick_t
            static constexpr std::uintptr_t m_flLastActualJumpPressFrac = 0x0014; // float32
            static constexpr std::uintptr_t m_nLastUsableJumpPressTick  = 0x0018; // GameTick_t
            static constexpr std::uintptr_t m_flLastUsableJumpPressFrac = 0x001C; // float32
            static constexpr std::uintptr_t m_nLastLandedTick           = 0x0020; // GameTick_t
            static constexpr std::uintptr_t m_flLastLandedFrac          = 0x0024; // float32
            static constexpr std::uintptr_t m_flLastLandedVelocityX     = 0x0028; // float32
            static constexpr std::uintptr_t m_flLastLandedVelocityY     = 0x002C; // float32
            static constexpr std::uintptr_t m_flLastLandedVelocityZ     = 0x0030; // float32
        };

        struct CSAdditionalPerRoundStats_t {
        public:
            static constexpr std::uintptr_t m_numChickensKilled      = 0x0000; // int32
            static constexpr std::uintptr_t m_killsWhileBlind        = 0x0004; // int32
            static constexpr std::uintptr_t m_bombCarrierkills       = 0x0008; // int32
            static constexpr std::uintptr_t m_flBurnDamageInflicted  = 0x000C; // float32
            static constexpr std::uintptr_t m_flBlastDamageInflicted = 0x0010; // float32
            static constexpr std::uintptr_t m_iDinks                 = 0x0014; // int32
            static constexpr std::uintptr_t m_bFreshStartThisRound   = 0x0018; // bool
            static constexpr std::uintptr_t m_bBombPlantedAndAlive   = 0x0019; // bool
            static constexpr std::uintptr_t m_nDefuseStarts          = 0x001C; // int32
            static constexpr std::uintptr_t m_nHostagePickUps        = 0x0020; // int32
            static constexpr std::uintptr_t m_numTeammatesFlashed    = 0x0024; // int32
        };

        // Has VTable
        // Local Type Scope
        class CDamageRecord {
        public:
            static constexpr std::uintptr_t m_PlayerDamager              = 0x0030; // CHandle<CCSPlayerPawn>
            static constexpr std::uintptr_t m_PlayerRecipient            = 0x0034; // CHandle<CCSPlayerPawn>
            static constexpr std::uintptr_t m_hPlayerControllerDamager   = 0x0038; // CHandle<CCSPlayerController>
            static constexpr std::uintptr_t m_hPlayerControllerRecipient = 0x003C; // CHandle<CCSPlayerController>
            static constexpr std::uintptr_t m_szPlayerDamagerName        = 0x0040; // CUtlString
            static constexpr std::uintptr_t m_szPlayerRecipientName      = 0x0048; // CUtlString
            static constexpr std::uintptr_t m_DamagerXuid                = 0x0050; // uint64
            static constexpr std::uintptr_t m_RecipientXuid              = 0x0058; // uint64
            static constexpr std::uintptr_t m_flBulletsDamage            = 0x0060; // float32
            static constexpr std::uintptr_t m_flDamage                   = 0x0064; // float32
            static constexpr std::uintptr_t m_flActualHealthRemoved      = 0x0068; // float32
            static constexpr std::uintptr_t m_iNumHits                   = 0x006C; // int32
            static constexpr std::uintptr_t m_iLastBulletUpdate          = 0x0070; // int32
            static constexpr std::uintptr_t m_bIsOtherEnemy              = 0x0074; // bool
            static constexpr std::uintptr_t m_killType                   = 0x0075; // EKillTypes_t
        };

        // Has VTable
        // Local Type Scope
        struct ServerAuthoritativeWeaponSlot_t {
        public:
            static constexpr std::uintptr_t unClass      = 0x0030; // uint16
            static constexpr std::uintptr_t unSlot       = 0x0032; // uint16
            static constexpr std::uintptr_t unItemDefIdx = 0x0034; // uint16
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Local Type Scope
        struct CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t {
        public:
            static constexpr std::uintptr_t pItem = 0x0000; // CEconItemView*
            static constexpr std::uintptr_t team  = 0x0008; // uint16
            static constexpr std::uintptr_t slot  = 0x000A; // uint16
        };

        // Has Trivial Destructor
        class CFiringModeFloat {
        public:
            static constexpr std::uintptr_t m_flValues = 0x0000; // float32[2]
        };

        // Has Trivial Destructor
        class CFiringModeInt {
        public:
            static constexpr std::uintptr_t m_nValues = 0x0000; // int32[2]
        };

        // Has VTable
        class CIronSightController {
        public:
            static constexpr std::uintptr_t m_bIronSightAvailable     = 0x0008; // bool
            static constexpr std::uintptr_t m_flIronSightAmount       = 0x000C; // float32
            static constexpr std::uintptr_t m_flIronSightAmountGained = 0x0010; // float32
            static constexpr std::uintptr_t m_flIronSightAmountBiased = 0x0014; // float32
        };

        class CHintMessage {
        public:
            static constexpr std::uintptr_t m_hintString = 0x0000; // char*
            static constexpr std::uintptr_t m_args       = 0x0008; // CUtlVector<char*>
            static constexpr std::uintptr_t m_duration   = 0x0020; // float32
        };

        class CHintMessageQueue {
        public:
            static constexpr std::uintptr_t m_tmMessageEnd      = 0x0000; // float32
            static constexpr std::uintptr_t m_messages          = 0x0008; // CUtlVector<CHintMessage*>
            static constexpr std::uintptr_t m_pPlayerController = 0x0020; // CBasePlayerController*
        };

        // Has VTable
        // Is Absract
        class CBaseIssue {
        public:
            static constexpr std::uintptr_t m_szTypeString       = 0x0020; // char[64]
            static constexpr std::uintptr_t m_szDetailsString    = 0x0060; // char[260]
            static constexpr std::uintptr_t m_iNumYesVotes       = 0x0164; // int32
            static constexpr std::uintptr_t m_iNumNoVotes        = 0x0168; // int32
            static constexpr std::uintptr_t m_iNumPotentialVotes = 0x016C; // int32
            static constexpr std::uintptr_t m_pVoteController    = 0x0170; // CVoteController*
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Local Type Scope
        class CCSPointPulseAPI {
        public:
        };

        // Has VTable
        // Is Absract
        // Local Type Scope
        class CBot {
        public:
            static constexpr std::uintptr_t m_pController       = 0x0010; // CCSPlayerController*
            static constexpr std::uintptr_t m_pPlayer           = 0x0018; // CCSPlayerPawn*
            static constexpr std::uintptr_t m_bHasSpawned       = 0x0020; // bool
            static constexpr std::uintptr_t m_id                = 0x0024; // uint32
            static constexpr std::uintptr_t m_isRunning         = 0x00C0; // bool
            static constexpr std::uintptr_t m_isCrouching       = 0x00C1; // bool
            static constexpr std::uintptr_t m_forwardSpeed      = 0x00C4; // float32
            static constexpr std::uintptr_t m_leftSpeed         = 0x00C8; // float32
            static constexpr std::uintptr_t m_verticalSpeed     = 0x00CC; // float32
            static constexpr std::uintptr_t m_buttonFlags       = 0x00D0; // uint64
            static constexpr std::uintptr_t m_jumpTimestamp     = 0x00D8; // float32
            static constexpr std::uintptr_t m_viewForward       = 0x00DC; // Vector
            static constexpr std::uintptr_t m_postureStackIndex = 0x00F8; // int32
        };

        // Has VTable
        // Is Absract
        class CBtNode {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CScriptComponent : public CEntityComponent {
        public:
            static constexpr std::uintptr_t m_scriptClassName = 0x0030; // CUtlSymbolLarge
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
        class CBaseEntity : public CEntityInstance {
        public:
            static constexpr std::uintptr_t m_CBodyComponent                  = 0x0038; // CBodyComponent*
            static constexpr std::uintptr_t m_NetworkTransmitComponent        = 0x0040; // CNetworkTransmitComponent
            static constexpr std::uintptr_t m_aThinkFunctions                 = 0x0250; // CUtlVector<thinkfunc_t>
            static constexpr std::uintptr_t m_iCurrentThinkContext            = 0x0268; // int32
            static constexpr std::uintptr_t m_nLastThinkTick                  = 0x026C; // GameTick_t
            static constexpr std::uintptr_t m_bDisabledContextThinks          = 0x0270; // bool
            static constexpr std::uintptr_t m_isSteadyState                   = 0x0280; // CTypedBitVec<64>
            static constexpr std::uintptr_t m_lastNetworkChange               = 0x0288; // float32
            static constexpr std::uintptr_t m_ResponseContexts                = 0x0298; // CUtlVector<ResponseContext_t>
            static constexpr std::uintptr_t m_iszResponseContext              = 0x02B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iHealth                         = 0x02D8; // int32
            static constexpr std::uintptr_t m_iMaxHealth                      = 0x02DC; // int32
            static constexpr std::uintptr_t m_lifeState                       = 0x02E0; // uint8
            static constexpr std::uintptr_t m_flDamageAccumulator             = 0x02E4; // float32
            static constexpr std::uintptr_t m_bTakesDamage                    = 0x02E8; // bool
            static constexpr std::uintptr_t m_nTakeDamageFlags                = 0x02F0; // TakeDamageFlags_t
            static constexpr std::uintptr_t m_nPlatformType                   = 0x02F8; // EntityPlatformTypes_t
            static constexpr std::uintptr_t m_MoveCollide                     = 0x02FA; // MoveCollide_t
            static constexpr std::uintptr_t m_MoveType                        = 0x02FB; // MoveType_t
            static constexpr std::uintptr_t m_nActualMoveType                 = 0x02FC; // MoveType_t
            static constexpr std::uintptr_t m_nWaterTouch                     = 0x02FD; // uint8
            static constexpr std::uintptr_t m_nSlimeTouch                     = 0x02FE; // uint8
            static constexpr std::uintptr_t m_bRestoreInHierarchy             = 0x02FF; // bool
            static constexpr std::uintptr_t m_target                          = 0x0300; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hDamageFilter                   = 0x0308; // CHandle<CBaseFilter>
            static constexpr std::uintptr_t m_iszDamageFilterName             = 0x0310; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flMoveDoneTime                  = 0x0318; // float32
            static constexpr std::uintptr_t m_nSubclassID                     = 0x031C; // CUtlStringToken
            static constexpr std::uintptr_t m_flAnimTime                      = 0x0328; // float32
            static constexpr std::uintptr_t m_flSimulationTime                = 0x032C; // float32
            static constexpr std::uintptr_t m_flCreateTime                    = 0x0330; // GameTime_t
            static constexpr std::uintptr_t m_bClientSideRagdoll              = 0x0334; // bool
            static constexpr std::uintptr_t m_ubInterpolationFrame            = 0x0335; // uint8
            static constexpr std::uintptr_t m_vPrevVPhysicsUpdatePos          = 0x0338; // Vector
            static constexpr std::uintptr_t m_iTeamNum                        = 0x0344; // uint8
            static constexpr std::uintptr_t m_iGlobalname                     = 0x0348; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iSentToClients                  = 0x0350; // int32
            static constexpr std::uintptr_t m_flSpeed                         = 0x0354; // float32
            static constexpr std::uintptr_t m_sUniqueHammerID                 = 0x0358; // CUtlString
            static constexpr std::uintptr_t m_spawnflags                      = 0x0360; // uint32
            static constexpr std::uintptr_t m_nNextThinkTick                  = 0x0364; // GameTick_t
            static constexpr std::uintptr_t m_nSimulationTick                 = 0x0368; // int32
            static constexpr std::uintptr_t m_OnKilled                        = 0x0370; // CEntityIOOutput
            static constexpr std::uintptr_t m_fFlags                          = 0x0388; // uint32
            static constexpr std::uintptr_t m_vecAbsVelocity                  = 0x038C; // Vector
            static constexpr std::uintptr_t m_vecVelocity                     = 0x0398; // CNetworkVelocityVector
            static constexpr std::uintptr_t m_vecBaseVelocity                 = 0x03C8; // Vector
            static constexpr std::uintptr_t m_nPushEnumCount                  = 0x03D4; // int32
            static constexpr std::uintptr_t m_pCollision                      = 0x03D8; // CCollisionProperty*
            static constexpr std::uintptr_t m_hEffectEntity                   = 0x03E0; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hOwnerEntity                    = 0x03E4; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_fEffects                        = 0x03E8; // uint32
            static constexpr std::uintptr_t m_hGroundEntity                   = 0x03EC; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_nGroundBodyIndex                = 0x03F0; // int32
            static constexpr std::uintptr_t m_flFriction                      = 0x03F4; // float32
            static constexpr std::uintptr_t m_flElasticity                    = 0x03F8; // float32
            static constexpr std::uintptr_t m_flGravityScale                  = 0x03FC; // float32
            static constexpr std::uintptr_t m_flTimeScale                     = 0x0400; // float32
            static constexpr std::uintptr_t m_flWaterLevel                    = 0x0404; // float32
            static constexpr std::uintptr_t m_bGravityDisabled                = 0x0408; // bool
            static constexpr std::uintptr_t m_bAnimatedEveryTick              = 0x0409; // bool
            static constexpr std::uintptr_t m_flActualGravityScale            = 0x040C; // float32
            static constexpr std::uintptr_t m_bGravityActuallyDisabled        = 0x0410; // bool
            static constexpr std::uintptr_t m_bDisableLowViolence             = 0x0411; // bool
            static constexpr std::uintptr_t m_nWaterType                      = 0x0412; // uint8
            static constexpr std::uintptr_t m_iEFlags                         = 0x0414; // int32
            static constexpr std::uintptr_t m_OnUser1                         = 0x0418; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnUser2                         = 0x0430; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnUser3                         = 0x0448; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnUser4                         = 0x0460; // CEntityIOOutput
            static constexpr std::uintptr_t m_iInitialTeamNum                 = 0x0478; // int32
            static constexpr std::uintptr_t m_flNavIgnoreUntilTime            = 0x047C; // GameTime_t
            static constexpr std::uintptr_t m_vecAngVelocity                  = 0x0480; // QAngle
            static constexpr std::uintptr_t m_bNetworkQuantizeOriginAndAngles = 0x048C; // bool
            static constexpr std::uintptr_t m_bLagCompensate                  = 0x048D; // bool
            static constexpr std::uintptr_t m_pBlocker                        = 0x0490; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_flLocalTime                     = 0x0494; // float32
            static constexpr std::uintptr_t m_flVPhysicsUpdateLocalTime       = 0x0498; // float32
            static constexpr std::uintptr_t m_nBloodType                      = 0x049C; // BloodType
            static constexpr std::uintptr_t m_pPulseGraphInstance             = 0x04A0; // CPulseGraphInstance_ServerEntity*
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
        class CInfoVisibilityBox : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_nMode    = 0x04AC; // int32
            static constexpr std::uintptr_t m_vBoxSize = 0x04B0; // Vector
            static constexpr std::uintptr_t m_bEnabled = 0x04BC; // bool
        };

        // Local Type Scope
        class CPulse_ResumePoint : public CPulse_OutflowConnection {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvLightProbeVolume : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_AmbientCube       = 0x14A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SDF               = 0x14A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SH2_DC            = 0x14B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SH2_R             = 0x14B8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SH2_G             = 0x14C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SH2_B             = 0x14C8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x14D0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x14D8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x14E0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_vBoxMins                             = 0x14E8; // Vector
            static constexpr std::uintptr_t m_Entity_vBoxMaxs                             = 0x14F4; // Vector
            static constexpr std::uintptr_t m_Entity_bMoveable                            = 0x1500; // bool
            static constexpr std::uintptr_t m_Entity_nHandshake                           = 0x1504; // int32
            static constexpr std::uintptr_t m_Entity_nPriority                            = 0x1508; // int32
            static constexpr std::uintptr_t m_Entity_bStartDisabled                       = 0x150C; // bool
            static constexpr std::uintptr_t m_Entity_nLightProbeSizeX                     = 0x1510; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeSizeY                     = 0x1514; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeSizeZ                     = 0x1518; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeAtlasX                    = 0x151C; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeAtlasY                    = 0x1520; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeAtlasZ                    = 0x1524; // int32
            static constexpr std::uintptr_t m_Entity_bEnabled                             = 0x1531; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointPulse : public CBaseEntity {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CRenderComponent : public CEntityComponent {
        public:
            static constexpr std::uintptr_t __m_pChainEntity             = 0x0010; // CNetworkVarChainer
            static constexpr std::uintptr_t m_bIsRenderingWithViewModels = 0x0050; // bool
            static constexpr std::uintptr_t m_nSplitscreenFlags          = 0x0054; // uint32
            static constexpr std::uintptr_t m_bEnableRendering           = 0x0058; // bool
            static constexpr std::uintptr_t m_bInterpolationReadyToDraw  = 0x00A8; // bool
        };

        // Has VTable
        // Local Type Scope
        class CLightComponent : public CEntityComponent {
        public:
            static constexpr std::uintptr_t __m_pChainEntity              = 0x0038; // CNetworkVarChainer
            static constexpr std::uintptr_t m_Color                       = 0x0075; // Color
            static constexpr std::uintptr_t m_SecondaryColor              = 0x0079; // Color
            static constexpr std::uintptr_t m_flBrightness                = 0x0080; // float32
            static constexpr std::uintptr_t m_flBrightnessScale           = 0x0084; // float32
            static constexpr std::uintptr_t m_flBrightnessMult            = 0x0088; // float32
            static constexpr std::uintptr_t m_flRange                     = 0x008C; // float32
            static constexpr std::uintptr_t m_flFalloff                   = 0x0090; // float32
            static constexpr std::uintptr_t m_flAttenuation0              = 0x0094; // float32
            static constexpr std::uintptr_t m_flAttenuation1              = 0x0098; // float32
            static constexpr std::uintptr_t m_flAttenuation2              = 0x009C; // float32
            static constexpr std::uintptr_t m_flTheta                     = 0x00A0; // float32
            static constexpr std::uintptr_t m_flPhi                       = 0x00A4; // float32
            static constexpr std::uintptr_t m_hLightCookie                = 0x00A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_nCascades                   = 0x00B0; // int32
            static constexpr std::uintptr_t m_nCastShadows                = 0x00B4; // int32
            static constexpr std::uintptr_t m_nShadowWidth                = 0x00B8; // int32
            static constexpr std::uintptr_t m_nShadowHeight               = 0x00BC; // int32
            static constexpr std::uintptr_t m_bRenderDiffuse              = 0x00C0; // bool
            static constexpr std::uintptr_t m_nRenderSpecular             = 0x00C4; // int32
            static constexpr std::uintptr_t m_bRenderTransmissive         = 0x00C8; // bool
            static constexpr std::uintptr_t m_flOrthoLightWidth           = 0x00CC; // float32
            static constexpr std::uintptr_t m_flOrthoLightHeight          = 0x00D0; // float32
            static constexpr std::uintptr_t m_nStyle                      = 0x00D4; // int32
            static constexpr std::uintptr_t m_Pattern                     = 0x00D8; // CUtlString
            static constexpr std::uintptr_t m_nCascadeRenderStaticObjects = 0x00E0; // int32
            static constexpr std::uintptr_t m_flShadowCascadeCrossFade    = 0x00E4; // float32
            static constexpr std::uintptr_t m_flShadowCascadeDistanceFade = 0x00E8; // float32
            static constexpr std::uintptr_t m_flShadowCascadeDistance0    = 0x00EC; // float32
            static constexpr std::uintptr_t m_flShadowCascadeDistance1    = 0x00F0; // float32
            static constexpr std::uintptr_t m_flShadowCascadeDistance2    = 0x00F4; // float32
            static constexpr std::uintptr_t m_flShadowCascadeDistance3    = 0x00F8; // float32
            static constexpr std::uintptr_t m_nShadowCascadeResolution0   = 0x00FC; // int32
            static constexpr std::uintptr_t m_nShadowCascadeResolution1   = 0x0100; // int32
            static constexpr std::uintptr_t m_nShadowCascadeResolution2   = 0x0104; // int32
            static constexpr std::uintptr_t m_nShadowCascadeResolution3   = 0x0108; // int32
            static constexpr std::uintptr_t m_bUsesBakedShadowing         = 0x010C; // bool
            static constexpr std::uintptr_t m_nShadowPriority             = 0x0110; // int32
            static constexpr std::uintptr_t m_nBakedShadowIndex           = 0x0114; // int32
            static constexpr std::uintptr_t m_nLightPathUniqueId          = 0x0118; // int32
            static constexpr std::uintptr_t m_nLightMapUniqueId           = 0x011C; // int32
            static constexpr std::uintptr_t m_bRenderToCubemaps           = 0x0120; // bool
            static constexpr std::uintptr_t m_bAllowSSTGeneration         = 0x0121; // bool
            static constexpr std::uintptr_t m_nDirectLight                = 0x0124; // int32
            static constexpr std::uintptr_t m_nIndirectLight              = 0x0128; // int32
            static constexpr std::uintptr_t m_bDynamicBounce              = 0x012C; // bool
            static constexpr std::uintptr_t m_flFadeMinDist               = 0x0130; // float32
            static constexpr std::uintptr_t m_flFadeMaxDist               = 0x0134; // float32
            static constexpr std::uintptr_t m_flShadowFadeMinDist         = 0x0138; // float32
            static constexpr std::uintptr_t m_flShadowFadeMaxDist         = 0x013C; // float32
            static constexpr std::uintptr_t m_bEnabled                    = 0x0140; // bool
            static constexpr std::uintptr_t m_bFlicker                    = 0x0141; // bool
            static constexpr std::uintptr_t m_bPrecomputedFieldsValid     = 0x0142; // bool
            static constexpr std::uintptr_t m_vPrecomputedBoundsMins      = 0x0144; // Vector
            static constexpr std::uintptr_t m_vPrecomputedBoundsMaxs      = 0x0150; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBOrigin       = 0x015C; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBAngles       = 0x0168; // QAngle
            static constexpr std::uintptr_t m_vPrecomputedOBBExtent       = 0x0174; // Vector
            static constexpr std::uintptr_t m_flPrecomputedMaxRange       = 0x0180; // float32
            static constexpr std::uintptr_t m_nFogLightingMode            = 0x0184; // int32
            static constexpr std::uintptr_t m_flFogContributionStength    = 0x0188; // float32
            static constexpr std::uintptr_t m_flNearClipPlane             = 0x018C; // float32
            static constexpr std::uintptr_t m_SkyColor                    = 0x0190; // Color
            static constexpr std::uintptr_t m_flSkyIntensity              = 0x0194; // float32
            static constexpr std::uintptr_t m_SkyAmbientBounce            = 0x0198; // Color
            static constexpr std::uintptr_t m_bUseSecondaryColor          = 0x019C; // bool
            static constexpr std::uintptr_t m_bMixedShadows               = 0x019D; // bool
            static constexpr std::uintptr_t m_flLightStyleStartTime       = 0x01A0; // GameTime_t
            static constexpr std::uintptr_t m_flCapsuleLength             = 0x01A4; // float32
            static constexpr std::uintptr_t m_flMinRoughness              = 0x01A8; // float32
            static constexpr std::uintptr_t m_bPvsModifyEntity            = 0x01B8; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_BaseFlow : public CPulseCell_Base {
        public:
        };

        // Local Type Scope
        class SignatureOutflow_Continue : public CPulse_OutflowConnection {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayerController_ActionTrackingServices : public CPlayerControllerComponent {
        public:
            static constexpr std::uintptr_t m_perRoundStats           = 0x0040; // CUtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
            static constexpr std::uintptr_t m_matchStats              = 0x00C8; // CSMatchStats_t
            static constexpr std::uintptr_t m_iNumRoundKills          = 0x0188; // int32
            static constexpr std::uintptr_t m_iNumRoundKillsHeadshots = 0x018C; // int32
            static constexpr std::uintptr_t m_flTotalRoundDamageDealt = 0x0190; // float32
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
        // Local Type Scope
        class CPulseCell_Step_PublicOutput : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_OutputIndex = 0x0048; // PulseRuntimeOutputIndex_t
        };

        // Has VTable
        // Has Trivial Destructor
        class CAnimEventListener : public CAnimEventListenerBase {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPrecipitationVData : public CEntitySubclassVDataBase {
        public:
            static constexpr std::uintptr_t m_szParticlePrecipitationEffect = 0x0028; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            static constexpr std::uintptr_t m_flInnerDistance               = 0x0108; // float32
            static constexpr std::uintptr_t m_nAttachType                   = 0x010C; // ParticleAttachment_t
            static constexpr std::uintptr_t m_bBatchSameVolumeType          = 0x0110; // bool
            static constexpr std::uintptr_t m_nRTEnvCP                      = 0x0114; // int32
            static constexpr std::uintptr_t m_nRTEnvCPComponent             = 0x0118; // int32
            static constexpr std::uintptr_t m_szModifier                    = 0x0120; // CUtlString
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_ActionTrackingServices : public CPlayerPawnComponent {
        public:
            static constexpr std::uintptr_t m_hLastWeaponBeforeC4AutoSwitch = 0x01F8; // CHandle<CBasePlayerWeapon>
            static constexpr std::uintptr_t m_bIsRescuing                   = 0x0224; // bool
            static constexpr std::uintptr_t m_weaponPurchasesThisMatch      = 0x0228; // WeaponPurchaseTracker_t
            static constexpr std::uintptr_t m_weaponPurchasesThisRound      = 0x0298; // WeaponPurchaseTracker_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Inflow_Yield : public CPulseCell_BaseYieldingInflow {
        public:
            static constexpr std::uintptr_t m_UnyieldResume = 0x0048; // CPulse_ResumePoint
        };

        // Has Trivial Destructor
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_LerpCameraSettings__CursorState_t : public CPulseCell_BaseLerp__CursorState_t {
        public:
            static constexpr std::uintptr_t m_hCamera       = 0x0008; // CHandle<CPointCamera>
            static constexpr std::uintptr_t m_OverlaidStart = 0x000C; // PointCameraSettings_t
            static constexpr std::uintptr_t m_OverlaidEnd   = 0x001C; // PointCameraSettings_t
        };

        // Has VTable
        // Local Type Scope
        class CCSBot : public CBot {
        public:
            static constexpr std::uintptr_t m_eyePosition                      = 0x0108; // VectorWS
            static constexpr std::uintptr_t m_name                             = 0x0114; // char[64]
            static constexpr std::uintptr_t m_combatRange                      = 0x0154; // float32
            static constexpr std::uintptr_t m_isRogue                          = 0x0158; // bool
            static constexpr std::uintptr_t m_rogueTimer                       = 0x0160; // CountdownTimer
            static constexpr std::uintptr_t m_diedLastRound                    = 0x017C; // bool
            static constexpr std::uintptr_t m_safeTime                         = 0x0180; // float32
            static constexpr std::uintptr_t m_wasSafe                          = 0x0184; // bool
            static constexpr std::uintptr_t m_blindFire                        = 0x018C; // bool
            static constexpr std::uintptr_t m_surpriseTimer                    = 0x0190; // CountdownTimer
            static constexpr std::uintptr_t m_bAllowActive                     = 0x01A8; // bool
            static constexpr std::uintptr_t m_isFollowing                      = 0x01A9; // bool
            static constexpr std::uintptr_t m_leader                           = 0x01AC; // CHandle<CCSPlayerPawn>
            static constexpr std::uintptr_t m_followTimestamp                  = 0x01B0; // float32
            static constexpr std::uintptr_t m_allowAutoFollowTime              = 0x01B4; // float32
            static constexpr std::uintptr_t m_hurryTimer                       = 0x01B8; // CountdownTimer
            static constexpr std::uintptr_t m_alertTimer                       = 0x01D0; // CountdownTimer
            static constexpr std::uintptr_t m_sneakTimer                       = 0x01E8; // CountdownTimer
            static constexpr std::uintptr_t m_panicTimer                       = 0x0200; // CountdownTimer
            static constexpr std::uintptr_t m_stateTimestamp                   = 0x0578; // float32
            static constexpr std::uintptr_t m_isAttacking                      = 0x057C; // bool
            static constexpr std::uintptr_t m_isOpeningDoor                    = 0x057D; // bool
            static constexpr std::uintptr_t m_taskEntity                       = 0x0584; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_goalPosition                     = 0x0594; // VectorWS
            static constexpr std::uintptr_t m_goalEntity                       = 0x05A0; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_avoid                            = 0x05A4; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_avoidTimestamp                   = 0x05A8; // float32
            static constexpr std::uintptr_t m_isStopping                       = 0x05AC; // bool
            static constexpr std::uintptr_t m_hasVisitedEnemySpawn             = 0x05AD; // bool
            static constexpr std::uintptr_t m_stillTimer                       = 0x05B0; // IntervalTimer
            static constexpr std::uintptr_t m_bEyeAnglesUnderPathFinderControl = 0x05C0; // bool
            static constexpr std::uintptr_t m_pathIndex                        = 0x5EC0; // int32
            static constexpr std::uintptr_t m_areaEnteredTimestamp             = 0x5EC4; // GameTime_t
            static constexpr std::uintptr_t m_repathTimer                      = 0x5EC8; // CountdownTimer
            static constexpr std::uintptr_t m_avoidFriendTimer                 = 0x5EE0; // CountdownTimer
            static constexpr std::uintptr_t m_isFriendInTheWay                 = 0x5EF8; // bool
            static constexpr std::uintptr_t m_politeTimer                      = 0x5F00; // CountdownTimer
            static constexpr std::uintptr_t m_isWaitingBehindFriend            = 0x5F18; // bool
            static constexpr std::uintptr_t m_pathLadderEnd                    = 0x5F44; // float32
            static constexpr std::uintptr_t m_mustRunTimer                     = 0x5F90; // CountdownTimer
            static constexpr std::uintptr_t m_waitTimer                        = 0x5FA8; // CountdownTimer
            static constexpr std::uintptr_t m_updateTravelDistanceTimer        = 0x5FC0; // CountdownTimer
            static constexpr std::uintptr_t m_playerTravelDistance             = 0x5FD8; // float32[64]
            static constexpr std::uintptr_t m_travelDistancePhase              = 0x60D8; // uint8
            static constexpr std::uintptr_t m_hostageEscortCount               = 0x6270; // uint8
            static constexpr std::uintptr_t m_hostageEscortCountTimestamp      = 0x6274; // float32
            static constexpr std::uintptr_t m_desiredTeam                      = 0x6278; // int32
            static constexpr std::uintptr_t m_hasJoined                        = 0x627C; // bool
            static constexpr std::uintptr_t m_isWaitingForHostage              = 0x627D; // bool
            static constexpr std::uintptr_t m_inhibitWaitingForHostageTimer    = 0x6280; // CountdownTimer
            static constexpr std::uintptr_t m_waitForHostageTimer              = 0x6298; // CountdownTimer
            static constexpr std::uintptr_t m_noisePosition                    = 0x62B0; // Vector
            static constexpr std::uintptr_t m_noiseTravelDistance              = 0x62BC; // float32
            static constexpr std::uintptr_t m_noiseTimestamp                   = 0x62C0; // float32
            static constexpr std::uintptr_t m_noiseSource                      = 0x62C8; // CCSPlayerPawn*
            static constexpr std::uintptr_t m_noiseBendTimer                   = 0x62E0; // CountdownTimer
            static constexpr std::uintptr_t m_bentNoisePosition                = 0x62F8; // Vector
            static constexpr std::uintptr_t m_bendNoisePositionValid           = 0x6304; // bool
            static constexpr std::uintptr_t m_lookAroundStateTimestamp         = 0x6308; // float32
            static constexpr std::uintptr_t m_lookAheadAngle                   = 0x630C; // float32
            static constexpr std::uintptr_t m_forwardAngle                     = 0x6310; // float32
            static constexpr std::uintptr_t m_inhibitLookAroundTimestamp       = 0x6314; // float32
            static constexpr std::uintptr_t m_lookAtSpot                       = 0x631C; // Vector
            static constexpr std::uintptr_t m_lookAtSpotDuration               = 0x632C; // float32
            static constexpr std::uintptr_t m_lookAtSpotTimestamp              = 0x6330; // float32
            static constexpr std::uintptr_t m_lookAtSpotAngleTolerance         = 0x6334; // float32
            static constexpr std::uintptr_t m_lookAtSpotClearIfClose           = 0x6338; // bool
            static constexpr std::uintptr_t m_lookAtSpotAttack                 = 0x6339; // bool
            static constexpr std::uintptr_t m_lookAtDesc                       = 0x6340; // char*
            static constexpr std::uintptr_t m_peripheralTimestamp              = 0x6348; // float32
            static constexpr std::uintptr_t m_approachPointCount               = 0x64D0; // uint8
            static constexpr std::uintptr_t m_approachPointViewPosition        = 0x64D4; // Vector
            static constexpr std::uintptr_t m_viewSteadyTimer                  = 0x64E0; // IntervalTimer
            static constexpr std::uintptr_t m_tossGrenadeTimer                 = 0x64F8; // CountdownTimer
            static constexpr std::uintptr_t m_isAvoidingGrenade                = 0x6518; // CountdownTimer
            static constexpr std::uintptr_t m_spotCheckTimestamp               = 0x6538; // float32
            static constexpr std::uintptr_t m_checkedHidingSpotCount           = 0x6940; // int32
            static constexpr std::uintptr_t m_lookPitch                        = 0x6944; // float32
            static constexpr std::uintptr_t m_lookPitchVel                     = 0x6948; // float32
            static constexpr std::uintptr_t m_lookYaw                          = 0x694C; // float32
            static constexpr std::uintptr_t m_lookYawVel                       = 0x6950; // float32
            static constexpr std::uintptr_t m_targetSpot                       = 0x6954; // Vector
            static constexpr std::uintptr_t m_targetSpotVelocity               = 0x6960; // Vector
            static constexpr std::uintptr_t m_targetSpotPredicted              = 0x696C; // Vector
            static constexpr std::uintptr_t m_aimError                         = 0x6978; // QAngle
            static constexpr std::uintptr_t m_aimGoal                          = 0x6984; // QAngle
            static constexpr std::uintptr_t m_targetSpotTime                   = 0x6990; // GameTime_t
            static constexpr std::uintptr_t m_aimFocus                         = 0x6994; // float32
            static constexpr std::uintptr_t m_aimFocusInterval                 = 0x6998; // float32
            static constexpr std::uintptr_t m_aimFocusNextUpdate               = 0x699C; // GameTime_t
            static constexpr std::uintptr_t m_ignoreEnemiesTimer               = 0x69A8; // CountdownTimer
            static constexpr std::uintptr_t m_enemy                            = 0x69C0; // CHandle<CCSPlayerPawn>
            static constexpr std::uintptr_t m_isEnemyVisible                   = 0x69C4; // bool
            static constexpr std::uintptr_t m_visibleEnemyParts                = 0x69C5; // uint8
            static constexpr std::uintptr_t m_lastEnemyPosition                = 0x69C8; // Vector
            static constexpr std::uintptr_t m_lastSawEnemyTimestamp            = 0x69D4; // float32
            static constexpr std::uintptr_t m_firstSawEnemyTimestamp           = 0x69D8; // float32
            static constexpr std::uintptr_t m_currentEnemyAcquireTimestamp     = 0x69DC; // float32
            static constexpr std::uintptr_t m_enemyDeathTimestamp              = 0x69E0; // float32
            static constexpr std::uintptr_t m_friendDeathTimestamp             = 0x69E4; // float32
            static constexpr std::uintptr_t m_isLastEnemyDead                  = 0x69E8; // bool
            static constexpr std::uintptr_t m_nearbyEnemyCount                 = 0x69EC; // int32
            static constexpr std::uintptr_t m_bomber                           = 0x6BF8; // CHandle<CCSPlayerPawn>
            static constexpr std::uintptr_t m_nearbyFriendCount                = 0x6BFC; // int32
            static constexpr std::uintptr_t m_closestVisibleFriend             = 0x6C00; // CHandle<CCSPlayerPawn>
            static constexpr std::uintptr_t m_closestVisibleHumanFriend        = 0x6C04; // CHandle<CCSPlayerPawn>
            static constexpr std::uintptr_t m_attentionInterval                = 0x6C08; // IntervalTimer
            static constexpr std::uintptr_t m_attacker                         = 0x6C18; // CHandle<CCSPlayerPawn>
            static constexpr std::uintptr_t m_attackedTimestamp                = 0x6C1C; // float32
            static constexpr std::uintptr_t m_burnedByFlamesTimer              = 0x6C20; // IntervalTimer
            static constexpr std::uintptr_t m_lastVictimID                     = 0x6C30; // int32
            static constexpr std::uintptr_t m_isAimingAtEnemy                  = 0x6C34; // bool
            static constexpr std::uintptr_t m_isRapidFiring                    = 0x6C35; // bool
            static constexpr std::uintptr_t m_equipTimer                       = 0x6C38; // IntervalTimer
            static constexpr std::uintptr_t m_zoomTimer                        = 0x6C48; // CountdownTimer
            static constexpr std::uintptr_t m_fireWeaponTimestamp              = 0x6C60; // GameTime_t
            static constexpr std::uintptr_t m_lookForWeaponsOnGroundTimer      = 0x6C68; // CountdownTimer
            static constexpr std::uintptr_t m_bIsSleeping                      = 0x6C80; // bool
            static constexpr std::uintptr_t m_isEnemySniperVisible             = 0x6C81; // bool
            static constexpr std::uintptr_t m_sawEnemySniperTimer              = 0x6C88; // CountdownTimer
            static constexpr std::uintptr_t m_enemyQueueIndex                  = 0x6D40; // uint8
            static constexpr std::uintptr_t m_enemyQueueCount                  = 0x6D41; // uint8
            static constexpr std::uintptr_t m_enemyQueueAttendIndex            = 0x6D42; // uint8
            static constexpr std::uintptr_t m_isStuck                          = 0x6D43; // bool
            static constexpr std::uintptr_t m_stuckTimestamp                   = 0x6D44; // GameTime_t
            static constexpr std::uintptr_t m_stuckSpot                        = 0x6D48; // Vector
            static constexpr std::uintptr_t m_wiggleTimer                      = 0x6D58; // CountdownTimer
            static constexpr std::uintptr_t m_stuckJumpTimer                   = 0x6D70; // CountdownTimer
            static constexpr std::uintptr_t m_nextCleanupCheckTimestamp        = 0x6D88; // GameTime_t
            static constexpr std::uintptr_t m_avgVel                           = 0x6D8C; // float32[10]
            static constexpr std::uintptr_t m_avgVelIndex                      = 0x6DB4; // int32
            static constexpr std::uintptr_t m_avgVelCount                      = 0x6DB8; // int32
            static constexpr std::uintptr_t m_lastOrigin                       = 0x6DBC; // Vector
            static constexpr std::uintptr_t m_lastRadioRecievedTimestamp       = 0x6DCC; // float32
            static constexpr std::uintptr_t m_lastRadioSentTimestamp           = 0x6DD0; // float32
            static constexpr std::uintptr_t m_radioSubject                     = 0x6DD4; // CHandle<CCSPlayerPawn>
            static constexpr std::uintptr_t m_radioPosition                    = 0x6DD8; // Vector
            static constexpr std::uintptr_t m_voiceEndTimestamp                = 0x6DE4; // float32
            static constexpr std::uintptr_t m_lastValidReactionQueueFrame      = 0x6DF0; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvVolumetricFogVolume : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_bActive                        = 0x04A8; // bool
            static constexpr std::uintptr_t m_vBoxMins                       = 0x04AC; // Vector
            static constexpr std::uintptr_t m_vBoxMaxs                       = 0x04B8; // Vector
            static constexpr std::uintptr_t m_bStartDisabled                 = 0x04C4; // bool
            static constexpr std::uintptr_t m_bIndirectUseLPVs               = 0x04C5; // bool
            static constexpr std::uintptr_t m_flStrength                     = 0x04C8; // float32
            static constexpr std::uintptr_t m_nFalloffShape                  = 0x04CC; // int32
            static constexpr std::uintptr_t m_flFalloffExponent              = 0x04D0; // float32
            static constexpr std::uintptr_t m_flHeightFogDepth               = 0x04D4; // float32
            static constexpr std::uintptr_t m_fHeightFogEdgeWidth            = 0x04D8; // float32
            static constexpr std::uintptr_t m_fIndirectLightStrength         = 0x04DC; // float32
            static constexpr std::uintptr_t m_fSunLightStrength              = 0x04E0; // float32
            static constexpr std::uintptr_t m_fNoiseStrength                 = 0x04E4; // float32
            static constexpr std::uintptr_t m_TintColor                      = 0x04E8; // Color
            static constexpr std::uintptr_t m_bOverrideTintColor             = 0x04EC; // bool
            static constexpr std::uintptr_t m_bOverrideIndirectLightStrength = 0x04ED; // bool
            static constexpr std::uintptr_t m_bOverrideSunLightStrength      = 0x04EE; // bool
            static constexpr std::uintptr_t m_bOverrideNoiseStrength         = 0x04EF; // bool
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
        // Local Type Scope
        class CPulseCell_Outflow_CycleOrdered : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_Outputs = 0x0048; // CUtlVector<CPulse_OutflowConnection>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCS2WeaponGraphController : public CAnimGraphControllerBase {
        public:
            static constexpr std::uintptr_t m_action                   = 0x0090; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            static constexpr std::uintptr_t m_bActionReset             = 0x00A8; // CAnimGraph2ParamOptionalRef<bool>
            static constexpr std::uintptr_t m_flWeaponActionSpeedScale = 0x00C0; // CAnimGraph2ParamOptionalRef<float32>
            static constexpr std::uintptr_t m_weaponCategory           = 0x00D8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            static constexpr std::uintptr_t m_weaponType               = 0x00F0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            static constexpr std::uintptr_t m_weaponExtraInfo          = 0x0108; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            static constexpr std::uintptr_t m_flWeaponAmmo             = 0x0120; // CAnimGraph2ParamOptionalRef<float32>
            static constexpr std::uintptr_t m_flWeaponAmmoMax          = 0x0138; // CAnimGraph2ParamOptionalRef<float32>
            static constexpr std::uintptr_t m_flWeaponAmmoReserve      = 0x0150; // CAnimGraph2ParamOptionalRef<float32>
            static constexpr std::uintptr_t m_bWeaponIsSilenced        = 0x0168; // CAnimGraph2ParamOptionalRef<bool>
            static constexpr std::uintptr_t m_flWeaponIronsightAmount  = 0x0180; // CAnimGraph2ParamOptionalRef<float32>
            static constexpr std::uintptr_t m_bIsUsingLegacyModel      = 0x0198; // CAnimGraph2ParamOptionalRef<bool>
            static constexpr std::uintptr_t m_idleVariation            = 0x01B0; // CAnimGraph2ParamOptionalRef<float32>
            static constexpr std::uintptr_t m_deployVariation          = 0x01C8; // CAnimGraph2ParamOptionalRef<float32>
            static constexpr std::uintptr_t m_attackType               = 0x01E0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            static constexpr std::uintptr_t m_attackThrowStrength      = 0x01F8; // CAnimGraph2ParamOptionalRef<float32>
            static constexpr std::uintptr_t m_flAttackVariation        = 0x0210; // CAnimGraph2ParamOptionalRef<float32>
            static constexpr std::uintptr_t m_inspectVariation         = 0x0228; // CAnimGraph2ParamOptionalRef<float32>
            static constexpr std::uintptr_t m_inspectExtraInfo         = 0x0240; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            static constexpr std::uintptr_t m_reloadStage              = 0x0258; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Outflow_CycleRandom : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_Outputs = 0x0048; // CUtlVector<CPulse_OutflowConnection>
        };

        // Has Trivial Destructor
        class CSimTimer : public CSimpleSimTimer {
        public:
            static constexpr std::uintptr_t m_flInterval = 0x0008; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Outflow_CycleShuffled : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_Outputs = 0x0048; // CUtlVector<CPulse_OutflowConnection>
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
        // Local Type Scope
        class CPulseCell_Unknown : public CPulseCell_Base {
        public:
            static constexpr std::uintptr_t m_UnknownKeys = 0x0048; // KeyValues3
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
        // Local Type Scope
        class CScriptedSequence : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_iszEntry                                = 0x04A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszPreIdle                              = 0x04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszPlay                                 = 0x04B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszPostIdle                             = 0x04C0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszModifierToAddOnPlay                  = 0x04C8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszNextScript                           = 0x04D0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszEntity                               = 0x04D8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszSyncGroup                            = 0x04E0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_nMoveTo                                 = 0x04E8; // ScriptedMoveTo_t
            static constexpr std::uintptr_t m_nMoveToGait                             = 0x04EC; // SharedMovementGait_t
            static constexpr std::uintptr_t m_nHeldWeaponBehavior                     = 0x04F0; // ScriptedHeldWeaponBehavior_t
            static constexpr std::uintptr_t m_nForcedCrouchState                      = 0x04F4; // ForcedCrouchState_t
            static constexpr std::uintptr_t m_bIsPlayingPreIdle                       = 0x04F8; // bool
            static constexpr std::uintptr_t m_bIsPlayingEntry                         = 0x04F9; // bool
            static constexpr std::uintptr_t m_bIsPlayingAction                        = 0x04FA; // bool
            static constexpr std::uintptr_t m_bIsPlayingPostIdle                      = 0x04FB; // bool
            static constexpr std::uintptr_t m_bDontRotateOther                        = 0x04FC; // bool
            static constexpr std::uintptr_t m_bIsRepeatable                           = 0x04FD; // bool
            static constexpr std::uintptr_t m_bShouldLeaveCorpse                      = 0x04FE; // bool
            static constexpr std::uintptr_t m_bStartOnSpawn                           = 0x04FF; // bool
            static constexpr std::uintptr_t m_bDisallowInterrupts                     = 0x0500; // bool
            static constexpr std::uintptr_t m_bCanOverrideNPCState                    = 0x0501; // bool
            static constexpr std::uintptr_t m_bDontTeleportAtEnd                      = 0x0502; // bool
            static constexpr std::uintptr_t m_bHighPriority                           = 0x0503; // bool
            static constexpr std::uintptr_t m_bHideDebugComplaints                    = 0x0504; // bool
            static constexpr std::uintptr_t m_bContinueOnDeath                        = 0x0505; // bool
            static constexpr std::uintptr_t m_bLoopPreIdleSequence                    = 0x0506; // bool
            static constexpr std::uintptr_t m_bLoopActionSequence                     = 0x0507; // bool
            static constexpr std::uintptr_t m_bLoopPostIdleSequence                   = 0x0508; // bool
            static constexpr std::uintptr_t m_bSynchPostIdles                         = 0x0509; // bool
            static constexpr std::uintptr_t m_bIgnoreLookAt                           = 0x050A; // bool
            static constexpr std::uintptr_t m_bIgnoreGravity                          = 0x050B; // bool
            static constexpr std::uintptr_t m_bDisableNPCCollisions                   = 0x050C; // bool
            static constexpr std::uintptr_t m_bKeepAnimgraphLockedPost                = 0x050D; // bool
            static constexpr std::uintptr_t m_bDontAddModifiers                       = 0x050E; // bool
            static constexpr std::uintptr_t m_bDisableAimingWhileMoving               = 0x050F; // bool
            static constexpr std::uintptr_t m_bIgnoreRotation                         = 0x0510; // bool
            static constexpr std::uintptr_t m_flRadius                                = 0x0514; // float32
            static constexpr std::uintptr_t m_flRepeat                                = 0x0518; // float32
            static constexpr std::uintptr_t m_flPlayAnimFadeInTime                    = 0x051C; // float32
            static constexpr std::uintptr_t m_flMoveInterpTime                        = 0x0520; // float32
            static constexpr std::uintptr_t m_flAngRate                               = 0x0524; // float32
            static constexpr std::uintptr_t m_flMoveSpeed                             = 0x0528; // float32
            static constexpr std::uintptr_t m_bWaitUntilMoveCompletesToStartAnimation = 0x052C; // bool
            static constexpr std::uintptr_t m_nNotReadySequenceCount                  = 0x0530; // int32
            static constexpr std::uintptr_t m_startTime                               = 0x0534; // GameTime_t
            static constexpr std::uintptr_t m_bWaitForBeginSequence                   = 0x0538; // bool
            static constexpr std::uintptr_t m_saved_effects                           = 0x053C; // int32
            static constexpr std::uintptr_t m_savedFlags                              = 0x0540; // int32
            static constexpr std::uintptr_t m_savedCollisionGroup                     = 0x0544; // int32
            static constexpr std::uintptr_t m_bInterruptable                          = 0x0548; // bool
            static constexpr std::uintptr_t m_sequenceStarted                         = 0x0549; // bool
            static constexpr std::uintptr_t m_bPositionRelativeToOtherEntity          = 0x054A; // bool
            static constexpr std::uintptr_t m_hTargetEnt                              = 0x054C; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hNextCine                               = 0x0550; // CHandle<CScriptedSequence>
            static constexpr std::uintptr_t m_bThinking                               = 0x0554; // bool
            static constexpr std::uintptr_t m_bInitiatedSelfDelete                    = 0x0555; // bool
            static constexpr std::uintptr_t m_bIsTeleportingDueToMoveTo               = 0x0556; // bool
            static constexpr std::uintptr_t m_bAllowCustomInterruptConditions         = 0x0557; // bool
            static constexpr std::uintptr_t m_hForcedTarget                           = 0x0558; // CHandle<CBaseAnimGraph>
            static constexpr std::uintptr_t m_bDontCancelOtherSequences               = 0x055C; // bool
            static constexpr std::uintptr_t m_bForceSynch                             = 0x055D; // bool
            static constexpr std::uintptr_t m_bPreventUpdateYawOnFinish               = 0x055E; // bool
            static constexpr std::uintptr_t m_bEnsureOnNavmeshOnFinish                = 0x055F; // bool
            static constexpr std::uintptr_t m_onDeathBehavior                         = 0x0560; // ScriptedOnDeath_t
            static constexpr std::uintptr_t m_ConflictResponse                        = 0x0564; // ScriptedConflictResponse_t
            static constexpr std::uintptr_t m_OnBeginSequence                         = 0x0568; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnActionStartOrLoop                     = 0x0580; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnEndSequence                           = 0x0598; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnPostIdleEndSequence                   = 0x05B0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnCancelSequence                        = 0x05C8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnCancelFailedSequence                  = 0x05E0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnScriptEvent                           = 0x05F8; // CEntityIOOutput[8]
            static constexpr std::uintptr_t m_matOtherToMain                          = 0x06C0; // CTransform
            static constexpr std::uintptr_t m_hInteractionMainEntity                  = 0x06E0; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_iPlayerDeathBehavior                    = 0x06E4; // int32
            static constexpr std::uintptr_t m_bSkipFadeIn                             = 0x06E8; // bool
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
        // Local Type Scope
        class CSkeletonInstance : public CGameSceneNode {
        public:
            static constexpr std::uintptr_t m_modelState                           = 0x0140; // CModelState
            static constexpr std::uintptr_t m_bIsAnimationEnabled                  = 0x0390; // bool
            static constexpr std::uintptr_t m_bUseParentRenderBounds               = 0x0391; // bool
            static constexpr std::uintptr_t m_bDisableSolidCollisionsForHierarchy  = 0x0392; // bool
            static constexpr std::uintptr_t m_bDirtyMotionType                     = 0x0000; // bitfield:1
            static constexpr std::uintptr_t m_bIsGeneratingLatchedParentSpaceState = 0x0000; // bitfield:1
            static constexpr std::uintptr_t m_materialGroup                        = 0x0394; // CUtlStringToken
            static constexpr std::uintptr_t m_nHitboxSet                           = 0x0398; // uint8
            static constexpr std::uintptr_t m_bForceServerConstraintsEnabled       = 0x03F4; // bool
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
        // Has Trivial Destructor
        class CAnimEventQueueListener : public CAnimEventListenerBase {
        public:
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
        class CNavVolumeVector : public CNavVolume {
        public:
            static constexpr std::uintptr_t m_bHasBeenPreFiltered = 0x0080; // bool
        };

        // Has VTable
        // Is Absract
        // Local Type Scope
        class CPlayer_AutoaimServices : public CPlayerPawnComponent {
        public:
        };

        // Has VTable
        class CNavVolumeSphere : public CNavVolume {
        public:
            static constexpr std::uintptr_t m_vCenter  = 0x0078; // Vector
            static constexpr std::uintptr_t m_flRadius = 0x0084; // float32
        };

        // Has VTable
        // Local Type Scope
        class CBodyComponent : public CEntityComponent {
        public:
            static constexpr std::uintptr_t m_pSceneNode     = 0x0008; // CGameSceneNode*
            static constexpr std::uintptr_t __m_pChainEntity = 0x0048; // CNetworkVarChainer
        };

        // Has VTable
        // Local Type Scope
        class CBodyComponentPoint : public CBodyComponent {
        public:
            static constexpr std::uintptr_t m_sceneNode = 0x0080; // CGameSceneNode
        };

        // Has VTable
        // Local Type Scope
        class CBodyComponentSkeletonInstance : public CBodyComponent {
        public:
            static constexpr std::uintptr_t m_skeletonInstance = 0x0080; // CSkeletonInstance
        };

        // Has VTable
        // Local Type Scope
        class CHitboxComponent : public CEntityComponent {
        public:
            static constexpr std::uintptr_t m_flBoundsExpandRadius = 0x0014; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointCamera : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_FOV                   = 0x04A8; // float32
            static constexpr std::uintptr_t m_Resolution            = 0x04AC; // float32
            static constexpr std::uintptr_t m_bFogEnable            = 0x04B0; // bool
            static constexpr std::uintptr_t m_FogColor              = 0x04B1; // Color
            static constexpr std::uintptr_t m_flFogStart            = 0x04B8; // float32
            static constexpr std::uintptr_t m_flFogEnd              = 0x04BC; // float32
            static constexpr std::uintptr_t m_flFogMaxDensity       = 0x04C0; // float32
            static constexpr std::uintptr_t m_bActive               = 0x04C4; // bool
            static constexpr std::uintptr_t m_bUseScreenAspectRatio = 0x04C5; // bool
            static constexpr std::uintptr_t m_flAspectRatio         = 0x04C8; // float32
            static constexpr std::uintptr_t m_bNoSky                = 0x04CC; // bool
            static constexpr std::uintptr_t m_fBrightness           = 0x04D0; // float32
            static constexpr std::uintptr_t m_flZFar                = 0x04D4; // float32
            static constexpr std::uintptr_t m_flZNear               = 0x04D8; // float32
            static constexpr std::uintptr_t m_bCanHLTVUse           = 0x04DC; // bool
            static constexpr std::uintptr_t m_bAlignWithParent      = 0x04DD; // bool
            static constexpr std::uintptr_t m_bDofEnabled           = 0x04DE; // bool
            static constexpr std::uintptr_t m_flDofNearBlurry       = 0x04E0; // float32
            static constexpr std::uintptr_t m_flDofNearCrisp        = 0x04E4; // float32
            static constexpr std::uintptr_t m_flDofFarCrisp         = 0x04E8; // float32
            static constexpr std::uintptr_t m_flDofFarBlurry        = 0x04EC; // float32
            static constexpr std::uintptr_t m_flDofTiltToGround     = 0x04F0; // float32
            static constexpr std::uintptr_t m_TargetFOV             = 0x04F4; // float32
            static constexpr std::uintptr_t m_DegreesPerSecond      = 0x04F8; // float32
            static constexpr std::uintptr_t m_bIsOn                 = 0x04FC; // bool
            static constexpr std::uintptr_t m_pNext                 = 0x0500; // CPointCamera*
        };

        // Has VTable
        // Local Type Scope
        class CBtActionParachutePositioning : public CBtNode {
        public:
            static constexpr std::uintptr_t m_ActionTimer = 0x0058; // CountdownTimer
        };

        // Has VTable
        // Has Trivial Destructor
        // Local Type Scope
        class CPropDataComponent : public CEntityComponent {
        public:
            static constexpr std::uintptr_t m_flDmgModBullet                     = 0x0010; // float32
            static constexpr std::uintptr_t m_flDmgModClub                       = 0x0014; // float32
            static constexpr std::uintptr_t m_flDmgModExplosive                  = 0x0018; // float32
            static constexpr std::uintptr_t m_flDmgModFire                       = 0x001C; // float32
            static constexpr std::uintptr_t m_iszPhysicsDamageTableName          = 0x0020; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszBasePropData                    = 0x0028; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_nInteractions                      = 0x0030; // int32
            static constexpr std::uintptr_t m_bSpawnMotionDisabled               = 0x0034; // bool
            static constexpr std::uintptr_t m_nDisableTakePhysicsDamageSpawnFlag = 0x0038; // int32
            static constexpr std::uintptr_t m_nMotionDisabledSpawnFlag           = 0x003C; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_PlaySequence : public CPulseCell_BaseYieldingInflow {
        public:
            static constexpr std::uintptr_t m_SequenceName    = 0x0048; // CUtlString
            static constexpr std::uintptr_t m_PulseAnimEvents = 0x0050; // PulseNodeDynamicOutflows_t
            static constexpr std::uintptr_t m_OnFinished      = 0x0068; // CPulse_ResumePoint
            static constexpr std::uintptr_t m_OnCanceled      = 0x00B0; // CPulse_ResumePoint
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CColorCorrection : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_flFadeInDuration     = 0x04A8; // float32
            static constexpr std::uintptr_t m_flFadeOutDuration    = 0x04AC; // float32
            static constexpr std::uintptr_t m_flStartFadeInWeight  = 0x04B0; // float32
            static constexpr std::uintptr_t m_flStartFadeOutWeight = 0x04B4; // float32
            static constexpr std::uintptr_t m_flTimeStartFadeIn    = 0x04B8; // GameTime_t
            static constexpr std::uintptr_t m_flTimeStartFadeOut   = 0x04BC; // GameTime_t
            static constexpr std::uintptr_t m_flMaxWeight          = 0x04C0; // float32
            static constexpr std::uintptr_t m_bStartDisabled       = 0x04C4; // bool
            static constexpr std::uintptr_t m_bEnabled             = 0x04C5; // bool
            static constexpr std::uintptr_t m_bMaster              = 0x04C6; // bool
            static constexpr std::uintptr_t m_bClientSide          = 0x04C7; // bool
            static constexpr std::uintptr_t m_bExclusive           = 0x04C8; // bool
            static constexpr std::uintptr_t m_MinFalloff           = 0x04CC; // float32
            static constexpr std::uintptr_t m_MaxFalloff           = 0x04D0; // float32
            static constexpr std::uintptr_t m_flCurWeight          = 0x04D4; // float32
            static constexpr std::uintptr_t m_netlookupFilename    = 0x04D8; // char[512]
            static constexpr std::uintptr_t m_lookupFilename       = 0x06D8; // CUtlSymbolLarge
        };

        // Has VTable
        // Local Type Scope
        class CTouchExpansionComponent : public CEntityComponent {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTonemapController2 : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_flAutoExposureMin             = 0x04A8; // float32
            static constexpr std::uintptr_t m_flAutoExposureMax             = 0x04AC; // float32
            static constexpr std::uintptr_t m_flExposureAdaptationSpeedUp   = 0x04B0; // float32
            static constexpr std::uintptr_t m_flExposureAdaptationSpeedDown = 0x04B4; // float32
            static constexpr std::uintptr_t m_flTonemapEVSmoothingRange     = 0x04B8; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncTimescale : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_flDesiredTimescale     = 0x04A8; // float32
            static constexpr std::uintptr_t m_flAcceleration         = 0x04AC; // float32
            static constexpr std::uintptr_t m_flMinBlendRate         = 0x04B0; // float32
            static constexpr std::uintptr_t m_flBlendDeltaMultiplier = 0x04B4; // float32
            static constexpr std::uintptr_t m_isStarted              = 0x04B8; // bool
        };

        // Has VTable
        // Local Type Scope
        class CPlayer_CameraServices : public CPlayerPawnComponent {
        public:
            static constexpr std::uintptr_t m_vecCsViewPunchAngle         = 0x0048; // QAngle
            static constexpr std::uintptr_t m_nCsViewPunchAngleTick       = 0x0054; // GameTick_t
            static constexpr std::uintptr_t m_flCsViewPunchAngleTickRatio = 0x0058; // float32
            static constexpr std::uintptr_t m_PlayerFog                   = 0x0060; // fogplayerparams_t
            static constexpr std::uintptr_t m_hColorCorrectionCtrl        = 0x00A0; // CHandle<CColorCorrection>
            static constexpr std::uintptr_t m_hViewEntity                 = 0x00A4; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hTonemapController          = 0x00A8; // CHandle<CTonemapController2>
            static constexpr std::uintptr_t m_audio                       = 0x00B0; // audioparams_t
            static constexpr std::uintptr_t m_PostProcessingVolumes       = 0x0128; // CNetworkUtlVectorBase<CHandle<CPostProcessingVolume>>
            static constexpr std::uintptr_t m_flOldPlayerZ                = 0x0140; // float32
            static constexpr std::uintptr_t m_flOldPlayerViewOffsetZ      = 0x0144; // float32
            static constexpr std::uintptr_t m_hTriggerSoundscapeList      = 0x0160; // CUtlVector<CHandle<CEnvSoundscapeTriggerable>>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_SoundEventStart : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_Type = 0x0048; // SoundEventStartType_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicAuto : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_OnMapSpawn      = 0x04A8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnDemoMapSpawn  = 0x04C0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnNewGame       = 0x04D8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnLoadGame      = 0x04F0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnMapTransition = 0x0508; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnBackgroundMap = 0x0520; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnMultiNewMap   = 0x0538; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnMultiNewRound = 0x0550; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnVREnabled     = 0x0568; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnVRNotEnabled  = 0x0580; // CEntityIOOutput
            static constexpr std::uintptr_t m_globalstate     = 0x0598; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvCubemapFog : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_flEndDistance        = 0x04A8; // float32
            static constexpr std::uintptr_t m_flStartDistance      = 0x04AC; // float32
            static constexpr std::uintptr_t m_flFogFalloffExponent = 0x04B0; // float32
            static constexpr std::uintptr_t m_bHeightFogEnabled    = 0x04B4; // bool
            static constexpr std::uintptr_t m_flFogHeightWidth     = 0x04B8; // float32
            static constexpr std::uintptr_t m_flFogHeightEnd       = 0x04BC; // float32
            static constexpr std::uintptr_t m_flFogHeightStart     = 0x04C0; // float32
            static constexpr std::uintptr_t m_flFogHeightExponent  = 0x04C4; // float32
            static constexpr std::uintptr_t m_flLODBias            = 0x04C8; // float32
            static constexpr std::uintptr_t m_bActive              = 0x04CC; // bool
            static constexpr std::uintptr_t m_bStartDisabled       = 0x04CD; // bool
            static constexpr std::uintptr_t m_flFogMaxOpacity      = 0x04D0; // float32
            static constexpr std::uintptr_t m_nCubemapSourceType   = 0x04D4; // int32
            static constexpr std::uintptr_t m_hSkyMaterial         = 0x04D8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_iszSkyEntity         = 0x04E0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hFogCubemapTexture   = 0x04E8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_bHasHeightFogEnd     = 0x04F0; // bool
            static constexpr std::uintptr_t m_bFirstTime           = 0x04F1; // bool
        };

        // Has VTable
        // Local Type Scope
        class CPlayer_FlashlightServices : public CPlayerPawnComponent {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CPlayer_ItemServices : public CPlayerPawnComponent {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPlayerPing : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_hPlayer       = 0x04B0; // CHandle<CCSPlayerPawn>
            static constexpr std::uintptr_t m_hPingedEntity = 0x04B4; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_iType         = 0x04B8; // int32
            static constexpr std::uintptr_t m_bUrgent       = 0x04BC; // bool
            static constexpr std::uintptr_t m_szPlaceName   = 0x04BD; // char[18]
        };

        // Has VTable
        // Local Type Scope
        class CPlayer_MovementServices : public CPlayerPawnComponent {
        public:
            static constexpr std::uintptr_t m_nImpulse                    = 0x0048; // int32
            static constexpr std::uintptr_t m_nButtons                    = 0x0050; // CInButtonState
            static constexpr std::uintptr_t m_nQueuedButtonDownMask       = 0x0070; // uint64
            static constexpr std::uintptr_t m_nQueuedButtonChangeMask     = 0x0078; // uint64
            static constexpr std::uintptr_t m_nButtonDoublePressed        = 0x0080; // uint64
            static constexpr std::uintptr_t m_pButtonPressedCmdNumber     = 0x0088; // uint32[64]
            static constexpr std::uintptr_t m_nLastCommandNumberProcessed = 0x0188; // uint32
            static constexpr std::uintptr_t m_nToggleButtonDownMask       = 0x0190; // uint64
            static constexpr std::uintptr_t m_flMaxspeed                  = 0x01A0; // float32
            static constexpr std::uintptr_t m_arrForceSubtickMoveWhen     = 0x01A4; // float32[4]
            static constexpr std::uintptr_t m_flForwardMove               = 0x01B4; // float32
            static constexpr std::uintptr_t m_flLeftMove                  = 0x01B8; // float32
            static constexpr std::uintptr_t m_flUpMove                    = 0x01BC; // float32
            static constexpr std::uintptr_t m_vecLastMovementImpulses     = 0x01C0; // Vector
            static constexpr std::uintptr_t m_vecOldViewAngles            = 0x0228; // QAngle
        };

        // Has VTable
        // Local Type Scope
        class CPlayer_MovementServices_Humanoid : public CPlayer_MovementServices {
        public:
            static constexpr std::uintptr_t m_flStepSoundTime     = 0x0240; // float32
            static constexpr std::uintptr_t m_flFallVelocity      = 0x0244; // float32
            static constexpr std::uintptr_t m_groundNormal        = 0x0248; // Vector
            static constexpr std::uintptr_t m_flSurfaceFriction   = 0x0254; // float32
            static constexpr std::uintptr_t m_surfaceProps        = 0x0258; // CUtlStringToken
            static constexpr std::uintptr_t m_nStepside           = 0x0268; // int32
            static constexpr std::uintptr_t m_vecSmoothedVelocity = 0x026C; // Vector
        };

        // Has VTable
        // Local Type Scope
        class CPlayer_ObserverServices : public CPlayerPawnComponent {
        public:
            static constexpr std::uintptr_t m_iObserverMode       = 0x0048; // uint8
            static constexpr std::uintptr_t m_hObserverTarget     = 0x004C; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_iObserverLastMode   = 0x0050; // ObserverMode_t
            static constexpr std::uintptr_t m_bForcedObserverMode = 0x0054; // bool
        };

        // Has VTable
        // Local Type Scope
        class CBodyComponentBaseModelEntity : public CBodyComponentSkeletonInstance {
        public:
        };

        // Has VTable
        // Is Absract
        class CBtNodeComposite : public CBtNode {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CPlayer_UseServices : public CPlayerPawnComponent {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CPulseGraphInstance_ServerEntity : public CBasePulseGraphInstance {
        public:
            static constexpr std::uintptr_t m_hOwner                        = 0x0190; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_bActivated                    = 0x0194; // bool
            static constexpr std::uintptr_t m_sNameFixupStaticPrefix        = 0x0198; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_sNameFixupParent              = 0x01A0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_sNameFixupLocal               = 0x01A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_sProceduralWorldNameForRelays = 0x01B0; // CUtlSymbolLarge
        };

        // Has VTable
        // Local Type Scope
        class CPlayer_WaterServices : public CPlayerPawnComponent {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CPlayer_WeaponServices : public CPlayerPawnComponent {
        public:
            static constexpr std::uintptr_t m_hMyWeapons           = 0x0048; // CNetworkUtlVectorBase<CHandle<CBasePlayerWeapon>>
            static constexpr std::uintptr_t m_hActiveWeapon        = 0x0060; // CHandle<CBasePlayerWeapon>
            static constexpr std::uintptr_t m_hLastWeapon          = 0x0064; // CHandle<CBasePlayerWeapon>
            static constexpr std::uintptr_t m_iAmmo                = 0x0068; // uint16[32]
            static constexpr std::uintptr_t m_bPreventWeaponPickup = 0x00A8; // bool
        };

        // Has VTable
        // Local Type Scope
        class CPulseGraphInstance_GameBlackboard : public CPulseGraphInstance_ServerEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CEmptyGraphController : public CAnimGraphControllerBase {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CBodyComponentBaseAnimGraph : public CBodyComponentSkeletonInstance {
        public:
            static constexpr std::uintptr_t m_animationController = 0x04B0; // CBaseAnimGraphController
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBaseModelEntity : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_CRenderComponent                                   = 0x04A8; // CRenderComponent*
            static constexpr std::uintptr_t m_CHitboxComponent                                   = 0x04B0; // CHitboxComponent
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed0           = 0x04C8; // HitGroup_t
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed1           = 0x04CC; // HitGroup_t
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed2           = 0x04D0; // HitGroup_t
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed3           = 0x04D4; // HitGroup_t
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed4           = 0x04D8; // HitGroup_t
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed0_PartIndex = 0x04DC; // int32
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed1_PartIndex = 0x04E0; // int32
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed2_PartIndex = 0x04E4; // int32
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed3_PartIndex = 0x04E8; // int32
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed4_PartIndex = 0x04EC; // int32
            static constexpr std::uintptr_t m_pDestructiblePartsSystemComponent                  = 0x04F0; // CDestructiblePartsComponent*
            static constexpr std::uintptr_t m_flDissolveStartTime                                = 0x04F8; // GameTime_t
            static constexpr std::uintptr_t m_OnIgnite                                           = 0x0500; // CEntityIOOutput
            static constexpr std::uintptr_t m_nRenderMode                                        = 0x0518; // RenderMode_t
            static constexpr std::uintptr_t m_nRenderFX                                          = 0x0519; // RenderFx_t
            static constexpr std::uintptr_t m_bAllowFadeInView                                   = 0x051A; // bool
            static constexpr std::uintptr_t m_clrRender                                          = 0x0538; // Color
            static constexpr std::uintptr_t m_vecRenderAttributes                                = 0x0540; // CUtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
            static constexpr std::uintptr_t m_bRenderToCubemaps                                  = 0x05A8; // bool
            static constexpr std::uintptr_t m_bNoInterpolate                                     = 0x05A9; // bool
            static constexpr std::uintptr_t m_Collision                                          = 0x05B0; // CCollisionProperty
            static constexpr std::uintptr_t m_Glow                                               = 0x0660; // CGlowProperty
            static constexpr std::uintptr_t m_flGlowBackfaceMult                                 = 0x06B8; // float32
            static constexpr std::uintptr_t m_fadeMinDist                                        = 0x06BC; // float32
            static constexpr std::uintptr_t m_fadeMaxDist                                        = 0x06C0; // float32
            static constexpr std::uintptr_t m_flFadeScale                                        = 0x06C4; // float32
            static constexpr std::uintptr_t m_flShadowStrength                                   = 0x06C8; // float32
            static constexpr std::uintptr_t m_nObjectCulling                                     = 0x06CC; // uint8
            static constexpr std::uintptr_t m_vecViewOffset                                      = 0x06F8; // CNetworkViewOffsetVector
            static constexpr std::uintptr_t m_bvDisabledHitGroups                                = 0x0728; // uint32[1]
        };

        // Has VTable
        // Construct Allowed
        class CBaseAnimGraphDestructibleParts_GraphController : public CAnimGraphControllerBase {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CPathQueryComponent : public CEntityComponent {
        public:
        };

        // Has VTable
        // Is Absract
        class CSkeletonAnimationController : public ISkeletonAnimationController {
        public:
            static constexpr std::uintptr_t m_pSkeletonInstance = 0x0008; // CSkeletonInstance*
        };

        // Has VTable
        // Has Trivial Destructor
        // Local Type Scope
        class CTimeline : public IntervalTimer {
        public:
            static constexpr std::uintptr_t m_flValues         = 0x0010; // float32[64]
            static constexpr std::uintptr_t m_nValueCounts     = 0x0110; // int32[64]
            static constexpr std::uintptr_t m_nBucketCount     = 0x0210; // int32
            static constexpr std::uintptr_t m_flInterval       = 0x0214; // float32
            static constexpr std::uintptr_t m_flFinalValue     = 0x0218; // float32
            static constexpr std::uintptr_t m_nCompressionType = 0x021C; // TimelineCompression_t
            static constexpr std::uintptr_t m_bStopped         = 0x0220; // bool
        };

        // Has VTable
        // Construct Allowed
        class CNmEventConsumerLegacy : public CNmEventConsumer {
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
        class CGradientFog : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_hGradientFogTexture       = 0x04A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_flFogStartDistance        = 0x04B0; // float32
            static constexpr std::uintptr_t m_flFogEndDistance          = 0x04B4; // float32
            static constexpr std::uintptr_t m_bHeightFogEnabled         = 0x04B8; // bool
            static constexpr std::uintptr_t m_flFogStartHeight          = 0x04BC; // float32
            static constexpr std::uintptr_t m_flFogEndHeight            = 0x04C0; // float32
            static constexpr std::uintptr_t m_flFarZ                    = 0x04C4; // float32
            static constexpr std::uintptr_t m_flFogMaxOpacity           = 0x04C8; // float32
            static constexpr std::uintptr_t m_flFogFalloffExponent      = 0x04CC; // float32
            static constexpr std::uintptr_t m_flFogVerticalExponent     = 0x04D0; // float32
            static constexpr std::uintptr_t m_fogColor                  = 0x04D4; // Color
            static constexpr std::uintptr_t m_flFogStrength             = 0x04D8; // float32
            static constexpr std::uintptr_t m_flFadeTime                = 0x04DC; // float32
            static constexpr std::uintptr_t m_bStartDisabled            = 0x04E0; // bool
            static constexpr std::uintptr_t m_bIsEnabled                = 0x04E1; // bool
            static constexpr std::uintptr_t m_bGradientFogNeedsTextures = 0x04E2; // bool
        };

        // Has VTable
        // Construct Allowed
        class CNmEventConsumerAttributes : public CNmEventConsumer {
        public:
        };

        // Has VTable
        class CAI_ExpresserWithFollowup : public CAI_Expresser {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvVolumetricFogController : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_flScattering               = 0x04A8; // float32
            static constexpr std::uintptr_t m_TintColor                  = 0x04AC; // Color
            static constexpr std::uintptr_t m_flAnisotropy               = 0x04B0; // float32
            static constexpr std::uintptr_t m_flFadeSpeed                = 0x04B4; // float32
            static constexpr std::uintptr_t m_flDrawDistance             = 0x04B8; // float32
            static constexpr std::uintptr_t m_flFadeInStart              = 0x04BC; // float32
            static constexpr std::uintptr_t m_flFadeInEnd                = 0x04C0; // float32
            static constexpr std::uintptr_t m_flIndirectStrength         = 0x04C4; // float32
            static constexpr std::uintptr_t m_nVolumeDepth               = 0x04C8; // int32
            static constexpr std::uintptr_t m_fFirstVolumeSliceThickness = 0x04CC; // float32
            static constexpr std::uintptr_t m_nIndirectTextureDimX       = 0x04D0; // int32
            static constexpr std::uintptr_t m_nIndirectTextureDimY       = 0x04D4; // int32
            static constexpr std::uintptr_t m_nIndirectTextureDimZ       = 0x04D8; // int32
            static constexpr std::uintptr_t m_vBoxMins                   = 0x04DC; // Vector
            static constexpr std::uintptr_t m_vBoxMaxs                   = 0x04E8; // Vector
            static constexpr std::uintptr_t m_bActive                    = 0x04F4; // bool
            static constexpr std::uintptr_t m_flStartAnisoTime           = 0x04F8; // GameTime_t
            static constexpr std::uintptr_t m_flStartScatterTime         = 0x04FC; // GameTime_t
            static constexpr std::uintptr_t m_flStartDrawDistanceTime    = 0x0500; // GameTime_t
            static constexpr std::uintptr_t m_flStartAnisotropy          = 0x0504; // float32
            static constexpr std::uintptr_t m_flStartScattering          = 0x0508; // float32
            static constexpr std::uintptr_t m_flStartDrawDistance        = 0x050C; // float32
            static constexpr std::uintptr_t m_flDefaultAnisotropy        = 0x0510; // float32
            static constexpr std::uintptr_t m_flDefaultScattering        = 0x0514; // float32
            static constexpr std::uintptr_t m_flDefaultDrawDistance      = 0x0518; // float32
            static constexpr std::uintptr_t m_bStartDisabled             = 0x051C; // bool
            static constexpr std::uintptr_t m_bEnableIndirect            = 0x051D; // bool
            static constexpr std::uintptr_t m_bIsMaster                  = 0x051E; // bool
            static constexpr std::uintptr_t m_hFogIndirectTexture        = 0x0520; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_nForceRefreshCount         = 0x0528; // int32
            static constexpr std::uintptr_t m_fNoiseSpeed                = 0x052C; // float32
            static constexpr std::uintptr_t m_fNoiseStrength             = 0x0530; // float32
            static constexpr std::uintptr_t m_vNoiseScale                = 0x0534; // Vector
            static constexpr std::uintptr_t m_fWindSpeed                 = 0x0540; // float32
            static constexpr std::uintptr_t m_vWindDirection             = 0x0544; // Vector
            static constexpr std::uintptr_t m_bFirstTime                 = 0x0550; // bool
        };

        // Has VTable
        // Construct Allowed
        class CNmEventConsumerParticle : public CNmEventConsumer {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPlayerVisibility : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_flVisibilityStrength      = 0x04A8; // float32
            static constexpr std::uintptr_t m_flFogDistanceMultiplier   = 0x04AC; // float32
            static constexpr std::uintptr_t m_flFogMaxDensityMultiplier = 0x04B0; // float32
            static constexpr std::uintptr_t m_flFadeTime                = 0x04B4; // float32
            static constexpr std::uintptr_t m_bStartDisabled            = 0x04B8; // bool
            static constexpr std::uintptr_t m_bIsEnabled                = 0x04B9; // bool
        };

        // Has VTable
        // Construct Allowed
        class CNmEventConsumerSound : public CNmEventConsumer {
        public:
        };

        // Has VTable
        class CGameChoreoServices : public IChoreoServices {
        public:
            static constexpr std::uintptr_t m_hOwner             = 0x0008; // CHandle<CBaseAnimGraph>
            static constexpr std::uintptr_t m_hScriptedSequence  = 0x000C; // CHandle<CScriptedSequence>
            static constexpr std::uintptr_t m_scriptState        = 0x0010; // IChoreoServices::ScriptState_t
            static constexpr std::uintptr_t m_choreoState        = 0x0014; // IChoreoServices::ChoreoState_t
            static constexpr std::uintptr_t m_flTimeStartedState = 0x0018; // GameTime_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFogController : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_fog               = 0x04A8; // fogparams_t
            static constexpr std::uintptr_t m_bUseAngles        = 0x0510; // bool
            static constexpr std::uintptr_t m_iChangedVariables = 0x0514; // int32
        };

        // Has VTable
        // Local Type Scope
        class CPulseServerCursor : public CPulseExecCursor {
        public:
            static constexpr std::uintptr_t m_hActivator = 0x00D8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hCaller    = 0x00DC; // CHandle<CBaseEntity>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Step_FollowEntity : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_ParamBoneOrAttachName      = 0x0048; // CUtlString
            static constexpr std::uintptr_t m_ParamBoneOrAttachNameChild = 0x0050; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBreakable : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_CPropDataComponent         = 0x0738; // CPropDataComponent
            static constexpr std::uintptr_t m_Material                   = 0x0778; // Materials
            static constexpr std::uintptr_t m_hBreaker                   = 0x077C; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_Explosion                  = 0x0780; // Explosions
            static constexpr std::uintptr_t m_iszSpawnObject             = 0x0788; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flPressureDelay            = 0x0790; // float32
            static constexpr std::uintptr_t m_iMinHealthDmg              = 0x0794; // int32
            static constexpr std::uintptr_t m_iszPropData                = 0x0798; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_impactEnergyScale          = 0x07A0; // float32
            static constexpr std::uintptr_t m_nOverrideBlockLOS          = 0x07A4; // EOverrideBlockLOS_t
            static constexpr std::uintptr_t m_OnStartDeath               = 0x07A8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnBreak                    = 0x07C0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnHealthChanged            = 0x07D8; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_PerformanceMode            = 0x07F8; // PerformanceMode_t
            static constexpr std::uintptr_t m_hPhysicsAttacker           = 0x07FC; // CHandle<CBasePlayerPawn>
            static constexpr std::uintptr_t m_flLastPhysicsInfluenceTime = 0x0800; // GameTime_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInferno : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_firePositions            = 0x0730; // Vector[64]
            static constexpr std::uintptr_t m_fireParentPositions      = 0x0A30; // Vector[64]
            static constexpr std::uintptr_t m_bFireIsBurning           = 0x0D30; // bool[64]
            static constexpr std::uintptr_t m_BurnNormal               = 0x0D70; // Vector[64]
            static constexpr std::uintptr_t m_fireCount                = 0x1070; // int32
            static constexpr std::uintptr_t m_nInfernoType             = 0x1074; // int32
            static constexpr std::uintptr_t m_nFireEffectTickBegin     = 0x1078; // int32
            static constexpr std::uintptr_t m_nFireLifetime            = 0x107C; // float32
            static constexpr std::uintptr_t m_bInPostEffectTime        = 0x1080; // bool
            static constexpr std::uintptr_t m_bWasCreatedInSmoke       = 0x1081; // bool
            static constexpr std::uintptr_t m_extent                   = 0x1288; // Extent
            static constexpr std::uintptr_t m_damageTimer              = 0x12A0; // CountdownTimer
            static constexpr std::uintptr_t m_damageRampTimer          = 0x12B8; // CountdownTimer
            static constexpr std::uintptr_t m_splashVelocity           = 0x12D0; // Vector
            static constexpr std::uintptr_t m_InitialSplashVelocity    = 0x12DC; // Vector
            static constexpr std::uintptr_t m_startPos                 = 0x12E8; // Vector
            static constexpr std::uintptr_t m_vecOriginalSpawnLocation = 0x12F4; // Vector
            static constexpr std::uintptr_t m_activeTimer              = 0x1300; // IntervalTimer
            static constexpr std::uintptr_t m_fireSpawnOffset          = 0x1310; // int32
            static constexpr std::uintptr_t m_nMaxFlames               = 0x1314; // int32
            static constexpr std::uintptr_t m_nSpreadCount             = 0x1318; // int32
            static constexpr std::uintptr_t m_BookkeepingTimer         = 0x1320; // CountdownTimer
            static constexpr std::uintptr_t m_NextSpreadTimer          = 0x1338; // CountdownTimer
            static constexpr std::uintptr_t m_nSourceItemDefIndex      = 0x1350; // uint16
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Step_SetAnimGraphParam : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_ParamName = 0x0048; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Outflow_ListenForEntityOutput : public CPulseCell_BaseYieldingInflow {
        public:
            static constexpr std::uintptr_t m_OnFired              = 0x0048; // SignatureOutflow_Resume
            static constexpr std::uintptr_t m_OnCanceled           = 0x0090; // CPulse_ResumePoint
            static constexpr std::uintptr_t m_strEntityOutput      = 0x00D8; // CGlobalSymbol
            static constexpr std::uintptr_t m_strEntityOutputParam = 0x00E0; // CUtlString
            static constexpr std::uintptr_t m_bListenUntilCanceled = 0x00E8; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Outflow_PlaySceneBase : public CPulseCell_BaseYieldingInflow {
        public:
            static constexpr std::uintptr_t m_OnFinished = 0x0048; // CPulse_ResumePoint
            static constexpr std::uintptr_t m_OnCanceled = 0x0090; // CPulse_ResumePoint
            static constexpr std::uintptr_t m_Triggers   = 0x00D8; // CUtlVector<CPulse_OutflowConnection>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerVolume : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_iFilterName = 0x0730; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hFilter     = 0x0738; // CHandle<CBaseFilter>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Outflow_PlayVCD : public CPulseCell_Outflow_PlaySceneBase {
        public:
            static constexpr std::uintptr_t m_hChoreoScene = 0x00F0; // CStrongHandle<InfoForResourceTypeCChoreoSceneResource>
            static constexpr std::uintptr_t m_OnPaused     = 0x00F8; // CPulse_OutflowConnection
            static constexpr std::uintptr_t m_OnResumed    = 0x0140; // CPulse_OutflowConnection
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEntityFlame : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_hEntAttached            = 0x04A8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_bCheapEffect            = 0x04AC; // bool
            static constexpr std::uintptr_t m_flSize                  = 0x04B0; // float32
            static constexpr std::uintptr_t m_bUseHitboxes            = 0x04B4; // bool
            static constexpr std::uintptr_t m_iNumHitboxFires         = 0x04B8; // int32
            static constexpr std::uintptr_t m_flHitboxFireScale       = 0x04BC; // float32
            static constexpr std::uintptr_t m_flLifetime              = 0x04C0; // GameTime_t
            static constexpr std::uintptr_t m_hAttacker               = 0x04C4; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_flDirectDamagePerSecond = 0x04C8; // float32
            static constexpr std::uintptr_t m_iCustomDamageType       = 0x04CC; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Outflow_PlaySequence : public CPulseCell_Outflow_PlaySceneBase {
        public:
            static constexpr std::uintptr_t m_ParamSequenceName = 0x00F0; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Outflow_ScriptedSequence : public CPulseCell_BaseYieldingInflow {
        public:
            static constexpr std::uintptr_t m_szSyncGroup                      = 0x0048; // CUtlString
            static constexpr std::uintptr_t m_nExpectedNumSequencesInSyncGroup = 0x0050; // int32
            static constexpr std::uintptr_t m_bEnsureOnNavmeshOnFinish         = 0x0054; // bool
            static constexpr std::uintptr_t m_bDontTeleportAtEnd               = 0x0055; // bool
            static constexpr std::uintptr_t m_bDisallowInterrupts              = 0x0056; // bool
            static constexpr std::uintptr_t m_scriptedSequenceDataMain         = 0x0058; // PulseScriptedSequenceData_t
            static constexpr std::uintptr_t m_vecAdditionalActors              = 0x0090; // CUtlVector<PulseScriptedSequenceData_t>
            static constexpr std::uintptr_t m_OnFinished                       = 0x00A8; // CPulse_ResumePoint
            static constexpr std::uintptr_t m_OnCanceled                       = 0x00F0; // CPulse_ResumePoint
            static constexpr std::uintptr_t m_Triggers                         = 0x0138; // CUtlVector<CPulse_OutflowConnection>
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        class dynpitchvol_t : public dynpitchvol_base_t {
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
        class CBasePlayerVData : public CEntitySubclassVDataBase {
        public:
            static constexpr std::uintptr_t m_sModelName                = 0x0028; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            static constexpr std::uintptr_t m_flHeadDamageMultiplier    = 0x0108; // CSkillFloat
            static constexpr std::uintptr_t m_flChestDamageMultiplier   = 0x0118; // CSkillFloat
            static constexpr std::uintptr_t m_flStomachDamageMultiplier = 0x0128; // CSkillFloat
            static constexpr std::uintptr_t m_flArmDamageMultiplier     = 0x0138; // CSkillFloat
            static constexpr std::uintptr_t m_flLegDamageMultiplier     = 0x0148; // CSkillFloat
            static constexpr std::uintptr_t m_flHoldBreathTime          = 0x0158; // float32
            static constexpr std::uintptr_t m_flDrowningDamageInterval  = 0x015C; // float32
            static constexpr std::uintptr_t m_nDrowningDamageInitial    = 0x0160; // int32
            static constexpr std::uintptr_t m_nDrowningDamageMax        = 0x0164; // int32
            static constexpr std::uintptr_t m_nWaterSpeed               = 0x0168; // int32
            static constexpr std::uintptr_t m_flUseRange                = 0x016C; // float32
            static constexpr std::uintptr_t m_flUseAngleTolerance       = 0x0170; // float32
            static constexpr std::uintptr_t m_flCrouchTime              = 0x0174; // float32
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
        class CLogicalEntity : public CServerOnlyEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFishPool : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_fishCount  = 0x04B8; // int32
            static constexpr std::uintptr_t m_maxRange   = 0x04BC; // float32
            static constexpr std::uintptr_t m_swimDepth  = 0x04C0; // float32
            static constexpr std::uintptr_t m_waterLevel = 0x04C4; // float32
            static constexpr std::uintptr_t m_isDormant  = 0x04C8; // bool
            static constexpr std::uintptr_t m_fishes     = 0x04D0; // CUtlVector<CHandle<CFish>>
            static constexpr std::uintptr_t m_visTimer   = 0x04E8; // CountdownTimer
        };

        // Has Trivial Destructor
        class CRandSimTimer : public CSimpleSimTimer {
        public:
            static constexpr std::uintptr_t m_flMinInterval = 0x0008; // float32
            static constexpr std::uintptr_t m_flMaxInterval = 0x000C; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncMover : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_iszPathName                               = 0x0730; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hPathMover                                = 0x0738; // CHandle<CPathMover>
            static constexpr std::uintptr_t m_hPrevPathMover                            = 0x073C; // CHandle<CPathMover>
            static constexpr std::uintptr_t m_iszPathNodeStart                          = 0x0740; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszPathNodeEnd                            = 0x0748; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_eMoveType                                 = 0x0750; // CFuncMover::Move_t
            static constexpr std::uintptr_t m_bIsReversing                              = 0x0754; // bool
            static constexpr std::uintptr_t m_flStartSpeed                              = 0x0758; // float32
            static constexpr std::uintptr_t m_flPathLocation                            = 0x075C; // float32
            static constexpr std::uintptr_t m_flT                                       = 0x0760; // float32
            static constexpr std::uintptr_t m_nCurrentNodeIndex                         = 0x0764; // int32
            static constexpr std::uintptr_t m_nPreviousNodeIndex                        = 0x0768; // int32
            static constexpr std::uintptr_t m_eSolidType                                = 0x076C; // SolidType_t
            static constexpr std::uintptr_t m_bIsMoving                                 = 0x076D; // bool
            static constexpr std::uintptr_t m_flTimeToReachMaxSpeed                     = 0x0770; // float32
            static constexpr std::uintptr_t m_flDistanceToReachMaxSpeed                 = 0x0774; // float32
            static constexpr std::uintptr_t m_flTimeToReachZeroSpeed                    = 0x0778; // float32
            static constexpr std::uintptr_t m_flComputedDistanceToReachMaxSpeed         = 0x077C; // float32
            static constexpr std::uintptr_t m_flComputedDistanceToReachZeroSpeed        = 0x0780; // float32
            static constexpr std::uintptr_t m_flStartCurveScale                         = 0x0784; // float32
            static constexpr std::uintptr_t m_flStopCurveScale                          = 0x0788; // float32
            static constexpr std::uintptr_t m_flDistanceToReachZeroSpeed                = 0x078C; // float32
            static constexpr std::uintptr_t m_flTimeMovementStart                       = 0x0790; // GameTime_t
            static constexpr std::uintptr_t m_flTimeMovementStop                        = 0x0794; // GameTime_t
            static constexpr std::uintptr_t m_hStopAtNode                               = 0x0798; // CHandle<CMoverPathNode>
            static constexpr std::uintptr_t m_flPathLocationToBeginStop                 = 0x079C; // float32
            static constexpr std::uintptr_t m_flPathLocationStart                       = 0x07A0; // float32
            static constexpr std::uintptr_t m_flBeginStopT                              = 0x07A4; // float32
            static constexpr std::uintptr_t m_iszStartForwardSound                      = 0x07A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszLoopForwardSound                       = 0x07B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszStopForwardSound                       = 0x07B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszStartReverseSound                      = 0x07C0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszLoopReverseSound                       = 0x07C8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszStopReverseSound                       = 0x07D0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszArriveAtDestinationSound               = 0x07D8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_OnMovementEnd                             = 0x07F8; // CEntityIOOutput
            static constexpr std::uintptr_t m_bStartAtClosestPoint                      = 0x0810; // bool
            static constexpr std::uintptr_t m_bStartAtEnd                               = 0x0811; // bool
            static constexpr std::uintptr_t m_bStartFollowingClosestMover               = 0x0812; // bool
            static constexpr std::uintptr_t m_eOrientationUpdate                        = 0x0814; // CFuncMover::OrientationUpdate_t
            static constexpr std::uintptr_t m_flTimeStartOrientationChange              = 0x0818; // GameTime_t
            static constexpr std::uintptr_t m_flTimeToBlendToNewOrientation             = 0x081C; // float32
            static constexpr std::uintptr_t m_flDurationBlendToNewOrientationRan        = 0x0820; // float32
            static constexpr std::uintptr_t m_nOriginalOrientationIndex                 = 0x0824; // int32
            static constexpr std::uintptr_t m_bCreateMovableNavMesh                     = 0x0828; // bool
            static constexpr std::uintptr_t m_bAllowMovableNavMeshDockingOnEntireEntity = 0x0829; // bool
            static constexpr std::uintptr_t m_OnNodePassed                              = 0x0830; // CEntityOutputTemplate<CUtlString,char*>
            static constexpr std::uintptr_t m_iszOrientationMatchEntityName             = 0x0850; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hOrientationMatchEntity                   = 0x0858; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_flTimeToTraverseToNextNode                = 0x085C; // float32
            static constexpr std::uintptr_t m_vLerpToNewPosStartInPathEntitySpace       = 0x0860; // Vector
            static constexpr std::uintptr_t m_vLerpToNewPosEndInPathEntitySpace         = 0x086C; // Vector
            static constexpr std::uintptr_t m_flLerpToPositionT                         = 0x0878; // float32
            static constexpr std::uintptr_t m_flLerpToPositionDeltaT                    = 0x087C; // float32
            static constexpr std::uintptr_t m_OnLerpToPositionComplete                  = 0x0880; // CEntityIOOutput
            static constexpr std::uintptr_t m_bIsPaused                                 = 0x0898; // bool
            static constexpr std::uintptr_t m_eTransitionedToPathNodeAction             = 0x089C; // CFuncMover::TransitionToPathNodeAction_t
            static constexpr std::uintptr_t m_nDelayedTeleportToNode                    = 0x08A0; // int32
            static constexpr std::uintptr_t m_bIsVerboseLogging                         = 0x08A4; // bool
            static constexpr std::uintptr_t m_hFollowEntity                             = 0x08A8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_flFollowDistance                          = 0x08AC; // float32
            static constexpr std::uintptr_t m_flFollowMinimumSpeed                      = 0x08B0; // float32
            static constexpr std::uintptr_t m_flCurFollowEntityT                        = 0x08B4; // float32
            static constexpr std::uintptr_t m_flCurFollowSpeed                          = 0x08B8; // float32
            static constexpr std::uintptr_t m_strOrientationFaceEntityName              = 0x08C0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hOrientationFaceEntity                    = 0x08C8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_OnStart                                   = 0x08D0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnStartForward                            = 0x08E8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnStartReverse                            = 0x0900; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnStop                                    = 0x0918; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnStopped                                 = 0x0930; // CEntityIOOutput
            static constexpr std::uintptr_t m_bNextNodeReturnsCurrent                   = 0x0948; // bool
            static constexpr std::uintptr_t m_bStartedMoving                            = 0x0949; // bool
            static constexpr std::uintptr_t m_eFollowEntityDirection                    = 0x0968; // CFuncMover::FollowEntityDirection_t
            static constexpr std::uintptr_t m_hFollowMover                              = 0x096C; // CHandle<CFuncMover>
            static constexpr std::uintptr_t m_iszFollowMoverEntityName                  = 0x0970; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flFollowMoverDistance                     = 0x0978; // float32
            static constexpr std::uintptr_t m_flFollowMoverCalculatedDistance           = 0x097C; // float32
            static constexpr std::uintptr_t m_flFollowMoverSpringStrength               = 0x0980; // float32
            static constexpr std::uintptr_t m_bFollowConstraintsInitialized             = 0x0984; // bool
            static constexpr std::uintptr_t m_eFollowConstraint                         = 0x0988; // CFuncMover::FollowConstraint_t
            static constexpr std::uintptr_t m_flFollowMoverSpeed                        = 0x098C; // float32
            static constexpr std::uintptr_t m_flFollowMoverVelocity                     = 0x0990; // float32
            static constexpr std::uintptr_t m_nTickMovementRan                          = 0x0994; // GameTick_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPathMoverEntitySpawner : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_szSpawnTemplates                   = 0x04A8; // CUtlSymbolLarge[4]
            static constexpr std::uintptr_t m_nSpawnIndex                        = 0x04C8; // int32
            static constexpr std::uintptr_t m_hPathMover                         = 0x04CC; // CHandle<CPathMover>
            static constexpr std::uintptr_t m_flSpawnFrequencySeconds            = 0x04D0; // float32
            static constexpr std::uintptr_t m_flSpawnFrequencyDistToNearestMover = 0x04D4; // float32
            static constexpr std::uintptr_t m_mapSpawnedMoverTemplates           = 0x04D8; // CUtlHashtable<CHandle<CFuncMover>,CPathMoverEntitySpawn>
            static constexpr std::uintptr_t m_nMaxActive                         = 0x04F8; // int32
            static constexpr std::uintptr_t m_flLastSpawnTime                    = 0x04FC; // GameTime_t
            static constexpr std::uintptr_t m_bEnabled                           = 0x0500; // bool
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
        class CLogicDistanceCheck : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_iszEntityA      = 0x04A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszEntityB      = 0x04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flZone1Distance = 0x04B8; // float32
            static constexpr std::uintptr_t m_flZone2Distance = 0x04BC; // float32
            static constexpr std::uintptr_t m_InZone1         = 0x04C0; // CEntityIOOutput
            static constexpr std::uintptr_t m_InZone2         = 0x04D8; // CEntityIOOutput
            static constexpr std::uintptr_t m_InZone3         = 0x04F0; // CEntityIOOutput
        };

        // Has VTable
        // Is Absract
        class CBtNodeDecorator : public CBtNode {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSceneListManager : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_hListManagers = 0x04A8; // CUtlVector<CHandle<CSceneListManager>>
            static constexpr std::uintptr_t m_iszScenes     = 0x04C0; // CUtlSymbolLarge[16]
            static constexpr std::uintptr_t m_hScenes       = 0x0540; // CHandle<CBaseEntity>[16]
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTestPulseIO : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_OnVariantVoid     = 0x04A8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnVariantBool     = 0x04C0; // CEntityOutputTemplate<bool,bool>
            static constexpr std::uintptr_t m_OnVariantInt      = 0x04E0; // CEntityOutputTemplate<int32,int32>
            static constexpr std::uintptr_t m_OnVariantFloat    = 0x0500; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnVariantString   = 0x0520; // CEntityOutputTemplate<CUtlSymbolLarge,CUtlSymbolLarge>
            static constexpr std::uintptr_t m_OnVariantColor    = 0x0540; // CEntityOutputTemplate<Color,Color>
            static constexpr std::uintptr_t m_OnVariantVector   = 0x0560; // CEntityOutputTemplate<Vector,Vector>
            static constexpr std::uintptr_t m_bAllowEmptyInputs = 0x0588; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysMotor : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_nameAttach                         = 0x04A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_nameAnchor                         = 0x04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hAttachedObject                    = 0x04B8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hAnchorObject                      = 0x04BC; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_spinUp                             = 0x04C0; // float32
            static constexpr std::uintptr_t m_spinDown                           = 0x04C4; // float32
            static constexpr std::uintptr_t m_flMotorFriction                    = 0x04C8; // float32
            static constexpr std::uintptr_t m_additionalAcceleration             = 0x04CC; // float32
            static constexpr std::uintptr_t m_angularAcceleration                = 0x04D0; // float32
            static constexpr std::uintptr_t m_flTorqueScale                      = 0x04D4; // float32
            static constexpr std::uintptr_t m_flTargetSpeed                      = 0x04D8; // float32
            static constexpr std::uintptr_t m_flSpeedWhenSpinUpOrSpinDownStarted = 0x04DC; // float32
            static constexpr std::uintptr_t m_motor                              = 0x04F0; // CMotorController
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTestEffect : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_iLoop       = 0x04A8; // int32
            static constexpr std::uintptr_t m_iBeam       = 0x04AC; // int32
            static constexpr std::uintptr_t m_pBeam       = 0x04B0; // CHandle<CBeam>[24]
            static constexpr std::uintptr_t m_flBeamTime  = 0x0510; // GameTime_t[24]
            static constexpr std::uintptr_t m_flStartTime = 0x0570; // GameTime_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointPrefab : public CServerOnlyPointEntity {
        public:
            static constexpr std::uintptr_t m_targetMapName             = 0x04A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_forceWorldGroupID         = 0x04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_associatedRelayTargetName = 0x04B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_fixupNames                = 0x04C0; // bool
            static constexpr std::uintptr_t m_bLoadDynamic              = 0x04C1; // bool
            static constexpr std::uintptr_t m_associatedRelayEntity     = 0x04C4; // CHandle<CPointPrefab>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSkyCamera : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_skyboxData      = 0x04A8; // sky3dparams_t
            static constexpr std::uintptr_t m_skyboxSlotToken = 0x0538; // CUtlStringToken
            static constexpr std::uintptr_t m_bUseAngles      = 0x053C; // bool
            static constexpr std::uintptr_t m_pNext           = 0x0540; // CSkyCamera*
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSkyboxReference : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_worldGroupId = 0x04A8; // WorldGroupId_t
            static constexpr std::uintptr_t m_hSkyCamera   = 0x04AC; // CHandle<CSkyCamera>
        };

        // Has VTable
        class CNavVolumeMarkupVolume : public CNavVolume {
        public:
        };

        // Has VTable
        // Is Absract
        class CNavVolumeCalculatedVector : public CNavVolume {
        public:
        };

        // Has VTable
        class CNavVolumeBreadthFirstSearch : public CNavVolumeCalculatedVector {
        public:
            static constexpr std::uintptr_t m_vStartPos    = 0x00A8; // Vector
            static constexpr std::uintptr_t m_flSearchDist = 0x00B4; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvDetailController : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_flFadeStartDist = 0x04A8; // float32
            static constexpr std::uintptr_t m_flFadeEndDist   = 0x04AC; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoLadderDismount : public CBaseEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncShatterglass : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_matPanelTransform               = 0x0730; // matrix3x4_t
            static constexpr std::uintptr_t m_matPanelTransformWsTemp         = 0x0760; // matrix3x4_t
            static constexpr std::uintptr_t m_vecShatterGlassShards           = 0x0790; // CUtlVector<uint32>
            static constexpr std::uintptr_t m_PanelSize                       = 0x07A8; // Vector2D
            static constexpr std::uintptr_t m_flLastShatterSoundEmitTime      = 0x07B0; // GameTime_t
            static constexpr std::uintptr_t m_flLastCleanupTime               = 0x07B4; // GameTime_t
            static constexpr std::uintptr_t m_flInitAtTime                    = 0x07B8; // GameTime_t
            static constexpr std::uintptr_t m_flGlassThickness                = 0x07BC; // float32
            static constexpr std::uintptr_t m_flSpawnInvulnerability          = 0x07C0; // float32
            static constexpr std::uintptr_t m_bBreakSilent                    = 0x07C4; // bool
            static constexpr std::uintptr_t m_bBreakShardless                 = 0x07C5; // bool
            static constexpr std::uintptr_t m_bBroken                         = 0x07C6; // bool
            static constexpr std::uintptr_t m_bGlassNavIgnore                 = 0x07C7; // bool
            static constexpr std::uintptr_t m_bGlassInFrame                   = 0x07C8; // bool
            static constexpr std::uintptr_t m_bStartBroken                    = 0x07C9; // bool
            static constexpr std::uintptr_t m_iInitialDamageType              = 0x07CA; // uint8
            static constexpr std::uintptr_t m_szDamagePositioningEntityName01 = 0x07D0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_szDamagePositioningEntityName02 = 0x07D8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_szDamagePositioningEntityName03 = 0x07E0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_szDamagePositioningEntityName04 = 0x07E8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_vInitialDamagePositions         = 0x07F0; // CUtlVector<Vector>
            static constexpr std::uintptr_t m_vExtraDamagePositions           = 0x0808; // CUtlVector<Vector>
            static constexpr std::uintptr_t m_vInitialPanelVertices           = 0x0820; // CUtlVector<Vector4D>
            static constexpr std::uintptr_t m_OnBroken                        = 0x0838; // CEntityIOOutput
            static constexpr std::uintptr_t m_iSurfaceType                    = 0x0850; // uint8
            static constexpr std::uintptr_t m_hMaterialDamageBase             = 0x0858; // CStrongHandle<InfoForResourceTypeIMaterial2>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CGameRulesProxy : public CBaseEntity {
        public:
        };

        // Has VTable
        // Is Absract
        // Local Type Scope
        class CMultiplayRules : public CGameRules {
        public:
        };

        // Has Trivial Destructor
        class CStopwatchBase : public CSimpleSimTimer {
        public:
            static constexpr std::uintptr_t m_fIsRunning = 0x0008; // bool
        };

        // Has Trivial Destructor
        class CSimpleStopwatch : public CStopwatchBase {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CAI_ChangeHintGroup : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_iSearchType     = 0x04A8; // int32
            static constexpr std::uintptr_t m_strSearchName   = 0x04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_strNewHintGroup = 0x04B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flRadius        = 0x04C0; // float32
        };

        // Has VTable
        // Local Type Scope
        class CSingleplayRules : public CGameRules {
        public:
            static constexpr std::uintptr_t m_bSinglePlayerGameEnding = 0x00D0; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoWorldLayer : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_pOutputOnEntitiesSpawned = 0x04A8; // CEntityIOOutput
            static constexpr std::uintptr_t m_worldName                = 0x04C0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_layerName                = 0x04C8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bWorldLayerVisible       = 0x04D0; // bool
            static constexpr std::uintptr_t m_bEntitiesSpawned         = 0x04D1; // bool
            static constexpr std::uintptr_t m_bCreateAsChildSpawnGroup = 0x04D2; // bool
            static constexpr std::uintptr_t m_hLayerSpawnGroup         = 0x04D4; // uint32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundOpvarSetPointBase : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled           = 0x04A8; // bool
            static constexpr std::uintptr_t m_hSource             = 0x04AC; // CEntityHandle
            static constexpr std::uintptr_t m_iszSourceEntityName = 0x04C8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_vLastPosition       = 0x0520; // Vector
            static constexpr std::uintptr_t m_flRefreshTime       = 0x052C; // float32
            static constexpr std::uintptr_t m_iszStackName        = 0x0530; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszOperatorName     = 0x0538; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszOpvarName        = 0x0540; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iOpvarIndex         = 0x0548; // int32
            static constexpr std::uintptr_t m_bUseAutoCompare     = 0x054C; // bool
            static constexpr std::uintptr_t m_bFastRefresh        = 0x054D; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundOpvarSetPointEntity : public CSoundOpvarSetPointBase {
        public:
            static constexpr std::uintptr_t m_OnEnter                     = 0x0550; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnExit                      = 0x0568; // CEntityIOOutput
            static constexpr std::uintptr_t m_bAutoDisable                = 0x0580; // bool
            static constexpr std::uintptr_t m_flDistanceMin               = 0x05C4; // float32
            static constexpr std::uintptr_t m_flDistanceMax               = 0x05C8; // float32
            static constexpr std::uintptr_t m_flDistanceMapMin            = 0x05CC; // float32
            static constexpr std::uintptr_t m_flDistanceMapMax            = 0x05D0; // float32
            static constexpr std::uintptr_t m_flOcclusionRadius           = 0x05D4; // float32
            static constexpr std::uintptr_t m_flOcclusionMin              = 0x05D8; // float32
            static constexpr std::uintptr_t m_flOcclusionMax              = 0x05DC; // float32
            static constexpr std::uintptr_t m_flValSetOnDisable           = 0x05E0; // float32
            static constexpr std::uintptr_t m_bSetValueOnDisable          = 0x05E4; // bool
            static constexpr std::uintptr_t m_bReloading                  = 0x05E5; // bool
            static constexpr std::uintptr_t m_nSimulationMode             = 0x05E8; // int32
            static constexpr std::uintptr_t m_nVisibilitySamples          = 0x05EC; // int32
            static constexpr std::uintptr_t m_vDynamicProxyPoint          = 0x05F0; // Vector
            static constexpr std::uintptr_t m_flDynamicMaximumOcclusion   = 0x05FC; // float32
            static constexpr std::uintptr_t m_hDynamicEntity              = 0x0600; // CEntityHandle
            static constexpr std::uintptr_t m_iszDynamicEntityName        = 0x0608; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flPathingDistanceNormFactor = 0x0610; // float32
            static constexpr std::uintptr_t m_vPathingSourcePos           = 0x0614; // Vector
            static constexpr std::uintptr_t m_vPathingListenerPos         = 0x0620; // Vector
            static constexpr std::uintptr_t m_vPathingDirection           = 0x062C; // Vector
            static constexpr std::uintptr_t m_nPathingSourceIndex         = 0x0638; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvCombinedLightProbeVolume : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_Entity_Color                                = 0x1520; // Color
            static constexpr std::uintptr_t m_Entity_flBrightness                         = 0x1524; // float32
            static constexpr std::uintptr_t m_Entity_hCubemapTexture                      = 0x1528; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_bCustomCubemapTexture                = 0x1530; // bool
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_AmbientCube       = 0x1538; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SDF               = 0x1540; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SH2_DC            = 0x1548; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SH2_R             = 0x1550; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SH2_G             = 0x1558; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SH2_B             = 0x1560; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x1568; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x1570; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x1578; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_vBoxMins                             = 0x1580; // Vector
            static constexpr std::uintptr_t m_Entity_vBoxMaxs                             = 0x158C; // Vector
            static constexpr std::uintptr_t m_Entity_bMoveable                            = 0x1598; // bool
            static constexpr std::uintptr_t m_Entity_nHandshake                           = 0x159C; // int32
            static constexpr std::uintptr_t m_Entity_nEnvCubeMapArrayIndex                = 0x15A0; // int32
            static constexpr std::uintptr_t m_Entity_nPriority                            = 0x15A4; // int32
            static constexpr std::uintptr_t m_Entity_bStartDisabled                       = 0x15A8; // bool
            static constexpr std::uintptr_t m_Entity_flEdgeFadeDist                       = 0x15AC; // float32
            static constexpr std::uintptr_t m_Entity_vEdgeFadeDists                       = 0x15B0; // Vector
            static constexpr std::uintptr_t m_Entity_nLightProbeSizeX                     = 0x15BC; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeSizeY                     = 0x15C0; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeSizeZ                     = 0x15C4; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeAtlasX                    = 0x15C8; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeAtlasY                    = 0x15CC; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeAtlasZ                    = 0x15D0; // int32
            static constexpr std::uintptr_t m_Entity_bEnabled                             = 0x15E9; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundOpvarSetAABBEntity : public CSoundOpvarSetPointEntity {
        public:
            static constexpr std::uintptr_t m_vDistanceInnerMins = 0x0640; // Vector
            static constexpr std::uintptr_t m_vDistanceInnerMaxs = 0x064C; // Vector
            static constexpr std::uintptr_t m_vDistanceOuterMins = 0x0658; // Vector
            static constexpr std::uintptr_t m_vDistanceOuterMaxs = 0x0664; // Vector
            static constexpr std::uintptr_t m_nAABBDirection     = 0x0670; // int32
            static constexpr std::uintptr_t m_vInnerMins         = 0x0674; // Vector
            static constexpr std::uintptr_t m_vInnerMaxs         = 0x0680; // Vector
            static constexpr std::uintptr_t m_vOuterMins         = 0x068C; // Vector
            static constexpr std::uintptr_t m_vOuterMaxs         = 0x0698; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundOpvarSetOBBEntity : public CSoundOpvarSetAABBEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundOpvarSetPathCornerEntity : public CSoundOpvarSetPointEntity {
        public:
            static constexpr std::uintptr_t m_bUseParentedPath        = 0x0658; // bool
            static constexpr std::uintptr_t m_flDistMinSqr            = 0x065C; // float32
            static constexpr std::uintptr_t m_flDistMaxSqr            = 0x0660; // float32
            static constexpr std::uintptr_t m_iszPathCornerEntityName = 0x0668; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundOpvarSetAutoRoomEntity : public CSoundOpvarSetPointEntity {
        public:
            static constexpr std::uintptr_t m_traceResults      = 0x0640; // CUtlVector<SoundOpvarTraceResult_t>
            static constexpr std::uintptr_t m_doorwayPairs      = 0x0658; // CUtlVector<AutoRoomDoorwayPairs_t>
            static constexpr std::uintptr_t m_flSize            = 0x0670; // float32
            static constexpr std::uintptr_t m_flHeightTolerance = 0x0674; // float32
            static constexpr std::uintptr_t m_flSizeSqr         = 0x0678; // float32
        };

        // Has VTable
        // Local Type Scope
        class CEconItemView : public IEconItemInterface {
        public:
            static constexpr std::uintptr_t m_iItemDefinitionIndex       = 0x0038; // uint16
            static constexpr std::uintptr_t m_iEntityQuality             = 0x003C; // int32
            static constexpr std::uintptr_t m_iEntityLevel               = 0x0040; // uint32
            static constexpr std::uintptr_t m_iItemID                    = 0x0048; // uint64
            static constexpr std::uintptr_t m_iItemIDHigh                = 0x0050; // uint32
            static constexpr std::uintptr_t m_iItemIDLow                 = 0x0054; // uint32
            static constexpr std::uintptr_t m_iAccountID                 = 0x0058; // uint32
            static constexpr std::uintptr_t m_iInventoryPosition         = 0x005C; // uint32
            static constexpr std::uintptr_t m_bInitialized               = 0x0068; // bool
            static constexpr std::uintptr_t m_AttributeList              = 0x0070; // CAttributeList
            static constexpr std::uintptr_t m_NetworkedDynamicAttributes = 0x00E8; // CAttributeList
            static constexpr std::uintptr_t m_szCustomName               = 0x0160; // char[161]
            static constexpr std::uintptr_t m_szCustomNameOverride       = 0x0201; // char[161]
        };

        // Has VTable
        // Local Type Scope
        class CAttributeContainer : public CAttributeManager {
        public:
            static constexpr std::uintptr_t m_Item = 0x0050; // CEconItemView
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_BulletServices : public CPlayerPawnComponent {
        public:
            static constexpr std::uintptr_t m_totalHitsOnServer = 0x0048; // int32
        };

        // Has VTable
        // Construct Allowed
        class GameAmmoTypeInfo_t : public AmmoTypeInfo_t {
        public:
            static constexpr std::uintptr_t m_nBuySize = 0x0038; // int32
            static constexpr std::uintptr_t m_nCost    = 0x003C; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBeam : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_flFrameRate     = 0x0730; // float32
            static constexpr std::uintptr_t m_flHDRColorScale = 0x0734; // float32
            static constexpr std::uintptr_t m_flFireTime      = 0x0738; // GameTime_t
            static constexpr std::uintptr_t m_flDamage        = 0x073C; // float32
            static constexpr std::uintptr_t m_nNumBeamEnts    = 0x0740; // uint8
            static constexpr std::uintptr_t m_hBaseMaterial   = 0x0748; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_nHaloIndex      = 0x0750; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_nBeamType       = 0x0758; // BeamType_t
            static constexpr std::uintptr_t m_nBeamFlags      = 0x075C; // uint32
            static constexpr std::uintptr_t m_hAttachEntity   = 0x0760; // CHandle<CBaseEntity>[10]
            static constexpr std::uintptr_t m_nAttachIndex    = 0x0788; // AttachmentHandle_t[10]
            static constexpr std::uintptr_t m_fWidth          = 0x0794; // float32
            static constexpr std::uintptr_t m_fEndWidth       = 0x0798; // float32
            static constexpr std::uintptr_t m_fFadeLength     = 0x079C; // float32
            static constexpr std::uintptr_t m_fHaloScale      = 0x07A0; // float32
            static constexpr std::uintptr_t m_fAmplitude      = 0x07A4; // float32
            static constexpr std::uintptr_t m_fStartFrame     = 0x07A8; // float32
            static constexpr std::uintptr_t m_fSpeed          = 0x07AC; // float32
            static constexpr std::uintptr_t m_flFrame         = 0x07B0; // float32
            static constexpr std::uintptr_t m_nClipStyle      = 0x07B4; // BeamClipStyle_t
            static constexpr std::uintptr_t m_bTurnedOff      = 0x07B8; // bool
            static constexpr std::uintptr_t m_vecEndPos       = 0x07BC; // VectorWS
            static constexpr std::uintptr_t m_hEndEntity      = 0x07C8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_nDissolveType   = 0x07CC; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSGameRulesProxy : public CGameRulesProxy {
        public:
            static constexpr std::uintptr_t m_pGameRules = 0x04A8; // CCSGameRules*
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncTrackTrain : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_ppath                      = 0x0730; // CHandle<CPathTrack>
            static constexpr std::uintptr_t m_length                     = 0x0734; // float32
            static constexpr std::uintptr_t m_vPosPrev                   = 0x0738; // Vector
            static constexpr std::uintptr_t m_angPrev                    = 0x0744; // QAngle
            static constexpr std::uintptr_t m_controlMins                = 0x0750; // Vector
            static constexpr std::uintptr_t m_controlMaxs                = 0x075C; // Vector
            static constexpr std::uintptr_t m_lastBlockPos               = 0x0768; // Vector
            static constexpr std::uintptr_t m_lastBlockTick              = 0x0774; // int32
            static constexpr std::uintptr_t m_flVolume                   = 0x0778; // float32
            static constexpr std::uintptr_t m_flBank                     = 0x077C; // float32
            static constexpr std::uintptr_t m_oldSpeed                   = 0x0780; // float32
            static constexpr std::uintptr_t m_flBlockDamage              = 0x0784; // float32
            static constexpr std::uintptr_t m_height                     = 0x0788; // float32
            static constexpr std::uintptr_t m_maxSpeed                   = 0x078C; // float32
            static constexpr std::uintptr_t m_dir                        = 0x0790; // float32
            static constexpr std::uintptr_t m_iszSoundMove               = 0x0798; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszSoundMovePing           = 0x07A0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszSoundStart              = 0x07A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszSoundStop               = 0x07B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_strPathTarget              = 0x07B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flMoveSoundMinDuration     = 0x07C0; // float32
            static constexpr std::uintptr_t m_flMoveSoundMaxDuration     = 0x07C4; // float32
            static constexpr std::uintptr_t m_flNextMoveSoundTime        = 0x07C8; // GameTime_t
            static constexpr std::uintptr_t m_flMoveSoundMinPitch        = 0x07CC; // float32
            static constexpr std::uintptr_t m_flMoveSoundMaxPitch        = 0x07D0; // float32
            static constexpr std::uintptr_t m_eOrientationType           = 0x07D4; // TrainOrientationType_t
            static constexpr std::uintptr_t m_eVelocityType              = 0x07D8; // TrainVelocityType_t
            static constexpr std::uintptr_t m_OnStart                    = 0x07F0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnNext                     = 0x0808; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnArrivedAtDestinationNode = 0x0820; // CEntityIOOutput
            static constexpr std::uintptr_t m_bManualSpeedChanges        = 0x0838; // bool
            static constexpr std::uintptr_t m_flDesiredSpeed             = 0x083C; // float32
            static constexpr std::uintptr_t m_flSpeedChangeTime          = 0x0840; // GameTime_t
            static constexpr std::uintptr_t m_flAccelSpeed               = 0x0844; // float32
            static constexpr std::uintptr_t m_flDecelSpeed               = 0x0848; // float32
            static constexpr std::uintptr_t m_bAccelToSpeed              = 0x084C; // bool
            static constexpr std::uintptr_t m_flNextMPSoundTime          = 0x0850; // GameTime_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSGameModeRules_Noop : public CCSGameModeRules {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSGameModeRules_ArmsRace : public CCSGameModeRules {
        public:
            static constexpr std::uintptr_t m_WeaponSequence = 0x0030; // CNetworkUtlVectorBase<CUtlString>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSGameModeRules_Deathmatch : public CCSGameModeRules {
        public:
            static constexpr std::uintptr_t m_flDMBonusStartTime  = 0x0030; // GameTime_t
            static constexpr std::uintptr_t m_flDMBonusTimeLength = 0x0034; // float32
            static constexpr std::uintptr_t m_sDMBonusWeapon      = 0x0038; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysBox : public CBreakable {
        public:
            static constexpr std::uintptr_t m_damageType                  = 0x0808; // int32
            static constexpr std::uintptr_t m_damageToEnableMotion        = 0x080C; // int32
            static constexpr std::uintptr_t m_flForceToEnableMotion       = 0x0810; // float32
            static constexpr std::uintptr_t m_vHoverPosePosition          = 0x0814; // Vector
            static constexpr std::uintptr_t m_angHoverPoseAngles          = 0x0820; // QAngle
            static constexpr std::uintptr_t m_bNotSolidToWorld            = 0x082C; // bool
            static constexpr std::uintptr_t m_bEnableUseOutput            = 0x082D; // bool
            static constexpr std::uintptr_t m_nHoverPoseFlags             = 0x082E; // HoverPoseFlags_t
            static constexpr std::uintptr_t m_flTouchOutputPerEntityDelay = 0x0830; // float32
            static constexpr std::uintptr_t m_OnDamaged                   = 0x0838; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnAwakened                  = 0x0850; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnMotionEnabled             = 0x0868; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnPlayerUse                 = 0x0880; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnStartTouch                = 0x0898; // CEntityIOOutput
            static constexpr std::uintptr_t m_hCarryingPlayer             = 0x08B0; // CHandle<CBasePlayerPawn>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicCase : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_nCase             = 0x04A8; // CUtlSymbolLarge[32]
            static constexpr std::uintptr_t m_nShuffleCases     = 0x05A8; // int32
            static constexpr std::uintptr_t m_nLastShuffleCase  = 0x05AC; // int32
            static constexpr std::uintptr_t m_uchShuffleCaseMap = 0x05B0; // uint8[32]
            static constexpr std::uintptr_t m_OnCase            = 0x05D0; // CEntityIOOutput[32]
            static constexpr std::uintptr_t m_OnDefault         = 0x08D0; // CEntityOutputTemplate<CUtlString,char*>
        };

        // Has VTable
        // Local Type Scope
        class CSMatchStats_t : public CSPerRoundStats_t {
        public:
            static constexpr std::uintptr_t m_iEnemy5Ks                  = 0x0068; // int32
            static constexpr std::uintptr_t m_iEnemy4Ks                  = 0x006C; // int32
            static constexpr std::uintptr_t m_iEnemy3Ks                  = 0x0070; // int32
            static constexpr std::uintptr_t m_iEnemyKnifeKills           = 0x0074; // int32
            static constexpr std::uintptr_t m_iEnemyTaserKills           = 0x0078; // int32
            static constexpr std::uintptr_t m_iEnemy2Ks                  = 0x007C; // int32
            static constexpr std::uintptr_t m_iUtility_Count             = 0x0080; // int32
            static constexpr std::uintptr_t m_iUtility_Successes         = 0x0084; // int32
            static constexpr std::uintptr_t m_iUtility_Enemies           = 0x0088; // int32
            static constexpr std::uintptr_t m_iFlash_Count               = 0x008C; // int32
            static constexpr std::uintptr_t m_iFlash_Successes           = 0x0090; // int32
            static constexpr std::uintptr_t m_flHealthPointsRemovedTotal = 0x0094; // float32
            static constexpr std::uintptr_t m_flHealthPointsDealtTotal   = 0x0098; // float32
            static constexpr std::uintptr_t m_nShotsFiredTotal           = 0x009C; // int32
            static constexpr std::uintptr_t m_nShotsOnTargetTotal        = 0x00A0; // int32
            static constexpr std::uintptr_t m_i1v1Count                  = 0x00A4; // int32
            static constexpr std::uintptr_t m_i1v1Wins                   = 0x00A8; // int32
            static constexpr std::uintptr_t m_i1v2Count                  = 0x00AC; // int32
            static constexpr std::uintptr_t m_i1v2Wins                   = 0x00B0; // int32
            static constexpr std::uintptr_t m_iEntryCount                = 0x00B4; // int32
            static constexpr std::uintptr_t m_iEntryWins                 = 0x00B8; // int32
        };

        // Has VTable
        // Is Absract
        // Local Type Scope
        class CCSGO_TeamPreviewCharacterPosition : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_nVariant    = 0x04A8; // int32
            static constexpr std::uintptr_t m_nRandom     = 0x04AC; // int32
            static constexpr std::uintptr_t m_nOrdinal    = 0x04B0; // int32
            static constexpr std::uintptr_t m_sWeaponName = 0x04B8; // CUtlString
            static constexpr std::uintptr_t m_xuid        = 0x04C0; // uint64
            static constexpr std::uintptr_t m_agentItem   = 0x04C8; // CEconItemView
            static constexpr std::uintptr_t m_glovesItem  = 0x0770; // CEconItemView
            static constexpr std::uintptr_t m_weaponItem  = 0x0A18; // CEconItemView
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
        class CCSGO_TeamSelectCounterTerroristPosition : public CCSGO_TeamSelectCharacterPosition {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CCSGO_TeamIntroCharacterPosition : public CCSGO_TeamPreviewCharacterPosition {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncLadder : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_vecLadderDir                 = 0x0730; // Vector
            static constexpr std::uintptr_t m_Dismounts                    = 0x0740; // CUtlVector<CHandle<CInfoLadderDismount>>
            static constexpr std::uintptr_t m_vecLocalTop                  = 0x0758; // Vector
            static constexpr std::uintptr_t m_vecPlayerMountPositionTop    = 0x0764; // VectorWS
            static constexpr std::uintptr_t m_vecPlayerMountPositionBottom = 0x0770; // VectorWS
            static constexpr std::uintptr_t m_flAutoRideSpeed              = 0x077C; // float32
            static constexpr std::uintptr_t m_bDisabled                    = 0x0780; // bool
            static constexpr std::uintptr_t m_bFakeLadder                  = 0x0781; // bool
            static constexpr std::uintptr_t m_bHasSlack                    = 0x0782; // bool
            static constexpr std::uintptr_t m_surfacePropName              = 0x0788; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_OnPlayerGotOnLadder          = 0x0790; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnPlayerGotOffLadder         = 0x07A8; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointOrient : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_iszSpawnTargetName = 0x04A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hTarget            = 0x04B0; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_bActive            = 0x04B4; // bool
            static constexpr std::uintptr_t m_nGoalDirection     = 0x04B8; // PointOrientGoalDirectionType_t
            static constexpr std::uintptr_t m_nConstraint        = 0x04BC; // PointOrientConstraint_t
            static constexpr std::uintptr_t m_flMaxTurnRate      = 0x04C0; // float32
            static constexpr std::uintptr_t m_flLastGameTime     = 0x04C4; // GameTime_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSGO_TeamIntroTerroristPosition : public CCSGO_TeamIntroCharacterPosition {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSGO_TeamIntroCounterTerroristPosition : public CCSGO_TeamIntroCharacterPosition {
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
        class CLogicNavigation : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_isOn        = 0x04B0; // bool
            static constexpr std::uintptr_t m_navProperty = 0x04B4; // navproperties_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSGO_WingmanIntroTerroristPosition : public CCSGO_WingmanIntroCharacterPosition {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSMinimapBoundary : public CBaseEntity {
        public:
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
        class CEnvBeam : public CBeam {
        public:
            static constexpr std::uintptr_t m_active            = 0x07D0; // int32
            static constexpr std::uintptr_t m_spriteTexture     = 0x07D8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_iszStartEntity    = 0x07E0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszEndEntity      = 0x07E8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_life              = 0x07F0; // float32
            static constexpr std::uintptr_t m_boltWidth         = 0x07F4; // float32
            static constexpr std::uintptr_t m_noiseAmplitude    = 0x07F8; // float32
            static constexpr std::uintptr_t m_speed             = 0x07FC; // int32
            static constexpr std::uintptr_t m_restrike          = 0x0800; // float32
            static constexpr std::uintptr_t m_iszSpriteName     = 0x0808; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_frameStart        = 0x0810; // int32
            static constexpr std::uintptr_t m_vEndPointWorld    = 0x0814; // VectorWS
            static constexpr std::uintptr_t m_vEndPointRelative = 0x0820; // Vector
            static constexpr std::uintptr_t m_radius            = 0x082C; // float32
            static constexpr std::uintptr_t m_TouchType         = 0x0830; // Touch_t
            static constexpr std::uintptr_t m_iFilterName       = 0x0838; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hFilter           = 0x0840; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_iszDecal          = 0x0848; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_OnTouchedByEntity = 0x0850; // CEntityIOOutput
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_PingServices : public CPlayerPawnComponent {
        public:
            static constexpr std::uintptr_t m_flPlayerPingTokens = 0x0048; // GameTime_t[5]
            static constexpr std::uintptr_t m_hPlayerPing        = 0x005C; // CHandle<CPlayerPing>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSPlayerResource : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_bHostageAlive             = 0x04A8; // bool[12]
            static constexpr std::uintptr_t m_isHostageFollowingSomeone = 0x04B4; // bool[12]
            static constexpr std::uintptr_t m_iHostageEntityIDs         = 0x04C0; // CEntityIndex[12]
            static constexpr std::uintptr_t m_bombsiteCenterA           = 0x04F0; // Vector
            static constexpr std::uintptr_t m_bombsiteCenterB           = 0x04FC; // Vector
            static constexpr std::uintptr_t m_hostageRescueX            = 0x0508; // int32[4]
            static constexpr std::uintptr_t m_hostageRescueY            = 0x0518; // int32[4]
            static constexpr std::uintptr_t m_hostageRescueZ            = 0x0528; // int32[4]
            static constexpr std::uintptr_t m_bEndMatchNextMapAllVoted  = 0x0538; // bool
            static constexpr std::uintptr_t m_foundGoalPositions        = 0x0539; // bool
        };

        // Has VTable
        // Local Type Scope
        class CCSObserver_UseServices : public CPlayer_UseServices {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_DamageReactServices : public CPlayerPawnComponent {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_BuyServices : public CPlayerPawnComponent {
        public:
            static constexpr std::uintptr_t m_vecSellbackPurchaseEntries = 0x00D0; // CUtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayerController_InGameMoneyServices : public CPlayerControllerComponent {
        public:
            static constexpr std::uintptr_t m_bReceivesMoneyNextRound  = 0x0040; // bool
            static constexpr std::uintptr_t m_iMoneyEarnedForNextRound = 0x0044; // int32
            static constexpr std::uintptr_t m_iAccount                 = 0x0048; // int32
            static constexpr std::uintptr_t m_iStartAccount            = 0x004C; // int32
            static constexpr std::uintptr_t m_iTotalCashSpent          = 0x0050; // int32
            static constexpr std::uintptr_t m_iCashSpentThisRound      = 0x0054; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CDebugHistory : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_nNpcEvents = 0x3E84E8; // int32
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_HostageServices : public CPlayerPawnComponent {
        public:
            static constexpr std::uintptr_t m_hCarriedHostage     = 0x0048; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hCarriedHostageProp = 0x004C; // CHandle<CBaseEntity>
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_ItemServices : public CPlayer_ItemServices {
        public:
            static constexpr std::uintptr_t m_bHasDefuser = 0x0048; // bool
            static constexpr std::uintptr_t m_bHasHelmet  = 0x0049; // bool
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_UseServices : public CPlayer_UseServices {
        public:
            static constexpr std::uintptr_t m_hLastKnownUseEntity  = 0x0048; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_flLastUseTimeStamp   = 0x004C; // GameTime_t
            static constexpr std::uintptr_t m_flTimeLastUsedWindow = 0x0050; // GameTime_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvWindVolume : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_bActive                           = 0x04A8; // bool
            static constexpr std::uintptr_t m_vBoxMins                          = 0x04AC; // Vector
            static constexpr std::uintptr_t m_vBoxMaxs                          = 0x04B8; // Vector
            static constexpr std::uintptr_t m_bStartDisabled                    = 0x04C4; // bool
            static constexpr std::uintptr_t m_nShape                            = 0x04C8; // int32
            static constexpr std::uintptr_t m_fWindSpeedMultiplier              = 0x04CC; // float32
            static constexpr std::uintptr_t m_fWindTurbulenceMultiplier         = 0x04D0; // float32
            static constexpr std::uintptr_t m_fWindSpeedVariationMultiplier     = 0x04D4; // float32
            static constexpr std::uintptr_t m_fWindDirectionVariationMultiplier = 0x04D8; // float32
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_WaterServices : public CPlayer_WaterServices {
        public:
            static constexpr std::uintptr_t m_NextDrownDamageTime = 0x0048; // GameTime_t
            static constexpr std::uintptr_t m_nDrownDmgRate       = 0x004C; // int32
            static constexpr std::uintptr_t m_AirFinishedTime     = 0x0050; // GameTime_t
            static constexpr std::uintptr_t m_flWaterJumpTime     = 0x0054; // float32
            static constexpr std::uintptr_t m_vecWaterJumpVel     = 0x0058; // Vector
            static constexpr std::uintptr_t m_flSwimSoundTime     = 0x0064; // float32
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_WeaponServices : public CPlayer_WeaponServices {
        public:
            static constexpr std::uintptr_t m_flNextAttack                      = 0x00C0; // GameTime_t
            static constexpr std::uintptr_t m_bIsLookingAtWeapon                = 0x00C4; // bool
            static constexpr std::uintptr_t m_bIsHoldingLookAtWeapon            = 0x00C5; // bool
            static constexpr std::uintptr_t m_hSavedWeapon                      = 0x00C8; // CHandle<CBasePlayerWeapon>
            static constexpr std::uintptr_t m_nTimeToMelee                      = 0x00CC; // int32
            static constexpr std::uintptr_t m_nTimeToSecondary                  = 0x00D0; // int32
            static constexpr std::uintptr_t m_nTimeToPrimary                    = 0x00D4; // int32
            static constexpr std::uintptr_t m_nTimeToSniperRifle                = 0x00D8; // int32
            static constexpr std::uintptr_t m_bIsBeingGivenItem                 = 0x00DC; // bool
            static constexpr std::uintptr_t m_bIsPickingUpItemWithUse           = 0x00DD; // bool
            static constexpr std::uintptr_t m_bPickedUpWeapon                   = 0x00DE; // bool
            static constexpr std::uintptr_t m_bDisableAutoDeploy                = 0x00DF; // bool
            static constexpr std::uintptr_t m_bIsPickingUpGroundWeapon          = 0x00E0; // bool
            static constexpr std::uintptr_t m_networkAnimTiming                 = 0x18B8; // CNetworkUtlVectorBase<uint8>
            static constexpr std::uintptr_t m_bBlockInspectUntilNextGraphUpdate = 0x18D0; // bool
        };

        // Has VTable
        // Local Type Scope
        class CCSObserver_ObserverServices : public CPlayer_ObserverServices {
        public:
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
        class CHandleDummy : public CBaseEntity {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CCSObserver_MovementServices : public CPlayer_MovementServices {
        public:
        };

        class CSAdditionalMatchStats_t : public CSAdditionalPerRoundStats_t {
        public:
            static constexpr std::uintptr_t m_numRoundsSurvivedStreak        = 0x00F0; // int32
            static constexpr std::uintptr_t m_maxNumRoundsSurvivedStreak     = 0x00F4; // int32
            static constexpr std::uintptr_t m_numRoundsSurvivedTotal         = 0x00F8; // int32
            static constexpr std::uintptr_t m_iRoundsWonWithoutPurchase      = 0x00FC; // int32
            static constexpr std::uintptr_t m_iRoundsWonWithoutPurchaseTotal = 0x0100; // int32
            static constexpr std::uintptr_t m_numFirstKills                  = 0x0104; // int32
            static constexpr std::uintptr_t m_numClutchKills                 = 0x0108; // int32
            static constexpr std::uintptr_t m_numPistolKills                 = 0x010C; // int32
            static constexpr std::uintptr_t m_numSniperKills                 = 0x0110; // int32
            static constexpr std::uintptr_t m_iNumSuicides                   = 0x0114; // int32
            static constexpr std::uintptr_t m_iNumTeamKills                  = 0x0118; // int32
            static constexpr std::uintptr_t m_flTeamDamage                   = 0x011C; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncNavObstruction : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled               = 0x0748; // bool
            static constexpr std::uintptr_t m_bUseAsyncObstacleUpdate = 0x0749; // bool
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayerController_DamageServices : public CPlayerControllerComponent {
        public:
            static constexpr std::uintptr_t m_nSendUpdate = 0x0040; // int32
            static constexpr std::uintptr_t m_DamageList  = 0x0048; // CUtlVectorEmbeddedNetworkVar<CDamageRecord>
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayerController_InventoryServices : public CPlayerControllerComponent {
        public:
            static constexpr std::uintptr_t m_unMusicID                          = 0x0040; // uint16
            static constexpr std::uintptr_t m_rank                               = 0x0044; // MedalRank_t[6]
            static constexpr std::uintptr_t m_nPersonaDataPublicLevel            = 0x005C; // int32
            static constexpr std::uintptr_t m_nPersonaDataPublicCommendsLeader   = 0x0060; // int32
            static constexpr std::uintptr_t m_nPersonaDataPublicCommendsTeacher  = 0x0064; // int32
            static constexpr std::uintptr_t m_nPersonaDataPublicCommendsFriendly = 0x0068; // int32
            static constexpr std::uintptr_t m_nPersonaDataXpTrailLevel           = 0x006C; // int32
            static constexpr std::uintptr_t m_unEquippedPlayerSprayIDs           = 0x0F48; // uint32[1]
            static constexpr std::uintptr_t m_unCurrentLoadoutHash               = 0x0F50; // uint64
            static constexpr std::uintptr_t m_vecServerAuthoritativeWeaponSlots  = 0x0F58; // CUtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>
        };

        // Has VTable
        // Construct Allowed
        class CCS2ChickenGraphController : public CAnimGraphControllerBase {
        public:
            static constexpr std::uintptr_t m_action                    = 0x0090; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            static constexpr std::uintptr_t m_actionSubtype             = 0x00A8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            static constexpr std::uintptr_t m_bActionReset              = 0x00C0; // CAnimGraph2ParamAutoResetOptionalRef
            static constexpr std::uintptr_t m_idleVariation             = 0x00E0; // CAnimGraph2ParamOptionalRef<float32>
            static constexpr std::uintptr_t m_runVariation              = 0x00F8; // CAnimGraph2ParamOptionalRef<float32>
            static constexpr std::uintptr_t m_panicVariation            = 0x0110; // CAnimGraph2ParamOptionalRef<float32>
            static constexpr std::uintptr_t m_squatVariation            = 0x0128; // CAnimGraph2ParamOptionalRef<float32>
            static constexpr std::uintptr_t m_bInWater                  = 0x0140; // CAnimGraph2ParamOptionalRef<bool>
            static constexpr std::uintptr_t m_bHasActionCompletedEvent  = 0x0158; // bool
            static constexpr std::uintptr_t m_bWaitingForCompletedEvent = 0x0159; // bool
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
        class CBasePlayerController : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_nInButtonsWhichAreToggles   = 0x04B0; // uint64
            static constexpr std::uintptr_t m_nTickBase                   = 0x04B8; // uint32
            static constexpr std::uintptr_t m_hPawn                       = 0x04E0; // CHandle<CBasePlayerPawn>
            static constexpr std::uintptr_t m_bKnownTeamMismatch          = 0x04E4; // bool
            static constexpr std::uintptr_t m_nSplitScreenSlot            = 0x04E8; // CSplitScreenSlot
            static constexpr std::uintptr_t m_hSplitOwner                 = 0x04EC; // CHandle<CBasePlayerController>
            static constexpr std::uintptr_t m_hSplitScreenPlayers         = 0x04F0; // CUtlVector<CHandle<CBasePlayerController>>
            static constexpr std::uintptr_t m_bIsHLTV                     = 0x0508; // bool
            static constexpr std::uintptr_t m_iConnected                  = 0x050C; // PlayerConnectedState
            static constexpr std::uintptr_t m_iszPlayerName               = 0x0510; // char[128]
            static constexpr std::uintptr_t m_szNetworkIDString           = 0x0590; // CUtlString
            static constexpr std::uintptr_t m_fLerpTime                   = 0x0598; // float32
            static constexpr std::uintptr_t m_bLagCompensation            = 0x059C; // bool
            static constexpr std::uintptr_t m_bPredict                    = 0x059D; // bool
            static constexpr std::uintptr_t m_bIsLowViolence              = 0x05A4; // bool
            static constexpr std::uintptr_t m_bGamePaused                 = 0x05A5; // bool
            static constexpr std::uintptr_t m_iIgnoreGlobalChat           = 0x06E0; // ChatIgnoreType_t
            static constexpr std::uintptr_t m_flLastPlayerTalkTime        = 0x06E4; // float32
            static constexpr std::uintptr_t m_flLastEntitySteadyState     = 0x06E8; // float32
            static constexpr std::uintptr_t m_nAvailableEntitySteadyState = 0x06EC; // int32
            static constexpr std::uintptr_t m_bHasAnySteadyStateEnts      = 0x06F0; // bool
            static constexpr std::uintptr_t m_steamID                     = 0x0700; // uint64
            static constexpr std::uintptr_t m_bNoClipEnabled              = 0x0708; // bool
            static constexpr std::uintptr_t m_iDesiredFOV                 = 0x070C; // uint32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointCameraVFOV : public CPointCamera {
        public:
            static constexpr std::uintptr_t m_flVerticalFOV = 0x0508; // float32
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_RadioServices : public CPlayerPawnComponent {
        public:
            static constexpr std::uintptr_t m_flGotHostageTalkTimer = 0x0048; // GameTime_t
            static constexpr std::uintptr_t m_flDefusingTalkTimer   = 0x004C; // GameTime_t
            static constexpr std::uintptr_t m_flC4PlantTalkTimer    = 0x0050; // GameTime_t
            static constexpr std::uintptr_t m_flRadioTokenSlots     = 0x0054; // GameTime_t[3]
            static constexpr std::uintptr_t m_bIgnoreRadio          = 0x0060; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CVoteController : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_iActiveIssueIndex     = 0x04A8; // int32
            static constexpr std::uintptr_t m_iOnlyTeamToVote       = 0x04AC; // int32
            static constexpr std::uintptr_t m_nVoteOptionCount      = 0x04B0; // int32[5]
            static constexpr std::uintptr_t m_nPotentialVotes       = 0x04C4; // int32
            static constexpr std::uintptr_t m_bIsYesNoVote          = 0x04C8; // bool
            static constexpr std::uintptr_t m_acceptingVotesTimer   = 0x04D0; // CountdownTimer
            static constexpr std::uintptr_t m_executeCommandTimer   = 0x04E8; // CountdownTimer
            static constexpr std::uintptr_t m_resetVoteTimer        = 0x0500; // CountdownTimer
            static constexpr std::uintptr_t m_nVotesCast            = 0x0518; // int32[64]
            static constexpr std::uintptr_t m_playerHoldingVote     = 0x0618; // CPlayerSlot
            static constexpr std::uintptr_t m_playerOverrideForVote = 0x061C; // CPlayerSlot
            static constexpr std::uintptr_t m_nHighestCountIndex    = 0x0620; // int32
            static constexpr std::uintptr_t m_potentialIssues       = 0x0628; // CUtlVector<CBaseIssue*>
            static constexpr std::uintptr_t m_VoteOptions           = 0x0640; // CUtlVector<char*>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CMapVetoPickController : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_bPlayedIntroVcd                 = 0x04A8; // bool
            static constexpr std::uintptr_t m_bNeedToPlayFiveSecondsRemaining = 0x04A9; // bool
            static constexpr std::uintptr_t m_dblPreMatchDraftSequenceTime    = 0x04C8; // float64
            static constexpr std::uintptr_t m_bPreMatchDraftStateChanged      = 0x04D0; // bool
            static constexpr std::uintptr_t m_nDraftType                      = 0x04D4; // int32
            static constexpr std::uintptr_t m_nTeamWinningCoinToss            = 0x04D8; // int32
            static constexpr std::uintptr_t m_nTeamWithFirstChoice            = 0x04DC; // int32[64]
            static constexpr std::uintptr_t m_nVoteMapIdsList                 = 0x05DC; // int32[7]
            static constexpr std::uintptr_t m_nAccountIDs                     = 0x05F8; // int32[64]
            static constexpr std::uintptr_t m_nMapId0                         = 0x06F8; // int32[64]
            static constexpr std::uintptr_t m_nMapId1                         = 0x07F8; // int32[64]
            static constexpr std::uintptr_t m_nMapId2                         = 0x08F8; // int32[64]
            static constexpr std::uintptr_t m_nMapId3                         = 0x09F8; // int32[64]
            static constexpr std::uintptr_t m_nMapId4                         = 0x0AF8; // int32[64]
            static constexpr std::uintptr_t m_nMapId5                         = 0x0BF8; // int32[64]
            static constexpr std::uintptr_t m_nStartingSide0                  = 0x0CF8; // int32[64]
            static constexpr std::uintptr_t m_nCurrentPhase                   = 0x0DF8; // int32
            static constexpr std::uintptr_t m_nPhaseStartTick                 = 0x0DFC; // int32
            static constexpr std::uintptr_t m_nPhaseDurationTicks             = 0x0E00; // int32
            static constexpr std::uintptr_t m_OnMapVetoed                     = 0x0E08; // CEntityOutputTemplate<CUtlSymbolLarge,CUtlSymbolLarge>
            static constexpr std::uintptr_t m_OnMapPicked                     = 0x0E28; // CEntityOutputTemplate<CUtlSymbolLarge,CUtlSymbolLarge>
            static constexpr std::uintptr_t m_OnSidesPicked                   = 0x0E48; // CEntityOutputTemplate<int32,int32>
            static constexpr std::uintptr_t m_OnNewPhaseStarted               = 0x0E68; // CEntityOutputTemplate<int32,int32>
            static constexpr std::uintptr_t m_OnLevelTransition               = 0x0E88; // CEntityOutputTemplate<int32,int32>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicEventListener : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_strEventName = 0x04B8; // CUtlString
            static constexpr std::uintptr_t m_bIsEnabled   = 0x04C0; // bool
            static constexpr std::uintptr_t m_nTeam        = 0x04C4; // int32
            static constexpr std::uintptr_t m_OnEventFired = 0x04C8; // CEntityOutputTemplate<CUtlString,char*>
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
        class CCSPointScriptEntity : public CBaseEntity {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CBtActionAim : public CBtNode {
        public:
            static constexpr std::uintptr_t m_szSensorInputKey         = 0x0068; // CUtlString
            static constexpr std::uintptr_t m_szAimReadyKey            = 0x0080; // CUtlString
            static constexpr std::uintptr_t m_flZoomCooldownTimestamp  = 0x0088; // float32
            static constexpr std::uintptr_t m_bDoneAiming              = 0x008C; // bool
            static constexpr std::uintptr_t m_flLerpStartTime          = 0x0090; // float32
            static constexpr std::uintptr_t m_flNextLookTargetLerpTime = 0x0094; // float32
            static constexpr std::uintptr_t m_flPenaltyReductionRatio  = 0x0098; // float32
            static constexpr std::uintptr_t m_NextLookTarget           = 0x009C; // QAngle
            static constexpr std::uintptr_t m_AimTimer                 = 0x00A8; // CountdownTimer
            static constexpr std::uintptr_t m_SniperHoldTimer          = 0x00C0; // CountdownTimer
            static constexpr std::uintptr_t m_FocusIntervalTimer       = 0x00D8; // CountdownTimer
            static constexpr std::uintptr_t m_bAcquired                = 0x00F0; // bool
        };

        // Has VTable
        // Local Type Scope
        class CBtActionCombatPositioning : public CBtNode {
        public:
            static constexpr std::uintptr_t m_szSensorInputKey = 0x0068; // CUtlString
            static constexpr std::uintptr_t m_szIsAttackingKey = 0x0080; // CUtlString
            static constexpr std::uintptr_t m_ActionTimer      = 0x0088; // CountdownTimer
            static constexpr std::uintptr_t m_bCrouching       = 0x00A0; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvFade : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_fadeColor    = 0x04A8; // Color
            static constexpr std::uintptr_t m_Duration     = 0x04AC; // float32
            static constexpr std::uintptr_t m_HoldDuration = 0x04B0; // float32
            static constexpr std::uintptr_t m_OnBeginFade  = 0x04B8; // CEntityIOOutput
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
        class CMultiSource : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_rgEntities  = 0x04A8; // CHandle<CBaseEntity>[32]
            static constexpr std::uintptr_t m_rgTriggered = 0x0528; // int32[32]
            static constexpr std::uintptr_t m_OnTrigger   = 0x05A8; // CEntityIOOutput
            static constexpr std::uintptr_t m_iTotal      = 0x05C0; // int32
            static constexpr std::uintptr_t m_globalstate = 0x05C8; // CUtlSymbolLarge
        };

        // Has VTable
        // Local Type Scope
        class CBtActionMoveTo : public CBtNode {
        public:
            static constexpr std::uintptr_t m_szDestinationInputKey              = 0x0060; // CUtlString
            static constexpr std::uintptr_t m_szHidingSpotInputKey               = 0x0068; // CUtlString
            static constexpr std::uintptr_t m_szThreatInputKey                   = 0x0070; // CUtlString
            static constexpr std::uintptr_t m_vecDestination                     = 0x0078; // Vector
            static constexpr std::uintptr_t m_bAutoLookAdjust                    = 0x0084; // bool
            static constexpr std::uintptr_t m_bComputePath                       = 0x0085; // bool
            static constexpr std::uintptr_t m_flDamagingAreasPenaltyCost         = 0x0088; // float32
            static constexpr std::uintptr_t m_CheckApproximateCornersTimer       = 0x0090; // CountdownTimer
            static constexpr std::uintptr_t m_CheckHighPriorityItem              = 0x00A8; // CountdownTimer
            static constexpr std::uintptr_t m_RepathTimer                        = 0x00C0; // CountdownTimer
            static constexpr std::uintptr_t m_flArrivalEpsilon                   = 0x00D8; // float32
            static constexpr std::uintptr_t m_flAdditionalArrivalEpsilon2D       = 0x00DC; // float32
            static constexpr std::uintptr_t m_flHidingSpotCheckDistanceThreshold = 0x00E0; // float32
            static constexpr std::uintptr_t m_flNearestAreaDistanceThreshold     = 0x00E4; // float32
        };

        // Has VTable
        // Is Absract
        // Local Type Scope
        class CBtNodeCondition : public CBtNodeDecorator {
        public:
            static constexpr std::uintptr_t m_bNegated = 0x0058; // bool
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
        class CEnvCubemap : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_Entity_hCubemapTexture                = 0x0528; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_bCustomCubemapTexture          = 0x0530; // bool
            static constexpr std::uintptr_t m_Entity_flInfluenceRadius              = 0x0534; // float32
            static constexpr std::uintptr_t m_Entity_vBoxProjectMins                = 0x0538; // Vector
            static constexpr std::uintptr_t m_Entity_vBoxProjectMaxs                = 0x0544; // Vector
            static constexpr std::uintptr_t m_Entity_bMoveable                      = 0x0550; // bool
            static constexpr std::uintptr_t m_Entity_nHandshake                     = 0x0554; // int32
            static constexpr std::uintptr_t m_Entity_nEnvCubeMapArrayIndex          = 0x0558; // int32
            static constexpr std::uintptr_t m_Entity_nPriority                      = 0x055C; // int32
            static constexpr std::uintptr_t m_Entity_flEdgeFadeDist                 = 0x0560; // float32
            static constexpr std::uintptr_t m_Entity_vEdgeFadeDists                 = 0x0564; // Vector
            static constexpr std::uintptr_t m_Entity_flDiffuseScale                 = 0x0570; // float32
            static constexpr std::uintptr_t m_Entity_bStartDisabled                 = 0x0574; // bool
            static constexpr std::uintptr_t m_Entity_bDefaultEnvMap                 = 0x0575; // bool
            static constexpr std::uintptr_t m_Entity_bDefaultSpecEnvMap             = 0x0576; // bool
            static constexpr std::uintptr_t m_Entity_bIndoorCubeMap                 = 0x0577; // bool
            static constexpr std::uintptr_t m_Entity_bCopyDiffuseFromDefaultCubemap = 0x0578; // bool
            static constexpr std::uintptr_t m_Entity_bEnabled                       = 0x0588; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoLandmark : public CPointEntity {
        public:
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
        class CEnvWindController : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_EnvWindShared       = 0x04A8; // CEnvWindShared
            static constexpr std::uintptr_t m_fDirectionVariation = 0x05D8; // float32
            static constexpr std::uintptr_t m_fSpeedVariation     = 0x05DC; // float32
            static constexpr std::uintptr_t m_fTurbulence         = 0x05E0; // float32
            static constexpr std::uintptr_t m_fVolumeHalfExtentXY = 0x05E4; // float32
            static constexpr std::uintptr_t m_fVolumeHalfExtentZ  = 0x05E8; // float32
            static constexpr std::uintptr_t m_nVolumeResolutionXY = 0x05EC; // int32
            static constexpr std::uintptr_t m_nVolumeResolutionZ  = 0x05F0; // int32
            static constexpr std::uintptr_t m_nClipmapLevels      = 0x05F4; // int32
            static constexpr std::uintptr_t m_bIsMaster           = 0x05F8; // bool
            static constexpr std::uintptr_t m_bFirstTime          = 0x05F9; // bool
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
        class CInfoTargetServerOnly : public CServerOnlyPointEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundEventParameter : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_iszParamName = 0x04C0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flFloatValue = 0x04C8; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLightEntity : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_CLightComponent = 0x0730; // CLightComponent*
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CMultiLightProxy : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_iszLightNameFilter            = 0x04A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszLightClassFilter           = 0x04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flLightRadiusFilter           = 0x04B8; // float32
            static constexpr std::uintptr_t m_flBrightnessDelta             = 0x04BC; // float32
            static constexpr std::uintptr_t m_bPerformScreenFade            = 0x04C0; // bool
            static constexpr std::uintptr_t m_flTargetBrightnessMultiplier  = 0x04C4; // float32
            static constexpr std::uintptr_t m_flCurrentBrightnessMultiplier = 0x04C8; // float32
            static constexpr std::uintptr_t m_vecLights                     = 0x04D0; // CUtlVector<CHandle<CLightEntity>>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointChildModifier : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_bOrphanInsteadOfDeletingChildrenOnRemove = 0x04A8; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointTemplate : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_iszWorldName                 = 0x04A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszSource2EntityLumpName     = 0x04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszEntityFilterName          = 0x04B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flTimeoutInterval            = 0x04C0; // float32
            static constexpr std::uintptr_t m_bAsynchronouslySpawnEntities = 0x04C4; // bool
            static constexpr std::uintptr_t m_clientOnlyEntityBehavior     = 0x04C8; // PointTemplateClientOnlyEntityBehavior_t
            static constexpr std::uintptr_t m_ownerSpawnGroupType          = 0x04CC; // PointTemplateOwnerSpawnGroupType_t
            static constexpr std::uintptr_t m_createdSpawnGroupHandles     = 0x04D0; // CUtlVector<uint32>
            static constexpr std::uintptr_t m_SpawnedEntityHandles         = 0x04E8; // CUtlVector<CEntityHandle>
            static constexpr std::uintptr_t m_ScriptSpawnCallback          = 0x0500; // HSCRIPT
            static constexpr std::uintptr_t m_ScriptCallbackScope          = 0x0508; // HSCRIPT
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CGameGibManager : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_bAllowNewGibs     = 0x04C0; // bool
            static constexpr std::uintptr_t m_iCurrentMaxPieces = 0x04C4; // int32
            static constexpr std::uintptr_t m_iMaxPieces        = 0x04C8; // int32
            static constexpr std::uintptr_t m_iLastFrame        = 0x04CC; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CRagdollManager : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_iCurrentMaxRagdollCount = 0x04A8; // int8
            static constexpr std::uintptr_t m_iMaxRagdollCount        = 0x04AC; // int32
            static constexpr std::uintptr_t m_bSaveImportant          = 0x04B0; // bool
            static constexpr std::uintptr_t m_bCanTakeDamage          = 0x04B1; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundEventEntity : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_bStartOnSpawn         = 0x04A8; // bool
            static constexpr std::uintptr_t m_bToLocalPlayer        = 0x04A9; // bool
            static constexpr std::uintptr_t m_bStopOnNew            = 0x04AA; // bool
            static constexpr std::uintptr_t m_bSaveRestore          = 0x04AB; // bool
            static constexpr std::uintptr_t m_bSavedIsPlaying       = 0x04AC; // bool
            static constexpr std::uintptr_t m_flSavedElapsedTime    = 0x04B0; // float32
            static constexpr std::uintptr_t m_iszSourceEntityName   = 0x04B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszAttachmentName     = 0x04C0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_onGUIDChanged         = 0x04C8; // CEntityOutputTemplate<uint64,uint64>
            static constexpr std::uintptr_t m_onSoundFinished       = 0x04E8; // CEntityIOOutput
            static constexpr std::uintptr_t m_flClientCullRadius    = 0x0500; // float32
            static constexpr std::uintptr_t m_iszSoundName          = 0x0530; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hSource               = 0x054C; // CEntityHandle
            static constexpr std::uintptr_t m_nEntityIndexSelection = 0x0550; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CNullEntity : public CBaseEntity {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CSoundAreaEntityBase : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled        = 0x04A8; // bool
            static constexpr std::uintptr_t m_iszSoundAreaType = 0x04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_vPos             = 0x04B8; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CMathColorBlend : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_flInMin   = 0x04A8; // float32
            static constexpr std::uintptr_t m_flInMax   = 0x04AC; // float32
            static constexpr std::uintptr_t m_OutColor1 = 0x04B0; // Color
            static constexpr std::uintptr_t m_OutColor2 = 0x04B4; // Color
            static constexpr std::uintptr_t m_OutValue  = 0x04B8; // CEntityOutputTemplate<Color,Color>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundAreaEntitySphere : public CSoundAreaEntityBase {
        public:
            static constexpr std::uintptr_t m_flRadius = 0x04C8; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundAreaEntityOrientedBox : public CSoundAreaEntityBase {
        public:
            static constexpr std::uintptr_t m_vMin = 0x04C8; // Vector
            static constexpr std::uintptr_t m_vMax = 0x04D4; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundStackSave : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_iszStackName = 0x04A8; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvSoundscape : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_OnPlay                 = 0x04A8; // CEntityIOOutput
            static constexpr std::uintptr_t m_flRadius               = 0x04C0; // float32
            static constexpr std::uintptr_t m_soundEventName         = 0x04C8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bOverrideWithEvent     = 0x04D0; // bool
            static constexpr std::uintptr_t m_soundscapeIndex        = 0x04D4; // int32
            static constexpr std::uintptr_t m_soundscapeEntityListId = 0x04D8; // int32
            static constexpr std::uintptr_t m_positionNames          = 0x04E0; // CUtlSymbolLarge[8]
            static constexpr std::uintptr_t m_hProxySoundscape       = 0x0520; // CHandle<CEnvSoundscape>
            static constexpr std::uintptr_t m_bDisabled              = 0x0524; // bool
            static constexpr std::uintptr_t m_soundscapeName         = 0x0528; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_soundEventHash         = 0x0530; // uint32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundEventAABBEntity : public CSoundEventEntity {
        public:
            static constexpr std::uintptr_t m_vMins = 0x0558; // Vector
            static constexpr std::uintptr_t m_vMaxs = 0x0564; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundEventConeEntity : public CSoundEventEntity {
        public:
            static constexpr std::uintptr_t m_flEmitterAngle   = 0x0558; // float32
            static constexpr std::uintptr_t m_flSweetSpotAngle = 0x055C; // float32
            static constexpr std::uintptr_t m_flAttenMin       = 0x0560; // float32
            static constexpr std::uintptr_t m_flAttenMax       = 0x0564; // float32
            static constexpr std::uintptr_t m_iszParameterName = 0x0568; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundEventPathCornerEntity : public CSoundEventEntity {
        public:
            static constexpr std::uintptr_t m_iszPathCorner           = 0x0558; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iCountMax               = 0x0560; // int32
            static constexpr std::uintptr_t m_flDistanceMax           = 0x0564; // float32
            static constexpr std::uintptr_t m_flDistMaxSqr            = 0x0568; // float32
            static constexpr std::uintptr_t m_flDotProductMax         = 0x056C; // float32
            static constexpr std::uintptr_t m_bPlaying                = 0x0570; // bool
            static constexpr std::uintptr_t m_vecCornerPairsNetworked = 0x0598; // CNetworkUtlVectorBase<SoundeventPathCornerPairNetworked_t>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTeam : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_aPlayerControllers = 0x04A8; // CNetworkUtlVectorBase<CHandle<CBasePlayerController>>
            static constexpr std::uintptr_t m_aPlayers           = 0x04C0; // CNetworkUtlVectorBase<CHandle<CBasePlayerPawn>>
            static constexpr std::uintptr_t m_iScore             = 0x04D8; // int32
            static constexpr std::uintptr_t m_szTeamname         = 0x04DC; // char[129]
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoFan : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_fFanForceMaxRadius  = 0x04E8; // float32
            static constexpr std::uintptr_t m_fFanForceMinRadius  = 0x04EC; // float32
            static constexpr std::uintptr_t m_flCurveDistRange    = 0x04F0; // float32
            static constexpr std::uintptr_t m_FanForceCurveString = 0x04F8; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvHudHint : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_iszMessage = 0x04A8; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBaseToggle : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_toggle_state              = 0x0730; // TOGGLE_STATE
            static constexpr std::uintptr_t m_flMoveDistance            = 0x0734; // float32
            static constexpr std::uintptr_t m_flWait                    = 0x0738; // float32
            static constexpr std::uintptr_t m_flLip                     = 0x073C; // float32
            static constexpr std::uintptr_t m_bAlwaysFireBlockedOutputs = 0x0740; // bool
            static constexpr std::uintptr_t m_vecPosition1              = 0x0744; // Vector
            static constexpr std::uintptr_t m_vecPosition2              = 0x0750; // Vector
            static constexpr std::uintptr_t m_vecMoveAng                = 0x075C; // QAngle
            static constexpr std::uintptr_t m_vecAngle1                 = 0x0768; // QAngle
            static constexpr std::uintptr_t m_vecAngle2                 = 0x0774; // QAngle
            static constexpr std::uintptr_t m_flHeight                  = 0x0780; // float32
            static constexpr std::uintptr_t m_hActivator                = 0x0784; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_vecFinalDest              = 0x0788; // Vector
            static constexpr std::uintptr_t m_vecFinalAngle             = 0x0794; // QAngle
            static constexpr std::uintptr_t m_movementType              = 0x07A0; // int32
            static constexpr std::uintptr_t m_sMaster                   = 0x07A8; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseGameBlackboard : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_strGraphName = 0x04B0; // CUtlString
            static constexpr std::uintptr_t m_strStateBlob = 0x04B8; // CUtlString
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
        class CMarkupVolume : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled = 0x0730; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CMapInfo : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_iBuyingStatus                 = 0x04A8; // int32
            static constexpr std::uintptr_t m_flBombRadius                  = 0x04AC; // float32
            static constexpr std::uintptr_t m_iPetPopulation                = 0x04B0; // int32
            static constexpr std::uintptr_t m_bUseNormalSpawnsForDM         = 0x04B4; // bool
            static constexpr std::uintptr_t m_bDisableAutoGeneratedDMSpawns = 0x04B5; // bool
            static constexpr std::uintptr_t m_flBotMaxVisionDistance        = 0x04B8; // float32
            static constexpr std::uintptr_t m_iHostageCount                 = 0x04BC; // int32
            static constexpr std::uintptr_t m_bFadePlayerVisibilityFarZ     = 0x04C0; // bool
            static constexpr std::uintptr_t m_bRainTraceToSkyEnabled        = 0x04C1; // bool
            static constexpr std::uintptr_t m_flEnvRainStrength             = 0x04C4; // float32
            static constexpr std::uintptr_t m_flEnvPuddleRippleStrength     = 0x04C8; // float32
            static constexpr std::uintptr_t m_flEnvPuddleRippleDirection    = 0x04CC; // float32
            static constexpr std::uintptr_t m_flEnvWetnessCoverage          = 0x04D0; // float32
            static constexpr std::uintptr_t m_flEnvWetnessDryingAmount      = 0x04D4; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncWall : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_nState = 0x0730; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoGameEventProxy : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_iszEventName = 0x04A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flRange      = 0x04B0; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBasePlayerWeaponVData : public CEntitySubclassVDataBase {
        public:
            static constexpr std::uintptr_t m_szWorldModel                = 0x0028; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            static constexpr std::uintptr_t m_sToolsOnlyOwnerModelName    = 0x0108; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            static constexpr std::uintptr_t m_bBuiltRightHanded           = 0x01E8; // bool
            static constexpr std::uintptr_t m_bAllowFlipping              = 0x01E9; // bool
            static constexpr std::uintptr_t m_sMuzzleAttachment           = 0x01F0; // CAttachmentNameSymbolWithStorage
            static constexpr std::uintptr_t m_szMuzzleFlashParticle       = 0x0210; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            static constexpr std::uintptr_t m_szMuzzleFlashParticleConfig = 0x02F0; // CUtlString
            static constexpr std::uintptr_t m_szBarrelSmokeParticle       = 0x02F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            static constexpr std::uintptr_t m_nMuzzleSmokeShotThreshold   = 0x03D8; // uint8
            static constexpr std::uintptr_t m_flMuzzleSmokeTimeout        = 0x03DC; // float32
            static constexpr std::uintptr_t m_flMuzzleSmokeDecrementRate  = 0x03E0; // float32
            static constexpr std::uintptr_t m_bGenerateMuzzleLight        = 0x03E4; // bool
            static constexpr std::uintptr_t m_bLinkedCooldowns            = 0x03E5; // bool
            static constexpr std::uintptr_t m_iFlags                      = 0x03E6; // ItemFlagTypes_t
            static constexpr std::uintptr_t m_iWeight                     = 0x03E8; // int32
            static constexpr std::uintptr_t m_bAutoSwitchTo               = 0x03EC; // bool
            static constexpr std::uintptr_t m_bAutoSwitchFrom             = 0x03ED; // bool
            static constexpr std::uintptr_t m_nPrimaryAmmoType            = 0x03EE; // AmmoIndex_t
            static constexpr std::uintptr_t m_nSecondaryAmmoType          = 0x03EF; // AmmoIndex_t
            static constexpr std::uintptr_t m_iMaxClip1                   = 0x03F0; // int32
            static constexpr std::uintptr_t m_iMaxClip2                   = 0x03F4; // int32
            static constexpr std::uintptr_t m_iDefaultClip1               = 0x03F8; // int32
            static constexpr std::uintptr_t m_iDefaultClip2               = 0x03FC; // int32
            static constexpr std::uintptr_t m_bReserveAmmoAsClips         = 0x0400; // bool
            static constexpr std::uintptr_t m_bTreatAsSingleClip          = 0x0401; // bool
            static constexpr std::uintptr_t m_bKeepLoadedAmmo             = 0x0402; // bool
            static constexpr std::uintptr_t m_iRumbleEffect               = 0x0404; // RumbleEffect_t
            static constexpr std::uintptr_t m_flDropSpeed                 = 0x0408; // float32
            static constexpr std::uintptr_t m_iSlot                       = 0x040C; // int32
            static constexpr std::uintptr_t m_iPosition                   = 0x0410; // int32
            static constexpr std::uintptr_t m_aShootSounds                = 0x0418; // CUtlOrderedMap<WeaponSound_t,CSoundEventName>
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
        class CPointAngularVelocitySensor : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_hTargetEntity          = 0x04A8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_flThreshold            = 0x04AC; // float32
            static constexpr std::uintptr_t m_nLastCompareResult     = 0x04B0; // int32
            static constexpr std::uintptr_t m_nLastFireResult        = 0x04B4; // int32
            static constexpr std::uintptr_t m_flFireTime             = 0x04B8; // GameTime_t
            static constexpr std::uintptr_t m_flFireInterval         = 0x04BC; // float32
            static constexpr std::uintptr_t m_flLastAngVelocity      = 0x04C0; // float32
            static constexpr std::uintptr_t m_lastOrientation        = 0x04C4; // QAngle
            static constexpr std::uintptr_t m_vecAxis                = 0x04D0; // VectorWS
            static constexpr std::uintptr_t m_bUseHelper             = 0x04DC; // bool
            static constexpr std::uintptr_t m_AngularVelocity        = 0x04E0; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnLessThan             = 0x0500; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnLessThanOrEqualTo    = 0x0518; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnGreaterThan          = 0x0530; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnGreaterThanOrEqualTo = 0x0548; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnEqualTo              = 0x0560; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPathParticleRope : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_bStartActive          = 0x04B0; // bool
            static constexpr std::uintptr_t m_flMaxSimulationTime   = 0x04B4; // float32
            static constexpr std::uintptr_t m_iszEffectName         = 0x04B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_PathNodes_Name        = 0x04C0; // CUtlVector<CUtlSymbolLarge>
            static constexpr std::uintptr_t m_flParticleSpacing     = 0x04D8; // float32
            static constexpr std::uintptr_t m_flSlack               = 0x04DC; // float32
            static constexpr std::uintptr_t m_flRadius              = 0x04E0; // float32
            static constexpr std::uintptr_t m_ColorTint             = 0x04E4; // Color
            static constexpr std::uintptr_t m_nEffectState          = 0x04E8; // int32
            static constexpr std::uintptr_t m_iEffectIndex          = 0x04F0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            static constexpr std::uintptr_t m_PathNodes_Position    = 0x04F8; // CNetworkUtlVectorBase<Vector>
            static constexpr std::uintptr_t m_PathNodes_TangentIn   = 0x0510; // CNetworkUtlVectorBase<Vector>
            static constexpr std::uintptr_t m_PathNodes_TangentOut  = 0x0528; // CNetworkUtlVectorBase<Vector>
            static constexpr std::uintptr_t m_PathNodes_Color       = 0x0540; // CNetworkUtlVectorBase<Vector>
            static constexpr std::uintptr_t m_PathNodes_PinEnabled  = 0x0558; // CNetworkUtlVectorBase<bool>
            static constexpr std::uintptr_t m_PathNodes_RadiusScale = 0x0570; // CNetworkUtlVectorBase<float32>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvSplash : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_flScale = 0x04A8; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPathParticleRopeAlias_path_particle_rope_clientside : public CPathParticleRope {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPathSimple : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_CPathQueryComponent = 0x04B0; // CPathQueryComponent
            static constexpr std::uintptr_t m_pathString          = 0x05A0; // CUtlString
            static constexpr std::uintptr_t m_bClosedLoop         = 0x05A8; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPathWithDynamicNodes : public CPathSimple {
        public:
            static constexpr std::uintptr_t m_vecPathNodes             = 0x05B0; // CNetworkUtlVectorBase<CHandle<CPathNode>>
            static constexpr std::uintptr_t m_xInitialPathWorldToLocal = 0x05D0; // CTransform
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncVPhysicsClip : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled = 0x0730; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncInteractionLayerClip : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled        = 0x0730; // bool
            static constexpr std::uintptr_t m_iszInteractsAs   = 0x0738; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszInteractsWith = 0x0740; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPathCorner : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_flWait   = 0x04A8; // float32
            static constexpr std::uintptr_t m_flRadius = 0x04AC; // float32
            static constexpr std::uintptr_t m_OnPass   = 0x04B0; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncMoveLinear : public CBaseToggle {
        public:
            static constexpr std::uintptr_t m_authoredPosition                          = 0x07B0; // MoveLinearAuthoredPos_t
            static constexpr std::uintptr_t m_angMoveEntitySpace                        = 0x07B4; // QAngle
            static constexpr std::uintptr_t m_vecMoveDirParentSpace                     = 0x07C0; // Vector
            static constexpr std::uintptr_t m_soundStart                                = 0x07D0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_soundStop                                 = 0x07D8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_currentSound                              = 0x07E0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flBlockDamage                             = 0x07E8; // float32
            static constexpr std::uintptr_t m_flStartPosition                           = 0x07EC; // float32
            static constexpr std::uintptr_t m_OnFullyOpen                               = 0x07F8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnFullyClosed                             = 0x0810; // CEntityIOOutput
            static constexpr std::uintptr_t m_bCreateMovableNavMesh                     = 0x0828; // bool
            static constexpr std::uintptr_t m_bAllowMovableNavMeshDockingOnEntireEntity = 0x0829; // bool
            static constexpr std::uintptr_t m_bCreateNavObstacle                        = 0x082A; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointServerCommand : public CPointEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCommentaryAuto : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_OnCommentaryNewGame          = 0x04A8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnCommentaryMidGame          = 0x04C0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnCommentaryMultiplayerSpawn = 0x04D8; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvBeverage : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_CanInDispenser = 0x04A8; // bool
            static constexpr std::uintptr_t m_nBeverageType  = 0x04AC; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvWind : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_EnvWindShared = 0x04A8; // CEnvWindShared
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysicsWire : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_nDensity = 0x04A8; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvMuzzleFlash : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_flScale             = 0x04A8; // float32
            static constexpr std::uintptr_t m_iszParentAttachment = 0x04B0; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvViewPunch : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_flRadius     = 0x04A8; // float32
            static constexpr std::uintptr_t m_angViewPunch = 0x04AC; // QAngle
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvEntityIgniter : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_flLifetime = 0x04A8; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvEntityMaker : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_vecEntityMins                = 0x04A8; // Vector
            static constexpr std::uintptr_t m_vecEntityMaxs                = 0x04B4; // Vector
            static constexpr std::uintptr_t m_hCurrentInstance             = 0x04C0; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hCurrentBlocker              = 0x04C4; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_vecBlockerOrigin             = 0x04C8; // Vector
            static constexpr std::uintptr_t m_angPostSpawnDirection        = 0x04D4; // QAngle
            static constexpr std::uintptr_t m_flPostSpawnDirectionVariance = 0x04E0; // float32
            static constexpr std::uintptr_t m_flPostSpawnSpeed             = 0x04E4; // float32
            static constexpr std::uintptr_t m_bPostSpawnUseAngles          = 0x04E8; // bool
            static constexpr std::uintptr_t m_iszTemplate                  = 0x04F0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_pOutputOnSpawned             = 0x04F8; // CEntityIOOutput
            static constexpr std::uintptr_t m_pOutputOnFailedSpawn         = 0x0510; // CEntityIOOutput
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
        class CEnvInstructorHint : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_iszName             = 0x04A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszReplace_Key      = 0x04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszHintTargetEntity = 0x04B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iTimeout            = 0x04C0; // int32
            static constexpr std::uintptr_t m_iDisplayLimit       = 0x04C4; // int32
            static constexpr std::uintptr_t m_iszIcon_Onscreen    = 0x04C8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszIcon_Offscreen   = 0x04D0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszCaption          = 0x04D8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszActivatorCaption = 0x04E0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_Color               = 0x04E8; // Color
            static constexpr std::uintptr_t m_fIconOffset         = 0x04EC; // float32
            static constexpr std::uintptr_t m_fRange              = 0x04F0; // float32
            static constexpr std::uintptr_t m_iPulseOption        = 0x04F4; // uint8
            static constexpr std::uintptr_t m_iAlphaOption        = 0x04F5; // uint8
            static constexpr std::uintptr_t m_iShakeOption        = 0x04F6; // uint8
            static constexpr std::uintptr_t m_bStatic             = 0x04F7; // bool
            static constexpr std::uintptr_t m_bNoOffscreen        = 0x04F8; // bool
            static constexpr std::uintptr_t m_bForceCaption       = 0x04F9; // bool
            static constexpr std::uintptr_t m_iInstanceType       = 0x04FC; // int32
            static constexpr std::uintptr_t m_bSuppressRest       = 0x0500; // bool
            static constexpr std::uintptr_t m_iszBinding          = 0x0508; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bAllowNoDrawTarget  = 0x0510; // bool
            static constexpr std::uintptr_t m_bAutoStart          = 0x0511; // bool
            static constexpr std::uintptr_t m_bLocalPlayerOnly    = 0x0512; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInstructorEventEntity : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_iszName             = 0x04A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszHintTargetEntity = 0x04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hTargetPlayer       = 0x04B8; // CHandle<CBasePlayerPawn>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvShake : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_limitToEntity = 0x04A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_Amplitude     = 0x04B0; // float32
            static constexpr std::uintptr_t m_Frequency     = 0x04B4; // float32
            static constexpr std::uintptr_t m_Duration      = 0x04B8; // float32
            static constexpr std::uintptr_t m_Radius        = 0x04BC; // float32
            static constexpr std::uintptr_t m_stopTime      = 0x04C0; // GameTime_t
            static constexpr std::uintptr_t m_nextShake     = 0x04C4; // GameTime_t
            static constexpr std::uintptr_t m_currentAmp    = 0x04C8; // float32
            static constexpr std::uintptr_t m_maxForce      = 0x04CC; // Vector
            static constexpr std::uintptr_t m_shakeCallback = 0x04E0; // CPhysicsShake
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
        class CEnvTilt : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_Duration = 0x04A8; // float32
            static constexpr std::uintptr_t m_Radius   = 0x04AC; // float32
            static constexpr std::uintptr_t m_TiltTime = 0x04B0; // float32
            static constexpr std::uintptr_t m_stopTime = 0x04B4; // GameTime_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvSpark : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_flDelay      = 0x04A8; // float32
            static constexpr std::uintptr_t m_nMagnitude   = 0x04AC; // int32
            static constexpr std::uintptr_t m_nTrailLength = 0x04B0; // int32
            static constexpr std::uintptr_t m_nType        = 0x04B4; // int32
            static constexpr std::uintptr_t m_OnSpark      = 0x04B8; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CMathCounter : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_flMin            = 0x04A8; // float32
            static constexpr std::uintptr_t m_flMax            = 0x04AC; // float32
            static constexpr std::uintptr_t m_bHitMin          = 0x04B0; // bool
            static constexpr std::uintptr_t m_bHitMax          = 0x04B1; // bool
            static constexpr std::uintptr_t m_bDisabled        = 0x04B2; // bool
            static constexpr std::uintptr_t m_OutValue         = 0x04B8; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnGetValue       = 0x04D8; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnHitMin         = 0x04F8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnHitMax         = 0x0510; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnChangedFromMin = 0x0528; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnChangedFromMax = 0x0540; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicAchievement : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled             = 0x04A8; // bool
            static constexpr std::uintptr_t m_iszAchievementEventID = 0x04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_OnFired               = 0x04B8; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBaseButton : public CBaseToggle {
        public:
            static constexpr std::uintptr_t m_angMoveEntitySpace        = 0x07B0; // QAngle
            static constexpr std::uintptr_t m_fStayPushed               = 0x07BC; // bool
            static constexpr std::uintptr_t m_fRotating                 = 0x07BD; // bool
            static constexpr std::uintptr_t m_ls                        = 0x07C0; // locksound_t
            static constexpr std::uintptr_t m_sUseSound                 = 0x07E0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_sLockedSound              = 0x07E8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_sUnlockedSound            = 0x07F0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_sOverrideAnticipationName = 0x07F8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bLocked                   = 0x0800; // bool
            static constexpr std::uintptr_t m_bDisabled                 = 0x0801; // bool
            static constexpr std::uintptr_t m_flUseLockedTime           = 0x0804; // GameTime_t
            static constexpr std::uintptr_t m_bSolidBsp                 = 0x0808; // bool
            static constexpr std::uintptr_t m_OnDamaged                 = 0x0810; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnPressed                 = 0x0828; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnUseLocked               = 0x0840; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnIn                      = 0x0858; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnOut                     = 0x0870; // CEntityIOOutput
            static constexpr std::uintptr_t m_nState                    = 0x0888; // int32
            static constexpr std::uintptr_t m_hConstraint               = 0x088C; // CEntityHandle
            static constexpr std::uintptr_t m_hConstraintParent         = 0x0890; // CEntityHandle
            static constexpr std::uintptr_t m_bForceNpcExclude          = 0x0894; // bool
            static constexpr std::uintptr_t m_sGlowEntity               = 0x0898; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_glowEntity                = 0x08A0; // CHandle<CBaseModelEntity>
            static constexpr std::uintptr_t m_usable                    = 0x08A4; // bool
            static constexpr std::uintptr_t m_szDisplayText             = 0x08A8; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicGameEventListener : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_OnEventFired     = 0x04B8; // CEntityIOOutput
            static constexpr std::uintptr_t m_iszGameEventName = 0x04D0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszGameEventItem = 0x04D8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bEnabled         = 0x04E0; // bool
            static constexpr std::uintptr_t m_bStartDisabled   = 0x04E1; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicMeasureMovement : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_strMeasureTarget    = 0x04A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_strMeasureReference = 0x04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_strTargetReference  = 0x04B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hMeasureTarget      = 0x04C0; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hMeasureReference   = 0x04C4; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hTarget             = 0x04C8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hTargetReference    = 0x04CC; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_flScale             = 0x04D0; // float32
            static constexpr std::uintptr_t m_nMeasureType        = 0x04D4; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicNPCCounter : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_OnMinCountAll       = 0x04A8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnMaxCountAll       = 0x04C0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnFactorAll         = 0x04D8; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnMinPlayerDistAll  = 0x04F8; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnMinCount_1        = 0x0518; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnMaxCount_1        = 0x0530; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnFactor_1          = 0x0548; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnMinPlayerDist_1   = 0x0568; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnMinCount_2        = 0x0588; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnMaxCount_2        = 0x05A0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnFactor_2          = 0x05B8; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnMinPlayerDist_2   = 0x05D8; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnMinCount_3        = 0x05F8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnMaxCount_3        = 0x0610; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnFactor_3          = 0x0628; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnMinPlayerDist_3   = 0x0648; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_hSource             = 0x0668; // CEntityHandle
            static constexpr std::uintptr_t m_iszSourceEntityName = 0x0670; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flDistanceMax       = 0x0678; // float32
            static constexpr std::uintptr_t m_bDisabled           = 0x067C; // bool
            static constexpr std::uintptr_t m_nMinCountAll        = 0x0680; // int32
            static constexpr std::uintptr_t m_nMaxCountAll        = 0x0684; // int32
            static constexpr std::uintptr_t m_nMinFactorAll       = 0x0688; // int32
            static constexpr std::uintptr_t m_nMaxFactorAll       = 0x068C; // int32
            static constexpr std::uintptr_t m_iszNPCClassname_1   = 0x0698; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_nNPCState_1         = 0x06A0; // int32
            static constexpr std::uintptr_t m_bInvertState_1      = 0x06A4; // bool
            static constexpr std::uintptr_t m_nMinCount_1         = 0x06A8; // int32
            static constexpr std::uintptr_t m_nMaxCount_1         = 0x06AC; // int32
            static constexpr std::uintptr_t m_nMinFactor_1        = 0x06B0; // int32
            static constexpr std::uintptr_t m_nMaxFactor_1        = 0x06B4; // int32
            static constexpr std::uintptr_t m_flDefaultDist_1     = 0x06BC; // float32
            static constexpr std::uintptr_t m_iszNPCClassname_2   = 0x06C0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_nNPCState_2         = 0x06C8; // int32
            static constexpr std::uintptr_t m_bInvertState_2      = 0x06CC; // bool
            static constexpr std::uintptr_t m_nMinCount_2         = 0x06D0; // int32
            static constexpr std::uintptr_t m_nMaxCount_2         = 0x06D4; // int32
            static constexpr std::uintptr_t m_nMinFactor_2        = 0x06D8; // int32
            static constexpr std::uintptr_t m_nMaxFactor_2        = 0x06DC; // int32
            static constexpr std::uintptr_t m_flDefaultDist_2     = 0x06E4; // float32
            static constexpr std::uintptr_t m_iszNPCClassname_3   = 0x06E8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_nNPCState_3         = 0x06F0; // int32
            static constexpr std::uintptr_t m_bInvertState_3      = 0x06F4; // bool
            static constexpr std::uintptr_t m_nMinCount_3         = 0x06F8; // int32
            static constexpr std::uintptr_t m_nMaxCount_3         = 0x06FC; // int32
            static constexpr std::uintptr_t m_nMinFactor_3        = 0x0700; // int32
            static constexpr std::uintptr_t m_nMaxFactor_3        = 0x0704; // int32
            static constexpr std::uintptr_t m_flDefaultDist_3     = 0x070C; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTankTrainAI : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_hTrain            = 0x04A8; // CHandle<CFuncTrackTrain>
            static constexpr std::uintptr_t m_hTargetEntity     = 0x04AC; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_soundPlaying      = 0x04B0; // int32
            static constexpr std::uintptr_t m_startSoundName    = 0x04C8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_engineSoundName   = 0x04D0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_movementSoundName = 0x04D8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_targetEntityName  = 0x04E0; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicPlayerProxy : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_PlayerHasAmmo         = 0x04A8; // CEntityIOOutput
            static constexpr std::uintptr_t m_PlayerHasNoAmmo       = 0x04C0; // CEntityIOOutput
            static constexpr std::uintptr_t m_PlayerDied            = 0x04D8; // CEntityIOOutput
            static constexpr std::uintptr_t m_RequestedPlayerHealth = 0x04F0; // CEntityOutputTemplate<int32,int32>
            static constexpr std::uintptr_t m_hPlayer               = 0x0510; // CHandle<CBaseEntity>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicScript : public CPointEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTimerEntity : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_OnTimer            = 0x04A8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnTimerHigh        = 0x04C0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnTimerLow         = 0x04D8; // CEntityIOOutput
            static constexpr std::uintptr_t m_iDisabled          = 0x04F0; // int32
            static constexpr std::uintptr_t m_flInitialDelay     = 0x04F4; // float32
            static constexpr std::uintptr_t m_flRefireTime       = 0x04F8; // float32
            static constexpr std::uintptr_t m_bUpDownState       = 0x04FC; // bool
            static constexpr std::uintptr_t m_iUseRandomTime     = 0x0500; // int32
            static constexpr std::uintptr_t m_bPauseAfterFiring  = 0x0504; // bool
            static constexpr std::uintptr_t m_flLowerRandomBound = 0x0508; // float32
            static constexpr std::uintptr_t m_flUpperRandomBound = 0x050C; // float32
            static constexpr std::uintptr_t m_flRemainingTime    = 0x0510; // float32
            static constexpr std::uintptr_t m_bPaused            = 0x0514; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicLineToEntity : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_Line        = 0x04A8; // CEntityOutputTemplate<Vector,Vector>
            static constexpr std::uintptr_t m_SourceName  = 0x04D0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_StartEntity = 0x04D8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_EndEntity   = 0x04DC; // CHandle<CBaseEntity>
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
        class CLogicCompare : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_flInValue      = 0x04A8; // float32
            static constexpr std::uintptr_t m_flCompareValue = 0x04AC; // float32
            static constexpr std::uintptr_t m_OnLessThan     = 0x04B0; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnEqualTo      = 0x04D0; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnNotEqualTo   = 0x04F0; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnGreaterThan  = 0x0510; // CEntityOutputTemplate<float32,float32>
        };

        // Has VTable
        // Local Type Scope
        class CMarkupVolumeTagged : public CMarkupVolume {
        public:
            static constexpr std::uintptr_t m_GroupNames        = 0x0738; // CUtlVector<CGlobalSymbol>
            static constexpr std::uintptr_t m_Tags              = 0x0750; // CUtlVector<CGlobalSymbol>
            static constexpr std::uintptr_t m_bIsGroup          = 0x0768; // bool
            static constexpr std::uintptr_t m_bGroupByPrefab    = 0x0769; // bool
            static constexpr std::uintptr_t m_bGroupByVolume    = 0x076A; // bool
            static constexpr std::uintptr_t m_bGroupOtherGroups = 0x076B; // bool
            static constexpr std::uintptr_t m_bIsInGroup        = 0x076C; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicCollisionPair : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_nameAttach1                         = 0x04A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_nameAttach2                         = 0x04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_includeHierarchy                    = 0x04B8; // bool
            static constexpr std::uintptr_t m_supportMultipleEntitiesWithSameName = 0x04B9; // bool
            static constexpr std::uintptr_t m_disabled                            = 0x04BA; // bool
            static constexpr std::uintptr_t m_succeeded                           = 0x04BB; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicBranchList : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_nLogicBranchNames = 0x04A8; // CUtlSymbolLarge[16]
            static constexpr std::uintptr_t m_LogicBranchList   = 0x0528; // CUtlVector<CHandle<CBaseEntity>>
            static constexpr std::uintptr_t m_eLastState        = 0x0540; // CLogicBranchList::LogicBranchListenerLastState_t
            static constexpr std::uintptr_t m_OnAllTrue         = 0x0548; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnAllFalse        = 0x0560; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnMixed           = 0x0578; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerBrush : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_OnStartTouch       = 0x0730; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnEndTouch         = 0x0748; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnUse              = 0x0760; // CEntityIOOutput
            static constexpr std::uintptr_t m_iInputFilter       = 0x0778; // int32
            static constexpr std::uintptr_t m_iDontMessageParent = 0x077C; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPathKeyFrame : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_Origin      = 0x04A8; // Vector
            static constexpr std::uintptr_t m_Angles      = 0x04B4; // QAngle
            static constexpr std::uintptr_t m_qAngle      = 0x04C0; // Quaternion
            static constexpr std::uintptr_t m_iNextKey    = 0x04D0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flNextTime  = 0x04D8; // float32
            static constexpr std::uintptr_t m_pNextKey    = 0x04E0; // CPathKeyFrame*
            static constexpr std::uintptr_t m_pPrevKey    = 0x04E8; // CPathKeyFrame*
            static constexpr std::uintptr_t m_flMoveSpeed = 0x04F0; // float32
        };

        // Has VTable
        // Is Absract
        // Local Type Scope
        class CPhysForce : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_nameAttach     = 0x04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_force          = 0x04B8; // float32
            static constexpr std::uintptr_t m_forceTime      = 0x04BC; // float32
            static constexpr std::uintptr_t m_attachedObject = 0x04C0; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_wasRestored    = 0x04C4; // bool
            static constexpr std::uintptr_t m_integrator     = 0x04C8; // CConstantForceController
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysTorque : public CPhysForce {
        public:
            static constexpr std::uintptr_t m_axis = 0x0508; // VectorWS
        };

        // Has VTable
        // Is Absract
        // Local Type Scope
        class CPhysConstraint : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_nameAttach1                 = 0x04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_nameAttach2                 = 0x04B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hAttach1                    = 0x04C0; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hAttach2                    = 0x04C4; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_nameAttachment1             = 0x04C8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_nameAttachment2             = 0x04D0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_breakSound                  = 0x04D8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_forceLimit                  = 0x04E0; // float32
            static constexpr std::uintptr_t m_torqueLimit                 = 0x04E4; // float32
            static constexpr std::uintptr_t m_minTeleportDistance         = 0x04E8; // float32
            static constexpr std::uintptr_t m_bSnapObjectPositions        = 0x04EC; // bool
            static constexpr std::uintptr_t m_bTreatEntity1AsInfiniteMass = 0x04ED; // bool
            static constexpr std::uintptr_t m_OnBreak                     = 0x04F0; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPlatTrigger : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_pPlatform = 0x0730; // CHandle<CFuncPlat>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysBallSocket : public CPhysConstraint {
        public:
            static constexpr std::uintptr_t m_flJointFriction   = 0x0508; // float32
            static constexpr std::uintptr_t m_bEnableSwingLimit = 0x050C; // bool
            static constexpr std::uintptr_t m_flSwingLimit      = 0x0510; // float32
            static constexpr std::uintptr_t m_bEnableTwistLimit = 0x0514; // bool
            static constexpr std::uintptr_t m_flMinTwistAngle   = 0x0518; // float32
            static constexpr std::uintptr_t m_flMaxTwistAngle   = 0x051C; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysSlideConstraint : public CPhysConstraint {
        public:
            static constexpr std::uintptr_t m_axisEnd                  = 0x0510; // VectorWS
            static constexpr std::uintptr_t m_slideFriction            = 0x051C; // float32
            static constexpr std::uintptr_t m_systemLoadScale          = 0x0520; // float32
            static constexpr std::uintptr_t m_initialOffset            = 0x0524; // float32
            static constexpr std::uintptr_t m_bEnableLinearConstraint  = 0x0528; // bool
            static constexpr std::uintptr_t m_bEnableAngularConstraint = 0x0529; // bool
            static constexpr std::uintptr_t m_flMotorFrequency         = 0x052C; // float32
            static constexpr std::uintptr_t m_flMotorDampingRatio      = 0x0530; // float32
            static constexpr std::uintptr_t m_bUseEntityPivot          = 0x0534; // bool
            static constexpr std::uintptr_t m_soundInfo                = 0x0538; // ConstraintSoundInfo
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysPulley : public CPhysConstraint {
        public:
            static constexpr std::uintptr_t m_position2 = 0x0508; // VectorWS
            static constexpr std::uintptr_t m_offset    = 0x0514; // Vector[2]
            static constexpr std::uintptr_t m_addLength = 0x052C; // float32
            static constexpr std::uintptr_t m_gearRatio = 0x0530; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysLength : public CPhysConstraint {
        public:
            static constexpr std::uintptr_t m_offset      = 0x0508; // Vector[2]
            static constexpr std::uintptr_t m_vecAttach   = 0x0520; // VectorWS
            static constexpr std::uintptr_t m_addLength   = 0x052C; // float32
            static constexpr std::uintptr_t m_minLength   = 0x0530; // float32
            static constexpr std::uintptr_t m_totalLength = 0x0534; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CRagdollConstraint : public CPhysConstraint {
        public:
            static constexpr std::uintptr_t m_xmin      = 0x0508; // float32
            static constexpr std::uintptr_t m_xmax      = 0x050C; // float32
            static constexpr std::uintptr_t m_ymin      = 0x0510; // float32
            static constexpr std::uintptr_t m_ymax      = 0x0514; // float32
            static constexpr std::uintptr_t m_zmin      = 0x0518; // float32
            static constexpr std::uintptr_t m_zmax      = 0x051C; // float32
            static constexpr std::uintptr_t m_xfriction = 0x0520; // float32
            static constexpr std::uintptr_t m_yfriction = 0x0524; // float32
            static constexpr std::uintptr_t m_zfriction = 0x0528; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CGenericConstraint : public CPhysConstraint {
        public:
            static constexpr std::uintptr_t m_nLinearMotionX             = 0x0510; // JointMotion_t
            static constexpr std::uintptr_t m_nLinearMotionY             = 0x0514; // JointMotion_t
            static constexpr std::uintptr_t m_nLinearMotionZ             = 0x0518; // JointMotion_t
            static constexpr std::uintptr_t m_flLinearFrequencyX         = 0x051C; // float32
            static constexpr std::uintptr_t m_flLinearFrequencyY         = 0x0520; // float32
            static constexpr std::uintptr_t m_flLinearFrequencyZ         = 0x0524; // float32
            static constexpr std::uintptr_t m_flLinearDampingRatioX      = 0x0528; // float32
            static constexpr std::uintptr_t m_flLinearDampingRatioY      = 0x052C; // float32
            static constexpr std::uintptr_t m_flLinearDampingRatioZ      = 0x0530; // float32
            static constexpr std::uintptr_t m_flMaxLinearImpulseX        = 0x0534; // float32
            static constexpr std::uintptr_t m_flMaxLinearImpulseY        = 0x0538; // float32
            static constexpr std::uintptr_t m_flMaxLinearImpulseZ        = 0x053C; // float32
            static constexpr std::uintptr_t m_flBreakAfterTimeX          = 0x0540; // float32
            static constexpr std::uintptr_t m_flBreakAfterTimeY          = 0x0544; // float32
            static constexpr std::uintptr_t m_flBreakAfterTimeZ          = 0x0548; // float32
            static constexpr std::uintptr_t m_flBreakAfterTimeStartTimeX = 0x054C; // GameTime_t
            static constexpr std::uintptr_t m_flBreakAfterTimeStartTimeY = 0x0550; // GameTime_t
            static constexpr std::uintptr_t m_flBreakAfterTimeStartTimeZ = 0x0554; // GameTime_t
            static constexpr std::uintptr_t m_flBreakAfterTimeThresholdX = 0x0558; // float32
            static constexpr std::uintptr_t m_flBreakAfterTimeThresholdY = 0x055C; // float32
            static constexpr std::uintptr_t m_flBreakAfterTimeThresholdZ = 0x0560; // float32
            static constexpr std::uintptr_t m_flNotifyForceX             = 0x0564; // float32
            static constexpr std::uintptr_t m_flNotifyForceY             = 0x0568; // float32
            static constexpr std::uintptr_t m_flNotifyForceZ             = 0x056C; // float32
            static constexpr std::uintptr_t m_flNotifyForceMinTimeX      = 0x0570; // float32
            static constexpr std::uintptr_t m_flNotifyForceMinTimeY      = 0x0574; // float32
            static constexpr std::uintptr_t m_flNotifyForceMinTimeZ      = 0x0578; // float32
            static constexpr std::uintptr_t m_flNotifyForceLastTimeX     = 0x057C; // GameTime_t
            static constexpr std::uintptr_t m_flNotifyForceLastTimeY     = 0x0580; // GameTime_t
            static constexpr std::uintptr_t m_flNotifyForceLastTimeZ     = 0x0584; // GameTime_t
            static constexpr std::uintptr_t m_bAxisNotifiedX             = 0x0588; // bool
            static constexpr std::uintptr_t m_bAxisNotifiedY             = 0x0589; // bool
            static constexpr std::uintptr_t m_bAxisNotifiedZ             = 0x058A; // bool
            static constexpr std::uintptr_t m_nAngularMotionX            = 0x058C; // JointMotion_t
            static constexpr std::uintptr_t m_nAngularMotionY            = 0x0590; // JointMotion_t
            static constexpr std::uintptr_t m_nAngularMotionZ            = 0x0594; // JointMotion_t
            static constexpr std::uintptr_t m_flAngularFrequencyX        = 0x0598; // float32
            static constexpr std::uintptr_t m_flAngularFrequencyY        = 0x059C; // float32
            static constexpr std::uintptr_t m_flAngularFrequencyZ        = 0x05A0; // float32
            static constexpr std::uintptr_t m_flAngularDampingRatioX     = 0x05A4; // float32
            static constexpr std::uintptr_t m_flAngularDampingRatioY     = 0x05A8; // float32
            static constexpr std::uintptr_t m_flAngularDampingRatioZ     = 0x05AC; // float32
            static constexpr std::uintptr_t m_flMaxAngularImpulseX       = 0x05B0; // float32
            static constexpr std::uintptr_t m_flMaxAngularImpulseY       = 0x05B4; // float32
            static constexpr std::uintptr_t m_flMaxAngularImpulseZ       = 0x05B8; // float32
            static constexpr std::uintptr_t m_NotifyForceReachedX        = 0x05C0; // CEntityIOOutput
            static constexpr std::uintptr_t m_NotifyForceReachedY        = 0x05D8; // CEntityIOOutput
            static constexpr std::uintptr_t m_NotifyForceReachedZ        = 0x05F0; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSplineConstraint : public CPhysConstraint {
        public:
            static constexpr std::uintptr_t m_vAnchorOffsetRestore                 = 0x0558; // Vector
            static constexpr std::uintptr_t m_hSplineEntity                        = 0x0564; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_bEnableLateralConstraint             = 0x0570; // bool
            static constexpr std::uintptr_t m_bEnableVerticalConstraint            = 0x0571; // bool
            static constexpr std::uintptr_t m_bEnableAngularConstraint             = 0x0572; // bool
            static constexpr std::uintptr_t m_bEnableLimit                         = 0x0573; // bool
            static constexpr std::uintptr_t m_bFireEventsOnPath                    = 0x0574; // bool
            static constexpr std::uintptr_t m_flLinearFrequency                    = 0x0578; // float32
            static constexpr std::uintptr_t m_flLinarDampingRatio                  = 0x057C; // float32
            static constexpr std::uintptr_t m_flJointFriction                      = 0x0580; // float32
            static constexpr std::uintptr_t m_flTransitionTime                     = 0x0584; // float32
            static constexpr std::uintptr_t m_vPreSolveAnchorPos                   = 0x0598; // VectorWS
            static constexpr std::uintptr_t m_StartTransitionTime                  = 0x05A4; // GameTime_t
            static constexpr std::uintptr_t m_vTangentSpaceAnchorAtTransitionStart = 0x05A8; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysicsEntitySolver : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_hMovingEntity      = 0x04C0; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hPhysicsBlocker    = 0x04C4; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_separationDuration = 0x04C8; // float32
            static constexpr std::uintptr_t m_cancelTime         = 0x04CC; // GameTime_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysicsSpring : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_flFrequency     = 0x04B0; // float32
            static constexpr std::uintptr_t m_flDampingRatio  = 0x04B4; // float32
            static constexpr std::uintptr_t m_flRestLength    = 0x04B8; // float32
            static constexpr std::uintptr_t m_nameAttachStart = 0x04C0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_nameAttachEnd   = 0x04C8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_start           = 0x04D0; // VectorWS
            static constexpr std::uintptr_t m_end             = 0x04DC; // VectorWS
            static constexpr std::uintptr_t m_teleportTick    = 0x04E8; // uint32
        };

        // Has Trivial Destructor
        class RelationshipOverride_t : public Relationship_t {
        public:
            static constexpr std::uintptr_t entity    = 0x0008; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t classType = 0x000C; // Class_T
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointPush : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_bEnabled          = 0x04A8; // bool
            static constexpr std::uintptr_t m_flMagnitude       = 0x04AC; // float32
            static constexpr std::uintptr_t m_flRadius          = 0x04B0; // float32
            static constexpr std::uintptr_t m_flInnerRadius     = 0x04B4; // float32
            static constexpr std::uintptr_t m_flConeOfInfluence = 0x04B8; // float32
            static constexpr std::uintptr_t m_iszFilterName     = 0x04C0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hFilter           = 0x04C8; // CHandle<CBaseFilter>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoPlayerStart : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled     = 0x04A8; // bool
            static constexpr std::uintptr_t m_bIsMaster     = 0x04A9; // bool
            static constexpr std::uintptr_t m_pPawnSubclass = 0x04B0; // CGlobalSymbol
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointEntityFinder : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_hEntity       = 0x04A8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_iFilterName   = 0x04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hFilter       = 0x04B8; // CHandle<CBaseFilter>
            static constexpr std::uintptr_t m_iRefName      = 0x04C0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hReference    = 0x04C8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_FindMethod    = 0x04CC; // EntFinderMethod_t
            static constexpr std::uintptr_t m_OnFoundEntity = 0x04D0; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointValueRemapper : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled                = 0x04A8; // bool
            static constexpr std::uintptr_t m_bUpdateOnClient          = 0x04A9; // bool
            static constexpr std::uintptr_t m_nInputType               = 0x04AC; // ValueRemapperInputType_t
            static constexpr std::uintptr_t m_iszRemapLineStartName    = 0x04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszRemapLineEndName      = 0x04B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hRemapLineStart          = 0x04C0; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hRemapLineEnd            = 0x04C4; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_flMaximumChangePerSecond = 0x04C8; // float32
            static constexpr std::uintptr_t m_flDisengageDistance      = 0x04CC; // float32
            static constexpr std::uintptr_t m_flEngageDistance         = 0x04D0; // float32
            static constexpr std::uintptr_t m_bRequiresUseKey          = 0x04D4; // bool
            static constexpr std::uintptr_t m_nOutputType              = 0x04D8; // ValueRemapperOutputType_t
            static constexpr std::uintptr_t m_iszOutputEntityName      = 0x04E0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszOutputEntity2Name     = 0x04E8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszOutputEntity3Name     = 0x04F0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszOutputEntity4Name     = 0x04F8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hOutputEntities          = 0x0500; // CNetworkUtlVectorBase<CHandle<CBaseEntity>>
            static constexpr std::uintptr_t m_nHapticsType             = 0x0518; // ValueRemapperHapticsType_t
            static constexpr std::uintptr_t m_nMomentumType            = 0x051C; // ValueRemapperMomentumType_t
            static constexpr std::uintptr_t m_flMomentumModifier       = 0x0520; // float32
            static constexpr std::uintptr_t m_flSnapValue              = 0x0524; // float32
            static constexpr std::uintptr_t m_flCurrentMomentum        = 0x0528; // float32
            static constexpr std::uintptr_t m_nRatchetType             = 0x052C; // ValueRemapperRatchetType_t
            static constexpr std::uintptr_t m_flRatchetOffset          = 0x0530; // float32
            static constexpr std::uintptr_t m_flInputOffset            = 0x0534; // float32
            static constexpr std::uintptr_t m_bEngaged                 = 0x0538; // bool
            static constexpr std::uintptr_t m_bFirstUpdate             = 0x0539; // bool
            static constexpr std::uintptr_t m_flPreviousValue          = 0x053C; // float32
            static constexpr std::uintptr_t m_flPreviousUpdateTickTime = 0x0540; // GameTime_t
            static constexpr std::uintptr_t m_vecPreviousTestPoint     = 0x0544; // Vector
            static constexpr std::uintptr_t m_hUsingPlayer             = 0x0550; // CHandle<CBasePlayerPawn>
            static constexpr std::uintptr_t m_flCustomOutputValue      = 0x0554; // float32
            static constexpr std::uintptr_t m_iszSoundEngage           = 0x0558; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszSoundDisengage        = 0x0560; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszSoundReachedValueZero = 0x0568; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszSoundReachedValueOne  = 0x0570; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszSoundMovingLoop       = 0x0578; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_Position                 = 0x0598; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_PositionDelta            = 0x05B8; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnReachedValueZero       = 0x05D8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnReachedValueOne        = 0x05F0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnReachedValueCustom     = 0x0608; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnEngage                 = 0x0620; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnDisengage              = 0x0638; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointProximitySensor : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled     = 0x04A8; // bool
            static constexpr std::uintptr_t m_hTargetEntity = 0x04AC; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_Distance      = 0x04B0; // CEntityOutputTemplate<float32,float32>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointHurt : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_nDamage        = 0x04A8; // int32
            static constexpr std::uintptr_t m_bitsDamageType = 0x04AC; // DamageTypes_t
            static constexpr std::uintptr_t m_flRadius       = 0x04B0; // float32
            static constexpr std::uintptr_t m_flDelay        = 0x04B4; // float32
            static constexpr std::uintptr_t m_strTarget      = 0x04B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_pActivator     = 0x04C0; // CHandle<CBaseEntity>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointTeleport : public CServerOnlyPointEntity {
        public:
            static constexpr std::uintptr_t m_vSaveOrigin               = 0x04A8; // Vector
            static constexpr std::uintptr_t m_vSaveAngles               = 0x04B4; // QAngle
            static constexpr std::uintptr_t m_bTeleportParentedEntities = 0x04C0; // bool
            static constexpr std::uintptr_t m_bTeleportUseCurrentAngle  = 0x04C1; // bool
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
        class CFuncPropRespawnZone : public CBaseEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSWeaponBaseVData : public CBasePlayerWeaponVData {
        public:
            static constexpr std::uintptr_t m_WeaponType                               = 0x0440; // CSWeaponType
            static constexpr std::uintptr_t m_WeaponCategory                           = 0x0444; // CSWeaponCategory
            static constexpr std::uintptr_t m_szAnimSkeleton                           = 0x0448; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCNmSkeleton>>
            static constexpr std::uintptr_t m_vecMuzzlePos0                            = 0x0528; // Vector
            static constexpr std::uintptr_t m_vecMuzzlePos1                            = 0x0534; // Vector
            static constexpr std::uintptr_t m_szTracerParticle                         = 0x0540; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            static constexpr std::uintptr_t m_GearSlot                                 = 0x0620; // gear_slot_t
            static constexpr std::uintptr_t m_GearSlotPosition                         = 0x0624; // int32
            static constexpr std::uintptr_t m_DefaultLoadoutSlot                       = 0x0628; // loadout_slot_t
            static constexpr std::uintptr_t m_nPrice                                   = 0x062C; // int32
            static constexpr std::uintptr_t m_nKillAward                               = 0x0630; // int32
            static constexpr std::uintptr_t m_nPrimaryReserveAmmoMax                   = 0x0634; // int32
            static constexpr std::uintptr_t m_nSecondaryReserveAmmoMax                 = 0x0638; // int32
            static constexpr std::uintptr_t m_bMeleeWeapon                             = 0x063C; // bool
            static constexpr std::uintptr_t m_bHasBurstMode                            = 0x063D; // bool
            static constexpr std::uintptr_t m_bIsRevolver                              = 0x063E; // bool
            static constexpr std::uintptr_t m_bCannotShootUnderwater                   = 0x063F; // bool
            static constexpr std::uintptr_t m_szName                                   = 0x0640; // CGlobalSymbol
            static constexpr std::uintptr_t m_eSilencerType                            = 0x0648; // CSWeaponSilencerType
            static constexpr std::uintptr_t m_nCrosshairMinDistance                    = 0x064C; // int32
            static constexpr std::uintptr_t m_nCrosshairDeltaDistance                  = 0x0650; // int32
            static constexpr std::uintptr_t m_bIsFullAuto                              = 0x0654; // bool
            static constexpr std::uintptr_t m_nNumBullets                              = 0x0658; // int32
            static constexpr std::uintptr_t m_bReloadsSingleShells                     = 0x065C; // bool
            static constexpr std::uintptr_t m_flCycleTime                              = 0x0660; // CFiringModeFloat
            static constexpr std::uintptr_t m_flMaxSpeed                               = 0x0668; // CFiringModeFloat
            static constexpr std::uintptr_t m_flSpread                                 = 0x0670; // CFiringModeFloat
            static constexpr std::uintptr_t m_flInaccuracyCrouch                       = 0x0678; // CFiringModeFloat
            static constexpr std::uintptr_t m_flInaccuracyStand                        = 0x0680; // CFiringModeFloat
            static constexpr std::uintptr_t m_flInaccuracyJump                         = 0x0688; // CFiringModeFloat
            static constexpr std::uintptr_t m_flInaccuracyLand                         = 0x0690; // CFiringModeFloat
            static constexpr std::uintptr_t m_flInaccuracyLadder                       = 0x0698; // CFiringModeFloat
            static constexpr std::uintptr_t m_flInaccuracyFire                         = 0x06A0; // CFiringModeFloat
            static constexpr std::uintptr_t m_flInaccuracyMove                         = 0x06A8; // CFiringModeFloat
            static constexpr std::uintptr_t m_flRecoilAngle                            = 0x06B0; // CFiringModeFloat
            static constexpr std::uintptr_t m_flRecoilAngleVariance                    = 0x06B8; // CFiringModeFloat
            static constexpr std::uintptr_t m_flRecoilMagnitude                        = 0x06C0; // CFiringModeFloat
            static constexpr std::uintptr_t m_flRecoilMagnitudeVariance                = 0x06C8; // CFiringModeFloat
            static constexpr std::uintptr_t m_nTracerFrequency                         = 0x06D0; // CFiringModeInt
            static constexpr std::uintptr_t m_flInaccuracyJumpInitial                  = 0x06D8; // float32
            static constexpr std::uintptr_t m_flInaccuracyJumpApex                     = 0x06DC; // float32
            static constexpr std::uintptr_t m_flInaccuracyReload                       = 0x06E0; // float32
            static constexpr std::uintptr_t m_flDeployDuration                         = 0x06E4; // float32
            static constexpr std::uintptr_t m_flDisallowAttackAfterReloadStartDuration = 0x06E8; // float32
            static constexpr std::uintptr_t m_nBurstShotCount                          = 0x06EC; // int32
            static constexpr std::uintptr_t m_bAllowBurstHolster                       = 0x06F0; // bool
            static constexpr std::uintptr_t m_nRecoilSeed                              = 0x06F4; // int32
            static constexpr std::uintptr_t m_nSpreadSeed                              = 0x06F8; // int32
            static constexpr std::uintptr_t m_flAttackMovespeedFactor                  = 0x06FC; // float32
            static constexpr std::uintptr_t m_flInaccuracyPitchShift                   = 0x0700; // float32
            static constexpr std::uintptr_t m_flInaccuracyAltSoundThreshold            = 0x0704; // float32
            static constexpr std::uintptr_t m_szUseRadioSubtitle                       = 0x0708; // CUtlString
            static constexpr std::uintptr_t m_bUnzoomsAfterShot                        = 0x0710; // bool
            static constexpr std::uintptr_t m_bHideViewModelWhenZoomed                 = 0x0711; // bool
            static constexpr std::uintptr_t m_nZoomLevels                              = 0x0714; // int32
            static constexpr std::uintptr_t m_nZoomFOV1                                = 0x0718; // int32
            static constexpr std::uintptr_t m_nZoomFOV2                                = 0x071C; // int32
            static constexpr std::uintptr_t m_flZoomTime0                              = 0x0720; // float32
            static constexpr std::uintptr_t m_flZoomTime1                              = 0x0724; // float32
            static constexpr std::uintptr_t m_flZoomTime2                              = 0x0728; // float32
            static constexpr std::uintptr_t m_flIronSightPullUpSpeed                   = 0x072C; // float32
            static constexpr std::uintptr_t m_flIronSightPutDownSpeed                  = 0x0730; // float32
            static constexpr std::uintptr_t m_flIronSightFOV                           = 0x0734; // float32
            static constexpr std::uintptr_t m_flIronSightPivotForward                  = 0x0738; // float32
            static constexpr std::uintptr_t m_flIronSightLooseness                     = 0x073C; // float32
            static constexpr std::uintptr_t m_nDamage                                  = 0x0740; // int32
            static constexpr std::uintptr_t m_flHeadshotMultiplier                     = 0x0744; // float32
            static constexpr std::uintptr_t m_flArmorRatio                             = 0x0748; // float32
            static constexpr std::uintptr_t m_flPenetration                            = 0x074C; // float32
            static constexpr std::uintptr_t m_flRange                                  = 0x0750; // float32
            static constexpr std::uintptr_t m_flRangeModifier                          = 0x0754; // float32
            static constexpr std::uintptr_t m_flFlinchVelocityModifierLarge            = 0x0758; // float32
            static constexpr std::uintptr_t m_flFlinchVelocityModifierSmall            = 0x075C; // float32
            static constexpr std::uintptr_t m_flRecoveryTimeCrouch                     = 0x0760; // float32
            static constexpr std::uintptr_t m_flRecoveryTimeStand                      = 0x0764; // float32
            static constexpr std::uintptr_t m_flRecoveryTimeCrouchFinal                = 0x0768; // float32
            static constexpr std::uintptr_t m_flRecoveryTimeStandFinal                 = 0x076C; // float32
            static constexpr std::uintptr_t m_nRecoveryTransitionStartBullet           = 0x0770; // int32
            static constexpr std::uintptr_t m_nRecoveryTransitionEndBullet             = 0x0774; // int32
            static constexpr std::uintptr_t m_flThrowVelocity                          = 0x0778; // float32
            static constexpr std::uintptr_t m_vSmokeColor                              = 0x077C; // Vector
            static constexpr std::uintptr_t m_szAnimClass                              = 0x0788; // CGlobalSymbol
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundOpvarSetEntity : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_iszStackName     = 0x04C0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszOperatorName  = 0x04C8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszOpvarName     = 0x04D0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_nOpvarType       = 0x04D8; // int32
            static constexpr std::uintptr_t m_nOpvarIndex      = 0x04DC; // int32
            static constexpr std::uintptr_t m_flOpvarValue     = 0x04E0; // float32
            static constexpr std::uintptr_t m_OpvarValueString = 0x04E8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bSetOnSpawn      = 0x04F0; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCitadelSoundOpvarSetOBB : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_iszStackName       = 0x04A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszOperatorName    = 0x04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszOpvarName       = 0x04B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_vDistanceInnerMins = 0x04C0; // Vector
            static constexpr std::uintptr_t m_vDistanceInnerMaxs = 0x04CC; // Vector
            static constexpr std::uintptr_t m_vDistanceOuterMins = 0x04D8; // Vector
            static constexpr std::uintptr_t m_vDistanceOuterMaxs = 0x04E4; // Vector
            static constexpr std::uintptr_t m_nAABBDirection     = 0x04F0; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBaseDMStart : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_Master = 0x04A8; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CHandleTest : public CBaseEntity {
        public:
            static constexpr std::uintptr_t m_Handle      = 0x04A8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_bSendHandle = 0x04AC; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncTrainControls : public CBaseModelEntity {
        public:
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
        class CFuncConveyor : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_szConveyorModels            = 0x0730; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flTransitionDurationSeconds = 0x0738; // float32
            static constexpr std::uintptr_t m_angMoveEntitySpace          = 0x073C; // QAngle
            static constexpr std::uintptr_t m_vecMoveDirEntitySpace       = 0x0748; // Vector
            static constexpr std::uintptr_t m_flTargetSpeed               = 0x0754; // float32
            static constexpr std::uintptr_t m_nTransitionStartTick        = 0x0758; // GameTick_t
            static constexpr std::uintptr_t m_nTransitionDurationTicks    = 0x075C; // int32
            static constexpr std::uintptr_t m_flTransitionStartSpeed      = 0x0760; // float32
            static constexpr std::uintptr_t m_hConveyorModels             = 0x0768; // CNetworkUtlVectorBase<CHandle<CBaseEntity>>
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
        class CInfoSpawnGroupLandmark : public CPointEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBaseDoor : public CBaseToggle {
        public:
            static constexpr std::uintptr_t m_angMoveEntitySpace    = 0x07C0; // QAngle
            static constexpr std::uintptr_t m_vecMoveDirParentSpace = 0x07CC; // Vector
            static constexpr std::uintptr_t m_ls                    = 0x07D8; // locksound_t
            static constexpr std::uintptr_t m_bForceClosed          = 0x07F8; // bool
            static constexpr std::uintptr_t m_bDoorGroup            = 0x07F9; // bool
            static constexpr std::uintptr_t m_bLocked               = 0x07FA; // bool
            static constexpr std::uintptr_t m_bIgnoreDebris         = 0x07FB; // bool
            static constexpr std::uintptr_t m_bNoNPCs               = 0x07FC; // bool
            static constexpr std::uintptr_t m_eSpawnPosition        = 0x0800; // FuncDoorSpawnPos_t
            static constexpr std::uintptr_t m_flBlockDamage         = 0x0804; // float32
            static constexpr std::uintptr_t m_NoiseMoving           = 0x0808; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_NoiseArrived          = 0x0810; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_NoiseMovingClosed     = 0x0818; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_NoiseArrivedClosed    = 0x0820; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_ChainTarget           = 0x0828; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_OnBlockedClosing      = 0x0830; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnBlockedOpening      = 0x0848; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnUnblockedClosing    = 0x0860; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnUnblockedOpening    = 0x0878; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnFullyClosed         = 0x0890; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnFullyOpen           = 0x08A8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnClose               = 0x08C0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnOpen                = 0x08D8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnLockedUse           = 0x08F0; // CEntityIOOutput
            static constexpr std::uintptr_t m_bLoopMoveSound        = 0x0908; // bool
            static constexpr std::uintptr_t m_bCreateNavObstacle    = 0x0928; // bool
            static constexpr std::uintptr_t m_isChaining            = 0x0929; // bool
            static constexpr std::uintptr_t m_bIsUsable             = 0x092A; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBarnLight : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_bEnabled                    = 0x0730; // bool
            static constexpr std::uintptr_t m_nColorMode                  = 0x0734; // int32
            static constexpr std::uintptr_t m_Color                       = 0x0738; // Color
            static constexpr std::uintptr_t m_flColorTemperature          = 0x073C; // float32
            static constexpr std::uintptr_t m_flBrightness                = 0x0740; // float32
            static constexpr std::uintptr_t m_flBrightnessScale           = 0x0744; // float32
            static constexpr std::uintptr_t m_nDirectLight                = 0x0748; // int32
            static constexpr std::uintptr_t m_nBakedShadowIndex           = 0x074C; // int32
            static constexpr std::uintptr_t m_nLightPathUniqueId          = 0x0750; // int32
            static constexpr std::uintptr_t m_nLightMapUniqueId           = 0x0754; // int32
            static constexpr std::uintptr_t m_nLuminaireShape             = 0x0758; // int32
            static constexpr std::uintptr_t m_flLuminaireSize             = 0x075C; // float32
            static constexpr std::uintptr_t m_flLuminaireAnisotropy       = 0x0760; // float32
            static constexpr std::uintptr_t m_LightStyleString            = 0x0768; // CUtlString
            static constexpr std::uintptr_t m_flLightStyleStartTime       = 0x0770; // GameTime_t
            static constexpr std::uintptr_t m_QueuedLightStyleStrings     = 0x0778; // CNetworkUtlVectorBase<CUtlString>
            static constexpr std::uintptr_t m_LightStyleEvents            = 0x0790; // CNetworkUtlVectorBase<CUtlString>
            static constexpr std::uintptr_t m_LightStyleTargets           = 0x07A8; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
            static constexpr std::uintptr_t m_StyleEvent                  = 0x07C0; // CEntityIOOutput[4]
            static constexpr std::uintptr_t m_hLightCookie                = 0x0840; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_flShape                     = 0x0848; // float32
            static constexpr std::uintptr_t m_flSoftX                     = 0x084C; // float32
            static constexpr std::uintptr_t m_flSoftY                     = 0x0850; // float32
            static constexpr std::uintptr_t m_flSkirt                     = 0x0854; // float32
            static constexpr std::uintptr_t m_flSkirtNear                 = 0x0858; // float32
            static constexpr std::uintptr_t m_vSizeParams                 = 0x085C; // Vector
            static constexpr std::uintptr_t m_flRange                     = 0x0868; // float32
            static constexpr std::uintptr_t m_vShear                      = 0x086C; // Vector
            static constexpr std::uintptr_t m_nBakeSpecularToCubemaps     = 0x0878; // int32
            static constexpr std::uintptr_t m_vBakeSpecularToCubemapsSize = 0x087C; // Vector
            static constexpr std::uintptr_t m_nCastShadows                = 0x0888; // int32
            static constexpr std::uintptr_t m_nShadowMapSize              = 0x088C; // int32
            static constexpr std::uintptr_t m_nShadowPriority             = 0x0890; // int32
            static constexpr std::uintptr_t m_bContactShadow              = 0x0894; // bool
            static constexpr std::uintptr_t m_bForceShadowsEnabled        = 0x0895; // bool
            static constexpr std::uintptr_t m_nBounceLight                = 0x0898; // int32
            static constexpr std::uintptr_t m_flBounceScale               = 0x089C; // float32
            static constexpr std::uintptr_t m_bDynamicBounce              = 0x08A0; // bool
            static constexpr std::uintptr_t m_flMinRoughness              = 0x08A4; // float32
            static constexpr std::uintptr_t m_vAlternateColor             = 0x08A8; // Vector
            static constexpr std::uintptr_t m_fAlternateColorBrightness   = 0x08B4; // float32
            static constexpr std::uintptr_t m_nFog                        = 0x08B8; // int32
            static constexpr std::uintptr_t m_flFogStrength               = 0x08BC; // float32
            static constexpr std::uintptr_t m_nFogShadows                 = 0x08C0; // int32
            static constexpr std::uintptr_t m_flFogScale                  = 0x08C4; // float32
            static constexpr std::uintptr_t m_bFogMixedShadows            = 0x08C8; // bool
            static constexpr std::uintptr_t m_flFadeSizeStart             = 0x08CC; // float32
            static constexpr std::uintptr_t m_flFadeSizeEnd               = 0x08D0; // float32
            static constexpr std::uintptr_t m_flShadowFadeSizeStart       = 0x08D4; // float32
            static constexpr std::uintptr_t m_flShadowFadeSizeEnd         = 0x08D8; // float32
            static constexpr std::uintptr_t m_bPrecomputedFieldsValid     = 0x08DC; // bool
            static constexpr std::uintptr_t m_vPrecomputedBoundsMins      = 0x08E0; // Vector
            static constexpr std::uintptr_t m_vPrecomputedBoundsMaxs      = 0x08EC; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBOrigin       = 0x08F8; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBAngles       = 0x0904; // QAngle
            static constexpr std::uintptr_t m_vPrecomputedOBBExtent       = 0x0910; // Vector
            static constexpr std::uintptr_t m_nPrecomputedSubFrusta       = 0x091C; // int32
            static constexpr std::uintptr_t m_vPrecomputedOBBOrigin0      = 0x0920; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBAngles0      = 0x092C; // QAngle
            static constexpr std::uintptr_t m_vPrecomputedOBBExtent0      = 0x0938; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBOrigin1      = 0x0944; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBAngles1      = 0x0950; // QAngle
            static constexpr std::uintptr_t m_vPrecomputedOBBExtent1      = 0x095C; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBOrigin2      = 0x0968; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBAngles2      = 0x0974; // QAngle
            static constexpr std::uintptr_t m_vPrecomputedOBBExtent2      = 0x0980; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBOrigin3      = 0x098C; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBAngles3      = 0x0998; // QAngle
            static constexpr std::uintptr_t m_vPrecomputedOBBExtent3      = 0x09A4; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBOrigin4      = 0x09B0; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBAngles4      = 0x09BC; // QAngle
            static constexpr std::uintptr_t m_vPrecomputedOBBExtent4      = 0x09C8; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBOrigin5      = 0x09D4; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBAngles5      = 0x09E0; // QAngle
            static constexpr std::uintptr_t m_vPrecomputedOBBExtent5      = 0x09EC; // Vector
            static constexpr std::uintptr_t m_bPvsModifyEntity            = 0x09F8; // bool
            static constexpr std::uintptr_t m_VisClusters                 = 0x0A00; // CNetworkUtlVectorBase<uint16>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEntityBlocker : public CBaseModelEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvDecal : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_hDecalMaterial       = 0x0730; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_flWidth              = 0x0738; // float32
            static constexpr std::uintptr_t m_flHeight             = 0x073C; // float32
            static constexpr std::uintptr_t m_flDepth              = 0x0740; // float32
            static constexpr std::uintptr_t m_nRenderOrder         = 0x0744; // uint32
            static constexpr std::uintptr_t m_bProjectOnWorld      = 0x0748; // bool
            static constexpr std::uintptr_t m_bProjectOnCharacters = 0x0749; // bool
            static constexpr std::uintptr_t m_bProjectOnWater      = 0x074A; // bool
            static constexpr std::uintptr_t m_flDepthSortBias      = 0x074C; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CMessage : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_iszMessage         = 0x04A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_MessageVolume      = 0x04B0; // float32
            static constexpr std::uintptr_t m_MessageAttenuation = 0x04B4; // int32
            static constexpr std::uintptr_t m_Radius             = 0x04B8; // float32
            static constexpr std::uintptr_t m_sNoise             = 0x04C0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_OnShowMessage      = 0x04C8; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CRotatorTarget : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_OnArrivedAt = 0x04A8; // CEntityIOOutput
            static constexpr std::uintptr_t m_eSpace      = 0x04C0; // RotatorTargetSpace_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncRotator : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_hRotatorTarget                  = 0x0730; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_bIsRotating                     = 0x0734; // bool
            static constexpr std::uintptr_t m_bIsReversing                    = 0x0735; // bool
            static constexpr std::uintptr_t m_flTimeToReachMaxSpeed           = 0x0738; // float32
            static constexpr std::uintptr_t m_flTimeToReachZeroSpeed          = 0x073C; // float32
            static constexpr std::uintptr_t m_flDistanceAlongArcTraveled      = 0x0740; // float32
            static constexpr std::uintptr_t m_flTimeToWaitOscillate           = 0x0744; // float32
            static constexpr std::uintptr_t m_flTimeRotationStart             = 0x0748; // GameTime_t
            static constexpr std::uintptr_t m_qLSPrevChange                   = 0x0750; // Quaternion
            static constexpr std::uintptr_t m_qWSPrev                         = 0x0760; // Quaternion
            static constexpr std::uintptr_t m_qWSInit                         = 0x0770; // Quaternion
            static constexpr std::uintptr_t m_qLSInit                         = 0x0780; // Quaternion
            static constexpr std::uintptr_t m_qLSOrientation                  = 0x0790; // Quaternion
            static constexpr std::uintptr_t m_OnRotationStarted               = 0x07A0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnRotationCompleted             = 0x07B8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnOscillate                     = 0x07D0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnOscillateStartArrive          = 0x07E8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnOscillateStartDepart          = 0x0800; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnOscillateEndArrive            = 0x0818; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnOscillateEndDepart            = 0x0830; // CEntityIOOutput
            static constexpr std::uintptr_t m_bOscillateDepart                = 0x0848; // bool
            static constexpr std::uintptr_t m_nOscillateCount                 = 0x084C; // int32
            static constexpr std::uintptr_t m_eRotateType                     = 0x0850; // CFuncRotator::Rotate_t
            static constexpr std::uintptr_t m_ePrevRotateType                 = 0x0854; // CFuncRotator::Rotate_t
            static constexpr std::uintptr_t m_bHasTargetOverride              = 0x0858; // bool
            static constexpr std::uintptr_t m_qOrientationOverride            = 0x0860; // Quaternion
            static constexpr std::uintptr_t m_eSpaceOverride                  = 0x0870; // RotatorTargetSpace_t
            static constexpr std::uintptr_t m_qAngularVelocity                = 0x0874; // QAngle
            static constexpr std::uintptr_t m_vLookAtForcedUp                 = 0x0880; // Vector
            static constexpr std::uintptr_t m_strRotatorTarget                = 0x0890; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bRecordHistory                  = 0x0898; // bool
            static constexpr std::uintptr_t m_vecRotatorHistory               = 0x08A0; // CUtlVector<RotatorHistoryEntry_t>
            static constexpr std::uintptr_t m_bReturningToPreviousOrientation = 0x08B8; // bool
            static constexpr std::uintptr_t m_vecRotatorQueue                 = 0x08C0; // CUtlVector<RotatorQueueEntry_t>
            static constexpr std::uintptr_t m_vecRotatorQueueHistory          = 0x08D8; // CUtlVector<RotatorHistoryEntry_t>
            static constexpr std::uintptr_t m_eSolidType                      = 0x08F0; // SolidType_t
            static constexpr std::uintptr_t m_hSpeedFromMover                 = 0x08F4; // CHandle<CFuncMover>
            static constexpr std::uintptr_t m_iszSpeedFromMover               = 0x08F8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flSpeedScale                    = 0x0900; // float32
            static constexpr std::uintptr_t m_flMinYawRotation                = 0x0904; // float32
            static constexpr std::uintptr_t m_flMaxYawRotation                = 0x0908; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncRotating : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_OnStopped           = 0x0730; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnStarted           = 0x0748; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnReachedStart      = 0x0760; // CEntityIOOutput
            static constexpr std::uintptr_t m_localRotationVector = 0x0778; // RotationVector
            static constexpr std::uintptr_t m_flFanFriction       = 0x0784; // float32
            static constexpr std::uintptr_t m_flAttenuation       = 0x0788; // float32
            static constexpr std::uintptr_t m_flVolume            = 0x078C; // float32
            static constexpr std::uintptr_t m_flTargetSpeed       = 0x0790; // float32
            static constexpr std::uintptr_t m_flMaxSpeed          = 0x0794; // float32
            static constexpr std::uintptr_t m_flBlockDamage       = 0x0798; // float32
            static constexpr std::uintptr_t m_NoiseRunning        = 0x07A0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bReversed           = 0x07A8; // bool
            static constexpr std::uintptr_t m_bAccelDecel         = 0x07A9; // bool
            static constexpr std::uintptr_t m_prevLocalAngles     = 0x07C0; // QAngle
            static constexpr std::uintptr_t m_angStart            = 0x07CC; // QAngle
            static constexpr std::uintptr_t m_bStopAtStartPos     = 0x07D8; // bool
            static constexpr std::uintptr_t m_vecClientOrigin     = 0x07DC; // Vector
            static constexpr std::uintptr_t m_vecClientAngles     = 0x07E8; // QAngle
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CItemGenericTriggerHelper : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_hParentItem = 0x0730; // CHandle<CItemGeneric>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CRuleEntity : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_iszMaster = 0x0730; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CMarkupVolumeWithRef : public CMarkupVolumeTagged {
        public:
            static constexpr std::uintptr_t m_bUseRef            = 0x0778; // bool
            static constexpr std::uintptr_t m_vRefPosEntitySpace = 0x077C; // Vector
            static constexpr std::uintptr_t m_vRefPosWorldSpace  = 0x0788; // VectorWS
            static constexpr std::uintptr_t m_flRefDot           = 0x0794; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPathTrack : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_pnext            = 0x04A8; // CPathTrack*
            static constexpr std::uintptr_t m_pprevious        = 0x04B0; // CPathTrack*
            static constexpr std::uintptr_t m_paltpath         = 0x04B8; // CPathTrack*
            static constexpr std::uintptr_t m_flRadius         = 0x04C0; // float32
            static constexpr std::uintptr_t m_length           = 0x04C4; // float32
            static constexpr std::uintptr_t m_altName          = 0x04C8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_nIterVal         = 0x04D0; // int32
            static constexpr std::uintptr_t m_eOrientationType = 0x04D4; // TrackOrientationType_t
            static constexpr std::uintptr_t m_OnPass           = 0x04D8; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysImpact : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_damage              = 0x04A8; // float32
            static constexpr std::uintptr_t m_distance            = 0x04AC; // float32
            static constexpr std::uintptr_t m_directionEntityName = 0x04B0; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CRopeKeyframe : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_RopeFlags                  = 0x0738; // uint16
            static constexpr std::uintptr_t m_iNextLinkName              = 0x0740; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_Slack                      = 0x0748; // int16
            static constexpr std::uintptr_t m_Width                      = 0x074C; // float32
            static constexpr std::uintptr_t m_TextureScale               = 0x0750; // float32
            static constexpr std::uintptr_t m_nSegments                  = 0x0754; // uint8
            static constexpr std::uintptr_t m_bConstrainBetweenEndpoints = 0x0755; // bool
            static constexpr std::uintptr_t m_strRopeMaterialModel       = 0x0758; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iRopeMaterialModelIndex    = 0x0760; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_Subdiv                     = 0x0768; // uint8
            static constexpr std::uintptr_t m_nChangeCount               = 0x0769; // uint8
            static constexpr std::uintptr_t m_RopeLength                 = 0x076A; // int16
            static constexpr std::uintptr_t m_fLockedPoints              = 0x076C; // uint8
            static constexpr std::uintptr_t m_bCreatedFromMapFile        = 0x076D; // bool
            static constexpr std::uintptr_t m_flScrollSpeed              = 0x0770; // float32
            static constexpr std::uintptr_t m_bStartPointValid           = 0x0774; // bool
            static constexpr std::uintptr_t m_bEndPointValid             = 0x0775; // bool
            static constexpr std::uintptr_t m_hStartPoint                = 0x0778; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hEndPoint                  = 0x077C; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_iStartAttachment           = 0x0780; // AttachmentHandle_t
            static constexpr std::uintptr_t m_iEndAttachment             = 0x0781; // AttachmentHandle_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSpotlightEnd : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_flLightScale  = 0x0730; // float32
            static constexpr std::uintptr_t m_Radius        = 0x0734; // float32
            static constexpr std::uintptr_t m_vSpotlightDir = 0x0738; // Vector
            static constexpr std::uintptr_t m_vSpotlightOrg = 0x0744; // VectorWS
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncNavBlocker : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled          = 0x0738; // bool
            static constexpr std::uintptr_t m_nBlockedTeamNumber = 0x073C; // int32
        };

        // Has VTable
        // Local Type Scope
        class CBaseClientUIEntity : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_bEnabled       = 0x0730; // bool
            static constexpr std::uintptr_t m_DialogXMLName  = 0x0738; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_PanelClassName = 0x0740; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_PanelID        = 0x0748; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_CustomOutput0  = 0x0750; // CEntityOutputTemplate<CUtlString,char*>
            static constexpr std::uintptr_t m_CustomOutput1  = 0x0770; // CEntityOutputTemplate<CUtlString,char*>
            static constexpr std::uintptr_t m_CustomOutput2  = 0x0790; // CEntityOutputTemplate<CUtlString,char*>
            static constexpr std::uintptr_t m_CustomOutput3  = 0x07B0; // CEntityOutputTemplate<CUtlString,char*>
            static constexpr std::uintptr_t m_CustomOutput4  = 0x07D0; // CEntityOutputTemplate<CUtlString,char*>
            static constexpr std::uintptr_t m_CustomOutput5  = 0x07F0; // CEntityOutputTemplate<CUtlString,char*>
            static constexpr std::uintptr_t m_CustomOutput6  = 0x0810; // CEntityOutputTemplate<CUtlString,char*>
            static constexpr std::uintptr_t m_CustomOutput7  = 0x0830; // CEntityOutputTemplate<CUtlString,char*>
            static constexpr std::uintptr_t m_CustomOutput8  = 0x0850; // CEntityOutputTemplate<CUtlString,char*>
            static constexpr std::uintptr_t m_CustomOutput9  = 0x0870; // CEntityOutputTemplate<CUtlString,char*>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoOffscreenPanoramaTexture : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled                = 0x04A8; // bool
            static constexpr std::uintptr_t m_nResolutionX             = 0x04AC; // int32
            static constexpr std::uintptr_t m_nResolutionY             = 0x04B0; // int32
            static constexpr std::uintptr_t m_szPanelType              = 0x04B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_szLayoutFileName         = 0x04C0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_RenderAttrName           = 0x04C8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_TargetEntities           = 0x04D0; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
            static constexpr std::uintptr_t m_nTargetChangeCount       = 0x04E8; // int32
            static constexpr std::uintptr_t m_vecCSSClasses            = 0x04F0; // CNetworkUtlVectorBase<CUtlSymbolLarge>
            static constexpr std::uintptr_t m_szTargetsName            = 0x0508; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_AdditionalTargetEntities = 0x0510; // CUtlVector<CHandle<CBaseModelEntity>>
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
        class CPointGiveAmmo : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_pActivator = 0x04A8; // CHandle<CBaseEntity>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncWater : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_BuoyancyHelper = 0x0730; // CBuoyancyHelper
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointGamestatsCounter : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_strStatisticName = 0x04A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bDisabled        = 0x04B0; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSPlace : public CServerOnlyModelEntity {
        public:
            static constexpr std::uintptr_t m_name = 0x0748; // CUtlSymbolLarge
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
        class CCSTeam : public CTeam {
        public:
            static constexpr std::uintptr_t m_nLastRecievedShorthandedRoundBonus = 0x0560; // int32
            static constexpr std::uintptr_t m_nShorthandedRoundBonusStartRound   = 0x0564; // int32
            static constexpr std::uintptr_t m_bSurrendered                       = 0x0568; // bool
            static constexpr std::uintptr_t m_szTeamMatchStat                    = 0x0569; // char[512]
            static constexpr std::uintptr_t m_numMapVictories                    = 0x076C; // int32
            static constexpr std::uintptr_t m_scoreFirstHalf                     = 0x0770; // int32
            static constexpr std::uintptr_t m_scoreSecondHalf                    = 0x0774; // int32
            static constexpr std::uintptr_t m_scoreOvertime                      = 0x0778; // int32
            static constexpr std::uintptr_t m_szClanTeamname                     = 0x077C; // char[129]
            static constexpr std::uintptr_t m_iClanID                            = 0x0800; // uint32
            static constexpr std::uintptr_t m_szTeamFlagImage                    = 0x0804; // char[8]
            static constexpr std::uintptr_t m_szTeamLogoImage                    = 0x080C; // char[8]
            static constexpr std::uintptr_t m_flNextResourceTime                 = 0x0814; // float32
            static constexpr std::uintptr_t m_iLastUpdateSentAt                  = 0x0818; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFogVolume : public CServerOnlyModelEntity {
        public:
            static constexpr std::uintptr_t m_fogName             = 0x0730; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_postProcessName     = 0x0738; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_colorCorrectionName = 0x0740; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bDisabled           = 0x0750; // bool
            static constexpr std::uintptr_t m_bInFogVolumesList   = 0x0751; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvSky : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_hSkyMaterial             = 0x0730; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_hSkyMaterialLightingOnly = 0x0738; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_bStartDisabled           = 0x0740; // bool
            static constexpr std::uintptr_t m_vTintColor               = 0x0741; // Color
            static constexpr std::uintptr_t m_vTintColorLightingOnly   = 0x0745; // Color
            static constexpr std::uintptr_t m_flBrightnessScale        = 0x074C; // float32
            static constexpr std::uintptr_t m_nFogType                 = 0x0750; // int32
            static constexpr std::uintptr_t m_flFogMinStart            = 0x0754; // float32
            static constexpr std::uintptr_t m_flFogMinEnd              = 0x0758; // float32
            static constexpr std::uintptr_t m_flFogMaxStart            = 0x075C; // float32
            static constexpr std::uintptr_t m_flFogMaxEnd              = 0x0760; // float32
            static constexpr std::uintptr_t m_bEnabled                 = 0x0764; // bool
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
        class CBaseTrigger : public CBaseToggle {
        public:
            static constexpr std::uintptr_t m_OnStartTouch         = 0x07B0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnStartTouchAll      = 0x07C8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnEndTouch           = 0x07E0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnEndTouchAll        = 0x07F8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnTouching           = 0x0810; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnTouchingEachEntity = 0x0828; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnNotTouching        = 0x0840; // CEntityIOOutput
            static constexpr std::uintptr_t m_hTouchingEntities    = 0x0858; // CUtlVector<CHandle<CBaseEntity>>
            static constexpr std::uintptr_t m_iFilterName          = 0x0870; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hFilter              = 0x0878; // CHandle<CBaseFilter>
            static constexpr std::uintptr_t m_bDisabled            = 0x087C; // bool
            static constexpr std::uintptr_t m_bUseAsyncQueries     = 0x0888; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvSoundscapeAlias_snd_soundscape : public CEnvSoundscape {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerSoundscape : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_hSoundscape    = 0x0890; // CHandle<CEnvSoundscapeTriggerable>
            static constexpr std::uintptr_t m_SoundscapeName = 0x0898; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_spectators     = 0x08A0; // CUtlVector<CHandle<CBasePlayerPawn>>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTextureBasedAnimatable : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_bLoop               = 0x0730; // bool
            static constexpr std::uintptr_t m_flFPS               = 0x0734; // float32
            static constexpr std::uintptr_t m_hPositionKeys       = 0x0738; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_hRotationKeys       = 0x0740; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_vAnimationBoundsMin = 0x0748; // Vector
            static constexpr std::uintptr_t m_vAnimationBoundsMax = 0x0754; // Vector
            static constexpr std::uintptr_t m_flStartTime         = 0x0760; // float32
            static constexpr std::uintptr_t m_flStartFrame        = 0x0764; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CColorCorrectionVolume : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_MaxWeight       = 0x0890; // float32
            static constexpr std::uintptr_t m_FadeDuration    = 0x0894; // float32
            static constexpr std::uintptr_t m_Weight          = 0x0898; // float32
            static constexpr std::uintptr_t m_lookupFilename  = 0x089C; // char[512]
            static constexpr std::uintptr_t m_LastEnterWeight = 0x0A9C; // float32
            static constexpr std::uintptr_t m_LastEnterTime   = 0x0AA0; // GameTime_t
            static constexpr std::uintptr_t m_LastExitWeight  = 0x0AA4; // float32
            static constexpr std::uintptr_t m_LastExitTime    = 0x0AA8; // GameTime_t
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
        class CFuncMoveLinearAlias_momentary_door : public CFuncMoveLinear {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CGunTarget : public CBaseToggle {
        public:
            static constexpr std::uintptr_t m_on         = 0x07B0; // bool
            static constexpr std::uintptr_t m_hTargetEnt = 0x07B4; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_OnDeath    = 0x07B8; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerGameEvent : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_strStartTouchEventName = 0x0890; // CUtlString
            static constexpr std::uintptr_t m_strEndTouchEventName   = 0x0898; // CUtlString
            static constexpr std::uintptr_t m_strTriggerID           = 0x08A0; // CUtlString
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
            static constexpr std::uintptr_t m_OnPlayerInZone  = 0x0738; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnPlayerOutZone = 0x0750; // CEntityIOOutput
            static constexpr std::uintptr_t m_PlayersInCount  = 0x0768; // CEntityOutputTemplate<int32,int32>
            static constexpr std::uintptr_t m_PlayersOutCount = 0x0788; // CEntityOutputTemplate<int32,int32>
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
        class CMarkupVolumeTagged_Nav : public CMarkupVolumeTagged {
        public:
            static constexpr std::uintptr_t m_nScopes = 0x0770; // NavScopeFlags_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CRopeKeyframeAlias_move_rope : public CRopeKeyframe {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncTankTrain : public CFuncTrackTrain {
        public:
            static constexpr std::uintptr_t m_OnDeath = 0x0858; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvLaser : public CBeam {
        public:
            static constexpr std::uintptr_t m_iszLaserTarget = 0x07D0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_pSprite        = 0x07D8; // CSprite*
            static constexpr std::uintptr_t m_iszSpriteName  = 0x07E0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_firePosition   = 0x07E8; // Vector
            static constexpr std::uintptr_t m_flStartFrame   = 0x07F4; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBasePlatTrain : public CBaseToggle {
        public:
            static constexpr std::uintptr_t m_NoiseMoving  = 0x07B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_NoiseArrived = 0x07B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_volume       = 0x07C8; // float32
            static constexpr std::uintptr_t m_flTWidth     = 0x07CC; // float32
            static constexpr std::uintptr_t m_flTLength    = 0x07D0; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerRemove : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_OnRemove = 0x0890; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerPush : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_angPushEntitySpace    = 0x0890; // QAngle
            static constexpr std::uintptr_t m_vecPushDirEntitySpace = 0x089C; // Vector
            static constexpr std::uintptr_t m_bTriggerOnStartTouch  = 0x08A8; // bool
            static constexpr std::uintptr_t m_bUsePathSimple        = 0x08A9; // bool
            static constexpr std::uintptr_t m_iszPathSimpleName     = 0x08B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_PathSimple            = 0x08B8; // CPathSimple*
            static constexpr std::uintptr_t m_splinePushType        = 0x08C0; // uint32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CScriptTriggerPush : public CTriggerPush {
        public:
            static constexpr std::uintptr_t m_vExtent = 0x08C8; // Vector
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
        class CTriggerSave : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_bForceNewLevelUnit = 0x0890; // bool
            static constexpr std::uintptr_t m_fDangerousTimer    = 0x0894; // float32
            static constexpr std::uintptr_t m_minHitPoints       = 0x0898; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerGravity : public CBaseTrigger {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerProximity : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_hMeasureTarget        = 0x0890; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_iszMeasureTarget      = 0x0898; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_fRadius               = 0x08A0; // float32
            static constexpr std::uintptr_t m_nTouchers             = 0x08A4; // int32
            static constexpr std::uintptr_t m_NearestEntityDistance = 0x08A8; // CEntityOutputTemplate<float32,float32>
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
        class CTriggerActiveWeaponDetect : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_OnTouchedActiveWeapon = 0x0890; // CEntityIOOutput
            static constexpr std::uintptr_t m_iszWeaponClassName    = 0x08A8; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerPhysics : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_gravityScale                 = 0x08A0; // float32
            static constexpr std::uintptr_t m_linearLimit                  = 0x08A4; // float32
            static constexpr std::uintptr_t m_linearDamping                = 0x08A8; // float32
            static constexpr std::uintptr_t m_angularLimit                 = 0x08AC; // float32
            static constexpr std::uintptr_t m_angularDamping               = 0x08B0; // float32
            static constexpr std::uintptr_t m_linearForce                  = 0x08B4; // float32
            static constexpr std::uintptr_t m_flFrequency                  = 0x08B8; // float32
            static constexpr std::uintptr_t m_flDampingRatio               = 0x08BC; // float32
            static constexpr std::uintptr_t m_vecLinearForcePointAt        = 0x08C0; // Vector
            static constexpr std::uintptr_t m_bCollapseToForcePoint        = 0x08CC; // bool
            static constexpr std::uintptr_t m_vecLinearForcePointAtWorld   = 0x08D0; // Vector
            static constexpr std::uintptr_t m_vecLinearForceDirection      = 0x08DC; // Vector
            static constexpr std::uintptr_t m_bConvertToDebrisWhenPossible = 0x08E8; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerDetectBulletFire : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_bPlayerFireOnly      = 0x0890; // bool
            static constexpr std::uintptr_t m_OnDetectedBulletFire = 0x0898; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerDetectExplosion : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_OnDetectedExplosion = 0x08B8; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CScriptNavBlocker : public CFuncNavBlocker {
        public:
            static constexpr std::uintptr_t m_vExtent = 0x0748; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerMultiple : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_OnTrigger = 0x0890; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerSndSosOpvar : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_hTouchingPlayers = 0x0890; // CUtlVector<CHandle<CBaseEntity>>
            static constexpr std::uintptr_t m_flPosition       = 0x08A8; // Vector
            static constexpr std::uintptr_t m_flCenterSize     = 0x08B4; // float32
            static constexpr std::uintptr_t m_flMinVal         = 0x08B8; // float32
            static constexpr std::uintptr_t m_flMaxVal         = 0x08BC; // float32
            static constexpr std::uintptr_t m_opvarName        = 0x08C0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_stackName        = 0x08C8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_operatorName     = 0x08D0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bVolIs2D         = 0x08D8; // bool
            static constexpr std::uintptr_t m_opvarNameChar    = 0x08D9; // char[256]
            static constexpr std::uintptr_t m_stackNameChar    = 0x09D9; // char[256]
            static constexpr std::uintptr_t m_operatorNameChar = 0x0AD9; // char[256]
            static constexpr std::uintptr_t m_VecNormPos       = 0x0BDC; // Vector
            static constexpr std::uintptr_t m_flNormCenterSize = 0x0BE8; // float32
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
        class CBombTarget : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_OnBombExplode        = 0x0890; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnBombPlanted        = 0x08A8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnBombDefused        = 0x08C0; // CEntityIOOutput
            static constexpr std::uintptr_t m_bIsBombSiteB         = 0x08D8; // bool
            static constexpr std::uintptr_t m_bIsHeistBombTarget   = 0x08D9; // bool
            static constexpr std::uintptr_t m_bBombPlantedHere     = 0x08DA; // bool
            static constexpr std::uintptr_t m_szMountTarget        = 0x08E0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hInstructorHint      = 0x08E8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_nBombSiteDesignation = 0x08EC; // int32
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
        class CHostageRescueZone : public CHostageRescueZoneShim {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBuyZone : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_LegacyTeamNum = 0x0890; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTonemapTrigger : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_tonemapControllerName = 0x0890; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hTonemapController    = 0x0898; // CEntityHandle
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CScriptTriggerMultiple : public CTriggerMultiple {
        public:
            static constexpr std::uintptr_t m_vExtent = 0x08A8; // Vector
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
            static constexpr std::uintptr_t m_hLookTarget              = 0x08A8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_flFieldOfView            = 0x08AC; // float32
            static constexpr std::uintptr_t m_flLookTime               = 0x08B0; // float32
            static constexpr std::uintptr_t m_flLookTimeTotal          = 0x08B4; // float32
            static constexpr std::uintptr_t m_flLookTimeLast           = 0x08B8; // GameTime_t
            static constexpr std::uintptr_t m_flTimeoutDuration        = 0x08BC; // float32
            static constexpr std::uintptr_t m_bTimeoutFired            = 0x08C0; // bool
            static constexpr std::uintptr_t m_bIsLooking               = 0x08C1; // bool
            static constexpr std::uintptr_t m_b2DFOV                   = 0x08C2; // bool
            static constexpr std::uintptr_t m_bUseVelocity             = 0x08C3; // bool
            static constexpr std::uintptr_t m_bTestOcclusion           = 0x08C4; // bool
            static constexpr std::uintptr_t m_bTestAllVisibleOcclusion = 0x08C5; // bool
            static constexpr std::uintptr_t m_OnTimeout                = 0x08C8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnStartLook              = 0x08E0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnEndLook                = 0x08F8; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CDynamicNavConnectionsVolume : public CTriggerMultiple {
        public:
            static constexpr std::uintptr_t m_iszConnectionTarget      = 0x08A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_vecConnections           = 0x08B0; // CUtlVector<DynamicVolumeDef_t>
            static constexpr std::uintptr_t m_sTransitionType          = 0x08C8; // CGlobalSymbol
            static constexpr std::uintptr_t m_bConnectionsEnabled      = 0x08D0; // bool
            static constexpr std::uintptr_t m_flTargetAreaSearchRadius = 0x08D4; // float32
            static constexpr std::uintptr_t m_flUpdateDistance         = 0x08D8; // float32
            static constexpr std::uintptr_t m_flMaxConnectionDistance  = 0x08DC; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Step_EntFire : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_Input = 0x0048; // CUtlString
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
        // Local Type Scope
        class CPulseCell_Outflow_ListenForAnimgraphTag : public CPulseCell_BaseYieldingInflow {
        public:
            static constexpr std::uintptr_t m_OnStart    = 0x0048; // CPulse_ResumePoint
            static constexpr std::uintptr_t m_OnEnd      = 0x0090; // CPulse_ResumePoint
            static constexpr std::uintptr_t m_OnCanceled = 0x00D8; // CPulse_ResumePoint
            static constexpr std::uintptr_t m_TagName    = 0x0120; // CGlobalSymbol
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
        // Local Type Scope
        class CRagdollMagnet : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled = 0x04A8; // bool
            static constexpr std::uintptr_t m_radius    = 0x04AC; // float32
            static constexpr std::uintptr_t m_force     = 0x04B0; // float32
            static constexpr std::uintptr_t m_axis      = 0x04B4; // VectorWS
        };

        // Local Type Scope
        class SignatureOutflow_Resume : public CPulse_ResumePoint {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundOpvarSetOBBWindEntity : public CSoundOpvarSetPointBase {
        public:
            static constexpr std::uintptr_t m_vMins         = 0x0550; // Vector
            static constexpr std::uintptr_t m_vMaxs         = 0x055C; // Vector
            static constexpr std::uintptr_t m_vDistanceMins = 0x0568; // Vector
            static constexpr std::uintptr_t m_vDistanceMaxs = 0x0574; // Vector
            static constexpr std::uintptr_t m_flWindMin     = 0x0580; // float32
            static constexpr std::uintptr_t m_flWindMax     = 0x0584; // float32
            static constexpr std::uintptr_t m_flWindMapMin  = 0x0588; // float32
            static constexpr std::uintptr_t m_flWindMapMax  = 0x058C; // float32
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
        // Local Type Scope
        class CInfoSpawnGroupLoadUnload : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_OnSpawnGroupLoadStarted      = 0x04A8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnSpawnGroupLoadFinished     = 0x04C0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnSpawnGroupUnloadStarted    = 0x04D8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnSpawnGroupUnloadFinished   = 0x04F0; // CEntityIOOutput
            static constexpr std::uintptr_t m_iszSpawnGroupName            = 0x0508; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszSpawnGroupFilterName      = 0x0510; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszLandmarkName              = 0x0518; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_sFixedSpawnGroupName         = 0x0520; // CUtlString
            static constexpr std::uintptr_t m_flTimeoutInterval            = 0x0528; // float32
            static constexpr std::uintptr_t m_bAutoActivate                = 0x052C; // bool
            static constexpr std::uintptr_t m_bUnloadingStarted            = 0x052D; // bool
            static constexpr std::uintptr_t m_bQueueActiveSpawnGroupChange = 0x052E; // bool
            static constexpr std::uintptr_t m_bQueueFinishLoading          = 0x052F; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CParticleSystem : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_szSnapshotFileName             = 0x0730; // char[512]
            static constexpr std::uintptr_t m_bActive                        = 0x0930; // bool
            static constexpr std::uintptr_t m_bFrozen                        = 0x0931; // bool
            static constexpr std::uintptr_t m_flFreezeTransitionDuration     = 0x0934; // float32
            static constexpr std::uintptr_t m_nStopType                      = 0x0938; // int32
            static constexpr std::uintptr_t m_bAnimateDuringGameplayPause    = 0x093C; // bool
            static constexpr std::uintptr_t m_iEffectIndex                   = 0x0940; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            static constexpr std::uintptr_t m_flStartTime                    = 0x0948; // GameTime_t
            static constexpr std::uintptr_t m_flPreSimTime                   = 0x094C; // float32
            static constexpr std::uintptr_t m_vServerControlPoints           = 0x0950; // Vector[4]
            static constexpr std::uintptr_t m_iServerControlPointAssignments = 0x0980; // uint8[4]
            static constexpr std::uintptr_t m_hControlPointEnts              = 0x0984; // CHandle<CBaseEntity>[64]
            static constexpr std::uintptr_t m_bNoSave                        = 0x0A84; // bool
            static constexpr std::uintptr_t m_bNoFreeze                      = 0x0A85; // bool
            static constexpr std::uintptr_t m_bNoRamp                        = 0x0A86; // bool
            static constexpr std::uintptr_t m_bStartActive                   = 0x0A87; // bool
            static constexpr std::uintptr_t m_iszEffectName                  = 0x0A88; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszControlPointNames           = 0x0A90; // CUtlSymbolLarge[64]
            static constexpr std::uintptr_t m_nDataCP                        = 0x0C90; // int32
            static constexpr std::uintptr_t m_vecDataCPValue                 = 0x0C94; // Vector
            static constexpr std::uintptr_t m_nTintCP                        = 0x0CA0; // int32
            static constexpr std::uintptr_t m_clrTint                        = 0x0CA4; // Color
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
        // Local Type Scope
        class CFootstepControl : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_source      = 0x0890; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_destination = 0x0898; // CUtlSymbolLarge
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
        // Local Type Scope
        class CFuncBrush : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_iSolidity         = 0x0730; // BrushSolidities_e
            static constexpr std::uintptr_t m_iDisabled         = 0x0734; // int32
            static constexpr std::uintptr_t m_bSolidBsp         = 0x0738; // bool
            static constexpr std::uintptr_t m_iszExcludedClass  = 0x0740; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bInvertExclusion  = 0x0748; // bool
            static constexpr std::uintptr_t m_bScriptedMovement = 0x0749; // bool
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

        // Has Trivial Destructor
        class CRandStopwatch : public CStopwatchBase {
        public:
            static constexpr std::uintptr_t m_flMinInterval = 0x000C; // float32
            static constexpr std::uintptr_t m_flMaxInterval = 0x0010; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointAngleSensor : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled         = 0x04A8; // bool
            static constexpr std::uintptr_t m_nLookAtName       = 0x04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hTargetEntity     = 0x04B8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hLookAtEntity     = 0x04BC; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_flDuration        = 0x04C0; // float32
            static constexpr std::uintptr_t m_flDotTolerance    = 0x04C4; // float32
            static constexpr std::uintptr_t m_flFacingTime      = 0x04C8; // GameTime_t
            static constexpr std::uintptr_t m_bFired            = 0x04CC; // bool
            static constexpr std::uintptr_t m_OnFacingLookat    = 0x04D0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnNotFacingLookat = 0x04E8; // CEntityIOOutput
            static constexpr std::uintptr_t m_TargetDir         = 0x0500; // CEntityOutputTemplate<Vector,Vector>
            static constexpr std::uintptr_t m_FacingPercentage  = 0x0528; // CEntityOutputTemplate<float32,float32>
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
        // Construct Allowed
        // Local Type Scope
        class CLogicDistanceAutosave : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_iszTargetEntity    = 0x04A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flDistanceToPlayer = 0x04B0; // float32
            static constexpr std::uintptr_t m_bForceNewLevelUnit = 0x04B4; // bool
            static constexpr std::uintptr_t m_bCheckCough        = 0x04B5; // bool
            static constexpr std::uintptr_t m_bThinkDangerous    = 0x04B6; // bool
            static constexpr std::uintptr_t m_flDangerousTime    = 0x04B8; // float32
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
        class CBaseAnimGraph : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_graphControllerManager            = 0x0730; // CAnimGraphControllerManager
            static constexpr std::uintptr_t m_pMainGraphController              = 0x07E0; // CAnimGraphControllerBase*
            static constexpr std::uintptr_t m_bInitiallyPopulateInterpHistory   = 0x07E8; // bool
            static constexpr std::uintptr_t m_pChoreoServices                   = 0x07F0; // IChoreoServices*
            static constexpr std::uintptr_t m_bAnimGraphUpdateEnabled           = 0x07F8; // bool
            static constexpr std::uintptr_t m_flMaxSlopeDistance                = 0x07FC; // float32
            static constexpr std::uintptr_t m_vLastSlopeCheckPos                = 0x0800; // VectorWS
            static constexpr std::uintptr_t m_nAnimGraphUpdateId                = 0x080C; // uint32
            static constexpr std::uintptr_t m_bAnimationUpdateScheduled         = 0x0810; // bool
            static constexpr std::uintptr_t m_vecForce                          = 0x0814; // Vector
            static constexpr std::uintptr_t m_nForceBone                        = 0x0820; // int32
            static constexpr std::uintptr_t m_RagdollPose                       = 0x0838; // PhysicsRagdollPose_t
            static constexpr std::uintptr_t m_bRagdollEnabled                   = 0x0860; // bool
            static constexpr std::uintptr_t m_bRagdollClientSide                = 0x0861; // bool
            static constexpr std::uintptr_t m_xParentedRagdollRootInEntitySpace = 0x0870; // CTransform
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEntityDissolve : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_flFadeInStart        = 0x0730; // float32
            static constexpr std::uintptr_t m_flFadeInLength       = 0x0734; // float32
            static constexpr std::uintptr_t m_flFadeOutModelStart  = 0x0738; // float32
            static constexpr std::uintptr_t m_flFadeOutModelLength = 0x073C; // float32
            static constexpr std::uintptr_t m_flFadeOutStart       = 0x0740; // float32
            static constexpr std::uintptr_t m_flFadeOutLength      = 0x0744; // float32
            static constexpr std::uintptr_t m_flStartTime          = 0x0748; // GameTime_t
            static constexpr std::uintptr_t m_nDissolveType        = 0x074C; // EntityDisolveType_t
            static constexpr std::uintptr_t m_vDissolverOrigin     = 0x0750; // Vector
            static constexpr std::uintptr_t m_nMagnitude           = 0x075C; // uint32
        };

        // Has VTable
        class CNavVolumeSphericalShell : public CNavVolumeSphere {
        public:
            static constexpr std::uintptr_t m_flRadiusInner = 0x0088; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class SpawnPoint : public CServerOnlyPointEntity {
        public:
            static constexpr std::uintptr_t m_iPriority = 0x04A8; // int32
            static constexpr std::uintptr_t m_bEnabled  = 0x04AC; // bool
            static constexpr std::uintptr_t m_nType     = 0x04B0; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncWallToggle : public CFuncWall {
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
        class CBlood : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_vecSprayAngles = 0x04A8; // QAngle
            static constexpr std::uintptr_t m_vecSprayDir    = 0x04B4; // Vector
            static constexpr std::uintptr_t m_flAmount       = 0x04C0; // float32
            static constexpr std::uintptr_t m_Color          = 0x04C4; // BloodType
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
        class CTankTargetChange : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_newTarget     = 0x04A8; // CVariantBase<CVariantDefaultAllocator>
            static constexpr std::uintptr_t m_newTargetName = 0x04B8; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CAmbientGeneric : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_radius               = 0x04A8; // float32
            static constexpr std::uintptr_t m_flMaxRadius          = 0x04AC; // float32
            static constexpr std::uintptr_t m_iSoundLevel          = 0x04B0; // soundlevel_t
            static constexpr std::uintptr_t m_dpv                  = 0x04B4; // dynpitchvol_t
            static constexpr std::uintptr_t m_fActive              = 0x0518; // bool
            static constexpr std::uintptr_t m_fLooping             = 0x0519; // bool
            static constexpr std::uintptr_t m_iszSound             = 0x0520; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_sSourceEntName       = 0x0528; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hSoundSource         = 0x0530; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_nSoundSourceEntIndex = 0x0534; // CEntityIndex
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncTrain : public CBasePlatTrain {
        public:
            static constexpr std::uintptr_t m_hCurrentTarget  = 0x07D8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_activated       = 0x07DC; // bool
            static constexpr std::uintptr_t m_hEnemy          = 0x07E0; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_flBlockDamage   = 0x07E4; // float32
            static constexpr std::uintptr_t m_flNextBlockTime = 0x07E8; // GameTime_t
            static constexpr std::uintptr_t m_iszLastTarget   = 0x07F0; // CUtlSymbolLarge
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
        class CPhysThruster : public CPhysForce {
        public:
            static constexpr std::uintptr_t m_localOrigin = 0x0508; // Vector
        };

        // Has VTable
        // Is Absract
        // Local Type Scope
        class CTeamplayRules : public CMultiplayRules {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CMarkupVolumeTagged_NavGame : public CMarkupVolumeWithRef {
        public:
            static constexpr std::uintptr_t m_nScopes             = 0x0798; // NavScopeFlags_t
            static constexpr std::uintptr_t m_bFloodFillAttribute = 0x0799; // bool
            static constexpr std::uintptr_t m_bSplitNavSpace      = 0x079A; // bool
        };

        // Has VTable
        class CNavVolumeAll : public CNavVolumeVector {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCredits : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_OnCreditsDone       = 0x04A8; // CEntityIOOutput
            static constexpr std::uintptr_t m_bRolledOutroCredits = 0x04C0; // bool
            static constexpr std::uintptr_t m_flLogoLength        = 0x04C4; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPathMover : public CPathWithDynamicNodes {
        public:
            static constexpr std::uintptr_t m_vecMovers           = 0x05F0; // CUtlVector<CHandle<CFuncMover>>
            static constexpr std::uintptr_t m_hMoverSpawner       = 0x0608; // CHandle<CPathMoverEntitySpawner>
            static constexpr std::uintptr_t m_iszMoverSpawnerName = 0x0610; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CKeepUpright : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_worldGoalAxis    = 0x04B0; // Vector
            static constexpr std::uintptr_t m_localTestAxis    = 0x04BC; // Vector
            static constexpr std::uintptr_t m_nameAttach       = 0x04D0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_attachedObject   = 0x04D8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_angularLimit     = 0x04DC; // float32
            static constexpr std::uintptr_t m_bActive          = 0x04E0; // bool
            static constexpr std::uintptr_t m_bDampAllRotation = 0x04E1; // bool
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayerBase_CameraServices : public CPlayer_CameraServices {
        public:
            static constexpr std::uintptr_t m_iFOV            = 0x0178; // uint32
            static constexpr std::uintptr_t m_iFOVStart       = 0x017C; // uint32
            static constexpr std::uintptr_t m_flFOVTime       = 0x0180; // GameTime_t
            static constexpr std::uintptr_t m_flFOVRate       = 0x0184; // float32
            static constexpr std::uintptr_t m_hZoomOwner      = 0x0188; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hTriggerFogList = 0x0190; // CUtlVector<CHandle<CBaseEntity>>
            static constexpr std::uintptr_t m_hLastFogTrigger = 0x01A8; // CHandle<CBaseEntity>
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
        class CFuncPlat : public CBasePlatTrain {
        public:
            static constexpr std::uintptr_t m_sNoise = 0x07D8; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class COmniLight : public CBarnLight {
        public:
            static constexpr std::uintptr_t m_flInnerAngle = 0x0A20; // float32
            static constexpr std::uintptr_t m_flOuterAngle = 0x0A24; // float32
            static constexpr std::uintptr_t m_bShowLight   = 0x0A28; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicRelay : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled         = 0x04A8; // bool
            static constexpr std::uintptr_t m_bWaitForRefire    = 0x04A9; // bool
            static constexpr std::uintptr_t m_bTriggerOnce      = 0x04AA; // bool
            static constexpr std::uintptr_t m_bFastRetrigger    = 0x04AB; // bool
            static constexpr std::uintptr_t m_bPassthoughCaller = 0x04AC; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSprite : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_hSpriteMaterial       = 0x0730; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_hAttachedToEntity     = 0x0738; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_nAttachment           = 0x073C; // AttachmentHandle_t
            static constexpr std::uintptr_t m_flSpriteFramerate     = 0x0740; // float32
            static constexpr std::uintptr_t m_flFrame               = 0x0744; // float32
            static constexpr std::uintptr_t m_flDieTime             = 0x0748; // GameTime_t
            static constexpr std::uintptr_t m_nBrightness           = 0x0758; // uint32
            static constexpr std::uintptr_t m_flBrightnessDuration  = 0x075C; // float32
            static constexpr std::uintptr_t m_flSpriteScale         = 0x0760; // float32
            static constexpr std::uintptr_t m_flScaleDuration       = 0x0764; // float32
            static constexpr std::uintptr_t m_bWorldSpaceScale      = 0x0768; // bool
            static constexpr std::uintptr_t m_flGlowProxySize       = 0x076C; // float32
            static constexpr std::uintptr_t m_flHDRColorScale       = 0x0770; // float32
            static constexpr std::uintptr_t m_flLastTime            = 0x0774; // GameTime_t
            static constexpr std::uintptr_t m_flMaxFrame            = 0x0778; // float32
            static constexpr std::uintptr_t m_flStartScale          = 0x077C; // float32
            static constexpr std::uintptr_t m_flDestScale           = 0x0780; // float32
            static constexpr std::uintptr_t m_flScaleTimeStart      = 0x0784; // GameTime_t
            static constexpr std::uintptr_t m_nStartBrightness      = 0x0788; // int32
            static constexpr std::uintptr_t m_nDestBrightness       = 0x078C; // int32
            static constexpr std::uintptr_t m_flBrightnessTimeStart = 0x0790; // GameTime_t
            static constexpr std::uintptr_t m_nSpriteWidth          = 0x0794; // int32
            static constexpr std::uintptr_t m_nSpriteHeight         = 0x0798; // int32
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
        class CPulseCell_LerpCameraSettings : public CPulseCell_BaseLerp {
        public:
            static constexpr std::uintptr_t m_flSeconds = 0x0090; // float32
            static constexpr std::uintptr_t m_Start     = 0x0094; // PointCameraSettings_t
            static constexpr std::uintptr_t m_End       = 0x00A4; // PointCameraSettings_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSGO_WingmanIntroCounterTerroristPosition : public CCSGO_WingmanIntroCharacterPosition {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_MovementServices : public CPlayer_MovementServices_Humanoid {
        public:
            static constexpr std::uintptr_t m_vecLadderNormal                     = 0x0278; // Vector
            static constexpr std::uintptr_t m_nLadderSurfacePropIndex             = 0x0284; // int32
            static constexpr std::uintptr_t m_bDucked                             = 0x0288; // bool
            static constexpr std::uintptr_t m_flDuckAmount                        = 0x028C; // float32
            static constexpr std::uintptr_t m_flDuckSpeed                         = 0x0290; // float32
            static constexpr std::uintptr_t m_bDuckOverride                       = 0x0294; // bool
            static constexpr std::uintptr_t m_bDesiresDuck                        = 0x0295; // bool
            static constexpr std::uintptr_t m_bDucking                            = 0x0296; // bool
            static constexpr std::uintptr_t m_flDuckOffset                        = 0x0298; // float32
            static constexpr std::uintptr_t m_nDuckTimeMsecs                      = 0x029C; // uint32
            static constexpr std::uintptr_t m_nDuckJumpTimeMsecs                  = 0x02A0; // uint32
            static constexpr std::uintptr_t m_nJumpTimeMsecs                      = 0x02A4; // uint32
            static constexpr std::uintptr_t m_flLastDuckTime                      = 0x02A8; // float32
            static constexpr std::uintptr_t m_vecLastPositionAtFullCrouchSpeed    = 0x02B8; // Vector2D
            static constexpr std::uintptr_t m_duckUntilOnGround                   = 0x02C0; // bool
            static constexpr std::uintptr_t m_bHasWalkMovedSinceLastJump          = 0x02C1; // bool
            static constexpr std::uintptr_t m_bInStuckTest                        = 0x02C2; // bool
            static constexpr std::uintptr_t m_nTraceCount                         = 0x04D0; // int32
            static constexpr std::uintptr_t m_StuckLast                           = 0x04D4; // int32
            static constexpr std::uintptr_t m_bSpeedCropped                       = 0x04D8; // bool
            static constexpr std::uintptr_t m_nOldWaterLevel                      = 0x04DC; // int32
            static constexpr std::uintptr_t m_flWaterEntryTime                    = 0x04E0; // float32
            static constexpr std::uintptr_t m_vecForward                          = 0x04E4; // Vector
            static constexpr std::uintptr_t m_vecLeft                             = 0x04F0; // Vector
            static constexpr std::uintptr_t m_vecUp                               = 0x04FC; // Vector
            static constexpr std::uintptr_t m_nGameCodeHasMovedPlayerAfterCommand = 0x0508; // int32
            static constexpr std::uintptr_t m_bMadeFootstepNoise                  = 0x050C; // bool
            static constexpr std::uintptr_t m_iFootsteps                          = 0x0510; // int32
            static constexpr std::uintptr_t m_fStashGrenadeParameterWhen          = 0x0514; // GameTime_t
            static constexpr std::uintptr_t m_nButtonDownMaskPrev                 = 0x0518; // uint64
            static constexpr std::uintptr_t m_flOffsetTickCompleteTime            = 0x0520; // float32
            static constexpr std::uintptr_t m_flOffsetTickStashedSpeed            = 0x0524; // float32
            static constexpr std::uintptr_t m_flStamina                           = 0x0528; // float32
            static constexpr std::uintptr_t m_flHeightAtJumpStart                 = 0x052C; // float32
            static constexpr std::uintptr_t m_flMaxJumpHeightThisJump             = 0x0530; // float32
            static constexpr std::uintptr_t m_flMaxJumpHeightLastJump             = 0x0534; // float32
            static constexpr std::uintptr_t m_flStaminaAtJumpStart                = 0x0538; // float32
            static constexpr std::uintptr_t m_flVelMulAtJumpStart                 = 0x053C; // float32
            static constexpr std::uintptr_t m_flAccumulatedJumpError              = 0x0540; // float32
            static constexpr std::uintptr_t m_LegacyJump                          = 0x0548; // CCSPlayerLegacyJump
            static constexpr std::uintptr_t m_ModernJump                          = 0x0560; // CCSPlayerModernJump
            static constexpr std::uintptr_t m_nLastJumpTick                       = 0x0598; // GameTick_t
            static constexpr std::uintptr_t m_flLastJumpFrac                      = 0x059C; // float32
            static constexpr std::uintptr_t m_flLastJumpVelocityZ                 = 0x05A0; // float32
            static constexpr std::uintptr_t m_bJumpApexPending                    = 0x05A4; // bool
            static constexpr std::uintptr_t m_flTicksSinceLastSurfingDetected     = 0x05A8; // float32
            static constexpr std::uintptr_t m_bWasSurfing                         = 0x05AC; // bool
            static constexpr std::uintptr_t m_vecInputRotated                     = 0x063C; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CMapSharedEnvironment : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_targetMapName = 0x04A8; // CUtlSymbolLarge
        };

        // Has Trivial Destructor
        class CStopwatch : public CStopwatchBase {
        public:
            static constexpr std::uintptr_t m_flInterval = 0x000C; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPostProcessingVolume : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_hPostSettings             = 0x08A0; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
            static constexpr std::uintptr_t m_flFadeDuration            = 0x08A8; // float32
            static constexpr std::uintptr_t m_flMinLogExposure          = 0x08AC; // float32
            static constexpr std::uintptr_t m_flMaxLogExposure          = 0x08B0; // float32
            static constexpr std::uintptr_t m_flMinExposure             = 0x08B4; // float32
            static constexpr std::uintptr_t m_flMaxExposure             = 0x08B8; // float32
            static constexpr std::uintptr_t m_flExposureCompensation    = 0x08BC; // float32
            static constexpr std::uintptr_t m_flExposureFadeSpeedUp     = 0x08C0; // float32
            static constexpr std::uintptr_t m_flExposureFadeSpeedDown   = 0x08C4; // float32
            static constexpr std::uintptr_t m_flTonemapEVSmoothingRange = 0x08C8; // float32
            static constexpr std::uintptr_t m_bMaster                   = 0x08CC; // bool
            static constexpr std::uintptr_t m_bExposureControl          = 0x08CD; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CMessageEntity : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_radius         = 0x04A8; // int32
            static constexpr std::uintptr_t m_messageText    = 0x04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_drawText       = 0x04B8; // bool
            static constexpr std::uintptr_t m_bDeveloperOnly = 0x04B9; // bool
            static constexpr std::uintptr_t m_bEnabled       = 0x04BA; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvInstructorVRHint : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_iszName             = 0x04A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszHintTargetEntity = 0x04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iTimeout            = 0x04B8; // int32
            static constexpr std::uintptr_t m_iszCaption          = 0x04C0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszStartSound       = 0x04C8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iLayoutFileType     = 0x04D0; // int32
            static constexpr std::uintptr_t m_iszCustomLayoutFile = 0x04D8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iAttachType         = 0x04E0; // int32
            static constexpr std::uintptr_t m_flHeightOffset      = 0x04E4; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CDynamicLight : public CBaseModelEntity {
        public:
            static constexpr std::uintptr_t m_ActualFlags = 0x0730; // uint8
            static constexpr std::uintptr_t m_Flags       = 0x0731; // uint8
            static constexpr std::uintptr_t m_LightStyle  = 0x0732; // uint8
            static constexpr std::uintptr_t m_On          = 0x0733; // bool
            static constexpr std::uintptr_t m_Radius      = 0x0734; // float32
            static constexpr std::uintptr_t m_Exponent    = 0x0738; // int32
            static constexpr std::uintptr_t m_InnerAngle  = 0x073C; // float32
            static constexpr std::uintptr_t m_OuterAngle  = 0x0740; // float32
            static constexpr std::uintptr_t m_SpotRadius  = 0x0744; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CModelPointEntity : public CBaseModelEntity {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CBaseAnimGraphController : public CSkeletonAnimationController {
        public:
            static constexpr std::uintptr_t m_nAnimationAlgorithm                  = 0x0018; // AnimationAlgorithm_t
            static constexpr std::uintptr_t m_animGraphNetworkedVars               = 0x0020; // CAnimGraphNetworkedVariables
            static constexpr std::uintptr_t m_pAnimGraphInstance                   = 0x0228; // CSmartPtr<IAnimationGraphInstance>
            static constexpr std::uintptr_t m_nNextExternalGraphHandle             = 0x0288; // ExternalAnimGraphHandle_t
            static constexpr std::uintptr_t m_vecSecondarySkeletonNames            = 0x0290; // CUtlVector<CGlobalSymbol>
            static constexpr std::uintptr_t m_vecSecondarySkeletons                = 0x02A8; // CNetworkUtlVectorBase<CHandle<CBaseAnimGraph>>
            static constexpr std::uintptr_t m_nSecondarySkeletonMasterCount        = 0x02C0; // int32
            static constexpr std::uintptr_t m_flSoundSyncTime                      = 0x02C4; // float32
            static constexpr std::uintptr_t m_nActiveIKChainMask                   = 0x02C8; // uint32
            static constexpr std::uintptr_t m_hSequence                            = 0x02CC; // HSequence
            static constexpr std::uintptr_t m_flSeqStartTime                       = 0x02D0; // GameTime_t
            static constexpr std::uintptr_t m_flSeqFixedCycle                      = 0x02D4; // float32
            static constexpr std::uintptr_t m_nAnimLoopMode                        = 0x02D8; // AnimLoopMode_t
            static constexpr std::uintptr_t m_flPlaybackRate                       = 0x02DC; // CNetworkedQuantizedFloat
            static constexpr std::uintptr_t m_nNotifyState                         = 0x02E8; // SequenceFinishNotifyState_t
            static constexpr std::uintptr_t m_bNetworkedAnimationInputsChanged     = 0x02E9; // bool
            static constexpr std::uintptr_t m_bNetworkedSequenceChanged            = 0x02EA; // bool
            static constexpr std::uintptr_t m_bLastUpdateSkipped                   = 0x02EB; // bool
            static constexpr std::uintptr_t m_bSequenceFinished                    = 0x02EC; // bool
            static constexpr std::uintptr_t m_nPrevAnimUpdateTick                  = 0x02F0; // GameTick_t
            static constexpr std::uintptr_t m_hGraphDefinitionAG2                  = 0x0590; // CStrongHandle<InfoForResourceTypeCNmGraphDefinition>
            static constexpr std::uintptr_t m_serializedPoseRecipeAG2              = 0x0598; // CNetworkUtlVectorBase<uint8>
            static constexpr std::uintptr_t m_nSerializePoseRecipeSizeAG2          = 0x05B0; // int32
            static constexpr std::uintptr_t m_nSerializePoseRecipeVersionAG2       = 0x05B4; // int32
            static constexpr std::uintptr_t m_nServerGraphInstanceIteration        = 0x05B8; // int32
            static constexpr std::uintptr_t m_nServerSerializationContextIteration = 0x05BC; // int32
            static constexpr std::uintptr_t m_primaryGraphId                       = 0x05C0; // ResourceId_t
            static constexpr std::uintptr_t m_vecExternalGraphIds                  = 0x05C8; // CNetworkUtlVectorBase<ResourceId_t>
            static constexpr std::uintptr_t m_vecExternalClipIds                   = 0x05E0; // CNetworkUtlVectorBase<ResourceId_t>
            static constexpr std::uintptr_t m_sAnimGraph2Identifier                = 0x05F8; // CGlobalSymbol
            static constexpr std::uintptr_t m_vecExternalGraphs                    = 0x0820; // CUtlVector<ExternalAnimGraph_t>
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
        class CPointWorldText : public CModelPointEntity {
        public:
            static constexpr std::uintptr_t m_messageText              = 0x0730; // char[512]
            static constexpr std::uintptr_t m_FontName                 = 0x0930; // char[64]
            static constexpr std::uintptr_t m_BackgroundMaterialName   = 0x0970; // char[64]
            static constexpr std::uintptr_t m_bEnabled                 = 0x09B0; // bool
            static constexpr std::uintptr_t m_bFullbright              = 0x09B1; // bool
            static constexpr std::uintptr_t m_flWorldUnitsPerPx        = 0x09B4; // float32
            static constexpr std::uintptr_t m_flFontSize               = 0x09B8; // float32
            static constexpr std::uintptr_t m_flDepthOffset            = 0x09BC; // float32
            static constexpr std::uintptr_t m_bDrawBackground          = 0x09C0; // bool
            static constexpr std::uintptr_t m_flBackgroundBorderWidth  = 0x09C4; // float32
            static constexpr std::uintptr_t m_flBackgroundBorderHeight = 0x09C8; // float32
            static constexpr std::uintptr_t m_flBackgroundWorldToUV    = 0x09CC; // float32
            static constexpr std::uintptr_t m_Color                    = 0x09D0; // Color
            static constexpr std::uintptr_t m_nJustifyHorizontal       = 0x09D4; // PointWorldTextJustifyHorizontal_t
            static constexpr std::uintptr_t m_nJustifyVertical         = 0x09D8; // PointWorldTextJustifyVertical_t
            static constexpr std::uintptr_t m_nReorientMode            = 0x09DC; // PointWorldTextReorientMode_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoParticleTarget : public CPointEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CMathRemap : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_flInMin        = 0x04A8; // float32
            static constexpr std::uintptr_t m_flInMax        = 0x04AC; // float32
            static constexpr std::uintptr_t m_flOut1         = 0x04B0; // float32
            static constexpr std::uintptr_t m_flOut2         = 0x04B4; // float32
            static constexpr std::uintptr_t m_flOldInValue   = 0x04B8; // float32
            static constexpr std::uintptr_t m_bEnabled       = 0x04BC; // bool
            static constexpr std::uintptr_t m_OutValue       = 0x04C0; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnRoseAboveMin = 0x04E0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnRoseAboveMax = 0x04F8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnFellBelowMin = 0x0510; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnFellBelowMax = 0x0528; // CEntityIOOutput
        };

        // Has VTable
        class CMultiplayer_Expresser : public CAI_ExpresserWithFollowup {
        public:
            static constexpr std::uintptr_t m_bAllowMultipleScenes = 0x00A0; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBaseProp : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_bModelOverrodeBlockLOS    = 0x0A20; // bool
            static constexpr std::uintptr_t m_iShapeType                = 0x0A24; // int32
            static constexpr std::uintptr_t m_bConformToCollisionBounds = 0x0A28; // bool
            static constexpr std::uintptr_t m_mPreferredCatchTransform  = 0x0A30; // CTransform
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoDynamicShadowHint : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled    = 0x04A8; // bool
            static constexpr std::uintptr_t m_flRange      = 0x04AC; // float32
            static constexpr std::uintptr_t m_nImportance  = 0x04B0; // int32
            static constexpr std::uintptr_t m_nLightChoice = 0x04B4; // int32
            static constexpr std::uintptr_t m_hLight       = 0x04B8; // CHandle<CBaseEntity>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBaseFlex : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_flexWeight              = 0x0A20; // CNetworkUtlVectorBase<float32>
            static constexpr std::uintptr_t m_vLookTargetPosition     = 0x0A38; // VectorWS
            static constexpr std::uintptr_t m_flAllowResponsesEndTime = 0x0A98; // GameTime_t
            static constexpr std::uintptr_t m_flLastFlexAnimationTime = 0x0A9C; // GameTime_t
            static constexpr std::uintptr_t m_nNextSceneEventId       = 0x0AA0; // SceneEventId_t
            static constexpr std::uintptr_t m_bUpdateLayerPriorities  = 0x0AA4; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerTeleport : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_iLandmark                  = 0x0890; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bUseLandmarkAngles         = 0x0898; // bool
            static constexpr std::uintptr_t m_bMirrorPlayer              = 0x0899; // bool
            static constexpr std::uintptr_t m_bCheckDestIfClearForPlayer = 0x089A; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointCommentaryNode : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_iszPreCommands             = 0x0A20; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszPostCommands            = 0x0A28; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszCommentaryFile          = 0x0A30; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszViewTarget              = 0x0A38; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hViewTarget                = 0x0A40; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hViewTargetAngles          = 0x0A44; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_iszViewPosition            = 0x0A48; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hViewPosition              = 0x0A50; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hViewPositionMover         = 0x0A54; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_bPreventMovement           = 0x0A58; // bool
            static constexpr std::uintptr_t m_bUnderCrosshair            = 0x0A59; // bool
            static constexpr std::uintptr_t m_bUnstoppable               = 0x0A5A; // bool
            static constexpr std::uintptr_t m_flFinishedTime             = 0x0A5C; // GameTime_t
            static constexpr std::uintptr_t m_vecFinishOrigin            = 0x0A60; // Vector
            static constexpr std::uintptr_t m_vecOriginalAngles          = 0x0A6C; // QAngle
            static constexpr std::uintptr_t m_vecFinishAngles            = 0x0A78; // QAngle
            static constexpr std::uintptr_t m_bPreventChangesWhileMoving = 0x0A84; // bool
            static constexpr std::uintptr_t m_bDisabled                  = 0x0A85; // bool
            static constexpr std::uintptr_t m_vecTeleportOrigin          = 0x0A88; // VectorWS
            static constexpr std::uintptr_t m_flAbortedPlaybackAt        = 0x0A94; // GameTime_t
            static constexpr std::uintptr_t m_pOnCommentaryStarted       = 0x0A98; // CEntityIOOutput
            static constexpr std::uintptr_t m_pOnCommentaryStopped       = 0x0AB0; // CEntityIOOutput
            static constexpr std::uintptr_t m_bActive                    = 0x0AC8; // bool
            static constexpr std::uintptr_t m_flStartTime                = 0x0ACC; // GameTime_t
            static constexpr std::uintptr_t m_flStartTimeInCommentary    = 0x0AD0; // float32
            static constexpr std::uintptr_t m_iszTitle                   = 0x0AD8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszSpeakers                = 0x0AE0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iNodeNumber                = 0x0AE8; // int32
            static constexpr std::uintptr_t m_iNodeNumberMax             = 0x0AEC; // int32
            static constexpr std::uintptr_t m_bListenedTo                = 0x0AF0; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicAutosave : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_bForceNewLevelUnit   = 0x04A8; // bool
            static constexpr std::uintptr_t m_minHitPoints         = 0x04AC; // int32
            static constexpr std::uintptr_t m_minHitPointsToCommit = 0x04B0; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CRectLight : public CBarnLight {
        public:
            static constexpr std::uintptr_t m_bShowLight = 0x0A20; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvGlobal : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_outCounter   = 0x04A8; // CEntityOutputTemplate<int32,int32>
            static constexpr std::uintptr_t m_globalstate  = 0x04C8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_triggermode  = 0x04D0; // int32
            static constexpr std::uintptr_t m_initialstate = 0x04D4; // int32
            static constexpr std::uintptr_t m_counter      = 0x04D8; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicGameEvent : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_iszEventName = 0x04A8; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicBranch : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_bInValue  = 0x04A8; // bool
            static constexpr std::uintptr_t m_Listeners = 0x04B0; // CUtlVector<CHandle<CBaseEntity>>
            static constexpr std::uintptr_t m_OnTrue    = 0x04C8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnFalse   = 0x04E0; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBaseFilter : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_bNegated = 0x04A8; // bool
            static constexpr std::uintptr_t m_OnPass   = 0x04B0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnFail   = 0x04C8; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvExplosion : public CModelPointEntity {
        public:
            static constexpr std::uintptr_t m_iMagnitude               = 0x0730; // int32
            static constexpr std::uintptr_t m_flPlayerDamage           = 0x0734; // float32
            static constexpr std::uintptr_t m_iRadiusOverride          = 0x0738; // int32
            static constexpr std::uintptr_t m_flInnerRadius            = 0x073C; // float32
            static constexpr std::uintptr_t m_flDamageForce            = 0x0740; // float32
            static constexpr std::uintptr_t m_hInflictor               = 0x0744; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_iCustomDamageType        = 0x0748; // DamageTypes_t
            static constexpr std::uintptr_t m_bCreateDebris            = 0x074C; // bool
            static constexpr std::uintptr_t m_iszCustomEffectName      = 0x0758; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszCustomSoundName       = 0x0760; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bSuppressParticleImpulse = 0x0768; // bool
            static constexpr std::uintptr_t m_iClassIgnore             = 0x076C; // Class_T
            static constexpr std::uintptr_t m_iClassIgnore2            = 0x0770; // Class_T
            static constexpr std::uintptr_t m_iszEntityIgnoreName      = 0x0778; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hEntityIgnore            = 0x0780; // CHandle<CBaseEntity>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoInstructorHintHostageRescueZone : public CPointEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFish : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_pool           = 0x0A20; // CHandle<CFishPool>
            static constexpr std::uintptr_t m_id             = 0x0A24; // uint32
            static constexpr std::uintptr_t m_x              = 0x0A28; // float32
            static constexpr std::uintptr_t m_y              = 0x0A2C; // float32
            static constexpr std::uintptr_t m_z              = 0x0A30; // float32
            static constexpr std::uintptr_t m_angle          = 0x0A34; // float32
            static constexpr std::uintptr_t m_angleChange    = 0x0A38; // float32
            static constexpr std::uintptr_t m_forward        = 0x0A3C; // Vector
            static constexpr std::uintptr_t m_perp           = 0x0A48; // Vector
            static constexpr std::uintptr_t m_poolOrigin     = 0x0A54; // Vector
            static constexpr std::uintptr_t m_waterLevel     = 0x0A60; // float32
            static constexpr std::uintptr_t m_speed          = 0x0A64; // float32
            static constexpr std::uintptr_t m_desiredSpeed   = 0x0A68; // float32
            static constexpr std::uintptr_t m_calmSpeed      = 0x0A6C; // float32
            static constexpr std::uintptr_t m_panicSpeed     = 0x0A70; // float32
            static constexpr std::uintptr_t m_avoidRange     = 0x0A74; // float32
            static constexpr std::uintptr_t m_turnTimer      = 0x0A78; // CountdownTimer
            static constexpr std::uintptr_t m_turnClockwise  = 0x0A90; // bool
            static constexpr std::uintptr_t m_goTimer        = 0x0A98; // CountdownTimer
            static constexpr std::uintptr_t m_moveTimer      = 0x0AB0; // CountdownTimer
            static constexpr std::uintptr_t m_panicTimer     = 0x0AC8; // CountdownTimer
            static constexpr std::uintptr_t m_disperseTimer  = 0x0AE0; // CountdownTimer
            static constexpr std::uintptr_t m_proximityTimer = 0x0AF8; // CountdownTimer
            static constexpr std::uintptr_t m_visible        = 0x0B10; // CUtlVector<CFish*>
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
        class CInfoPlayerTerrorist : public SpawnPoint {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerLerpObject : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_iszLerpTarget              = 0x0890; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hLerpTarget                = 0x0898; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_iszLerpTargetAttachment    = 0x08A0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hLerpTargetAttachment      = 0x08A8; // AttachmentHandle_t
            static constexpr std::uintptr_t m_flLerpDuration             = 0x08AC; // float32
            static constexpr std::uintptr_t m_bAttachedEntityWasParented = 0x08B0; // bool
            static constexpr std::uintptr_t m_bLerpRestoreMoveType       = 0x08B1; // bool
            static constexpr std::uintptr_t m_bSingleLerpObject          = 0x08B2; // bool
            static constexpr std::uintptr_t m_vecLerpingObjects          = 0x08B8; // CUtlVector<lerpdata_t>
            static constexpr std::uintptr_t m_iszLerpEffect              = 0x08D0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszLerpSound               = 0x08D8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bAttachTouchingObject      = 0x08E0; // bool
            static constexpr std::uintptr_t m_hEntityToWaitForDisconnect = 0x08E4; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_OnLerpStarted              = 0x08E8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnLerpFinished             = 0x0900; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnDetached                 = 0x0918; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointBroadcastClientCommand : public CPointEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerHostageReset : public CBaseTrigger {
        public:
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
        class CPointClientUIDialog : public CBaseClientUIEntity {
        public:
            static constexpr std::uintptr_t m_hActivator    = 0x0890; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_bStartEnabled = 0x0894; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoDynamicShadowHintBox : public CInfoDynamicShadowHint {
        public:
            static constexpr std::uintptr_t m_vBoxMins = 0x04C0; // Vector
            static constexpr std::uintptr_t m_vBoxMaxs = 0x04CC; // Vector
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
        class CInfoInteraction : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_strSlotEntityName = 0x04A8; // CUtlSymbolLarge[8]
            static constexpr std::uintptr_t m_strInteractVData  = 0x04E8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flInteractRadius  = 0x04F0; // float32
        };

        // Has VTable
        // Local Type Scope
        class CCSGameRules : public CTeamplayRules {
        public:
            static constexpr std::uintptr_t m_bFreezePeriod                       = 0x00D8; // bool
            static constexpr std::uintptr_t m_bWarmupPeriod                       = 0x00D9; // bool
            static constexpr std::uintptr_t m_fWarmupPeriodEnd                    = 0x00DC; // GameTime_t
            static constexpr std::uintptr_t m_fWarmupPeriodStart                  = 0x00E0; // GameTime_t
            static constexpr std::uintptr_t m_bTerroristTimeOutActive             = 0x00E4; // bool
            static constexpr std::uintptr_t m_bCTTimeOutActive                    = 0x00E5; // bool
            static constexpr std::uintptr_t m_flTerroristTimeOutRemaining         = 0x00E8; // float32
            static constexpr std::uintptr_t m_flCTTimeOutRemaining                = 0x00EC; // float32
            static constexpr std::uintptr_t m_nTerroristTimeOuts                  = 0x00F0; // int32
            static constexpr std::uintptr_t m_nCTTimeOuts                         = 0x00F4; // int32
            static constexpr std::uintptr_t m_bTechnicalTimeOut                   = 0x00F8; // bool
            static constexpr std::uintptr_t m_bMatchWaitingForResume              = 0x00F9; // bool
            static constexpr std::uintptr_t m_iFreezeTime                         = 0x00FC; // int32
            static constexpr std::uintptr_t m_iRoundTime                          = 0x0100; // int32
            static constexpr std::uintptr_t m_fMatchStartTime                     = 0x0104; // float32
            static constexpr std::uintptr_t m_fRoundStartTime                     = 0x0108; // GameTime_t
            static constexpr std::uintptr_t m_flRestartRoundTime                  = 0x010C; // GameTime_t
            static constexpr std::uintptr_t m_bGameRestart                        = 0x0110; // bool
            static constexpr std::uintptr_t m_flGameStartTime                     = 0x0114; // float32
            static constexpr std::uintptr_t m_timeUntilNextPhaseStarts            = 0x0118; // float32
            static constexpr std::uintptr_t m_gamePhase                           = 0x011C; // int32
            static constexpr std::uintptr_t m_totalRoundsPlayed                   = 0x0120; // int32
            static constexpr std::uintptr_t m_nRoundsPlayedThisPhase              = 0x0124; // int32
            static constexpr std::uintptr_t m_nOvertimePlaying                    = 0x0128; // int32
            static constexpr std::uintptr_t m_iHostagesRemaining                  = 0x012C; // int32
            static constexpr std::uintptr_t m_bAnyHostageReached                  = 0x0130; // bool
            static constexpr std::uintptr_t m_bMapHasBombTarget                   = 0x0131; // bool
            static constexpr std::uintptr_t m_bMapHasRescueZone                   = 0x0132; // bool
            static constexpr std::uintptr_t m_bMapHasBuyZone                      = 0x0133; // bool
            static constexpr std::uintptr_t m_bIsQueuedMatchmaking                = 0x0134; // bool
            static constexpr std::uintptr_t m_nQueuedMatchmakingMode              = 0x0138; // int32
            static constexpr std::uintptr_t m_bIsValveDS                          = 0x013C; // bool
            static constexpr std::uintptr_t m_bLogoMap                            = 0x013D; // bool
            static constexpr std::uintptr_t m_bPlayAllStepSoundsOnServer          = 0x013E; // bool
            static constexpr std::uintptr_t m_iSpectatorSlotCount                 = 0x0140; // int32
            static constexpr std::uintptr_t m_MatchDevice                         = 0x0144; // int32
            static constexpr std::uintptr_t m_bHasMatchStarted                    = 0x0148; // bool
            static constexpr std::uintptr_t m_nNextMapInMapgroup                  = 0x014C; // int32
            static constexpr std::uintptr_t m_szTournamentEventName               = 0x0150; // char[512]
            static constexpr std::uintptr_t m_szTournamentEventStage              = 0x0350; // char[512]
            static constexpr std::uintptr_t m_szMatchStatTxt                      = 0x0550; // char[512]
            static constexpr std::uintptr_t m_szTournamentPredictionsTxt          = 0x0750; // char[512]
            static constexpr std::uintptr_t m_nTournamentPredictionsPct           = 0x0950; // int32
            static constexpr std::uintptr_t m_flCMMItemDropRevealStartTime        = 0x0954; // GameTime_t
            static constexpr std::uintptr_t m_flCMMItemDropRevealEndTime          = 0x0958; // GameTime_t
            static constexpr std::uintptr_t m_bIsDroppingItems                    = 0x095C; // bool
            static constexpr std::uintptr_t m_bIsQuestEligible                    = 0x095D; // bool
            static constexpr std::uintptr_t m_bIsHltvActive                       = 0x095E; // bool
            static constexpr std::uintptr_t m_bBombPlanted                        = 0x095F; // bool
            static constexpr std::uintptr_t m_arrProhibitedItemIndices            = 0x0960; // uint16[100]
            static constexpr std::uintptr_t m_arrTournamentActiveCasterAccounts   = 0x0A28; // uint32[4]
            static constexpr std::uintptr_t m_numBestOfMaps                       = 0x0A38; // int32
            static constexpr std::uintptr_t m_nHalloweenMaskListSeed              = 0x0A3C; // int32
            static constexpr std::uintptr_t m_bBombDropped                        = 0x0A40; // bool
            static constexpr std::uintptr_t m_iRoundWinStatus                     = 0x0A44; // int32
            static constexpr std::uintptr_t m_eRoundWinReason                     = 0x0A48; // int32
            static constexpr std::uintptr_t m_bTCantBuy                           = 0x0A4C; // bool
            static constexpr std::uintptr_t m_bCTCantBuy                          = 0x0A4D; // bool
            static constexpr std::uintptr_t m_iMatchStats_RoundResults            = 0x0A50; // int32[30]
            static constexpr std::uintptr_t m_iMatchStats_PlayersAlive_CT         = 0x0AC8; // int32[30]
            static constexpr std::uintptr_t m_iMatchStats_PlayersAlive_T          = 0x0B40; // int32[30]
            static constexpr std::uintptr_t m_TeamRespawnWaveTimes                = 0x0BB8; // float32[32]
            static constexpr std::uintptr_t m_flNextRespawnWave                   = 0x0C38; // GameTime_t[32]
            static constexpr std::uintptr_t m_vMinimapMins                        = 0x0CB8; // Vector
            static constexpr std::uintptr_t m_vMinimapMaxs                        = 0x0CC4; // Vector
            static constexpr std::uintptr_t m_MinimapVerticalSectionHeights       = 0x0CD0; // float32[8]
            static constexpr std::uintptr_t m_ullLocalMatchID                     = 0x0CF0; // uint64
            static constexpr std::uintptr_t m_nEndMatchMapGroupVoteTypes          = 0x0CF8; // int32[10]
            static constexpr std::uintptr_t m_nEndMatchMapGroupVoteOptions        = 0x0D20; // int32[10]
            static constexpr std::uintptr_t m_nEndMatchMapVoteWinner              = 0x0D48; // int32
            static constexpr std::uintptr_t m_iNumConsecutiveCTLoses              = 0x0D4C; // int32
            static constexpr std::uintptr_t m_iNumConsecutiveTerroristLoses       = 0x0D50; // int32
            static constexpr std::uintptr_t m_bHasHostageBeenTouched              = 0x0D70; // bool
            static constexpr std::uintptr_t m_flIntermissionStartTime             = 0x0D74; // GameTime_t
            static constexpr std::uintptr_t m_flIntermissionEndTime               = 0x0D78; // GameTime_t
            static constexpr std::uintptr_t m_bLevelInitialized                   = 0x0D7C; // bool
            static constexpr std::uintptr_t m_iTotalRoundsPlayed                  = 0x0D80; // int32
            static constexpr std::uintptr_t m_iUnBalancedRounds                   = 0x0D84; // int32
            static constexpr std::uintptr_t m_endMatchOnRoundReset                = 0x0D88; // bool
            static constexpr std::uintptr_t m_endMatchOnThink                     = 0x0D89; // bool
            static constexpr std::uintptr_t m_iNumTerrorist                       = 0x0D8C; // int32
            static constexpr std::uintptr_t m_iNumCT                              = 0x0D90; // int32
            static constexpr std::uintptr_t m_iNumSpawnableTerrorist              = 0x0D94; // int32
            static constexpr std::uintptr_t m_iNumSpawnableCT                     = 0x0D98; // int32
            static constexpr std::uintptr_t m_arrSelectedHostageSpawnIndices      = 0x0DA0; // CUtlVector<int32>
            static constexpr std::uintptr_t m_nSpawnPointsRandomSeed              = 0x0DB8; // int32
            static constexpr std::uintptr_t m_bFirstConnected                     = 0x0DBC; // bool
            static constexpr std::uintptr_t m_bCompleteReset                      = 0x0DBD; // bool
            static constexpr std::uintptr_t m_bPickNewTeamsOnReset                = 0x0DBE; // bool
            static constexpr std::uintptr_t m_bScrambleTeamsOnRestart             = 0x0DBF; // bool
            static constexpr std::uintptr_t m_bSwapTeamsOnRestart                 = 0x0DC0; // bool
            static constexpr std::uintptr_t m_nEndMatchTiedVotes                  = 0x0DC8; // CUtlVector<int32>
            static constexpr std::uintptr_t m_bNeedToAskPlayersForContinueVote    = 0x0DE4; // bool
            static constexpr std::uintptr_t m_numQueuedMatchmakingAccounts        = 0x0DE8; // uint32
            static constexpr std::uintptr_t m_fAvgPlayerRank                      = 0x0DEC; // float32
            static constexpr std::uintptr_t m_pQueuedMatchmakingReservationString = 0x0DF0; // char*
            static constexpr std::uintptr_t m_numTotalTournamentDrops             = 0x0DF8; // uint32
            static constexpr std::uintptr_t m_numSpectatorsCountMax               = 0x0DFC; // uint32
            static constexpr std::uintptr_t m_numSpectatorsCountMaxTV             = 0x0E00; // uint32
            static constexpr std::uintptr_t m_numSpectatorsCountMaxLnk            = 0x0E04; // uint32
            static constexpr std::uintptr_t m_nCTsAliveAtFreezetimeEnd            = 0x0E10; // int32
            static constexpr std::uintptr_t m_nTerroristsAliveAtFreezetimeEnd     = 0x0E14; // int32
            static constexpr std::uintptr_t m_bForceTeamChangeSilent              = 0x0E18; // bool
            static constexpr std::uintptr_t m_bLoadingRoundBackupData             = 0x0E19; // bool
            static constexpr std::uintptr_t m_nMatchInfoShowType                  = 0x0E50; // int32
            static constexpr std::uintptr_t m_flMatchInfoDecidedTime              = 0x0E54; // float32
            static constexpr std::uintptr_t mTeamDMLastWinningTeamNumber          = 0x0E70; // int32
            static constexpr std::uintptr_t mTeamDMLastThinkTime                  = 0x0E74; // float32
            static constexpr std::uintptr_t m_flTeamDMLastAnnouncementTime        = 0x0E78; // float32
            static constexpr std::uintptr_t m_iAccountTerrorist                   = 0x0E7C; // int32
            static constexpr std::uintptr_t m_iAccountCT                          = 0x0E80; // int32
            static constexpr std::uintptr_t m_iSpawnPointCount_Terrorist          = 0x0E84; // int32
            static constexpr std::uintptr_t m_iSpawnPointCount_CT                 = 0x0E88; // int32
            static constexpr std::uintptr_t m_iMaxNumTerrorists                   = 0x0E8C; // int32
            static constexpr std::uintptr_t m_iMaxNumCTs                          = 0x0E90; // int32
            static constexpr std::uintptr_t m_iLoserBonusMostRecentTeam           = 0x0E94; // int32
            static constexpr std::uintptr_t m_tmNextPeriodicThink                 = 0x0E98; // float32
            static constexpr std::uintptr_t m_bVoiceWonMatchBragFired             = 0x0E9C; // bool
            static constexpr std::uintptr_t m_fWarmupNextChatNoticeTime           = 0x0EA0; // float32
            static constexpr std::uintptr_t m_iHostagesRescued                    = 0x0EA8; // int32
            static constexpr std::uintptr_t m_iHostagesTouched                    = 0x0EAC; // int32
            static constexpr std::uintptr_t m_flNextHostageAnnouncement           = 0x0EB0; // float32
            static constexpr std::uintptr_t m_bNoTerroristsKilled                 = 0x0EB4; // bool
            static constexpr std::uintptr_t m_bNoCTsKilled                        = 0x0EB5; // bool
            static constexpr std::uintptr_t m_bNoEnemiesKilled                    = 0x0EB6; // bool
            static constexpr std::uintptr_t m_bCanDonateWeapons                   = 0x0EB7; // bool
            static constexpr std::uintptr_t m_firstKillTime                       = 0x0EBC; // float32
            static constexpr std::uintptr_t m_firstBloodTime                      = 0x0EC4; // float32
            static constexpr std::uintptr_t m_hostageWasInjured                   = 0x0EE0; // bool
            static constexpr std::uintptr_t m_hostageWasKilled                    = 0x0EE1; // bool
            static constexpr std::uintptr_t m_bVoteCalled                         = 0x0EF0; // bool
            static constexpr std::uintptr_t m_bServerVoteOnReset                  = 0x0EF1; // bool
            static constexpr std::uintptr_t m_flVoteCheckThrottle                 = 0x0EF4; // float32
            static constexpr std::uintptr_t m_bBuyTimeEnded                       = 0x0EF8; // bool
            static constexpr std::uintptr_t m_nLastFreezeEndBeep                  = 0x0EFC; // int32
            static constexpr std::uintptr_t m_bTargetBombed                       = 0x0F00; // bool
            static constexpr std::uintptr_t m_bBombDefused                        = 0x0F01; // bool
            static constexpr std::uintptr_t m_bMapHasBombZone                     = 0x0F02; // bool
            static constexpr std::uintptr_t m_vecMainCTSpawnPos                   = 0x0F50; // Vector
            static constexpr std::uintptr_t m_CTSpawnPointsMasterList             = 0x0F60; // CUtlVector<CHandle<SpawnPoint>>
            static constexpr std::uintptr_t m_TerroristSpawnPointsMasterList      = 0x0F78; // CUtlVector<CHandle<SpawnPoint>>
            static constexpr std::uintptr_t m_bRespawningAllRespawnablePlayers    = 0x0F90; // bool
            static constexpr std::uintptr_t m_iNextCTSpawnPoint                   = 0x0F94; // int32
            static constexpr std::uintptr_t m_flCTSpawnPointUsedTime              = 0x0F98; // float32
            static constexpr std::uintptr_t m_iNextTerroristSpawnPoint            = 0x0F9C; // int32
            static constexpr std::uintptr_t m_flTerroristSpawnPointUsedTime       = 0x0FA0; // float32
            static constexpr std::uintptr_t m_CTSpawnPoints                       = 0x0FA8; // CUtlVector<CHandle<SpawnPoint>>
            static constexpr std::uintptr_t m_TerroristSpawnPoints                = 0x0FC0; // CUtlVector<CHandle<SpawnPoint>>
            static constexpr std::uintptr_t m_bIsUnreservedGameServer             = 0x0FD8; // bool
            static constexpr std::uintptr_t m_fAutobalanceDisplayTime             = 0x0FDC; // float32
            static constexpr std::uintptr_t m_bAllowWeaponSwitch                  = 0x1018; // bool
            static constexpr std::uintptr_t m_bRoundTimeWarningTriggered          = 0x1019; // bool
            static constexpr std::uintptr_t m_phaseChangeAnnouncementTime         = 0x101C; // GameTime_t
            static constexpr std::uintptr_t m_fNextUpdateTeamClanNamesTime        = 0x1020; // float32
            static constexpr std::uintptr_t m_flLastThinkTime                     = 0x1024; // GameTime_t
            static constexpr std::uintptr_t m_fAccumulatedRoundOffDamage          = 0x1028; // float32
            static constexpr std::uintptr_t m_nShorthandedBonusLastEvalRound      = 0x102C; // int32
            static constexpr std::uintptr_t m_nMatchAbortedEarlyReason            = 0x1078; // int32
            static constexpr std::uintptr_t m_bHasTriggeredRoundStartMusic        = 0x107C; // bool
            static constexpr std::uintptr_t m_bSwitchingTeamsAtRoundReset         = 0x107D; // bool
            static constexpr std::uintptr_t m_pGameModeRules                      = 0x1098; // CCSGameModeRules*
            static constexpr std::uintptr_t m_BtGlobalBlackboard                  = 0x10A0; // KeyValues3
            static constexpr std::uintptr_t m_hPlayerResource                     = 0x1138; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_RetakeRules                         = 0x1140; // CRetakeGameRules
            static constexpr std::uintptr_t m_arrTeamUniqueKillWeaponsMatch       = 0x1330; // CUtlVector<int32>[4]
            static constexpr std::uintptr_t m_bTeamLastKillUsedUniqueWeaponMatch  = 0x1390; // bool[4]
            static constexpr std::uintptr_t m_nMatchEndCount                      = 0x13B8; // uint8
            static constexpr std::uintptr_t m_nTTeamIntroVariant                  = 0x13BC; // int32
            static constexpr std::uintptr_t m_nCTTeamIntroVariant                 = 0x13C0; // int32
            static constexpr std::uintptr_t m_bTeamIntroPeriod                    = 0x13C4; // bool
            static constexpr std::uintptr_t m_fTeamIntroPeriodEnd                 = 0x13C8; // GameTime_t
            static constexpr std::uintptr_t m_bPlayedTeamIntroVO                  = 0x13CC; // bool
            static constexpr std::uintptr_t m_iRoundEndWinnerTeam                 = 0x13D0; // int32
            static constexpr std::uintptr_t m_eRoundEndReason                     = 0x13D4; // int32
            static constexpr std::uintptr_t m_bRoundEndShowTimerDefend            = 0x13D8; // bool
            static constexpr std::uintptr_t m_iRoundEndTimerTime                  = 0x13DC; // int32
            static constexpr std::uintptr_t m_sRoundEndFunFactToken               = 0x13E0; // CUtlString
            static constexpr std::uintptr_t m_iRoundEndFunFactPlayerSlot          = 0x13E8; // CPlayerSlot
            static constexpr std::uintptr_t m_iRoundEndFunFactData1               = 0x13EC; // int32
            static constexpr std::uintptr_t m_iRoundEndFunFactData2               = 0x13F0; // int32
            static constexpr std::uintptr_t m_iRoundEndFunFactData3               = 0x13F4; // int32
            static constexpr std::uintptr_t m_sRoundEndMessage                    = 0x13F8; // CUtlString
            static constexpr std::uintptr_t m_iRoundEndPlayerCount                = 0x1400; // int32
            static constexpr std::uintptr_t m_bRoundEndNoMusic                    = 0x1404; // bool
            static constexpr std::uintptr_t m_iRoundEndLegacy                     = 0x1408; // int32
            static constexpr std::uintptr_t m_nRoundEndCount                      = 0x140C; // uint8
            static constexpr std::uintptr_t m_iRoundStartRoundNumber              = 0x1410; // int32
            static constexpr std::uintptr_t m_nRoundStartCount                    = 0x1414; // uint8
            static constexpr std::uintptr_t m_flLastPerfSampleTime                = 0x5420; // float64
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundEventOBBEntity : public CSoundEventEntity {
        public:
            static constexpr std::uintptr_t m_vMins = 0x0558; // Vector
            static constexpr std::uintptr_t m_vMaxs = 0x0564; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysExplosion : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_bExplodeOnSpawn              = 0x04A8; // bool
            static constexpr std::uintptr_t m_flMagnitude                  = 0x04AC; // float32
            static constexpr std::uintptr_t m_flDamage                     = 0x04B0; // float32
            static constexpr std::uintptr_t m_radius                       = 0x04B4; // float32
            static constexpr std::uintptr_t m_targetEntityName             = 0x04B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flInnerRadius                = 0x04C0; // float32
            static constexpr std::uintptr_t m_flPushScale                  = 0x04C4; // float32
            static constexpr std::uintptr_t m_bConvertToDebrisWhenPossible = 0x04C8; // bool
            static constexpr std::uintptr_t m_bAffectInvulnerableEnts      = 0x04C9; // bool
            static constexpr std::uintptr_t m_OnPushedPlayer               = 0x04D0; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointVelocitySensor : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_hTargetEntity = 0x04A8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_vecAxis       = 0x04AC; // Vector
            static constexpr std::uintptr_t m_bEnabled      = 0x04B8; // bool
            static constexpr std::uintptr_t m_fPrevVelocity = 0x04BC; // float32
            static constexpr std::uintptr_t m_flAvgInterval = 0x04C0; // float32
            static constexpr std::uintptr_t m_Velocity      = 0x04C8; // CEntityOutputTemplate<float32,float32>
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
        class CPlantedC4 : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_bBombTicking                         = 0x0A28; // bool
            static constexpr std::uintptr_t m_flC4Blow                             = 0x0A2C; // GameTime_t
            static constexpr std::uintptr_t m_nBombSite                            = 0x0A30; // int32
            static constexpr std::uintptr_t m_nSourceSoundscapeHash                = 0x0A34; // int32
            static constexpr std::uintptr_t m_bAbortDetonationBecauseWorldIsFrozen = 0x0A38; // bool
            static constexpr std::uintptr_t m_AttributeManager                     = 0x0A40; // CAttributeContainer
            static constexpr std::uintptr_t m_OnBombDefused                        = 0x0D38; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnBombBeginDefuse                    = 0x0D50; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnBombDefuseAborted                  = 0x0D68; // CEntityIOOutput
            static constexpr std::uintptr_t m_bCannotBeDefused                     = 0x0D80; // bool
            static constexpr std::uintptr_t m_entitySpottedState                   = 0x0D88; // EntitySpottedState_t
            static constexpr std::uintptr_t m_nSpotRules                           = 0x0DA0; // int32
            static constexpr std::uintptr_t m_bHasExploded                         = 0x0DA4; // bool
            static constexpr std::uintptr_t m_bBombDefused                         = 0x0DA5; // bool
            static constexpr std::uintptr_t m_bTrainingPlacedByPlayer              = 0x0DA6; // bool
            static constexpr std::uintptr_t m_flTimerLength                        = 0x0DA8; // float32
            static constexpr std::uintptr_t m_bBeingDefused                        = 0x0DAC; // bool
            static constexpr std::uintptr_t m_fLastDefuseTime                      = 0x0DB4; // GameTime_t
            static constexpr std::uintptr_t m_flDefuseLength                       = 0x0DBC; // float32
            static constexpr std::uintptr_t m_flDefuseCountDown                    = 0x0DC0; // GameTime_t
            static constexpr std::uintptr_t m_hBombDefuser                         = 0x0DC4; // CHandle<CCSPlayerPawn>
            static constexpr std::uintptr_t m_iProgressBarTime                     = 0x0DC8; // int32
            static constexpr std::uintptr_t m_bVoiceAlertFired                     = 0x0DCC; // bool
            static constexpr std::uintptr_t m_bVoiceAlertPlayed                    = 0x0DCD; // bool[4]
            static constexpr std::uintptr_t m_flNextBotBeepTime                    = 0x0DD4; // GameTime_t
            static constexpr std::uintptr_t m_angCatchUpToPlayerEye                = 0x0DDC; // QAngle
            static constexpr std::uintptr_t m_flLastSpinDetectionTime              = 0x0DE8; // GameTime_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSceneEntity : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_iszSceneFile             = 0x04B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszTarget1               = 0x04B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszTarget2               = 0x04C0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszTarget3               = 0x04C8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszTarget4               = 0x04D0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszTarget5               = 0x04D8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszTarget6               = 0x04E0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszTarget7               = 0x04E8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszTarget8               = 0x04F0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hTarget1                 = 0x04F8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hTarget2                 = 0x04FC; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hTarget3                 = 0x0500; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hTarget4                 = 0x0504; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hTarget5                 = 0x0508; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hTarget6                 = 0x050C; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hTarget7                 = 0x0510; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hTarget8                 = 0x0514; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_sTargetAttachment        = 0x0518; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bIsPlayingBack           = 0x0520; // bool
            static constexpr std::uintptr_t m_bPaused                  = 0x0521; // bool
            static constexpr std::uintptr_t m_bMultiplayer             = 0x0522; // bool
            static constexpr std::uintptr_t m_bAutogenerated           = 0x0523; // bool
            static constexpr std::uintptr_t m_flForceClientTime        = 0x0524; // float32
            static constexpr std::uintptr_t m_flCurrentTime            = 0x0528; // float32
            static constexpr std::uintptr_t m_flFrameTime              = 0x052C; // float32
            static constexpr std::uintptr_t m_bCancelAtNextInterrupt   = 0x0530; // bool
            static constexpr std::uintptr_t m_fPitch                   = 0x0534; // float32
            static constexpr std::uintptr_t m_bAutomated               = 0x0538; // bool
            static constexpr std::uintptr_t m_nAutomatedAction         = 0x053C; // int32
            static constexpr std::uintptr_t m_flAutomationDelay        = 0x0540; // float32
            static constexpr std::uintptr_t m_flAutomationTime         = 0x0544; // float32
            static constexpr std::uintptr_t m_nSpeechPriority          = 0x0548; // int32
            static constexpr std::uintptr_t m_bPausedViaInput          = 0x054C; // bool
            static constexpr std::uintptr_t m_bPauseAtNextInterrupt    = 0x054D; // bool
            static constexpr std::uintptr_t m_bWaitingForActor         = 0x054E; // bool
            static constexpr std::uintptr_t m_bWaitingForInterrupt     = 0x054F; // bool
            static constexpr std::uintptr_t m_bInterruptedActorsScenes = 0x0550; // bool
            static constexpr std::uintptr_t m_bBreakOnNonIdle          = 0x0551; // bool
            static constexpr std::uintptr_t m_bSceneFinished           = 0x0552; // bool
            static constexpr std::uintptr_t m_hActorList               = 0x0558; // CNetworkUtlVectorBase<CHandle<CBaseFlex>>
            static constexpr std::uintptr_t m_hRemoveActorList         = 0x0570; // CUtlVector<CHandle<CBaseEntity>>
            static constexpr std::uintptr_t m_nSceneStringIndex        = 0x05B8; // uint16
            static constexpr std::uintptr_t m_OnStart                  = 0x05C0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnCompletion             = 0x05D8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnCanceled               = 0x05F0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnPaused                 = 0x0608; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnResumed                = 0x0620; // CEntityIOOutput
            static constexpr std::uintptr_t m_hInterruptScene          = 0x06C8; // CHandle<CSceneEntity>
            static constexpr std::uintptr_t m_nInterruptCount          = 0x06CC; // int32
            static constexpr std::uintptr_t m_bSceneMissing            = 0x06D0; // bool
            static constexpr std::uintptr_t m_bInterrupted             = 0x06D1; // bool
            static constexpr std::uintptr_t m_bCompletedEarly          = 0x06D2; // bool
            static constexpr std::uintptr_t m_bInterruptSceneFinished  = 0x06D3; // bool
            static constexpr std::uintptr_t m_bRestoring               = 0x06D4; // bool
            static constexpr std::uintptr_t m_hNotifySceneCompletion   = 0x06D8; // CUtlVector<CHandle<CSceneEntity>>
            static constexpr std::uintptr_t m_hListManagers            = 0x06F0; // CUtlVector<CHandle<CSceneListManager>>
            static constexpr std::uintptr_t m_iszSoundName             = 0x0708; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszSequenceName          = 0x0710; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hActor                   = 0x0718; // CHandle<CBaseFlex>
            static constexpr std::uintptr_t m_hActivator               = 0x071C; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_BusyActor                = 0x0720; // int32
            static constexpr std::uintptr_t m_iPlayerDeathBehavior     = 0x0724; // SceneOnPlayerDeath_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFilterLOS : public CBaseFilter {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_CameraServices : public CCSPlayerBase_CameraServices {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CMomentaryRotButton : public CRotButton {
        public:
            static constexpr std::uintptr_t m_Position          = 0x08B0; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnUnpressed       = 0x08D0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnFullyOpen       = 0x08E8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnFullyClosed     = 0x0900; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnReachedPosition = 0x0918; // CEntityIOOutput
            static constexpr std::uintptr_t m_lastUsed          = 0x0930; // int32
            static constexpr std::uintptr_t m_start             = 0x0934; // QAngle
            static constexpr std::uintptr_t m_end               = 0x0940; // QAngle
            static constexpr std::uintptr_t m_IdealYaw          = 0x094C; // float32
            static constexpr std::uintptr_t m_sNoise            = 0x0950; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bUpdateTarget     = 0x0958; // bool
            static constexpr std::uintptr_t m_direction         = 0x095C; // int32
            static constexpr std::uintptr_t m_returnSpeed       = 0x0960; // float32
            static constexpr std::uintptr_t m_flStartPosition   = 0x0964; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysHinge : public CPhysConstraint {
        public:
            static constexpr std::uintptr_t m_soundInfo                = 0x0510; // ConstraintSoundInfo
            static constexpr std::uintptr_t m_NotifyMinLimitReached    = 0x05A8; // CEntityIOOutput
            static constexpr std::uintptr_t m_NotifyMaxLimitReached    = 0x05C0; // CEntityIOOutput
            static constexpr std::uintptr_t m_bAtMinLimit              = 0x05D8; // bool
            static constexpr std::uintptr_t m_bAtMaxLimit              = 0x05D9; // bool
            static constexpr std::uintptr_t m_hinge                    = 0x05DC; // constraint_hingeparams_t
            static constexpr std::uintptr_t m_hingeFriction            = 0x061C; // float32
            static constexpr std::uintptr_t m_systemLoadScale          = 0x0620; // float32
            static constexpr std::uintptr_t m_bIsAxisLocal             = 0x0624; // bool
            static constexpr std::uintptr_t m_flMinRotation            = 0x0628; // float32
            static constexpr std::uintptr_t m_flMaxRotation            = 0x062C; // float32
            static constexpr std::uintptr_t m_flInitialRotation        = 0x0630; // float32
            static constexpr std::uintptr_t m_flMotorFrequency         = 0x0634; // float32
            static constexpr std::uintptr_t m_flMotorDampingRatio      = 0x0638; // float32
            static constexpr std::uintptr_t m_flAngleSpeed             = 0x063C; // float32
            static constexpr std::uintptr_t m_flAngleSpeedThreshold    = 0x0640; // float32
            static constexpr std::uintptr_t m_flLimitsDebugVisRotation = 0x0644; // float32
            static constexpr std::uintptr_t m_OnStartMoving            = 0x0648; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnStopMoving             = 0x0660; // CEntityIOOutput
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
        class CPathNode : public CPointEntity {
        public:
            static constexpr std::uintptr_t m_vInTangentLocal       = 0x04A8; // Vector
            static constexpr std::uintptr_t m_vOutTangentLocal      = 0x04B4; // Vector
            static constexpr std::uintptr_t m_strParentPathUniqueID = 0x04C0; // CUtlString
            static constexpr std::uintptr_t m_strPathNodeParameter  = 0x04C8; // CUtlString
            static constexpr std::uintptr_t m_xWSPrevParent         = 0x04D0; // CTransform
            static constexpr std::uintptr_t m_hPath                 = 0x04F0; // CHandle<CPathWithDynamicNodes>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBaseMoveBehavior : public CPathKeyFrame {
        public:
            static constexpr std::uintptr_t m_iPositionInterpolator     = 0x0500; // int32
            static constexpr std::uintptr_t m_iRotationInterpolator     = 0x0504; // int32
            static constexpr std::uintptr_t m_flAnimStartTime           = 0x0508; // float32
            static constexpr std::uintptr_t m_flAnimEndTime             = 0x050C; // float32
            static constexpr std::uintptr_t m_flAverageSpeedAcrossFrame = 0x0510; // float32
            static constexpr std::uintptr_t m_pCurrentKeyFrame          = 0x0518; // CPathKeyFrame*
            static constexpr std::uintptr_t m_pTargetKeyFrame           = 0x0520; // CPathKeyFrame*
            static constexpr std::uintptr_t m_pPreKeyFrame              = 0x0528; // CPathKeyFrame*
            static constexpr std::uintptr_t m_pPostKeyFrame             = 0x0530; // CPathKeyFrame*
            static constexpr std::uintptr_t m_flTimeIntoFrame           = 0x0538; // float32
            static constexpr std::uintptr_t m_iDirection                = 0x053C; // int32
        };

        // Has VTable
        // Local Type Scope
        class CCSObserver_CameraServices : public CCSPlayerBase_CameraServices {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSPlayerController : public CBasePlayerController {
        public:
            static constexpr std::uintptr_t m_pInGameMoneyServices                        = 0x07D8; // CCSPlayerController_InGameMoneyServices*
            static constexpr std::uintptr_t m_pInventoryServices                          = 0x07E0; // CCSPlayerController_InventoryServices*
            static constexpr std::uintptr_t m_pActionTrackingServices                     = 0x07E8; // CCSPlayerController_ActionTrackingServices*
            static constexpr std::uintptr_t m_pDamageServices                             = 0x07F0; // CCSPlayerController_DamageServices*
            static constexpr std::uintptr_t m_iPing                                       = 0x07F8; // uint32
            static constexpr std::uintptr_t m_bHasCommunicationAbuseMute                  = 0x07FC; // bool
            static constexpr std::uintptr_t m_uiCommunicationMuteFlags                    = 0x0800; // uint32
            static constexpr std::uintptr_t m_szCrosshairCodes                            = 0x0808; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iPendingTeamNum                             = 0x0810; // uint8
            static constexpr std::uintptr_t m_flForceTeamTime                             = 0x0814; // GameTime_t
            static constexpr std::uintptr_t m_iCompTeammateColor                          = 0x0818; // int32
            static constexpr std::uintptr_t m_bEverPlayedOnTeam                           = 0x081C; // bool
            static constexpr std::uintptr_t m_bAttemptedToGetColor                        = 0x081D; // bool
            static constexpr std::uintptr_t m_iTeammatePreferredColor                     = 0x0820; // int32
            static constexpr std::uintptr_t m_bTeamChanged                                = 0x0824; // bool
            static constexpr std::uintptr_t m_bInSwitchTeam                               = 0x0825; // bool
            static constexpr std::uintptr_t m_bHasSeenJoinGame                            = 0x0826; // bool
            static constexpr std::uintptr_t m_bJustBecameSpectator                        = 0x0827; // bool
            static constexpr std::uintptr_t m_bSwitchTeamsOnNextRoundReset                = 0x0828; // bool
            static constexpr std::uintptr_t m_bRemoveAllItemsOnNextRoundReset             = 0x0829; // bool
            static constexpr std::uintptr_t m_flLastJoinTeamTime                          = 0x082C; // GameTime_t
            static constexpr std::uintptr_t m_szClan                                      = 0x0830; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iCoachingTeam                               = 0x0838; // int32
            static constexpr std::uintptr_t m_nPlayerDominated                            = 0x0840; // uint64
            static constexpr std::uintptr_t m_nPlayerDominatingMe                         = 0x0848; // uint64
            static constexpr std::uintptr_t m_iCompetitiveRanking                         = 0x0850; // int32
            static constexpr std::uintptr_t m_iCompetitiveWins                            = 0x0854; // int32
            static constexpr std::uintptr_t m_iCompetitiveRankType                        = 0x0858; // int8
            static constexpr std::uintptr_t m_iCompetitiveRankingPredicted_Win            = 0x085C; // int32
            static constexpr std::uintptr_t m_iCompetitiveRankingPredicted_Loss           = 0x0860; // int32
            static constexpr std::uintptr_t m_iCompetitiveRankingPredicted_Tie            = 0x0864; // int32
            static constexpr std::uintptr_t m_nEndMatchNextMapVote                        = 0x0868; // int32
            static constexpr std::uintptr_t m_unActiveQuestId                             = 0x086C; // uint16
            static constexpr std::uintptr_t m_rtActiveMissionPeriod                       = 0x0870; // uint32
            static constexpr std::uintptr_t m_nQuestProgressReason                        = 0x0874; // QuestProgress::Reason
            static constexpr std::uintptr_t m_unPlayerTvControlFlags                      = 0x0878; // uint32
            static constexpr std::uintptr_t m_iDraftIndex                                 = 0x08A8; // int32
            static constexpr std::uintptr_t m_msQueuedModeDisconnectionTimestamp          = 0x08AC; // uint32
            static constexpr std::uintptr_t m_uiAbandonRecordedReason                     = 0x08B0; // uint32
            static constexpr std::uintptr_t m_eNetworkDisconnectionReason                 = 0x08B4; // uint32
            static constexpr std::uintptr_t m_bCannotBeKicked                             = 0x08B8; // bool
            static constexpr std::uintptr_t m_bEverFullyConnected                         = 0x08B9; // bool
            static constexpr std::uintptr_t m_bAbandonAllowsSurrender                     = 0x08BA; // bool
            static constexpr std::uintptr_t m_bAbandonOffersInstantSurrender              = 0x08BB; // bool
            static constexpr std::uintptr_t m_bDisconnection1MinWarningPrinted            = 0x08BC; // bool
            static constexpr std::uintptr_t m_bScoreReported                              = 0x08BD; // bool
            static constexpr std::uintptr_t m_nDisconnectionTick                          = 0x08C0; // int32
            static constexpr std::uintptr_t m_bControllingBot                             = 0x08D0; // bool
            static constexpr std::uintptr_t m_bHasControlledBotThisRound                  = 0x08D1; // bool
            static constexpr std::uintptr_t m_bHasBeenControlledByPlayerThisRound         = 0x08D2; // bool
            static constexpr std::uintptr_t m_nBotsControlledThisRound                    = 0x08D4; // int32
            static constexpr std::uintptr_t m_bCanControlObservedBot                      = 0x08D8; // bool
            static constexpr std::uintptr_t m_hPlayerPawn                                 = 0x08DC; // CHandle<CCSPlayerPawn>
            static constexpr std::uintptr_t m_hObserverPawn                               = 0x08E0; // CHandle<CCSObserverPawn>
            static constexpr std::uintptr_t m_DesiredObserverMode                         = 0x08E4; // int32
            static constexpr std::uintptr_t m_hDesiredObserverTarget                      = 0x08E8; // CEntityHandle
            static constexpr std::uintptr_t m_bPawnIsAlive                                = 0x08EC; // bool
            static constexpr std::uintptr_t m_iPawnHealth                                 = 0x08F0; // uint32
            static constexpr std::uintptr_t m_iPawnArmor                                  = 0x08F4; // int32
            static constexpr std::uintptr_t m_bPawnHasDefuser                             = 0x08F8; // bool
            static constexpr std::uintptr_t m_bPawnHasHelmet                              = 0x08F9; // bool
            static constexpr std::uintptr_t m_nPawnCharacterDefIndex                      = 0x08FA; // uint16
            static constexpr std::uintptr_t m_iPawnLifetimeStart                          = 0x08FC; // int32
            static constexpr std::uintptr_t m_iPawnLifetimeEnd                            = 0x0900; // int32
            static constexpr std::uintptr_t m_iPawnBotDifficulty                          = 0x0904; // int32
            static constexpr std::uintptr_t m_hOriginalControllerOfCurrentPawn            = 0x0908; // CHandle<CCSPlayerController>
            static constexpr std::uintptr_t m_iScore                                      = 0x090C; // int32
            static constexpr std::uintptr_t m_iRoundScore                                 = 0x0910; // int32
            static constexpr std::uintptr_t m_iRoundsWon                                  = 0x0914; // int32
            static constexpr std::uintptr_t m_recentKillQueue                             = 0x0918; // uint8[8]
            static constexpr std::uintptr_t m_nFirstKill                                  = 0x0920; // uint8
            static constexpr std::uintptr_t m_nKillCount                                  = 0x0921; // uint8
            static constexpr std::uintptr_t m_bMvpNoMusic                                 = 0x0922; // bool
            static constexpr std::uintptr_t m_eMvpReason                                  = 0x0924; // int32
            static constexpr std::uintptr_t m_iMusicKitID                                 = 0x0928; // int32
            static constexpr std::uintptr_t m_iMusicKitMVPs                               = 0x092C; // int32
            static constexpr std::uintptr_t m_iMVPs                                       = 0x0930; // int32
            static constexpr std::uintptr_t m_nUpdateCounter                              = 0x0934; // int32
            static constexpr std::uintptr_t m_flSmoothedPing                              = 0x0938; // float32
            static constexpr std::uintptr_t m_lastHeldVoteTimer                           = 0x0940; // IntervalTimer
            static constexpr std::uintptr_t m_bShowHints                                  = 0x0958; // bool
            static constexpr std::uintptr_t m_iNextTimeCheck                              = 0x095C; // int32
            static constexpr std::uintptr_t m_bJustDidTeamKill                            = 0x0960; // bool
            static constexpr std::uintptr_t m_bPunishForTeamKill                          = 0x0961; // bool
            static constexpr std::uintptr_t m_bGaveTeamDamageWarning                      = 0x0962; // bool
            static constexpr std::uintptr_t m_bGaveTeamDamageWarningThisRound             = 0x0963; // bool
            static constexpr std::uintptr_t m_dblLastReceivedPacketPlatFloatTime          = 0x0968; // float64
            static constexpr std::uintptr_t m_LastTeamDamageWarningTime                   = 0x0970; // GameTime_t
            static constexpr std::uintptr_t m_LastTimePlayerWasDisconnectedForPawnsRemove = 0x0974; // GameTime_t
            static constexpr std::uintptr_t m_nSuspiciousHitCount                         = 0x0978; // uint32
            static constexpr std::uintptr_t m_nNonSuspiciousHitStreak                     = 0x097C; // uint32
            static constexpr std::uintptr_t m_bFireBulletsSeedSynchronized                = 0x0A21; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvSoundscapeProxy : public CEnvSoundscape {
        public:
            static constexpr std::uintptr_t m_MainSoundscapeName = 0x0538; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSoundEventSphereEntity : public CSoundEventEntity {
        public:
            static constexpr std::uintptr_t m_flRadius = 0x0558; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerBuoyancy : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_BuoyancyHelper = 0x0890; // CBuoyancyHelper
            static constexpr std::uintptr_t m_flFluidDensity = 0x09A8; // float32
        };

        // Has VTable
        // Local Type Scope
        class CBtNodeConditionInactive : public CBtNodeCondition {
        public:
            static constexpr std::uintptr_t m_flRoundStartThresholdSeconds       = 0x0078; // float32
            static constexpr std::uintptr_t m_flSensorInactivityThresholdSeconds = 0x007C; // float32
            static constexpr std::uintptr_t m_SensorInactivityTimer              = 0x0080; // CountdownTimer
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicNPCCounterAABB : public CLogicNPCCounter {
        public:
            static constexpr std::uintptr_t m_vDistanceOuterMins = 0x0728; // Vector
            static constexpr std::uintptr_t m_vDistanceOuterMaxs = 0x0734; // Vector
            static constexpr std::uintptr_t m_vOuterMins         = 0x0740; // Vector
            static constexpr std::uintptr_t m_vOuterMaxs         = 0x074C; // Vector
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
        class CPointClientUIWorldPanel : public CBaseClientUIEntity {
        public:
            static constexpr std::uintptr_t m_bIgnoreInput                        = 0x0890; // bool
            static constexpr std::uintptr_t m_bLit                                = 0x0891; // bool
            static constexpr std::uintptr_t m_bFollowPlayerAcrossTeleport         = 0x0892; // bool
            static constexpr std::uintptr_t m_flWidth                             = 0x0894; // float32
            static constexpr std::uintptr_t m_flHeight                            = 0x0898; // float32
            static constexpr std::uintptr_t m_flDPI                               = 0x089C; // float32
            static constexpr std::uintptr_t m_flInteractDistance                  = 0x08A0; // float32
            static constexpr std::uintptr_t m_flDepthOffset                       = 0x08A4; // float32
            static constexpr std::uintptr_t m_unOwnerContext                      = 0x08A8; // uint32
            static constexpr std::uintptr_t m_unHorizontalAlign                   = 0x08AC; // uint32
            static constexpr std::uintptr_t m_unVerticalAlign                     = 0x08B0; // uint32
            static constexpr std::uintptr_t m_unOrientation                       = 0x08B4; // uint32
            static constexpr std::uintptr_t m_bAllowInteractionFromAllSceneWorlds = 0x08B8; // bool
            static constexpr std::uintptr_t m_vecCSSClasses                       = 0x08C0; // CNetworkUtlVectorBase<CUtlSymbolLarge>
            static constexpr std::uintptr_t m_bOpaque                             = 0x08D8; // bool
            static constexpr std::uintptr_t m_bNoDepth                            = 0x08D9; // bool
            static constexpr std::uintptr_t m_bVisibleWhenParentNoDraw            = 0x08DA; // bool
            static constexpr std::uintptr_t m_bRenderBackface                     = 0x08DB; // bool
            static constexpr std::uintptr_t m_bUseOffScreenIndicator              = 0x08DC; // bool
            static constexpr std::uintptr_t m_bExcludeFromSaveGames               = 0x08DD; // bool
            static constexpr std::uintptr_t m_bGrabbable                          = 0x08DE; // bool
            static constexpr std::uintptr_t m_bOnlyRenderToTexture                = 0x08DF; // bool
            static constexpr std::uintptr_t m_bDisableMipGen                      = 0x08E0; // bool
            static constexpr std::uintptr_t m_nExplicitImageLayout                = 0x08E4; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CRevertSaved : public CModelPointEntity {
        public:
            static constexpr std::uintptr_t m_loadTime = 0x0730; // float32
            static constexpr std::uintptr_t m_Duration = 0x0734; // float32
            static constexpr std::uintptr_t m_HoldTime = 0x0738; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFogTrigger : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_fog = 0x0890; // fogparams_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFilterContext : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_iFilterContext = 0x04E0; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFilterMultiple : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_nFilterType = 0x04E0; // filter_t
            static constexpr std::uintptr_t m_iFilterName = 0x04E8; // CUtlSymbolLarge[10]
            static constexpr std::uintptr_t m_hFilter     = 0x0538; // CHandle<CBaseEntity>[10]
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFilterClass : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_iFilterClass = 0x04E0; // CUtlSymbolLarge
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
        class CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable : public CEnvSoundscapeTriggerable {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerFan : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_vFanOriginOffset        = 0x0890; // Vector
            static constexpr std::uintptr_t m_vDirection              = 0x089C; // Vector
            static constexpr std::uintptr_t m_bPushTowardsInfoTarget  = 0x08A8; // bool
            static constexpr std::uintptr_t m_bPushAwayFromInfoTarget = 0x08A9; // bool
            static constexpr std::uintptr_t m_qNoiseDelta             = 0x08B0; // Quaternion
            static constexpr std::uintptr_t m_hInfoFan                = 0x08C0; // CHandle<CInfoFan>
            static constexpr std::uintptr_t m_flForce                 = 0x08C4; // float32
            static constexpr std::uintptr_t m_bFalloff                = 0x08C8; // bool
            static constexpr std::uintptr_t m_RampTimer               = 0x08D0; // CountdownTimer
            static constexpr std::uintptr_t m_vFanOriginWS            = 0x08E8; // VectorWS
            static constexpr std::uintptr_t m_vFanOriginLS            = 0x08F4; // Vector
            static constexpr std::uintptr_t m_vFanEndLS               = 0x0900; // Vector
            static constexpr std::uintptr_t m_vNoiseDirectionTarget   = 0x090C; // Vector
            static constexpr std::uintptr_t m_iszInfoFan              = 0x0918; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flRopeForceScale        = 0x0920; // float32
            static constexpr std::uintptr_t m_flParticleForceScale    = 0x0924; // float32
            static constexpr std::uintptr_t m_flPlayerForce           = 0x0928; // float32
            static constexpr std::uintptr_t m_bPlayerWindblock        = 0x092C; // bool
            static constexpr std::uintptr_t m_flNPCForce              = 0x0930; // float32
            static constexpr std::uintptr_t m_flRampTime              = 0x0934; // float32
            static constexpr std::uintptr_t m_fNoiseDegrees           = 0x0938; // float32
            static constexpr std::uintptr_t m_fNoiseSpeed             = 0x093C; // float32
            static constexpr std::uintptr_t m_bPushPlayer             = 0x0940; // bool
            static constexpr std::uintptr_t m_bRampDown               = 0x0941; // bool
            static constexpr std::uintptr_t m_nManagerFanIdx          = 0x0944; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CChangeLevel : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_sMapName            = 0x0890; // CUtlString
            static constexpr std::uintptr_t m_sLandmarkName       = 0x0898; // CUtlString
            static constexpr std::uintptr_t m_OnChangeLevel       = 0x08A0; // CEntityIOOutput
            static constexpr std::uintptr_t m_bTouched            = 0x08B8; // bool
            static constexpr std::uintptr_t m_bNoTouch            = 0x08B9; // bool
            static constexpr std::uintptr_t m_bNewChapter         = 0x08BA; // bool
            static constexpr std::uintptr_t m_bOnChangeLevelFired = 0x08BB; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CRulePointEntity : public CRuleEntity {
        public:
            static constexpr std::uintptr_t m_Score = 0x0738; // int32
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
        class CPhysWheelConstraint : public CPhysConstraint {
        public:
            static constexpr std::uintptr_t m_flSuspensionFrequency    = 0x0508; // float32
            static constexpr std::uintptr_t m_flSuspensionDampingRatio = 0x050C; // float32
            static constexpr std::uintptr_t m_flSuspensionHeightOffset = 0x0510; // float32
            static constexpr std::uintptr_t m_bEnableSuspensionLimit   = 0x0514; // bool
            static constexpr std::uintptr_t m_flMinSuspensionOffset    = 0x0518; // float32
            static constexpr std::uintptr_t m_flMaxSuspensionOffset    = 0x051C; // float32
            static constexpr std::uintptr_t m_bEnableSteeringLimit     = 0x0520; // bool
            static constexpr std::uintptr_t m_flMinSteeringAngle       = 0x0524; // float32
            static constexpr std::uintptr_t m_flMaxSteeringAngle       = 0x0528; // float32
            static constexpr std::uintptr_t m_flSteeringAxisFriction   = 0x052C; // float32
            static constexpr std::uintptr_t m_flSpinAxisFriction       = 0x0530; // float32
            static constexpr std::uintptr_t m_hSteeringMimicsEntity    = 0x0534; // CHandle<CBaseEntity>
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
        class CRotDoor : public CBaseDoor {
        public:
            static constexpr std::uintptr_t m_bSolidBsp = 0x0930; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicActiveAutosave : public CLogicAutosave {
        public:
            static constexpr std::uintptr_t m_TriggerHitPoints = 0x04B8; // int32
            static constexpr std::uintptr_t m_flTimeToTrigger  = 0x04BC; // float32
            static constexpr std::uintptr_t m_flStartTime      = 0x04C0; // GameTime_t
            static constexpr std::uintptr_t m_flDangerousTime  = 0x04C4; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysFixed : public CPhysConstraint {
        public:
            static constexpr std::uintptr_t m_flLinearFrequency        = 0x0508; // float32
            static constexpr std::uintptr_t m_flLinearDampingRatio     = 0x050C; // float32
            static constexpr std::uintptr_t m_flAngularFrequency       = 0x0510; // float32
            static constexpr std::uintptr_t m_flAngularDampingRatio    = 0x0514; // float32
            static constexpr std::uintptr_t m_bEnableLinearConstraint  = 0x0518; // bool
            static constexpr std::uintptr_t m_bEnableAngularConstraint = 0x0519; // bool
            static constexpr std::uintptr_t m_sBoneName1               = 0x0520; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_sBoneName2               = 0x0528; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFilterAttributeInt : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_sAttributeName = 0x04E0; // CUtlSymbolLarge
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
        class CGamePlayerEquip : public CRulePointEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncMonitor : public CFuncBrush {
        public:
            static constexpr std::uintptr_t m_targetCamera          = 0x0750; // CUtlString
            static constexpr std::uintptr_t m_nResolutionEnum       = 0x0758; // int32
            static constexpr std::uintptr_t m_bRenderShadows        = 0x075C; // bool
            static constexpr std::uintptr_t m_bUseUniqueColorTarget = 0x075D; // bool
            static constexpr std::uintptr_t m_brushModelName        = 0x0760; // CUtlString
            static constexpr std::uintptr_t m_hTargetCamera         = 0x0768; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_bEnabled              = 0x076C; // bool
            static constexpr std::uintptr_t m_bDraw3DSkybox         = 0x076D; // bool
            static constexpr std::uintptr_t m_bStartEnabled         = 0x076E; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CScriptTriggerOnce : public CTriggerOnce {
        public:
            static constexpr std::uintptr_t m_vExtent = 0x08A8; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerImpact : public CTriggerMultiple {
        public:
            static constexpr std::uintptr_t m_flMagnitude  = 0x08A8; // float32
            static constexpr std::uintptr_t m_flNoise      = 0x08AC; // float32
            static constexpr std::uintptr_t m_flViewkick   = 0x08B0; // float32
            static constexpr std::uintptr_t m_pOutputForce = 0x08B8; // CEntityOutputTemplate<Vector,Vector>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CMoverPathNode : public CPathNode {
        public:
            static constexpr std::uintptr_t m_OnStartFromOrInSegment = 0x0500; // CEntityOutputTemplate<CUtlString,char*>
            static constexpr std::uintptr_t m_OnStoppedAtOrInSegment = 0x0520; // CEntityOutputTemplate<CUtlString,char*>
            static constexpr std::uintptr_t m_OnPassThrough          = 0x0540; // CEntityOutputTemplate<CUtlString,char*>
            static constexpr std::uintptr_t m_OnPassThroughForward   = 0x0560; // CEntityOutputTemplate<CUtlString,char*>
            static constexpr std::uintptr_t m_OnPassThroughReverse   = 0x0580; // CEntityOutputTemplate<CUtlString,char*>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFilterModel : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_iFilterModel = 0x04E0; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerHurt : public CBaseTrigger {
        public:
            static constexpr std::uintptr_t m_flOriginalDamage   = 0x0890; // float32
            static constexpr std::uintptr_t m_flDamage           = 0x0894; // float32
            static constexpr std::uintptr_t m_flDamageCap        = 0x0898; // float32
            static constexpr std::uintptr_t m_flLastDmgTime      = 0x089C; // GameTime_t
            static constexpr std::uintptr_t m_flForgivenessDelay = 0x08A0; // float32
            static constexpr std::uintptr_t m_bitsDamageInflict  = 0x08A4; // DamageTypes_t
            static constexpr std::uintptr_t m_damageModel        = 0x08A8; // int32
            static constexpr std::uintptr_t m_bNoDmgForce        = 0x08AC; // bool
            static constexpr std::uintptr_t m_vDamageForce       = 0x08B0; // Vector
            static constexpr std::uintptr_t m_thinkAlways        = 0x08BC; // bool
            static constexpr std::uintptr_t m_hurtThinkPeriod    = 0x08C0; // float32
            static constexpr std::uintptr_t m_OnHurt             = 0x08C8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnHurtPlayer       = 0x08E0; // CEntityIOOutput
            static constexpr std::uintptr_t m_hurtEntities       = 0x08F8; // CUtlVector<CHandle<CBaseEntity>>
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
        class CTriggerBombReset : public CBaseTrigger {
        public:
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
        class CInfoDeathmatchSpawn : public SpawnPoint {
        public:
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
        class CGameMoney : public CRulePointEntity {
        public:
            static constexpr std::uintptr_t m_OnMoneySpent     = 0x0740; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnMoneySpentFail = 0x0758; // CEntityIOOutput
            static constexpr std::uintptr_t m_nMoney           = 0x0770; // int32
            static constexpr std::uintptr_t m_strAwardText     = 0x0778; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPlayerSprayDecal : public CModelPointEntity {
        public:
            static constexpr std::uintptr_t m_nUniqueID      = 0x0730; // int32
            static constexpr std::uintptr_t m_unAccountID    = 0x0734; // uint32
            static constexpr std::uintptr_t m_unTraceID      = 0x0738; // uint32
            static constexpr std::uintptr_t m_rtGcTime       = 0x073C; // uint32
            static constexpr std::uintptr_t m_vecEndPos      = 0x0740; // Vector
            static constexpr std::uintptr_t m_vecStart       = 0x074C; // Vector
            static constexpr std::uintptr_t m_vecLeft        = 0x0758; // Vector
            static constexpr std::uintptr_t m_vecNormal      = 0x0764; // Vector
            static constexpr std::uintptr_t m_nPlayer        = 0x0770; // int32
            static constexpr std::uintptr_t m_nEntity        = 0x0774; // int32
            static constexpr std::uintptr_t m_nHitbox        = 0x0778; // int32
            static constexpr std::uintptr_t m_flCreationTime = 0x077C; // float32
            static constexpr std::uintptr_t m_nTintID        = 0x0780; // int32
            static constexpr std::uintptr_t m_nVersion       = 0x0784; // uint8
            static constexpr std::uintptr_t m_ubSignature    = 0x0785; // uint8[128]
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class FilterHealth : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_bAdrenalineActive = 0x04E0; // bool
            static constexpr std::uintptr_t m_iHealthMin        = 0x04E4; // int32
            static constexpr std::uintptr_t m_iHealthMax        = 0x04E8; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CGameText : public CRulePointEntity {
        public:
            static constexpr std::uintptr_t m_iszMessage = 0x0740; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_textParms  = 0x0748; // hudtextparms_t
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
        class CFilterName : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_iFilterName = 0x04E0; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFilterMassGreater : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_fFilterMass = 0x04E0; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFilterEnemy : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_iszEnemyName           = 0x04E0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flRadius               = 0x04E8; // float32
            static constexpr std::uintptr_t m_flOuterRadius          = 0x04EC; // float32
            static constexpr std::uintptr_t m_nMaxSquadmatesPerEnemy = 0x04F0; // int32
            static constexpr std::uintptr_t m_iszPlayerName          = 0x04F8; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBreakableProp : public CBaseProp {
        public:
            static constexpr std::uintptr_t m_CPropDataComponent                    = 0x0A58; // CPropDataComponent
            static constexpr std::uintptr_t m_OnStartDeath                          = 0x0A98; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnBreak                               = 0x0AB0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnHealthChanged                       = 0x0AC8; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnTakeDamage                          = 0x0AE8; // CEntityIOOutput
            static constexpr std::uintptr_t m_impactEnergyScale                     = 0x0B00; // float32
            static constexpr std::uintptr_t m_iMinHealthDmg                         = 0x0B04; // int32
            static constexpr std::uintptr_t m_preferredCarryAngles                  = 0x0B08; // QAngle
            static constexpr std::uintptr_t m_flPressureDelay                       = 0x0B14; // float32
            static constexpr std::uintptr_t m_flDefBurstScale                       = 0x0B18; // float32
            static constexpr std::uintptr_t m_vDefBurstOffset                       = 0x0B1C; // Vector
            static constexpr std::uintptr_t m_hBreaker                              = 0x0B28; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_PerformanceMode                       = 0x0B2C; // PerformanceMode_t
            static constexpr std::uintptr_t m_flPreventDamageBeforeTime             = 0x0B30; // GameTime_t
            static constexpr std::uintptr_t m_BreakableContentsType                 = 0x0B34; // BreakableContentsType_t
            static constexpr std::uintptr_t m_strBreakableContentsPropGroupOverride = 0x0B38; // CUtlString
            static constexpr std::uintptr_t m_strBreakableContentsParticleOverride  = 0x0B40; // CUtlString
            static constexpr std::uintptr_t m_bHasBreakPiecesOrCommands             = 0x0B48; // bool
            static constexpr std::uintptr_t m_explodeDamage                         = 0x0B4C; // float32
            static constexpr std::uintptr_t m_explodeRadius                         = 0x0B50; // float32
            static constexpr std::uintptr_t m_nExplosionType                        = 0x0B54; // BaseExplosionTypes_t
            static constexpr std::uintptr_t m_explosionDelay                        = 0x0B58; // float32
            static constexpr std::uintptr_t m_explosionBuildupSound                 = 0x0B60; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_explosionCustomEffect                 = 0x0B68; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_explosionCustomSound                  = 0x0B70; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_explosionModifier                     = 0x0B78; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hPhysicsAttacker                      = 0x0B80; // CHandle<CBasePlayerPawn>
            static constexpr std::uintptr_t m_flLastPhysicsInfluenceTime            = 0x0B84; // GameTime_t
            static constexpr std::uintptr_t m_flDefaultFadeScale                    = 0x0B88; // float32
            static constexpr std::uintptr_t m_hLastAttacker                         = 0x0B8C; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_iszPuntSound                          = 0x0B90; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bUsePuntSound                         = 0x0B98; // bool
            static constexpr std::uintptr_t m_bOriginalBlockLOS                     = 0x0B99; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CDynamicProp : public CBreakableProp {
        public:
            static constexpr std::uintptr_t m_bCreateNavObstacle            = 0x0BA8; // bool
            static constexpr std::uintptr_t m_bNavObstacleUpdatesOverridden = 0x0BA9; // bool
            static constexpr std::uintptr_t m_bUseHitboxesForRenderBox      = 0x0BAA; // bool
            static constexpr std::uintptr_t m_bUseAnimGraph                 = 0x0BAB; // bool
            static constexpr std::uintptr_t m_pOutputAnimBegun              = 0x0BB0; // CEntityIOOutput
            static constexpr std::uintptr_t m_pOutputAnimOver               = 0x0BC8; // CEntityIOOutput
            static constexpr std::uintptr_t m_pOutputAnimLoopCycleOver      = 0x0BE0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnAnimReachedStart            = 0x0BF8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnAnimReachedEnd              = 0x0C10; // CEntityIOOutput
            static constexpr std::uintptr_t m_iszIdleAnim                   = 0x0C28; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_nIdleAnimLoopMode             = 0x0C30; // AnimLoopMode_t
            static constexpr std::uintptr_t m_bRandomizeCycle               = 0x0C34; // bool
            static constexpr std::uintptr_t m_bStartDisabled                = 0x0C35; // bool
            static constexpr std::uintptr_t m_bFiredStartEndOutput          = 0x0C36; // bool
            static constexpr std::uintptr_t m_bForceNpcExclude              = 0x0C37; // bool
            static constexpr std::uintptr_t m_bCreateNonSolid               = 0x0C38; // bool
            static constexpr std::uintptr_t m_bIsOverrideProp               = 0x0C39; // bool
            static constexpr std::uintptr_t m_iInitialGlowState             = 0x0C3C; // int32
            static constexpr std::uintptr_t m_nGlowRange                    = 0x0C40; // int32
            static constexpr std::uintptr_t m_nGlowRangeMin                 = 0x0C44; // int32
            static constexpr std::uintptr_t m_glowColor                     = 0x0C48; // Color
            static constexpr std::uintptr_t m_nGlowTeam                     = 0x0C4C; // int32
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
        class CDynamicPropAlias_prop_dynamic_override : public CDynamicProp {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CItemSoda : public CBaseAnimGraph {
        public:
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
        class CFuncElectrifiedVolume : public CFuncBrush {
        public:
            static constexpr std::uintptr_t m_EffectName               = 0x0750; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_EffectInterpenetrateName = 0x0758; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_EffectZapName            = 0x0760; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszEffectSource          = 0x0768; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CConstraintAnchor : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_massScale = 0x0A20; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class COrnamentProp : public CDynamicProp {
        public:
            static constexpr std::uintptr_t m_initialOwner = 0x0C50; // CUtlSymbolLarge
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
        class CSpriteAlias_env_glow : public CSprite {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncPlatRot : public CFuncPlat {
        public:
            static constexpr std::uintptr_t m_end   = 0x07E0; // QAngle
            static constexpr std::uintptr_t m_start = 0x07EC; // QAngle
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncTrackChange : public CFuncPlatRot {
        public:
            static constexpr std::uintptr_t m_trackTop        = 0x07F8; // CPathTrack*
            static constexpr std::uintptr_t m_trackBottom     = 0x0800; // CPathTrack*
            static constexpr std::uintptr_t m_train           = 0x0808; // CFuncTrackTrain*
            static constexpr std::uintptr_t m_trackTopName    = 0x0810; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_trackBottomName = 0x0818; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_trainName       = 0x0820; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_code            = 0x0828; // TRAIN_CODE
            static constexpr std::uintptr_t m_targetState     = 0x082C; // int32
            static constexpr std::uintptr_t m_use             = 0x0830; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncTrackAuto : public CFuncTrackChange {
        public:
        };

        // Has VTable
        // Is Absract
        // Local Type Scope
        class CBasePropDoor : public CDynamicProp {
        public:
            static constexpr std::uintptr_t m_flAutoReturnDelay     = 0x0C60; // float32
            static constexpr std::uintptr_t m_hDoorList             = 0x0C68; // CUtlVector<CHandle<CBasePropDoor>>
            static constexpr std::uintptr_t m_nHardwareType         = 0x0C80; // int32
            static constexpr std::uintptr_t m_bNeedsHardware        = 0x0C84; // bool
            static constexpr std::uintptr_t m_eDoorState            = 0x0C88; // DoorState_t
            static constexpr std::uintptr_t m_bLocked               = 0x0C8C; // bool
            static constexpr std::uintptr_t m_bNoNPCs               = 0x0C8D; // bool
            static constexpr std::uintptr_t m_closedPosition        = 0x0C90; // Vector
            static constexpr std::uintptr_t m_closedAngles          = 0x0C9C; // QAngle
            static constexpr std::uintptr_t m_hBlocker              = 0x0CA8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_bFirstBlocked         = 0x0CAC; // bool
            static constexpr std::uintptr_t m_ls                    = 0x0CB0; // locksound_t
            static constexpr std::uintptr_t m_bForceClosed          = 0x0CD0; // bool
            static constexpr std::uintptr_t m_vecLatchWorldPosition = 0x0CD4; // VectorWS
            static constexpr std::uintptr_t m_hActivator            = 0x0CE0; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_SoundMoving           = 0x0CF8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_SoundOpen             = 0x0D00; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_SoundClose            = 0x0D08; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_SoundLock             = 0x0D10; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_SoundUnlock           = 0x0D18; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_SoundLatch            = 0x0D20; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_SoundPound            = 0x0D28; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_SoundJiggle           = 0x0D30; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_SoundLockedAnim       = 0x0D38; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_numCloseAttempts      = 0x0D40; // int32
            static constexpr std::uintptr_t m_nPhysicsMaterial      = 0x0D44; // CUtlStringToken
            static constexpr std::uintptr_t m_SlaveName             = 0x0D48; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hMaster               = 0x0D50; // CHandle<CBasePropDoor>
            static constexpr std::uintptr_t m_OnBlockedClosing      = 0x0D58; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnBlockedOpening      = 0x0D70; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnUnblockedClosing    = 0x0D88; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnUnblockedOpening    = 0x0DA0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnFullyClosed         = 0x0DB8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnFullyOpen           = 0x0DD0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnClose               = 0x0DE8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnOpen                = 0x0E00; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnLockedUse           = 0x0E18; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnAjarOpen            = 0x0E30; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CItem : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_OnPlayerTouch        = 0x0A28; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnPlayerPickup       = 0x0A40; // CEntityIOOutput
            static constexpr std::uintptr_t m_bActivateWhenAtRest  = 0x0A58; // bool
            static constexpr std::uintptr_t m_OnCacheInteraction   = 0x0A60; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnGlovePulled        = 0x0A78; // CEntityIOOutput
            static constexpr std::uintptr_t m_vOriginalSpawnOrigin = 0x0A90; // VectorWS
            static constexpr std::uintptr_t m_vOriginalSpawnAngles = 0x0A9C; // QAngle
            static constexpr std::uintptr_t m_bPhysStartAsleep     = 0x0AA8; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysMagnet : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_OnMagnetAttach      = 0x0A20; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnMagnetDetach      = 0x0A38; // CEntityIOOutput
            static constexpr std::uintptr_t m_massScale           = 0x0A50; // float32
            static constexpr std::uintptr_t m_forceLimit          = 0x0A54; // float32
            static constexpr std::uintptr_t m_torqueLimit         = 0x0A58; // float32
            static constexpr std::uintptr_t m_MagnettedEntities   = 0x0A60; // CUtlVector<magnetted_objects_t>
            static constexpr std::uintptr_t m_bActive             = 0x0A78; // bool
            static constexpr std::uintptr_t m_bHasHitSomething    = 0x0A79; // bool
            static constexpr std::uintptr_t m_flTotalMass         = 0x0A7C; // float32
            static constexpr std::uintptr_t m_flRadius            = 0x0A80; // float32
            static constexpr std::uintptr_t m_flNextSuckTime      = 0x0A84; // GameTime_t
            static constexpr std::uintptr_t m_iMaxObjectsAttached = 0x0A88; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBaseCombatCharacter : public CBaseFlex {
        public:
            static constexpr std::uintptr_t m_bForceServerRagdoll    = 0x0AB0; // bool
            static constexpr std::uintptr_t m_hMyWearables           = 0x0AB8; // CNetworkUtlVectorBase<CHandle<CEconWearable>>
            static constexpr std::uintptr_t m_impactEnergyScale      = 0x0AD0; // float32
            static constexpr std::uintptr_t m_bApplyStressDamage     = 0x0AD4; // bool
            static constexpr std::uintptr_t m_bDeathEventsDispatched = 0x0AD5; // bool
            static constexpr std::uintptr_t m_pVecRelationships      = 0x0B18; // CUtlVector<RelationshipOverride_t>*
            static constexpr std::uintptr_t m_strRelationships       = 0x0B20; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_eHull                  = 0x0B28; // Hull_t
            static constexpr std::uintptr_t m_nNavHullIdx            = 0x0B2C; // uint32
            static constexpr std::uintptr_t m_movementStats          = 0x0B30; // CMovementStatsProperty
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
        class CEconEntity : public CBaseFlex {
        public:
            static constexpr std::uintptr_t m_AttributeManager      = 0x0AC0; // CAttributeContainer
            static constexpr std::uintptr_t m_OriginalOwnerXuidLow  = 0x0DB8; // uint32
            static constexpr std::uintptr_t m_OriginalOwnerXuidHigh = 0x0DBC; // uint32
            static constexpr std::uintptr_t m_nFallbackPaintKit     = 0x0DC0; // int32
            static constexpr std::uintptr_t m_nFallbackSeed         = 0x0DC4; // int32
            static constexpr std::uintptr_t m_flFallbackWear        = 0x0DC8; // float32
            static constexpr std::uintptr_t m_nFallbackStatTrak     = 0x0DCC; // int32
            static constexpr std::uintptr_t m_hOldProvidee          = 0x0DD0; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_iOldOwnerClass        = 0x0DD4; // int32
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
        class CItemKevlar : public CItem {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CItemDefuser : public CItem {
        public:
            static constexpr std::uintptr_t m_entitySpottedState = 0x0AC0; // EntitySpottedState_t
            static constexpr std::uintptr_t m_nSpotRules         = 0x0AD8; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvParticleGlow : public CParticleSystem {
        public:
            static constexpr std::uintptr_t m_flAlphaScale     = 0x0CA8; // float32
            static constexpr std::uintptr_t m_flRadiusScale    = 0x0CAC; // float32
            static constexpr std::uintptr_t m_flSelfIllumScale = 0x0CB0; // float32
            static constexpr std::uintptr_t m_ColorTint        = 0x0CB4; // Color
            static constexpr std::uintptr_t m_hTextureOverride = 0x0CB8; // CStrongHandle<InfoForResourceTypeCTextureBase>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBaseFlexAlias_funCBaseFlex : public CBaseFlex {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CScriptItem : public CItem {
        public:
            static constexpr std::uintptr_t m_MoveTypeOverride = 0x0AC0; // MoveType_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPropDoorRotating : public CBasePropDoor {
        public:
            static constexpr std::uintptr_t m_vecAxis                     = 0x0E50; // Vector
            static constexpr std::uintptr_t m_flDistance                  = 0x0E5C; // float32
            static constexpr std::uintptr_t m_eSpawnPosition              = 0x0E60; // PropDoorRotatingSpawnPos_t
            static constexpr std::uintptr_t m_eOpenDirection              = 0x0E64; // PropDoorRotatingOpenDirection_e
            static constexpr std::uintptr_t m_eCurrentOpenDirection       = 0x0E68; // PropDoorRotatingOpenDirection_e
            static constexpr std::uintptr_t m_eDefaultCheckDirection      = 0x0E6C; // doorCheck_e
            static constexpr std::uintptr_t m_flAjarAngle                 = 0x0E70; // float32
            static constexpr std::uintptr_t m_angRotationAjarDeprecated   = 0x0E74; // QAngle
            static constexpr std::uintptr_t m_angRotationClosed           = 0x0E80; // QAngle
            static constexpr std::uintptr_t m_angRotationOpenForward      = 0x0E8C; // QAngle
            static constexpr std::uintptr_t m_angRotationOpenBack         = 0x0E98; // QAngle
            static constexpr std::uintptr_t m_angGoal                     = 0x0EA4; // QAngle
            static constexpr std::uintptr_t m_vecForwardBoundsMin         = 0x0EB0; // Vector
            static constexpr std::uintptr_t m_vecForwardBoundsMax         = 0x0EBC; // Vector
            static constexpr std::uintptr_t m_vecBackBoundsMin            = 0x0EC8; // Vector
            static constexpr std::uintptr_t m_vecBackBoundsMax            = 0x0ED4; // Vector
            static constexpr std::uintptr_t m_bAjarDoorShouldntAlwaysOpen = 0x0EE0; // bool
            static constexpr std::uintptr_t m_hEntityBlocker              = 0x0EE4; // CHandle<CEntityBlocker>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPropDoorRotatingBreakable : public CPropDoorRotating {
        public:
            static constexpr std::uintptr_t m_bBreakable               = 0x0EF0; // bool
            static constexpr std::uintptr_t m_isAbleToCloseAreaPortals = 0x0EF1; // bool
            static constexpr std::uintptr_t m_currentDamageState       = 0x0EF4; // int32
            static constexpr std::uintptr_t m_damageStates             = 0x0EF8; // CUtlVector<CUtlSymbolLarge>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CScriptTriggerHurt : public CTriggerHurt {
        public:
            static constexpr std::uintptr_t m_vExtent = 0x0910; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CHostageExpresserShim : public CBaseCombatCharacter {
        public:
            static constexpr std::uintptr_t m_pExpresser = 0x0B70; // CAI_Expresser*
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
        class CRagdollProp : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_ragdoll                       = 0x0A30; // ragdoll_t
            static constexpr std::uintptr_t m_bStartDisabled                = 0x0A80; // bool
            static constexpr std::uintptr_t m_ragEnabled                    = 0x0A88; // CNetworkUtlVectorBase<bool>
            static constexpr std::uintptr_t m_ragPos                        = 0x0AA0; // CNetworkUtlVectorBase<Vector>
            static constexpr std::uintptr_t m_ragAngles                     = 0x0AB8; // CNetworkUtlVectorBase<QAngle>
            static constexpr std::uintptr_t m_lastUpdateTickCount           = 0x0AD0; // uint32
            static constexpr std::uintptr_t m_allAsleep                     = 0x0AD4; // bool
            static constexpr std::uintptr_t m_bFirstCollisionAfterLaunch    = 0x0AD5; // bool
            static constexpr std::uintptr_t m_hDamageEntity                 = 0x0AD8; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hKiller                       = 0x0ADC; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_hPhysicsAttacker              = 0x0AE0; // CHandle<CBasePlayerPawn>
            static constexpr std::uintptr_t m_flLastPhysicsInfluenceTime    = 0x0AE4; // GameTime_t
            static constexpr std::uintptr_t m_flFadeOutStartTime            = 0x0AE8; // GameTime_t
            static constexpr std::uintptr_t m_flFadeTime                    = 0x0AEC; // float32
            static constexpr std::uintptr_t m_vecLastOrigin                 = 0x0AF0; // VectorWS
            static constexpr std::uintptr_t m_flAwakeTime                   = 0x0AFC; // GameTime_t
            static constexpr std::uintptr_t m_flLastOriginChangeTime        = 0x0B00; // GameTime_t
            static constexpr std::uintptr_t m_strOriginClassName            = 0x0B08; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_strSourceClassName            = 0x0B10; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bHasBeenPhysgunned            = 0x0B18; // bool
            static constexpr std::uintptr_t m_bAllowStretch                 = 0x0B19; // bool
            static constexpr std::uintptr_t m_flBlendWeight                 = 0x0B1C; // float32
            static constexpr std::uintptr_t m_flDefaultFadeScale            = 0x0B20; // float32
            static constexpr std::uintptr_t m_ragdollMins                   = 0x0B28; // CUtlVector<Vector>
            static constexpr std::uintptr_t m_ragdollMaxs                   = 0x0B40; // CUtlVector<Vector>
            static constexpr std::uintptr_t m_bShouldDeleteActivationRecord = 0x0B58; // bool
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
        // Local Type Scope
        class CFilterProximity : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_flRadius = 0x04E0; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFilterTeam : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_iFilterTeam = 0x04E0; // int32
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
        class CBasePlayerPawn : public CBaseCombatCharacter {
        public:
            static constexpr std::uintptr_t m_pWeaponServices        = 0x0B70; // CPlayer_WeaponServices*
            static constexpr std::uintptr_t m_pItemServices          = 0x0B78; // CPlayer_ItemServices*
            static constexpr std::uintptr_t m_pAutoaimServices       = 0x0B80; // CPlayer_AutoaimServices*
            static constexpr std::uintptr_t m_pObserverServices      = 0x0B88; // CPlayer_ObserverServices*
            static constexpr std::uintptr_t m_pWaterServices         = 0x0B90; // CPlayer_WaterServices*
            static constexpr std::uintptr_t m_pUseServices           = 0x0B98; // CPlayer_UseServices*
            static constexpr std::uintptr_t m_pFlashlightServices    = 0x0BA0; // CPlayer_FlashlightServices*
            static constexpr std::uintptr_t m_pCameraServices        = 0x0BA8; // CPlayer_CameraServices*
            static constexpr std::uintptr_t m_pMovementServices      = 0x0BB0; // CPlayer_MovementServices*
            static constexpr std::uintptr_t m_ServerViewAngleChanges = 0x0BC0; // CUtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
            static constexpr std::uintptr_t v_angle                  = 0x0C28; // QAngle
            static constexpr std::uintptr_t v_anglePrevious          = 0x0C34; // QAngle
            static constexpr std::uintptr_t m_iHideHUD               = 0x0C40; // uint32
            static constexpr std::uintptr_t m_skybox3d               = 0x0C48; // sky3dparams_t
            static constexpr std::uintptr_t m_fTimeLastHurt          = 0x0CD8; // GameTime_t
            static constexpr std::uintptr_t m_flDeathTime            = 0x0CDC; // GameTime_t
            static constexpr std::uintptr_t m_fNextSuicideTime       = 0x0CE0; // GameTime_t
            static constexpr std::uintptr_t m_fInitHUD               = 0x0CE4; // bool
            static constexpr std::uintptr_t m_pExpresser             = 0x0CE8; // CAI_Expresser*
            static constexpr std::uintptr_t m_hController            = 0x0CF0; // CHandle<CBasePlayerController>
            static constexpr std::uintptr_t m_hDefaultController     = 0x0CF4; // CHandle<CBasePlayerController>
            static constexpr std::uintptr_t m_fHltvReplayDelay       = 0x0CFC; // float32
            static constexpr std::uintptr_t m_fHltvReplayEnd         = 0x0D00; // float32
            static constexpr std::uintptr_t m_iHltvReplayEntity      = 0x0D04; // CEntityIndex
            static constexpr std::uintptr_t m_sndOpvarLatchData      = 0x0D08; // CUtlVector<sndopvarlatchdata_t>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class FilterDamageType : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_iDamageType = 0x04E0; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInstancedSceneEntity : public CSceneEntity {
        public:
            static constexpr std::uintptr_t m_hOwner              = 0x0730; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_bHadOwner           = 0x0734; // bool
            static constexpr std::uintptr_t m_flPostSpeakDelay    = 0x0738; // float32
            static constexpr std::uintptr_t m_flPreDelay          = 0x073C; // float32
            static constexpr std::uintptr_t m_bIsBackground       = 0x0740; // bool
            static constexpr std::uintptr_t m_bRemoveOnCompletion = 0x0741; // bool
            static constexpr std::uintptr_t m_hTarget             = 0x0744; // CHandle<CBaseEntity>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBasePlayerWeapon : public CEconEntity {
        public:
            static constexpr std::uintptr_t m_nNextPrimaryAttackTick         = 0x0DE0; // GameTick_t
            static constexpr std::uintptr_t m_flNextPrimaryAttackTickRatio   = 0x0DE4; // float32
            static constexpr std::uintptr_t m_nNextSecondaryAttackTick       = 0x0DE8; // GameTick_t
            static constexpr std::uintptr_t m_flNextSecondaryAttackTickRatio = 0x0DEC; // float32
            static constexpr std::uintptr_t m_iClip1                         = 0x0DF0; // int32
            static constexpr std::uintptr_t m_iClip2                         = 0x0DF4; // int32
            static constexpr std::uintptr_t m_pReserveAmmo                   = 0x0DF8; // int32[2]
            static constexpr std::uintptr_t m_OnPlayerUse                    = 0x0E00; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBaseGrenade : public CBaseFlex {
        public:
            static constexpr std::uintptr_t m_OnPlayerPickup   = 0x0AB8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnExplode        = 0x0AD0; // CEntityIOOutput
            static constexpr std::uintptr_t m_bHasWarnedAI     = 0x0AE8; // bool
            static constexpr std::uintptr_t m_bIsSmokeGrenade  = 0x0AE9; // bool
            static constexpr std::uintptr_t m_bIsLive          = 0x0AEA; // bool
            static constexpr std::uintptr_t m_DmgRadius        = 0x0AEC; // float32
            static constexpr std::uintptr_t m_flDetonateTime   = 0x0AF0; // GameTime_t
            static constexpr std::uintptr_t m_flWarnAITime     = 0x0AF4; // float32
            static constexpr std::uintptr_t m_flDamage         = 0x0AF8; // float32
            static constexpr std::uintptr_t m_iszBounceSound   = 0x0B00; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_ExplosionSound   = 0x0B08; // CUtlString
            static constexpr std::uintptr_t m_hThrower         = 0x0B14; // CHandle<CCSPlayerPawn>
            static constexpr std::uintptr_t m_flNextAttack     = 0x0B2C; // GameTime_t
            static constexpr std::uintptr_t m_hOriginalThrower = 0x0B30; // CHandle<CCSPlayerPawn>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysicsProp : public CBreakableProp {
        public:
            static constexpr std::uintptr_t m_MotionEnabled                       = 0x0BB0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnAwakened                          = 0x0BC8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnAwake                             = 0x0BE0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnAsleep                            = 0x0BF8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnPlayerUse                         = 0x0C10; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnOutOfWorld                        = 0x0C28; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnPlayerPickup                      = 0x0C40; // CEntityIOOutput
            static constexpr std::uintptr_t m_bForceNavIgnore                     = 0x0C58; // bool
            static constexpr std::uintptr_t m_bNoNavmeshBlocker                   = 0x0C59; // bool
            static constexpr std::uintptr_t m_bForceNpcExclude                    = 0x0C5A; // bool
            static constexpr std::uintptr_t m_massScale                           = 0x0C5C; // float32
            static constexpr std::uintptr_t m_buoyancyScale                       = 0x0C60; // float32
            static constexpr std::uintptr_t m_damageType                          = 0x0C64; // int32
            static constexpr std::uintptr_t m_damageToEnableMotion                = 0x0C68; // int32
            static constexpr std::uintptr_t m_flForceToEnableMotion               = 0x0C6C; // float32
            static constexpr std::uintptr_t m_bThrownByPlayer                     = 0x0C70; // bool
            static constexpr std::uintptr_t m_bDroppedByPlayer                    = 0x0C71; // bool
            static constexpr std::uintptr_t m_bTouchedByPlayer                    = 0x0C72; // bool
            static constexpr std::uintptr_t m_bFirstCollisionAfterLaunch          = 0x0C73; // bool
            static constexpr std::uintptr_t m_bHasBeenAwakened                    = 0x0C74; // bool
            static constexpr std::uintptr_t m_bIsOverrideProp                     = 0x0C75; // bool
            static constexpr std::uintptr_t m_flLastBurn                          = 0x0C78; // GameTime_t
            static constexpr std::uintptr_t m_nDynamicContinuousContactBehavior   = 0x0C7C; // DynamicContinuousContactBehavior_t
            static constexpr std::uintptr_t m_fNextCheckDisableMotionContactsTime = 0x0C80; // GameTime_t
            static constexpr std::uintptr_t m_iInitialGlowState                   = 0x0C84; // int32
            static constexpr std::uintptr_t m_nGlowRange                          = 0x0C88; // int32
            static constexpr std::uintptr_t m_nGlowRangeMin                       = 0x0C8C; // int32
            static constexpr std::uintptr_t m_glowColor                           = 0x0C90; // Color
            static constexpr std::uintptr_t m_bShouldAutoConvertBackFromDebris    = 0x0C94; // bool
            static constexpr std::uintptr_t m_bMuteImpactEffects                  = 0x0C95; // bool
            static constexpr std::uintptr_t m_bUpdateNavWhenMoving                = 0x0C9C; // bool
            static constexpr std::uintptr_t m_bForceNavObstacleCut                = 0x0C9D; // bool
            static constexpr std::uintptr_t m_bAllowObstacleConvexHullMerging     = 0x0C9E; // bool
            static constexpr std::uintptr_t m_bAcceptDamageFromHeldObjects        = 0x0C9F; // bool
            static constexpr std::uintptr_t m_bEnableUseOutput                    = 0x0CA0; // bool
            static constexpr std::uintptr_t m_CrateType                           = 0x0CA4; // CPhysicsProp::CrateType_t
            static constexpr std::uintptr_t m_strItemClass                        = 0x0CA8; // CUtlSymbolLarge[4]
            static constexpr std::uintptr_t m_nItemCount                          = 0x0CC8; // int32[4]
            static constexpr std::uintptr_t m_bRemovableForAmmoBalancing          = 0x0CD8; // bool
            static constexpr std::uintptr_t m_bAwake                              = 0x0CD9; // bool
            static constexpr std::uintptr_t m_bAttachedToReferenceFrame           = 0x0CDA; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CShatterGlassShardPhysics : public CPhysicsProp {
        public:
            static constexpr std::uintptr_t m_bDebris      = 0x0CE0; // bool
            static constexpr std::uintptr_t m_hParentShard = 0x0CE4; // uint32
            static constexpr std::uintptr_t m_ShardDesc    = 0x0CE8; // shard_model_desc_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CChicken : public CDynamicProp {
        public:
            static constexpr std::uintptr_t m_AttributeManager        = 0x0C70; // CAttributeContainer
            static constexpr std::uintptr_t m_updateTimer             = 0x0F68; // CountdownTimer
            static constexpr std::uintptr_t m_stuckAnchor             = 0x0F80; // Vector
            static constexpr std::uintptr_t m_stuckTimer              = 0x0F90; // CountdownTimer
            static constexpr std::uintptr_t m_collisionStuckTimer     = 0x0FA8; // CountdownTimer
            static constexpr std::uintptr_t m_isOnGround              = 0x0FC0; // bool
            static constexpr std::uintptr_t m_vFallVelocity           = 0x0FC4; // Vector
            static constexpr std::uintptr_t m_desiredActivity         = 0x0FD0; // ChickenActivity
            static constexpr std::uintptr_t m_currentActivity         = 0x0FD4; // ChickenActivity
            static constexpr std::uintptr_t m_activityTimer           = 0x0FD8; // CountdownTimer
            static constexpr std::uintptr_t m_turnRate                = 0x0FF0; // float32
            static constexpr std::uintptr_t m_fleeFrom                = 0x0FF4; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_moveRateThrottleTimer   = 0x0FF8; // CountdownTimer
            static constexpr std::uintptr_t m_startleTimer            = 0x1010; // CountdownTimer
            static constexpr std::uintptr_t m_vocalizeTimer           = 0x1028; // CountdownTimer
            static constexpr std::uintptr_t m_flWhenZombified         = 0x1040; // GameTime_t
            static constexpr std::uintptr_t m_jumpedThisFrame         = 0x1044; // bool
            static constexpr std::uintptr_t m_leader                  = 0x1048; // CHandle<CCSPlayerPawn>
            static constexpr std::uintptr_t m_reuseTimer              = 0x1060; // CountdownTimer
            static constexpr std::uintptr_t m_hasBeenUsed             = 0x1078; // bool
            static constexpr std::uintptr_t m_jumpTimer               = 0x1080; // CountdownTimer
            static constexpr std::uintptr_t m_flLastJumpTime          = 0x1098; // float32
            static constexpr std::uintptr_t m_bInJump                 = 0x109C; // bool
            static constexpr std::uintptr_t m_repathTimer             = 0x30A8; // CountdownTimer
            static constexpr std::uintptr_t m_vecPathGoal             = 0x3140; // Vector
            static constexpr std::uintptr_t m_flActiveFollowStartTime = 0x314C; // GameTime_t
            static constexpr std::uintptr_t m_followMinuteTimer       = 0x3150; // CountdownTimer
            static constexpr std::uintptr_t m_BlockDirectionTimer     = 0x3170; // CountdownTimer
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointClientUIWorldTextPanel : public CPointClientUIWorldPanel {
        public:
            static constexpr std::uintptr_t m_messageText = 0x08E8; // char[512]
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
        class CItemDogtags : public CItem {
        public:
            static constexpr std::uintptr_t m_OwningPlayer  = 0x0AC0; // CHandle<CCSPlayerPawn>
            static constexpr std::uintptr_t m_KillingPlayer = 0x0AC4; // CHandle<CCSPlayerPawn>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CItemGeneric : public CItem {
        public:
            static constexpr std::uintptr_t m_bHasTriggerRadius           = 0x0AD4; // bool
            static constexpr std::uintptr_t m_bHasPickupRadius            = 0x0AD5; // bool
            static constexpr std::uintptr_t m_flPickupRadiusSqr           = 0x0AD8; // float32
            static constexpr std::uintptr_t m_flTriggerRadiusSqr          = 0x0ADC; // float32
            static constexpr std::uintptr_t m_flLastPickupCheck           = 0x0AE0; // GameTime_t
            static constexpr std::uintptr_t m_bPlayerCounterListenerAdded = 0x0AE4; // bool
            static constexpr std::uintptr_t m_bPlayerInTriggerRadius      = 0x0AE5; // bool
            static constexpr std::uintptr_t m_hSpawnParticleEffect        = 0x0AE8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            static constexpr std::uintptr_t m_pAmbientSoundEffect         = 0x0AF0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bAutoStartAmbientSound      = 0x0AF8; // bool
            static constexpr std::uintptr_t m_pSpawnScriptFunction        = 0x0B00; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hPickupParticleEffect       = 0x0B08; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            static constexpr std::uintptr_t m_pPickupSoundEffect          = 0x0B10; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_pPickupScriptFunction       = 0x0B18; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hTimeoutParticleEffect      = 0x0B20; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            static constexpr std::uintptr_t m_pTimeoutSoundEffect         = 0x0B28; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_pTimeoutScriptFunction      = 0x0B30; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_pPickupFilterName           = 0x0B38; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hPickupFilter               = 0x0B40; // CHandle<CBaseFilter>
            static constexpr std::uintptr_t m_OnPickup                    = 0x0B48; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnTimeout                   = 0x0B60; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnTriggerStartTouch         = 0x0B78; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnTriggerTouch              = 0x0B90; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnTriggerEndTouch           = 0x0BA8; // CEntityIOOutput
            static constexpr std::uintptr_t m_pAllowPickupScriptFunction  = 0x0BC0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flPickupRadius              = 0x0BC8; // float32
            static constexpr std::uintptr_t m_flTriggerRadius             = 0x0BCC; // float32
            static constexpr std::uintptr_t m_pTriggerSoundEffect         = 0x0BD0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bGlowWhenInTrigger          = 0x0BD8; // bool
            static constexpr std::uintptr_t m_glowColor                   = 0x0BD9; // Color
            static constexpr std::uintptr_t m_bUseable                    = 0x0BDD; // bool
            static constexpr std::uintptr_t m_hTriggerHelper              = 0x0BE0; // CHandle<CItemGenericTriggerHelper>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEconWearable : public CEconEntity {
        public:
            static constexpr std::uintptr_t m_nForceSkin   = 0x0DE0; // int32
            static constexpr std::uintptr_t m_bAlwaysAllow = 0x0DE4; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSPlayerPawnBase : public CBasePlayerPawn {
        public:
            static constexpr std::uintptr_t m_CTouchExpansionComponent  = 0x0D30; // CTouchExpansionComponent
            static constexpr std::uintptr_t m_pPingServices             = 0x0D80; // CCSPlayer_PingServices*
            static constexpr std::uintptr_t m_blindUntilTime            = 0x0D88; // GameTime_t
            static constexpr std::uintptr_t m_blindStartTime            = 0x0D8C; // GameTime_t
            static constexpr std::uintptr_t m_iPlayerState              = 0x0D90; // CSPlayerState
            static constexpr std::uintptr_t m_bRespawning               = 0x0E40; // bool
            static constexpr std::uintptr_t m_bHasMovedSinceSpawn       = 0x0E41; // bool
            static constexpr std::uintptr_t m_iNumSpawns                = 0x0E44; // int32
            static constexpr std::uintptr_t m_flIdleTimeSinceLastAction = 0x0E4C; // float32
            static constexpr std::uintptr_t m_fNextRadarUpdateTime      = 0x0E50; // float32
            static constexpr std::uintptr_t m_flFlashDuration           = 0x0E54; // float32
            static constexpr std::uintptr_t m_flFlashMaxAlpha           = 0x0E58; // float32
            static constexpr std::uintptr_t m_flProgressBarStartTime    = 0x0E5C; // float32
            static constexpr std::uintptr_t m_iProgressBarDuration      = 0x0E60; // int32
            static constexpr std::uintptr_t m_hOriginalController       = 0x0E64; // CHandle<CCSPlayerController>
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
        class CHostage : public CHostageExpresserShim {
        public:
            static constexpr std::uintptr_t m_OnHostageBeginGrab                     = 0x0B98; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnFirstPickedUp                        = 0x0BB0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnDroppedNotRescued                    = 0x0BC8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnRescued                              = 0x0BE0; // CEntityIOOutput
            static constexpr std::uintptr_t m_entitySpottedState                     = 0x0BF8; // EntitySpottedState_t
            static constexpr std::uintptr_t m_nSpotRules                             = 0x0C10; // int32
            static constexpr std::uintptr_t m_uiHostageSpawnExclusionGroupMask       = 0x0C14; // uint32
            static constexpr std::uintptr_t m_nHostageSpawnRandomFactor              = 0x0C18; // uint32
            static constexpr std::uintptr_t m_bRemove                                = 0x0C1C; // bool
            static constexpr std::uintptr_t m_vel                                    = 0x0C20; // Vector
            static constexpr std::uintptr_t m_isRescued                              = 0x0C2C; // bool
            static constexpr std::uintptr_t m_jumpedThisFrame                        = 0x0C2D; // bool
            static constexpr std::uintptr_t m_nHostageState                          = 0x0C30; // int32
            static constexpr std::uintptr_t m_leader                                 = 0x0C34; // CHandle<CBaseEntity>
            static constexpr std::uintptr_t m_lastLeader                             = 0x0C38; // CHandle<CCSPlayerPawnBase>
            static constexpr std::uintptr_t m_reuseTimer                             = 0x0C40; // CountdownTimer
            static constexpr std::uintptr_t m_hasBeenUsed                            = 0x0C58; // bool
            static constexpr std::uintptr_t m_accel                                  = 0x0C5C; // Vector
            static constexpr std::uintptr_t m_isRunning                              = 0x0C68; // bool
            static constexpr std::uintptr_t m_isCrouching                            = 0x0C69; // bool
            static constexpr std::uintptr_t m_jumpTimer                              = 0x0C70; // CountdownTimer
            static constexpr std::uintptr_t m_isWaitingForLeader                     = 0x0C88; // bool
            static constexpr std::uintptr_t m_repathTimer                            = 0x2C98; // CountdownTimer
            static constexpr std::uintptr_t m_inhibitDoorTimer                       = 0x2CB0; // CountdownTimer
            static constexpr std::uintptr_t m_inhibitObstacleAvoidanceTimer          = 0x2D40; // CountdownTimer
            static constexpr std::uintptr_t m_wiggleTimer                            = 0x2D60; // CountdownTimer
            static constexpr std::uintptr_t m_isAdjusted                             = 0x2D7C; // bool
            static constexpr std::uintptr_t m_bHandsHaveBeenCut                      = 0x2D7D; // bool
            static constexpr std::uintptr_t m_hHostageGrabber                        = 0x2D80; // CHandle<CCSPlayerPawn>
            static constexpr std::uintptr_t m_fLastGrabTime                          = 0x2D84; // GameTime_t
            static constexpr std::uintptr_t m_vecPositionWhenStartedDroppingToGround = 0x2D88; // Vector
            static constexpr std::uintptr_t m_vecGrabbedPos                          = 0x2D94; // Vector
            static constexpr std::uintptr_t m_flRescueStartTime                      = 0x2DA0; // GameTime_t
            static constexpr std::uintptr_t m_flGrabSuccessTime                      = 0x2DA4; // GameTime_t
            static constexpr std::uintptr_t m_flDropStartTime                        = 0x2DA8; // GameTime_t
            static constexpr std::uintptr_t m_nApproachRewardPayouts                 = 0x2DAC; // int32
            static constexpr std::uintptr_t m_nPickupEventCount                      = 0x2DB0; // int32
            static constexpr std::uintptr_t m_vecSpawnGroundPos                      = 0x2DB4; // Vector
            static constexpr std::uintptr_t m_vecHostageResetPosition                = 0x2DEC; // VectorWS
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
        class CRagdollPropAttached : public CRagdollProp {
        public:
            static constexpr std::uintptr_t m_boneIndexAttached                     = 0x0B70; // uint32
            static constexpr std::uintptr_t m_ragdollAttachedObjectIndex            = 0x0B74; // uint32
            static constexpr std::uintptr_t m_attachmentPointBoneSpace              = 0x0B78; // Vector
            static constexpr std::uintptr_t m_attachmentPointRagdollSpace           = 0x0B84; // Vector
            static constexpr std::uintptr_t m_bShouldDetach                         = 0x0B90; // bool
            static constexpr std::uintptr_t m_bShouldDeleteAttachedActivationRecord = 0x0BA0; // bool
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
        class CPhysicsPropRespawnable : public CPhysicsProp {
        public:
            static constexpr std::uintptr_t m_vOriginalSpawnOrigin = 0x0CE0; // VectorWS
            static constexpr std::uintptr_t m_vOriginalSpawnAngles = 0x0CEC; // QAngle
            static constexpr std::uintptr_t m_vOriginalMins        = 0x0CF8; // Vector
            static constexpr std::uintptr_t m_vOriginalMaxs        = 0x0D04; // Vector
            static constexpr std::uintptr_t m_flRespawnDuration    = 0x0D10; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPhysicsPropMultiplayer : public CPhysicsProp {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CCSWeaponBase : public CBasePlayerWeapon {
        public:
            static constexpr std::uintptr_t m_bRemoveable                        = 0x0E20; // bool
            static constexpr std::uintptr_t m_bPlayerAmmoStockOnPickup           = 0x0E21; // bool
            static constexpr std::uintptr_t m_bRequireUseToTouch                 = 0x0E22; // bool
            static constexpr std::uintptr_t m_iWeaponGameplayAnimState           = 0x0E24; // WeaponGameplayAnimState
            static constexpr std::uintptr_t m_flWeaponGameplayAnimStateTimestamp = 0x0E28; // GameTime_t
            static constexpr std::uintptr_t m_flInspectCancelCompleteTime        = 0x0E2C; // GameTime_t
            static constexpr std::uintptr_t m_bInspectPending                    = 0x0E30; // bool
            static constexpr std::uintptr_t m_bInspectShouldLoop                 = 0x0E31; // bool
            static constexpr std::uintptr_t m_nLastEmptySoundCmdNum              = 0x0E5C; // int32
            static constexpr std::uintptr_t m_bFireOnEmpty                       = 0x0E78; // bool
            static constexpr std::uintptr_t m_OnPlayerPickup                     = 0x0E80; // CEntityIOOutput
            static constexpr std::uintptr_t m_weaponMode                         = 0x0E98; // CSWeaponMode
            static constexpr std::uintptr_t m_flTurningInaccuracyDelta           = 0x0E9C; // float32
            static constexpr std::uintptr_t m_vecTurningInaccuracyEyeDirLast     = 0x0EA0; // Vector
            static constexpr std::uintptr_t m_flTurningInaccuracy                = 0x0EAC; // float32
            static constexpr std::uintptr_t m_fAccuracyPenalty                   = 0x0EB0; // float32
            static constexpr std::uintptr_t m_flLastAccuracyUpdateTime           = 0x0EB4; // GameTime_t
            static constexpr std::uintptr_t m_fAccuracySmoothedForZoom           = 0x0EB8; // float32
            static constexpr std::uintptr_t m_iRecoilIndex                       = 0x0EBC; // int32
            static constexpr std::uintptr_t m_flRecoilIndex                      = 0x0EC0; // float32
            static constexpr std::uintptr_t m_bBurstMode                         = 0x0EC4; // bool
            static constexpr std::uintptr_t m_nPostponeFireReadyTicks            = 0x0EC8; // GameTick_t
            static constexpr std::uintptr_t m_flPostponeFireReadyFrac            = 0x0ECC; // float32
            static constexpr std::uintptr_t m_bInReload                          = 0x0ED0; // bool
            static constexpr std::uintptr_t m_flDroppedAtTime                    = 0x0ED4; // GameTime_t
            static constexpr std::uintptr_t m_bIsHauledBack                      = 0x0ED8; // bool
            static constexpr std::uintptr_t m_bSilencerOn                        = 0x0ED9; // bool
            static constexpr std::uintptr_t m_flTimeSilencerSwitchComplete       = 0x0EDC; // GameTime_t
            static constexpr std::uintptr_t m_flWeaponActionPlaybackRate         = 0x0EE0; // float32
            static constexpr std::uintptr_t m_iOriginalTeamNumber                = 0x0EE4; // int32
            static constexpr std::uintptr_t m_iMostRecentTeamNumber              = 0x0EE8; // int32
            static constexpr std::uintptr_t m_bDroppedNearBuyZone                = 0x0EEC; // bool
            static constexpr std::uintptr_t m_flNextAttackRenderTimeOffset       = 0x0EF0; // float32
            static constexpr std::uintptr_t m_bCanBePickedUp                     = 0x0F08; // bool
            static constexpr std::uintptr_t m_bUseCanOverrideNextOwnerTouchTime  = 0x0F09; // bool
            static constexpr std::uintptr_t m_nextOwnerTouchTime                 = 0x0F0C; // GameTime_t
            static constexpr std::uintptr_t m_nextPrevOwnerTouchTime             = 0x0F10; // GameTime_t
            static constexpr std::uintptr_t m_nextPrevOwnerUseTime               = 0x0F18; // GameTime_t
            static constexpr std::uintptr_t m_hPrevOwner                         = 0x0F1C; // CHandle<CCSPlayerPawn>
            static constexpr std::uintptr_t m_nDropTick                          = 0x0F20; // GameTick_t
            static constexpr std::uintptr_t m_bWasActiveWeaponWhenDropped        = 0x0F24; // bool
            static constexpr std::uintptr_t m_donated                            = 0x0F44; // bool
            static constexpr std::uintptr_t m_fLastShotTime                      = 0x0F48; // GameTime_t
            static constexpr std::uintptr_t m_bWasOwnedByCT                      = 0x0F4C; // bool
            static constexpr std::uintptr_t m_bWasOwnedByTerrorist               = 0x0F4D; // bool
            static constexpr std::uintptr_t m_numRemoveUnownedWeaponThink        = 0x0F50; // int32
            static constexpr std::uintptr_t m_IronSightController                = 0x0F58; // CIronSightController
            static constexpr std::uintptr_t m_iIronSightMode                     = 0x0F70; // int32
            static constexpr std::uintptr_t m_flLastLOSTraceFailureTime          = 0x0F74; // GameTime_t
            static constexpr std::uintptr_t m_flWatTickOffset                    = 0x0F78; // float32
            static constexpr std::uintptr_t m_flLastShakeTime                    = 0x0F88; // GameTime_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBaseCSGrenadeProjectile : public CBaseGrenade {
        public:
            static constexpr std::uintptr_t m_vInitialPosition         = 0x0B40; // Vector
            static constexpr std::uintptr_t m_vInitialVelocity         = 0x0B4C; // Vector
            static constexpr std::uintptr_t m_nBounces                 = 0x0B58; // int32
            static constexpr std::uintptr_t m_nExplodeEffectIndex      = 0x0B60; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            static constexpr std::uintptr_t m_nExplodeEffectTickBegin  = 0x0B68; // int32
            static constexpr std::uintptr_t m_vecExplodeEffectOrigin   = 0x0B6C; // Vector
            static constexpr std::uintptr_t m_flSpawnTime              = 0x0B78; // GameTime_t
            static constexpr std::uintptr_t m_unOGSExtraFlags          = 0x0B7C; // uint8
            static constexpr std::uintptr_t m_bDetonationRecorded      = 0x0B7D; // bool
            static constexpr std::uintptr_t m_nItemIndex               = 0x0B7E; // uint16
            static constexpr std::uintptr_t m_vecOriginalSpawnLocation = 0x0B80; // Vector
            static constexpr std::uintptr_t m_flLastBounceSoundTime    = 0x0B8C; // GameTime_t
            static constexpr std::uintptr_t m_vecGrenadeSpin           = 0x0B90; // RotationVector
            static constexpr std::uintptr_t m_vecLastHitSurfaceNormal  = 0x0B9C; // Vector
            static constexpr std::uintptr_t m_nTicksAtZeroVelocity     = 0x0BA8; // int32
            static constexpr std::uintptr_t m_bHasEverHitEnemy         = 0x0BAC; // bool
        };

        // Has VTable
        // Local Type Scope
        class CBaseCSGrenade : public CCSWeaponBase {
        public:
            static constexpr std::uintptr_t m_bRedraw                   = 0x1130; // bool
            static constexpr std::uintptr_t m_bIsHeldByPlayer           = 0x1131; // bool
            static constexpr std::uintptr_t m_bPinPulled                = 0x1132; // bool
            static constexpr std::uintptr_t m_bJumpThrow                = 0x1133; // bool
            static constexpr std::uintptr_t m_bThrowAnimating           = 0x1134; // bool
            static constexpr std::uintptr_t m_fThrowTime                = 0x1138; // GameTime_t
            static constexpr std::uintptr_t m_flThrowStrength           = 0x113C; // float32
            static constexpr std::uintptr_t m_fDropTime                 = 0x1140; // GameTime_t
            static constexpr std::uintptr_t m_fPinPullTime              = 0x1144; // GameTime_t
            static constexpr std::uintptr_t m_bJustPulledPin            = 0x1148; // bool
            static constexpr std::uintptr_t m_nNextHoldTick             = 0x114C; // GameTick_t
            static constexpr std::uintptr_t m_flNextHoldFrac            = 0x1150; // float32
            static constexpr std::uintptr_t m_hSwitchToWeaponAfterThrow = 0x1154; // CHandle<CCSWeaponBase>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSPlayerPawn : public CCSPlayerPawnBase {
        public:
            static constexpr std::uintptr_t m_pBulletServices                         = 0x0E78; // CCSPlayer_BulletServices*
            static constexpr std::uintptr_t m_pHostageServices                        = 0x0E80; // CCSPlayer_HostageServices*
            static constexpr std::uintptr_t m_pBuyServices                            = 0x0E88; // CCSPlayer_BuyServices*
            static constexpr std::uintptr_t m_pActionTrackingServices                 = 0x0E90; // CCSPlayer_ActionTrackingServices*
            static constexpr std::uintptr_t m_pRadioServices                          = 0x0E98; // CCSPlayer_RadioServices*
            static constexpr std::uintptr_t m_pDamageReactServices                    = 0x0EA0; // CCSPlayer_DamageReactServices*
            static constexpr std::uintptr_t m_nCharacterDefIndex                      = 0x0EA8; // uint16
            static constexpr std::uintptr_t m_bHasFemaleVoice                         = 0x0EAA; // bool
            static constexpr std::uintptr_t m_strVOPrefix                             = 0x0EB0; // CUtlString
            static constexpr std::uintptr_t m_szLastPlaceName                         = 0x0EB8; // char[18]
            static constexpr std::uintptr_t m_bInHostageResetZone                     = 0x0FA8; // bool
            static constexpr std::uintptr_t m_bInBuyZone                              = 0x0FA9; // bool
            static constexpr std::uintptr_t m_TouchingBuyZones                        = 0x0FB0; // CUtlVector<CHandle<CBaseEntity>>
            static constexpr std::uintptr_t m_bWasInBuyZone                           = 0x0FC8; // bool
            static constexpr std::uintptr_t m_bInHostageRescueZone                    = 0x0FC9; // bool
            static constexpr std::uintptr_t m_bInBombZone                             = 0x0FCA; // bool
            static constexpr std::uintptr_t m_bWasInHostageRescueZone                 = 0x0FCB; // bool
            static constexpr std::uintptr_t m_iRetakesOffering                        = 0x0FCC; // int32
            static constexpr std::uintptr_t m_iRetakesOfferingCard                    = 0x0FD0; // int32
            static constexpr std::uintptr_t m_bRetakesHasDefuseKit                    = 0x0FD4; // bool
            static constexpr std::uintptr_t m_bRetakesMVPLastRound                    = 0x0FD5; // bool
            static constexpr std::uintptr_t m_iRetakesMVPBoostItem                    = 0x0FD8; // int32
            static constexpr std::uintptr_t m_RetakesMVPBoostExtraUtility             = 0x0FDC; // loadout_slot_t
            static constexpr std::uintptr_t m_flHealthShotBoostExpirationTime         = 0x0FE0; // GameTime_t
            static constexpr std::uintptr_t m_flLandingTimeSeconds                    = 0x0FE4; // float32
            static constexpr std::uintptr_t m_aimPunchAngle                           = 0x0FE8; // QAngle
            static constexpr std::uintptr_t m_aimPunchAngleVel                        = 0x0FF4; // QAngle
            static constexpr std::uintptr_t m_aimPunchTickBase                        = 0x1000; // GameTick_t
            static constexpr std::uintptr_t m_aimPunchTickFraction                    = 0x1004; // float32
            static constexpr std::uintptr_t m_aimPunchCache                           = 0x1008; // CUtlVector<QAngle>
            static constexpr std::uintptr_t m_bIsBuyMenuOpen                          = 0x1020; // bool
            static constexpr std::uintptr_t m_lastLandTime                            = 0x16C0; // GameTime_t
            static constexpr std::uintptr_t m_bOnGroundLastTick                       = 0x16C4; // bool
            static constexpr std::uintptr_t m_iPlayerLocked                           = 0x16C8; // int32
            static constexpr std::uintptr_t m_flTimeOfLastInjury                      = 0x16D0; // GameTime_t
            static constexpr std::uintptr_t m_flNextSprayDecalTime                    = 0x16D4; // GameTime_t
            static constexpr std::uintptr_t m_bNextSprayDecalTimeExpedited            = 0x16D8; // bool
            static constexpr std::uintptr_t m_nRagdollDamageBone                      = 0x16DC; // int32
            static constexpr std::uintptr_t m_vRagdollDamageForce                     = 0x16E0; // Vector
            static constexpr std::uintptr_t m_vRagdollDamagePosition                  = 0x16EC; // Vector
            static constexpr std::uintptr_t m_szRagdollDamageWeaponName               = 0x16F8; // char[64]
            static constexpr std::uintptr_t m_bRagdollDamageHeadshot                  = 0x1738; // bool
            static constexpr std::uintptr_t m_vRagdollServerOrigin                    = 0x173C; // Vector
            static constexpr std::uintptr_t m_EconGloves                              = 0x1748; // CEconItemView
            static constexpr std::uintptr_t m_nEconGlovesChanged                      = 0x19F0; // uint8
            static constexpr std::uintptr_t m_qDeathEyeAngles                         = 0x19F4; // QAngle
            static constexpr std::uintptr_t m_bSkipOneHeadConstraintUpdate            = 0x1A00; // bool
            static constexpr std::uintptr_t m_bLeftHanded                             = 0x1A01; // bool
            static constexpr std::uintptr_t m_fSwitchedHandednessTime                 = 0x1A04; // GameTime_t
            static constexpr std::uintptr_t m_flViewmodelOffsetX                      = 0x1A08; // float32
            static constexpr std::uintptr_t m_flViewmodelOffsetY                      = 0x1A0C; // float32
            static constexpr std::uintptr_t m_flViewmodelOffsetZ                      = 0x1A10; // float32
            static constexpr std::uintptr_t m_flViewmodelFOV                          = 0x1A14; // float32
            static constexpr std::uintptr_t m_bIsWalking                              = 0x1A18; // bool
            static constexpr std::uintptr_t m_fLastGivenDefuserTime                   = 0x1A1C; // float32
            static constexpr std::uintptr_t m_fLastGivenBombTime                      = 0x1A20; // float32
            static constexpr std::uintptr_t m_flDealtDamageToEnemyMostRecentTimestamp = 0x1A24; // float32
            static constexpr std::uintptr_t m_iDisplayHistoryBits                     = 0x1A28; // uint32
            static constexpr std::uintptr_t m_flLastAttackedTeammate                  = 0x1A2C; // float32
            static constexpr std::uintptr_t m_allowAutoFollowTime                     = 0x1A30; // GameTime_t
            static constexpr std::uintptr_t m_bResetArmorNextSpawn                    = 0x1A34; // bool
            static constexpr std::uintptr_t m_nLastKillerIndex                        = 0x1A38; // CEntityIndex
            static constexpr std::uintptr_t m_entitySpottedState                      = 0x1A40; // EntitySpottedState_t
            static constexpr std::uintptr_t m_nSpotRules                              = 0x1A58; // int32
            static constexpr std::uintptr_t m_bIsScoped                               = 0x1A5C; // bool
            static constexpr std::uintptr_t m_bResumeZoom                             = 0x1A5D; // bool
            static constexpr std::uintptr_t m_bIsDefusing                             = 0x1A5E; // bool
            static constexpr std::uintptr_t m_bIsGrabbingHostage                      = 0x1A5F; // bool
            static constexpr std::uintptr_t m_iBlockingUseActionInProgress            = 0x1A60; // CSPlayerBlockingUseAction_t
            static constexpr std::uintptr_t m_flEmitSoundTime                         = 0x1A64; // GameTime_t
            static constexpr std::uintptr_t m_bInNoDefuseArea                         = 0x1A68; // bool
            static constexpr std::uintptr_t m_iBombSiteIndex                          = 0x1A6C; // CEntityIndex
            static constexpr std::uintptr_t m_nWhichBombZone                          = 0x1A70; // int32
            static constexpr std::uintptr_t m_bInBombZoneTrigger                      = 0x1A74; // bool
            static constexpr std::uintptr_t m_bWasInBombZoneTrigger                   = 0x1A75; // bool
            static constexpr std::uintptr_t m_iShotsFired                             = 0x1A78; // int32
            static constexpr std::uintptr_t m_flFlinchStack                           = 0x1A7C; // float32
            static constexpr std::uintptr_t m_flVelocityModifier                      = 0x1A80; // float32
            static constexpr std::uintptr_t m_flHitHeading                            = 0x1A84; // float32
            static constexpr std::uintptr_t m_nHitBodyPart                            = 0x1A88; // int32
            static constexpr std::uintptr_t m_vecTotalBulletForce                     = 0x1A8C; // Vector
            static constexpr std::uintptr_t m_bWaitForNoAttack                        = 0x1A98; // bool
            static constexpr std::uintptr_t m_ignoreLadderJumpTime                    = 0x1A9C; // float32
            static constexpr std::uintptr_t m_bKilledByHeadshot                       = 0x1AA0; // bool
            static constexpr std::uintptr_t m_LastHitBox                              = 0x1AA4; // int32
            static constexpr std::uintptr_t m_pBot                                    = 0x1AA8; // CCSBot*
            static constexpr std::uintptr_t m_bBotAllowActive                         = 0x1AB0; // bool
            static constexpr std::uintptr_t m_thirdPersonHeading                      = 0x1AB4; // QAngle
            static constexpr std::uintptr_t m_flSlopeDropOffset                       = 0x1AC0; // float32
            static constexpr std::uintptr_t m_flSlopeDropHeight                       = 0x1AC4; // float32
            static constexpr std::uintptr_t m_vHeadConstraintOffset                   = 0x1AC8; // Vector
            static constexpr std::uintptr_t m_nLastPickupPriority                     = 0x1AD4; // int32
            static constexpr std::uintptr_t m_flLastPickupPriorityTime                = 0x1AD8; // float32
            static constexpr std::uintptr_t m_ArmorValue                              = 0x1ADC; // int32
            static constexpr std::uintptr_t m_unCurrentEquipmentValue                 = 0x1AE0; // uint16
            static constexpr std::uintptr_t m_unRoundStartEquipmentValue              = 0x1AE2; // uint16
            static constexpr std::uintptr_t m_unFreezetimeEndEquipmentValue           = 0x1AE4; // uint16
            static constexpr std::uintptr_t m_iLastWeaponFireUsercmd                  = 0x1AE8; // int32
            static constexpr std::uintptr_t m_bIsSpawning                             = 0x1AEC; // bool
            static constexpr std::uintptr_t m_iDeathFlags                             = 0x1AF8; // int32
            static constexpr std::uintptr_t m_bHasDeathInfo                           = 0x1AFC; // bool
            static constexpr std::uintptr_t m_flDeathInfoTime                         = 0x1B00; // float32
            static constexpr std::uintptr_t m_vecDeathInfoOrigin                      = 0x1B04; // Vector
            static constexpr std::uintptr_t m_vecPlayerPatchEconIndices               = 0x1B10; // uint32[5]
            static constexpr std::uintptr_t m_GunGameImmunityColor                    = 0x1B24; // Color
            static constexpr std::uintptr_t m_grenadeParameterStashTime               = 0x1B28; // GameTime_t
            static constexpr std::uintptr_t m_bGrenadeParametersStashed               = 0x1B2C; // bool
            static constexpr std::uintptr_t m_angStashedShootAngles                   = 0x1B30; // QAngle
            static constexpr std::uintptr_t m_vecStashedGrenadeThrowPosition          = 0x1B3C; // Vector
            static constexpr std::uintptr_t m_vecStashedVelocity                      = 0x1B48; // Vector
            static constexpr std::uintptr_t m_angShootAngleHistory                    = 0x1B54; // QAngle[2]
            static constexpr std::uintptr_t m_vecThrowPositionHistory                 = 0x1B6C; // Vector[2]
            static constexpr std::uintptr_t m_vecVelocityHistory                      = 0x1B84; // Vector[2]
            static constexpr std::uintptr_t m_PredictedDamageTags                     = 0x1BA0; // CUtlVectorEmbeddedNetworkVar<PredictedDamageTag_t>
            static constexpr std::uintptr_t m_nHighestAppliedDamageTagTick            = 0x1C08; // int32
            static constexpr std::uintptr_t m_bCommittingSuicideOnTeamChange          = 0x1C0C; // bool
            static constexpr std::uintptr_t m_wasNotKilledNaturally                   = 0x1C0D; // bool
            static constexpr std::uintptr_t m_fImmuneToGunGameDamageTime              = 0x1C10; // GameTime_t
            static constexpr std::uintptr_t m_bGunGameImmunity                        = 0x1C14; // bool
            static constexpr std::uintptr_t m_fMolotovDamageTime                      = 0x1C18; // float32
            static constexpr std::uintptr_t m_angEyeAngles                            = 0x1C1C; // QAngle
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CDecoyProjectile : public CBaseCSGrenadeProjectile {
        public:
            static constexpr std::uintptr_t m_nDecoyShotTick      = 0x0BC8; // int32
            static constexpr std::uintptr_t m_shotsRemaining      = 0x0BCC; // int32
            static constexpr std::uintptr_t m_fExpireTime         = 0x0BD0; // GameTime_t
            static constexpr std::uintptr_t m_decoyWeaponDefIndex = 0x0BE0; // uint16
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFlashbangProjectile : public CBaseCSGrenadeProjectile {
        public:
            static constexpr std::uintptr_t m_flTimeToDetonate = 0x0BB0; // float32
            static constexpr std::uintptr_t m_numOpponentsHit  = 0x0BB4; // uint8
            static constexpr std::uintptr_t m_numTeammatesHit  = 0x0BB5; // uint8
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
        class CHostageAlias_info_hostage_spawn : public CHostage {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CWeaponBaseItem : public CCSWeaponBase {
        public:
            static constexpr std::uintptr_t m_bSequenceInProgress = 0x1130; // bool
            static constexpr std::uintptr_t m_bRedraw             = 0x1131; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CMolotovGrenade : public CBaseCSGrenade {
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
        class CCSWeaponBaseGun : public CCSWeaponBase {
        public:
            static constexpr std::uintptr_t m_zoomLevel                    = 0x1130; // int32
            static constexpr std::uintptr_t m_iBurstShotsRemaining         = 0x1134; // int32
            static constexpr std::uintptr_t m_silencedModelIndex           = 0x1140; // int32
            static constexpr std::uintptr_t m_inPrecache                   = 0x1144; // bool
            static constexpr std::uintptr_t m_bNeedsBoltAction             = 0x1145; // bool
            static constexpr std::uintptr_t m_nRevolverCylinderIdx         = 0x1148; // int32
            static constexpr std::uintptr_t m_bSkillReloadAvailable        = 0x114C; // bool
            static constexpr std::uintptr_t m_bSkillReloadLiftedReloadKey  = 0x114D; // bool
            static constexpr std::uintptr_t m_bSkillBoltInterruptAvailable = 0x114E; // bool
            static constexpr std::uintptr_t m_bSkillBoltLiftedFireKey      = 0x114F; // bool
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
        class CDEagle : public CCSWeaponBaseGun {
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
        class CKnife : public CCSWeaponBase {
        public:
            static constexpr std::uintptr_t m_bFirstAttack = 0x1130; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CMolotovProjectile : public CBaseCSGrenadeProjectile {
        public:
            static constexpr std::uintptr_t m_bIsIncGrenade = 0x0BB0; // bool
            static constexpr std::uintptr_t m_bDetonated    = 0x0BC8; // bool
            static constexpr std::uintptr_t m_stillTimer    = 0x0BD0; // IntervalTimer
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSmokeGrenadeProjectile : public CBaseCSGrenadeProjectile {
        public:
            static constexpr std::uintptr_t m_nSmokeEffectTickBegin = 0x0BD8; // int32
            static constexpr std::uintptr_t m_bDidSmokeEffect       = 0x0BDC; // bool
            static constexpr std::uintptr_t m_nRandomSeed           = 0x0BE0; // int32
            static constexpr std::uintptr_t m_vSmokeColor           = 0x0BE4; // Vector
            static constexpr std::uintptr_t m_vSmokeDetonationPos   = 0x0BF0; // Vector
            static constexpr std::uintptr_t m_VoxelFrameData        = 0x0C00; // CNetworkUtlVectorBase<uint8>
            static constexpr std::uintptr_t m_nVoxelFrameDataSize   = 0x0C18; // int32
            static constexpr std::uintptr_t m_nVoxelUpdate          = 0x0C1C; // int32
            static constexpr std::uintptr_t m_flLastBounce          = 0x0C20; // GameTime_t
            static constexpr std::uintptr_t m_fllastSimulationTime  = 0x0C24; // GameTime_t
            static constexpr std::uintptr_t m_bExplodeFromInferno   = 0x2EA8; // bool
            static constexpr std::uintptr_t m_bDidGroundScorch      = 0x2EA9; // bool
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
        class CAK47 : public CCSWeaponBaseGun {
        public:
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
        class CWeaponGalilAR : public CCSWeaponBaseGun {
        public:
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
        class CWeaponHKP2000 : public CCSWeaponBaseGun {
        public:
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
        class CWeaponM4A1 : public CCSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponM4A1Silencer : public CCSWeaponBaseGun {
        public:
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
        class CWeaponMP5SD : public CCSWeaponBaseGun {
        public:
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
        class CWeaponMP9 : public CCSWeaponBaseGun {
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
        class CWeaponSCAR20 : public CCSWeaponBaseGun {
        public:
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
        class CWeaponUMP45 : public CCSWeaponBaseGun {
        public:
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
        class CWeaponXM1014 : public CCSWeaponBaseShotgun {
        public:
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
        class CDecoyGrenade : public CBaseCSGrenade {
        public:
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
        class CSmokeGrenade : public CBaseCSGrenade {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponSSG08 : public CCSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponG3SG1 : public CCSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CC4 : public CCSWeaponBase {
        public:
            static constexpr std::uintptr_t m_vecLastValidPlayerHeldPosition = 0x1160; // Vector
            static constexpr std::uintptr_t m_vecLastValidDroppedPosition    = 0x116C; // Vector
            static constexpr std::uintptr_t m_bDoValidDroppedPositionCheck   = 0x1178; // bool
            static constexpr std::uintptr_t m_bStartedArming                 = 0x1179; // bool
            static constexpr std::uintptr_t m_fArmedTime                     = 0x117C; // GameTime_t
            static constexpr std::uintptr_t m_bBombPlacedAnimation           = 0x1180; // bool
            static constexpr std::uintptr_t m_bIsPlantingViaUse              = 0x1181; // bool
            static constexpr std::uintptr_t m_entitySpottedState             = 0x1188; // EntitySpottedState_t
            static constexpr std::uintptr_t m_nSpotRules                     = 0x11A0; // int32
            static constexpr std::uintptr_t m_bPlayedArmingBeeps             = 0x11A4; // bool[7]
            static constexpr std::uintptr_t m_bBombPlanted                   = 0x11AB; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponP250 : public CCSWeaponBaseGun {
        public:
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
        class CWeaponM249 : public CCSWeaponBaseGun {
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
        class CWeaponAug : public CCSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponTaser : public CCSWeaponBaseGun {
        public:
            static constexpr std::uintptr_t m_fFireTime       = 0x1150; // GameTime_t
            static constexpr std::uintptr_t m_nLastAttackTick = 0x1154; // int32
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
        class CWeaponAWP : public CCSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWeaponCZ75a : public CCSWeaponBaseGun {
        public:
            static constexpr std::uintptr_t m_bMagazineRemoved = 0x1150; // bool
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
        class CWeaponSawedoff : public CCSWeaponBaseShotgun {
        public:
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
        class CWeaponSG556 : public CCSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CBaseAnimGraphVariationUserData : public CNmGraphVariationUserData {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CNmAimCSTask : public CNmPoseTask {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CNmSnapWeaponTask : public CNmPoseTask {
        public:
        };

        // Has VTable
        // Construct Allowed
        class CNmAimCSNode__CDefinition : public CNmPassthroughNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nVerticalAngleNodeIdx        = 0x0018; // int16
            static constexpr std::uintptr_t m_nHorizontalAngleNodeIdx      = 0x001A; // int16
            static constexpr std::uintptr_t m_nWeaponCategoryNodeIdx       = 0x001C; // int16
            static constexpr std::uintptr_t m_nWeaponTypeNodeIdx           = 0x001E; // int16
            static constexpr std::uintptr_t m_nIsWeaponActionActiveNodeIdx = 0x0020; // int16
            static constexpr std::uintptr_t m_nWeaponDropNodeIdx           = 0x0022; // int16
            static constexpr std::uintptr_t m_nEnabledNodeIdx              = 0x0024; // int16
            static constexpr std::uintptr_t m_flBlendTimeSeconds           = 0x0028; // float32
            static constexpr std::uintptr_t m_flReduceRangeTimeSeconds     = 0x002C; // float32
        };

        // Has VTable
        // Construct Allowed
        class CNmSnapWeaponNode__CDefinition : public CNmPassthroughNode__CDefinition {
        public:
            static constexpr std::uintptr_t m_nEnabledNodeIdx      = 0x0018; // int16
            static constexpr std::uintptr_t m_nLockLeftHandNodeIdx = 0x001A; // int16
            static constexpr std::uintptr_t m_flBlendTimeSeconds   = 0x001C; // float32
        };

    }
}

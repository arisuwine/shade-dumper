#pragma once
#include <cstdint>

namespace offsets {
    namespace client {
        // Local Type Scope
        enum class C_BaseCombatCharacter__WaterWakeMode_t : std::uint32_t {
            WATER_WAKE_NONE           = 0x0,
            WATER_WAKE_IDLE           = 0x1,
            WATER_WAKE_WALKING        = 0x2,
            WATER_WAKE_RUNNING        = 0x3,
            WATER_WAKE_WATER_OVERHEAD = 0x4
        };

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

        enum class CompositeMaterialInputLooseVariableType_t : std::uint32_t {
            LOOSE_VARIABLE_TYPE_BOOLEAN           = 0x0,
            LOOSE_VARIABLE_TYPE_INTEGER1          = 0x1,
            LOOSE_VARIABLE_TYPE_INTEGER2          = 0x2,
            LOOSE_VARIABLE_TYPE_INTEGER3          = 0x3,
            LOOSE_VARIABLE_TYPE_INTEGER4          = 0x4,
            LOOSE_VARIABLE_TYPE_FLOAT1            = 0x5,
            LOOSE_VARIABLE_TYPE_FLOAT2            = 0x6,
            LOOSE_VARIABLE_TYPE_FLOAT3            = 0x7,
            LOOSE_VARIABLE_TYPE_FLOAT4            = 0x8,
            LOOSE_VARIABLE_TYPE_COLOR4            = 0x9,
            LOOSE_VARIABLE_TYPE_STRING            = 0xA,
            LOOSE_VARIABLE_TYPE_SYSTEMVAR         = 0xB,
            LOOSE_VARIABLE_TYPE_RESOURCE_MATERIAL = 0xC,
            LOOSE_VARIABLE_TYPE_RESOURCE_TEXTURE  = 0xD,
            LOOSE_VARIABLE_TYPE_PANORAMA_RENDER   = 0xE
        };

        enum class CompositeMaterialInputTextureType_t : std::uint32_t {
            INPUT_TEXTURE_TYPE_DEFAULT           = 0x0,
            INPUT_TEXTURE_TYPE_NORMALMAP         = 0x1,
            INPUT_TEXTURE_TYPE_COLOR             = 0x2,
            INPUT_TEXTURE_TYPE_MASKS             = 0x3,
            INPUT_TEXTURE_TYPE_ROUGHNESS         = 0x4,
            INPUT_TEXTURE_TYPE_PEARLESCENCE_MASK = 0x5,
            INPUT_TEXTURE_TYPE_AO                = 0x6,
            INPUT_TEXTURE_TYPE_POSITION          = 0x7
        };

        enum class InventoryNodeType_t : std::uint32_t {
            NODE_TYPE_INVALID             = 0x0,
            VIRTUAL_NODE_SCHEMA_PREFAB    = 0x1,
            VIRTUAL_NODE_SCHEMA_ITEMDEF   = 0x2,
            VIRTUAL_NODE_SCHEMA_STICKER   = 0x3,
            VIRTUAL_NODE_SCHEMA_KEYCHAIN  = 0x4,
            CONCRETE_NODE_SCHEMA_PREFAB   = 0x5,
            CONCRETE_NODE_SCHEMA_ITEMDEF  = 0x6,
            CONCRETE_NODE_SCHEMA_STICKER  = 0x7,
            CONCRETE_NODE_SCHEMA_KEYCHAIN = 0x8
        };

        enum class CompositeMaterialInputContainerSourceType_t : std::uint32_t {
            CONTAINER_SOURCE_TYPE_TARGET_MATERIAL           = 0x0,
            CONTAINER_SOURCE_TYPE_MATERIAL_FROM_TARGET_ATTR = 0x1,
            CONTAINER_SOURCE_TYPE_SPECIFIC_MATERIAL         = 0x2,
            CONTAINER_SOURCE_TYPE_LOOSE_VARIABLES           = 0x3,
            CONTAINER_SOURCE_TYPE_VARIABLE_FROM_TARGET_ATTR = 0x4,
            CONTAINER_SOURCE_TYPE_TARGET_INSTANCE_MATERIAL  = 0x5
        };

        enum class CompMatPropertyMutatorType_t : std::uint32_t {
            COMP_MAT_PROPERTY_MUTATOR_INIT                        = 0x0,
            COMP_MAT_PROPERTY_MUTATOR_COPY_MATCHING_KEYS          = 0x1,
            COMP_MAT_PROPERTY_MUTATOR_COPY_KEYS_WITH_SUFFIX       = 0x2,
            COMP_MAT_PROPERTY_MUTATOR_COPY_PROPERTY               = 0x3,
            COMP_MAT_PROPERTY_MUTATOR_SET_VALUE                   = 0x4,
            COMP_MAT_PROPERTY_MUTATOR_GENERATE_TEXTURE            = 0x5,
            COMP_MAT_PROPERTY_MUTATOR_CONDITIONAL_MUTATORS        = 0x6,
            COMP_MAT_PROPERTY_MUTATOR_POP_INPUT_QUEUE             = 0x7,
            COMP_MAT_PROPERTY_MUTATOR_DRAW_TEXT                   = 0x8,
            COMP_MAT_PROPERTY_MUTATOR_RANDOM_ROLL_INPUT_VARIABLES = 0x9
        };

        enum class CompositeMaterialVarSystemVar_t : std::uint32_t {
            COMPMATSYSVAR_COMPOSITETIME         = 0x0,
            COMPMATSYSVAR_EMPTY_RESOURCE_SPACER = 0x1
        };

        enum class CompositeMaterialMatchFilterType_t : std::uint32_t {
            MATCH_FILTER_MATERIAL_ATTRIBUTE_EXISTS = 0x0,
            MATCH_FILTER_MATERIAL_SHADER           = 0x1,
            MATCH_FILTER_MATERIAL_NAME_SUBSTR      = 0x2,
            MATCH_FILTER_MATERIAL_ATTRIBUTE_EQUALS = 0x3,
            MATCH_FILTER_MATERIAL_PROPERTY_EXISTS  = 0x4,
            MATCH_FILTER_MATERIAL_PROPERTY_EQUALS  = 0x5
        };

        enum class CompMatPropertyMutatorConditionType_t : std::uint32_t {
            COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_EXISTS       = 0x0,
            COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EXISTS = 0x1,
            COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EQUALS = 0x2
        };

        class CNmEventConsumerAttributes {
        public:
        };

        class CAnimGraphControllerBase {
        public:
        };

        class IEconItemInterface {
        public:
        };

        class CSkeletonAnimationController {
        public:
        };

        class CEntitySubclassVDataBase {
        public:
        };

        class CPlayerControllerComponent {
        public:
        };

        class CPlayerPawnComponent {
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
        class C_BaseEntity : public CEntityInstance {
        public:
            static constexpr std::uintptr_t m_CBodyComponent                             = 0X0038; // CBodyComponent*
            static constexpr std::uintptr_t m_NetworkTransmitComponent                   = 0X0040; // CNetworkTransmitComponent
            static constexpr std::uintptr_t m_nLastThinkTick                             = 0X0330; // GameTick_t
            static constexpr std::uintptr_t m_pGameSceneNode                             = 0X0338; // CGameSceneNode*
            static constexpr std::uintptr_t m_pRenderComponent                           = 0X0340; // CRenderComponent*
            static constexpr std::uintptr_t m_pCollision                                 = 0X0348; // CCollisionProperty*
            static constexpr std::uintptr_t m_iMaxHealth                                 = 0X0350; // int32
            static constexpr std::uintptr_t m_iHealth                                    = 0X0354; // int32
            static constexpr std::uintptr_t m_flDamageAccumulator                        = 0X0358; // float32
            static constexpr std::uintptr_t m_lifeState                                  = 0X035C; // uint8
            static constexpr std::uintptr_t m_bTakesDamage                               = 0X035D; // bool
            static constexpr std::uintptr_t m_nTakeDamageFlags                           = 0X0360; // TakeDamageFlags_t
            static constexpr std::uintptr_t m_nPlatformType                              = 0X0368; // EntityPlatformTypes_t
            static constexpr std::uintptr_t m_ubInterpolationFrame                       = 0X0369; // uint8
            static constexpr std::uintptr_t m_hSceneObjectController                     = 0X036C; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_nNoInterpolationTick                       = 0X0370; // int32
            static constexpr std::uintptr_t m_nVisibilityNoInterpolationTick             = 0X0374; // int32
            static constexpr std::uintptr_t m_flProxyRandomValue                         = 0X0378; // float32
            static constexpr std::uintptr_t m_iEFlags                                    = 0X037C; // int32
            static constexpr std::uintptr_t m_nWaterType                                 = 0X0380; // uint8
            static constexpr std::uintptr_t m_bInterpolateEvenWithNoModel                = 0X0381; // bool
            static constexpr std::uintptr_t m_bPredictionEligible                        = 0X0382; // bool
            static constexpr std::uintptr_t m_bApplyLayerMatchIDToModel                  = 0X0383; // bool
            static constexpr std::uintptr_t m_tokLayerMatchID                            = 0X0384; // CUtlStringToken
            static constexpr std::uintptr_t m_nSubclassID                                = 0X0388; // CUtlStringToken
            static constexpr std::uintptr_t m_nSimulationTick                            = 0X0398; // int32
            static constexpr std::uintptr_t m_iCurrentThinkContext                       = 0X039C; // int32
            static constexpr std::uintptr_t m_aThinkFunctions                            = 0X03A0; // CUtlVector<thinkfunc_t>
            static constexpr std::uintptr_t m_bDisabledContextThinks                     = 0X03B8; // bool
            static constexpr std::uintptr_t m_flAnimTime                                 = 0X03BC; // float32
            static constexpr std::uintptr_t m_flSimulationTime                           = 0X03C0; // float32
            static constexpr std::uintptr_t m_nSceneObjectOverrideFlags                  = 0X03C4; // uint8
            static constexpr std::uintptr_t m_bHasSuccessfullyInterpolated               = 0X03C5; // bool
            static constexpr std::uintptr_t m_bHasAddedVarsToInterpolation               = 0X03C6; // bool
            static constexpr std::uintptr_t m_bRenderEvenWhenNotSuccessfullyInterpolated = 0X03C7; // bool
            static constexpr std::uintptr_t m_nInterpolationLatchDirtyFlags              = 0X03C8; // int32[2]
            static constexpr std::uintptr_t m_ListEntry                                  = 0X03D0; // uint16[11]
            static constexpr std::uintptr_t m_flCreateTime                               = 0X03E8; // GameTime_t
            static constexpr std::uintptr_t m_flSpeed                                    = 0X03EC; // float32
            static constexpr std::uintptr_t m_EntClientFlags                             = 0X03F0; // uint16
            static constexpr std::uintptr_t m_bClientSideRagdoll                         = 0X03F2; // bool
            static constexpr std::uintptr_t m_iTeamNum                                   = 0X03F3; // uint8
            static constexpr std::uintptr_t m_spawnflags                                 = 0X03F4; // uint32
            static constexpr std::uintptr_t m_nNextThinkTick                             = 0X03F8; // GameTick_t
            static constexpr std::uintptr_t m_fFlags                                     = 0X0400; // uint32
            static constexpr std::uintptr_t m_vecAbsVelocity                             = 0X0404; // Vector
            static constexpr std::uintptr_t m_vecServerVelocity                          = 0X0410; // CNetworkVelocityVector
            static constexpr std::uintptr_t m_vecVelocity                                = 0X0438; // CNetworkVelocityVector
            static constexpr std::uintptr_t m_vecBaseVelocity                            = 0X0518; // Vector
            static constexpr std::uintptr_t m_hEffectEntity                              = 0X0524; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_hOwnerEntity                               = 0X0528; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_MoveCollide                                = 0X052C; // MoveCollide_t
            static constexpr std::uintptr_t m_MoveType                                   = 0X052D; // MoveType_t
            static constexpr std::uintptr_t m_nActualMoveType                            = 0X052E; // MoveType_t
            static constexpr std::uintptr_t m_flWaterLevel                               = 0X0530; // float32
            static constexpr std::uintptr_t m_fEffects                                   = 0X0534; // uint32
            static constexpr std::uintptr_t m_hGroundEntity                              = 0X0538; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_nGroundBodyIndex                           = 0X053C; // int32
            static constexpr std::uintptr_t m_flFriction                                 = 0X0540; // float32
            static constexpr std::uintptr_t m_flElasticity                               = 0X0544; // float32
            static constexpr std::uintptr_t m_flGravityScale                             = 0X0548; // float32
            static constexpr std::uintptr_t m_flTimeScale                                = 0X054C; // float32
            static constexpr std::uintptr_t m_bAnimatedEveryTick                         = 0X0550; // bool
            static constexpr std::uintptr_t m_bGravityDisabled                           = 0X0551; // bool
            static constexpr std::uintptr_t m_flNavIgnoreUntilTime                       = 0X0554; // GameTime_t
            static constexpr std::uintptr_t m_hThink                                     = 0X0558; // uint16
            static constexpr std::uintptr_t m_fBBoxVisFlags                              = 0X0568; // uint8
            static constexpr std::uintptr_t m_flActualGravityScale                       = 0X056C; // float32
            static constexpr std::uintptr_t m_bGravityActuallyDisabled                   = 0X0570; // bool
            static constexpr std::uintptr_t m_bPredictable                               = 0X0571; // bool
            static constexpr std::uintptr_t m_bRenderWithViewModels                      = 0X0572; // bool
            static constexpr std::uintptr_t m_nFirstPredictableCommand                   = 0X0574; // int32
            static constexpr std::uintptr_t m_nLastPredictableCommand                    = 0X0578; // int32
            static constexpr std::uintptr_t m_hOldMoveParent                             = 0X057C; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_Particles                                  = 0X0580; // CParticleProperty
            static constexpr std::uintptr_t m_vecAngVelocity                             = 0X05B0; // QAngle
            static constexpr std::uintptr_t m_DataChangeEventRef                         = 0X05BC; // int32
            static constexpr std::uintptr_t m_dependencies                               = 0X05C0; // CUtlVector<CEntityHandle>
            static constexpr std::uintptr_t m_nCreationTick                              = 0X05D8; // int32
            static constexpr std::uintptr_t m_bAnimTimeChanged                           = 0X05E9; // bool
            static constexpr std::uintptr_t m_bSimulationTimeChanged                     = 0X05EA; // bool
            static constexpr std::uintptr_t m_sUniqueHammerID                            = 0X05F8; // CUtlString
            static constexpr std::uintptr_t m_nBloodType                                 = 0X0600; // BloodType
        };

        // Has VTable
        // Is Absract
        // Local Type Scope
        class C_CSGO_TeamPreviewCharacterPosition : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_nVariant    = 0X0608; // int32
            static constexpr std::uintptr_t m_nRandom     = 0X060C; // int32
            static constexpr std::uintptr_t m_nOrdinal    = 0X0610; // int32
            static constexpr std::uintptr_t m_sWeaponName = 0X0618; // CUtlString
            static constexpr std::uintptr_t m_xuid        = 0X0620; // uint64
            static constexpr std::uintptr_t m_agentItem   = 0X0628; // C_EconItemView
            static constexpr std::uintptr_t m_glovesItem  = 0X0A98; // C_EconItemView
            static constexpr std::uintptr_t m_weaponItem  = 0X0F08; // C_EconItemView
        };

        // Has VTable
        // Local Type Scope
        class C_CSGO_TeamIntroCharacterPosition : public C_CSGO_TeamPreviewCharacterPosition {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_BaseModelEntity : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_CRenderComponent                                   = 0X0AF0; // CRenderComponent*
            static constexpr std::uintptr_t m_CHitboxComponent                                   = 0X0AF8; // CHitboxComponent
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed0           = 0X0B10; // HitGroup_t
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed1           = 0X0B14; // HitGroup_t
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed2           = 0X0B18; // HitGroup_t
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed3           = 0X0B1C; // HitGroup_t
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed4           = 0X0B20; // HitGroup_t
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed0_PartIndex = 0X0B24; // int32
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed1_PartIndex = 0X0B28; // int32
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed2_PartIndex = 0X0B2C; // int32
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed3_PartIndex = 0X0B30; // int32
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed4_PartIndex = 0X0B34; // int32
            static constexpr std::uintptr_t m_pDestructiblePartsSystemComponent                  = 0X0B38; // CDestructiblePartsComponent*
            static constexpr std::uintptr_t m_bInitModelEffects                                  = 0X0B58; // bool
            static constexpr std::uintptr_t m_bDoingModelEffects                                 = 0X0B59; // bool
            static constexpr std::uintptr_t m_bIsStaticProp                                      = 0X0B5A; // bool
            static constexpr std::uintptr_t m_iOldHealth                                         = 0X0B5C; // int32
            static constexpr std::uintptr_t m_nRenderMode                                        = 0X0B60; // RenderMode_t
            static constexpr std::uintptr_t m_nRenderFX                                          = 0X0B61; // RenderFx_t
            static constexpr std::uintptr_t m_bAllowFadeInView                                   = 0X0B62; // bool
            static constexpr std::uintptr_t m_clrRender                                          = 0X0B80; // Color
            static constexpr std::uintptr_t m_vecRenderAttributes                                = 0X0B88; // C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
            static constexpr std::uintptr_t m_bRenderToCubemaps                                  = 0X0C08; // bool
            static constexpr std::uintptr_t m_bNoInterpolate                                     = 0X0C09; // bool
            static constexpr std::uintptr_t m_Collision                                          = 0X0C10; // CCollisionProperty
            static constexpr std::uintptr_t m_Glow                                               = 0X0CC0; // CGlowProperty
            static constexpr std::uintptr_t m_flGlowBackfaceMult                                 = 0X0D18; // float32
            static constexpr std::uintptr_t m_fadeMinDist                                        = 0X0D1C; // float32
            static constexpr std::uintptr_t m_fadeMaxDist                                        = 0X0D20; // float32
            static constexpr std::uintptr_t m_flFadeScale                                        = 0X0D24; // float32
            static constexpr std::uintptr_t m_flShadowStrength                                   = 0X0D28; // float32
            static constexpr std::uintptr_t m_nObjectCulling                                     = 0X0D2C; // uint8
            static constexpr std::uintptr_t m_nRequiredDecalRtEncoding                           = 0X0D2D; // DecalRtEncoding_t
            static constexpr std::uintptr_t m_vecViewOffset                                      = 0X0D58; // CNetworkViewOffsetVector
            static constexpr std::uintptr_t m_pClientAlphaProperty                               = 0X0E38; // CClientAlphaProperty*
            static constexpr std::uintptr_t m_ClientOverrideTint                                 = 0X0E40; // Color
            static constexpr std::uintptr_t m_bUseClientOverrideTint                             = 0X0E44; // bool
            static constexpr std::uintptr_t m_bvDisabledHitGroups                                = 0X0E80; // uint32[1]
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_Inferno : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_nfxFireDamageEffect                   = 0X0EC8; // ParticleIndex_t
            static constexpr std::uintptr_t m_hInfernoPointsSnapshot                = 0X0ED0; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            static constexpr std::uintptr_t m_hInfernoFillerPointsSnapshot          = 0X0ED8; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            static constexpr std::uintptr_t m_hInfernoOutlinePointsSnapshot         = 0X0EE0; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            static constexpr std::uintptr_t m_hInfernoClimbingOutlinePointsSnapshot = 0X0EE8; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            static constexpr std::uintptr_t m_hInfernoDecalsSnapshot                = 0X0EF0; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            static constexpr std::uintptr_t m_firePositions                         = 0X0EF8; // Vector[64]
            static constexpr std::uintptr_t m_fireParentPositions                   = 0X11F8; // Vector[64]
            static constexpr std::uintptr_t m_bFireIsBurning                        = 0X14F8; // bool[64]
            static constexpr std::uintptr_t m_BurnNormal                            = 0X1538; // Vector[64]
            static constexpr std::uintptr_t m_fireCount                             = 0X1838; // int32
            static constexpr std::uintptr_t m_nInfernoType                          = 0X183C; // int32
            static constexpr std::uintptr_t m_nFireLifetime                         = 0X1840; // float32
            static constexpr std::uintptr_t m_bInPostEffectTime                     = 0X1844; // bool
            static constexpr std::uintptr_t m_lastFireCount                         = 0X1848; // int32
            static constexpr std::uintptr_t m_nFireEffectTickBegin                  = 0X184C; // int32
            static constexpr std::uintptr_t m_drawableCount                         = 0X8450; // int32
            static constexpr std::uintptr_t m_blosCheck                             = 0X8454; // bool
            static constexpr std::uintptr_t m_nlosperiod                            = 0X8458; // int32
            static constexpr std::uintptr_t m_maxFireHalfWidth                      = 0X845C; // float32
            static constexpr std::uintptr_t m_maxFireHeight                         = 0X8460; // float32
            static constexpr std::uintptr_t m_minBounds                             = 0X8464; // Vector
            static constexpr std::uintptr_t m_maxBounds                             = 0X8470; // Vector
            static constexpr std::uintptr_t m_flLastGrassBurnThink                  = 0X847C; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_FireCrackerBlast : public C_Inferno {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CCSGO_WingmanIntroCharacterPosition : public C_CSGO_TeamIntroCharacterPosition {
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

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Local Type Scope
        struct C_SceneEntity__QueuedEvents_t {
        public:
            static constexpr std::uintptr_t starttime = 0X0000; // float32
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_PingServices : public CPlayerPawnComponent {
        public:
            static constexpr std::uintptr_t m_hPlayerPing = 0X0048; // CHandle<C_PlayerPing>
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
        class CBaseAnimGraph : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_graphControllerManager          = 0X0E88; // CAnimGraphControllerManager
            static constexpr std::uintptr_t m_pMainGraphController            = 0X0F38; // CAnimGraphControllerBase*
            static constexpr std::uintptr_t m_bInitiallyPopulateInterpHistory = 0X0F40; // bool
            static constexpr std::uintptr_t m_bSuppressAnimEventSounds        = 0X0F42; // bool
            static constexpr std::uintptr_t m_bAnimGraphUpdateEnabled         = 0X0F50; // bool
            static constexpr std::uintptr_t m_flMaxSlopeDistance              = 0X0F54; // float32
            static constexpr std::uintptr_t m_vLastSlopeCheckPos              = 0X0F58; // VectorWS
            static constexpr std::uintptr_t m_nAnimGraphUpdateId              = 0X0F64; // uint32
            static constexpr std::uintptr_t m_bAnimationUpdateScheduled       = 0X0F68; // bool
            static constexpr std::uintptr_t m_vecForce                        = 0X0F6C; // Vector
            static constexpr std::uintptr_t m_nForceBone                      = 0X0F78; // int32
            static constexpr std::uintptr_t m_pClientsideRagdoll              = 0X0F80; // CBaseAnimGraph*
            static constexpr std::uintptr_t m_bBuiltRagdoll                   = 0X0F88; // bool
            static constexpr std::uintptr_t m_RagdollPose                     = 0X0FA0; // PhysicsRagdollPose_t
            static constexpr std::uintptr_t m_bRagdollEnabled                 = 0X0FE8; // bool
            static constexpr std::uintptr_t m_bRagdollClientSide              = 0X0FE9; // bool
            static constexpr std::uintptr_t m_bHasAnimatedMaterialAttributes  = 0X0FF8; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBaseProp : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_bModelOverrodeBlockLOS    = 0X1168; // bool
            static constexpr std::uintptr_t m_iShapeType                = 0X116C; // int32
            static constexpr std::uintptr_t m_bConformToCollisionBounds = 0X1170; // bool
            static constexpr std::uintptr_t m_mPreferredCatchTransform  = 0X1180; // CTransform
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_BreakableProp : public CBaseProp {
        public:
            static constexpr std::uintptr_t m_CPropDataComponent                    = 0X11A0; // CPropDataComponent
            static constexpr std::uintptr_t m_OnStartDeath                          = 0X11E0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnBreak                               = 0X11F8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnHealthChanged                       = 0X1210; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnTakeDamage                          = 0X1230; // CEntityIOOutput
            static constexpr std::uintptr_t m_impactEnergyScale                     = 0X1248; // float32
            static constexpr std::uintptr_t m_iMinHealthDmg                         = 0X124C; // int32
            static constexpr std::uintptr_t m_flPressureDelay                       = 0X1250; // float32
            static constexpr std::uintptr_t m_flDefBurstScale                       = 0X1254; // float32
            static constexpr std::uintptr_t m_vDefBurstOffset                       = 0X1258; // Vector
            static constexpr std::uintptr_t m_hBreaker                              = 0X1264; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_PerformanceMode                       = 0X1268; // PerformanceMode_t
            static constexpr std::uintptr_t m_flPreventDamageBeforeTime             = 0X126C; // GameTime_t
            static constexpr std::uintptr_t m_BreakableContentsType                 = 0X1270; // BreakableContentsType_t
            static constexpr std::uintptr_t m_strBreakableContentsPropGroupOverride = 0X1278; // CUtlString
            static constexpr std::uintptr_t m_strBreakableContentsParticleOverride  = 0X1280; // CUtlString
            static constexpr std::uintptr_t m_bHasBreakPiecesOrCommands             = 0X1288; // bool
            static constexpr std::uintptr_t m_explodeDamage                         = 0X128C; // float32
            static constexpr std::uintptr_t m_explodeRadius                         = 0X1290; // float32
            static constexpr std::uintptr_t m_nExplosionType                        = 0X1294; // BaseExplosionTypes_t
            static constexpr std::uintptr_t m_explosionDelay                        = 0X1298; // float32
            static constexpr std::uintptr_t m_explosionBuildupSound                 = 0X12A0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_explosionCustomEffect                 = 0X12A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_explosionCustomSound                  = 0X12B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_explosionModifier                     = 0X12B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hPhysicsAttacker                      = 0X12C0; // CHandle<C_BasePlayerPawn>
            static constexpr std::uintptr_t m_flLastPhysicsInfluenceTime            = 0X12C4; // GameTime_t
            static constexpr std::uintptr_t m_flDefaultFadeScale                    = 0X12C8; // float32
            static constexpr std::uintptr_t m_hLastAttacker                         = 0X12CC; // CHandle<C_BaseEntity>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_DynamicProp : public C_BreakableProp {
        public:
            static constexpr std::uintptr_t m_bUseHitboxesForRenderBox = 0X12D0; // bool
            static constexpr std::uintptr_t m_bUseAnimGraph            = 0X12D1; // bool
            static constexpr std::uintptr_t m_pOutputAnimBegun         = 0X12D8; // CEntityIOOutput
            static constexpr std::uintptr_t m_pOutputAnimOver          = 0X12F0; // CEntityIOOutput
            static constexpr std::uintptr_t m_pOutputAnimLoopCycleOver = 0X1308; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnAnimReachedStart       = 0X1320; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnAnimReachedEnd         = 0X1338; // CEntityIOOutput
            static constexpr std::uintptr_t m_iszIdleAnim              = 0X1350; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_nIdleAnimLoopMode        = 0X1358; // AnimLoopMode_t
            static constexpr std::uintptr_t m_bRandomizeCycle          = 0X135C; // bool
            static constexpr std::uintptr_t m_bStartDisabled           = 0X135D; // bool
            static constexpr std::uintptr_t m_bFiredStartEndOutput     = 0X135E; // bool
            static constexpr std::uintptr_t m_bForceNpcExclude         = 0X135F; // bool
            static constexpr std::uintptr_t m_bCreateNonSolid          = 0X1360; // bool
            static constexpr std::uintptr_t m_bIsOverrideProp          = 0X1361; // bool
            static constexpr std::uintptr_t m_iInitialGlowState        = 0X1364; // int32
            static constexpr std::uintptr_t m_nGlowRange               = 0X1368; // int32
            static constexpr std::uintptr_t m_nGlowRangeMin            = 0X136C; // int32
            static constexpr std::uintptr_t m_glowColor                = 0X1370; // Color
            static constexpr std::uintptr_t m_nGlowTeam                = 0X1374; // int32
            static constexpr std::uintptr_t m_iCachedFrameCount        = 0X1378; // int32
            static constexpr std::uintptr_t m_vecCachedRenderMins      = 0X137C; // Vector
            static constexpr std::uintptr_t m_vecCachedRenderMaxs      = 0X1388; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncRetakeBarrier : public C_DynamicProp {
        public:
        };

        // Has VTable
        // Local Type Scope
        class C_EnvWindShared {
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
            static constexpr std::uintptr_t m_hEntOwner          = 0X003C; // CHandle<C_BaseEntity>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_SkyCamera : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_skyboxData      = 0X0608; // sky3dparams_t
            static constexpr std::uintptr_t m_skyboxSlotToken = 0X0698; // CUtlStringToken
            static constexpr std::uintptr_t m_bUseAngles      = 0X069C; // bool
            static constexpr std::uintptr_t m_pNext           = 0X06A0; // C_SkyCamera*
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_FuncRotating : public C_BaseModelEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_SoundOpvarSetPointBase : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_iszStackName    = 0X0608; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszOperatorName = 0X0610; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszOpvarName    = 0X0618; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iOpvarIndex     = 0X0620; // int32
            static constexpr std::uintptr_t m_bUseAutoCompare = 0X0624; // bool
            static constexpr std::uintptr_t m_bFastRefresh    = 0X0625; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_EnvCubemapFog : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_flEndDistance        = 0X0608; // float32
            static constexpr std::uintptr_t m_flStartDistance      = 0X060C; // float32
            static constexpr std::uintptr_t m_flFogFalloffExponent = 0X0610; // float32
            static constexpr std::uintptr_t m_bHeightFogEnabled    = 0X0614; // bool
            static constexpr std::uintptr_t m_flFogHeightWidth     = 0X0618; // float32
            static constexpr std::uintptr_t m_flFogHeightEnd       = 0X061C; // float32
            static constexpr std::uintptr_t m_flFogHeightStart     = 0X0620; // float32
            static constexpr std::uintptr_t m_flFogHeightExponent  = 0X0624; // float32
            static constexpr std::uintptr_t m_flLODBias            = 0X0628; // float32
            static constexpr std::uintptr_t m_bActive              = 0X062C; // bool
            static constexpr std::uintptr_t m_bStartDisabled       = 0X062D; // bool
            static constexpr std::uintptr_t m_flFogMaxOpacity      = 0X0630; // float32
            static constexpr std::uintptr_t m_nCubemapSourceType   = 0X0634; // int32
            static constexpr std::uintptr_t m_hSkyMaterial         = 0X0638; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_iszSkyEntity         = 0X0640; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hFogCubemapTexture   = 0X0648; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_bHasHeightFogEnd     = 0X0650; // bool
            static constexpr std::uintptr_t m_bFirstTime           = 0X0651; // bool
        };

        // Has VTable
        // Local Type Scope
        class C_CSGO_TeamSelectCharacterPosition : public C_CSGO_TeamPreviewCharacterPosition {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSGO_TeamSelectTerroristPosition : public C_CSGO_TeamSelectCharacterPosition {
        public:
        };

        // Local Type Scope
        class C_BaseFlex__Emphasized_Phoneme {
        public:
            static constexpr std::uintptr_t m_sClassName   = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_flAmount     = 0X0018; // float32
            static constexpr std::uintptr_t m_bRequired    = 0X001C; // bool
            static constexpr std::uintptr_t m_bBasechecked = 0X001D; // bool
            static constexpr std::uintptr_t m_bValid       = 0X001E; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_ParticleSystem : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_szSnapshotFileName             = 0X0E88; // char[512]
            static constexpr std::uintptr_t m_bActive                        = 0X1088; // bool
            static constexpr std::uintptr_t m_bFrozen                        = 0X1089; // bool
            static constexpr std::uintptr_t m_flFreezeTransitionDuration     = 0X108C; // float32
            static constexpr std::uintptr_t m_nStopType                      = 0X1090; // int32
            static constexpr std::uintptr_t m_bAnimateDuringGameplayPause    = 0X1094; // bool
            static constexpr std::uintptr_t m_iEffectIndex                   = 0X1098; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            static constexpr std::uintptr_t m_flStartTime                    = 0X10A0; // GameTime_t
            static constexpr std::uintptr_t m_flPreSimTime                   = 0X10A4; // float32
            static constexpr std::uintptr_t m_vServerControlPoints           = 0X10A8; // Vector[4]
            static constexpr std::uintptr_t m_iServerControlPointAssignments = 0X10D8; // uint8[4]
            static constexpr std::uintptr_t m_hControlPointEnts              = 0X10DC; // CHandle<C_BaseEntity>[64]
            static constexpr std::uintptr_t m_bNoSave                        = 0X11DC; // bool
            static constexpr std::uintptr_t m_bNoFreeze                      = 0X11DD; // bool
            static constexpr std::uintptr_t m_bNoRamp                        = 0X11DE; // bool
            static constexpr std::uintptr_t m_bStartActive                   = 0X11DF; // bool
            static constexpr std::uintptr_t m_iszEffectName                  = 0X11E0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszControlPointNames           = 0X11E8; // CUtlSymbolLarge[64]
            static constexpr std::uintptr_t m_nDataCP                        = 0X13E8; // int32
            static constexpr std::uintptr_t m_vecDataCPValue                 = 0X13EC; // Vector
            static constexpr std::uintptr_t m_nTintCP                        = 0X13F8; // int32
            static constexpr std::uintptr_t m_clrTint                        = 0X13FC; // Color
            static constexpr std::uintptr_t m_bOldActive                     = 0X1420; // bool
            static constexpr std::uintptr_t m_bOldFrozen                     = 0X1421; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_EnvParticleGlow : public C_ParticleSystem {
        public:
            static constexpr std::uintptr_t m_flAlphaScale     = 0X1438; // float32
            static constexpr std::uintptr_t m_flRadiusScale    = 0X143C; // float32
            static constexpr std::uintptr_t m_flSelfIllumScale = 0X1440; // float32
            static constexpr std::uintptr_t m_ColorTint        = 0X1444; // Color
            static constexpr std::uintptr_t m_hTextureOverride = 0X1448; // CStrongHandle<InfoForResourceTypeCTextureBase>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCS_PortraitWorldCallbackHandler : public C_BaseEntity {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayerController_InventoryServices : public CPlayerControllerComponent {
        public:
            static constexpr std::uintptr_t m_vecNetworkableLoadout              = 0X0040; // CUtlVector<CCSPlayerController_InventoryServices::NetworkedLoadoutSlot_t>
            static constexpr std::uintptr_t m_unMusicID                          = 0X0058; // uint16
            static constexpr std::uintptr_t m_rank                               = 0X005C; // MedalRank_t[6]
            static constexpr std::uintptr_t m_nPersonaDataPublicLevel            = 0X0074; // int32
            static constexpr std::uintptr_t m_nPersonaDataPublicCommendsLeader   = 0X0078; // int32
            static constexpr std::uintptr_t m_nPersonaDataPublicCommendsTeacher  = 0X007C; // int32
            static constexpr std::uintptr_t m_nPersonaDataPublicCommendsFriendly = 0X0080; // int32
            static constexpr std::uintptr_t m_nPersonaDataXpTrailLevel           = 0X0084; // int32
            static constexpr std::uintptr_t m_vecServerAuthoritativeWeaponSlots  = 0X0088; // C_UtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>
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

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Local Type Scope
        struct C_EconEntity__AttachedModelData_t {
        public:
            static constexpr std::uintptr_t m_iModelDisplayFlags = 0X0000; // int32
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
        class C_BaseToggle : public C_BaseModelEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_BaseTrigger : public C_BaseToggle {
        public:
            static constexpr std::uintptr_t m_OnStartTouch         = 0X0E88; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnStartTouchAll      = 0X0EA0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnEndTouch           = 0X0EB8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnEndTouchAll        = 0X0ED0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnTouching           = 0X0EE8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnTouchingEachEntity = 0X0F00; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnNotTouching        = 0X0F18; // CEntityIOOutput
            static constexpr std::uintptr_t m_hTouchingEntities    = 0X0F30; // CUtlVector<CHandle<C_BaseEntity>>
            static constexpr std::uintptr_t m_iFilterName          = 0X0F48; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hFilter              = 0X0F50; // CHandle<CBaseFilter>
            static constexpr std::uintptr_t m_bDisabled            = 0X0F54; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerFan : public C_BaseTrigger {
        public:
            static constexpr std::uintptr_t m_vFanOriginOffset        = 0X0F58; // Vector
            static constexpr std::uintptr_t m_vDirection              = 0X0F64; // Vector
            static constexpr std::uintptr_t m_bPushTowardsInfoTarget  = 0X0F70; // bool
            static constexpr std::uintptr_t m_bPushAwayFromInfoTarget = 0X0F71; // bool
            static constexpr std::uintptr_t m_qNoiseDelta             = 0X0F80; // Quaternion
            static constexpr std::uintptr_t m_hInfoFan                = 0X0F90; // CHandle<CInfoFan>
            static constexpr std::uintptr_t m_flForce                 = 0X0F94; // float32
            static constexpr std::uintptr_t m_bFalloff                = 0X0F98; // bool
            static constexpr std::uintptr_t m_RampTimer               = 0X0FA0; // CountdownTimer
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_HostageCarriableProp : public CBaseAnimGraph {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_BulletHitModel : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_matLocal      = 0X1168; // matrix3x4_t
            static constexpr std::uintptr_t m_iBoneIndex    = 0X1198; // int32
            static constexpr std::uintptr_t m_hPlayerParent = 0X119C; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_bIsHit        = 0X11A0; // bool
            static constexpr std::uintptr_t m_flTimeCreated = 0X11A4; // float32
            static constexpr std::uintptr_t m_vecStartPos   = 0X11A8; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_FuncBrush : public C_BaseModelEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_FuncElectrifiedVolume : public C_FuncBrush {
        public:
            static constexpr std::uintptr_t m_nAmbientEffect = 0X0E88; // ParticleIndex_t
            static constexpr std::uintptr_t m_EffectName     = 0X0E90; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bState         = 0X0E98; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_MapVetoPickController : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_nDraftType           = 0X0618; // int32
            static constexpr std::uintptr_t m_nTeamWinningCoinToss = 0X061C; // int32
            static constexpr std::uintptr_t m_nTeamWithFirstChoice = 0X0620; // int32[64]
            static constexpr std::uintptr_t m_nVoteMapIdsList      = 0X0720; // int32[7]
            static constexpr std::uintptr_t m_nAccountIDs          = 0X073C; // int32[64]
            static constexpr std::uintptr_t m_nMapId0              = 0X083C; // int32[64]
            static constexpr std::uintptr_t m_nMapId1              = 0X093C; // int32[64]
            static constexpr std::uintptr_t m_nMapId2              = 0X0A3C; // int32[64]
            static constexpr std::uintptr_t m_nMapId3              = 0X0B3C; // int32[64]
            static constexpr std::uintptr_t m_nMapId4              = 0X0C3C; // int32[64]
            static constexpr std::uintptr_t m_nMapId5              = 0X0D3C; // int32[64]
            static constexpr std::uintptr_t m_nStartingSide0       = 0X0E3C; // int32[64]
            static constexpr std::uintptr_t m_nCurrentPhase        = 0X0F3C; // int32
            static constexpr std::uintptr_t m_nPhaseStartTick      = 0X0F40; // int32
            static constexpr std::uintptr_t m_nPhaseDurationTicks  = 0X0F44; // int32
            static constexpr std::uintptr_t m_nPostDataUpdateTick  = 0X0F48; // int32
            static constexpr std::uintptr_t m_bDisabledHud         = 0X0F4C; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_EnvVolumetricFogVolume : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_bActive                        = 0X0608; // bool
            static constexpr std::uintptr_t m_vBoxMins                       = 0X060C; // Vector
            static constexpr std::uintptr_t m_vBoxMaxs                       = 0X0618; // Vector
            static constexpr std::uintptr_t m_bStartDisabled                 = 0X0624; // bool
            static constexpr std::uintptr_t m_bIndirectUseLPVs               = 0X0625; // bool
            static constexpr std::uintptr_t m_flStrength                     = 0X0628; // float32
            static constexpr std::uintptr_t m_nFalloffShape                  = 0X062C; // int32
            static constexpr std::uintptr_t m_flFalloffExponent              = 0X0630; // float32
            static constexpr std::uintptr_t m_flHeightFogDepth               = 0X0634; // float32
            static constexpr std::uintptr_t m_fHeightFogEdgeWidth            = 0X0638; // float32
            static constexpr std::uintptr_t m_fIndirectLightStrength         = 0X063C; // float32
            static constexpr std::uintptr_t m_fSunLightStrength              = 0X0640; // float32
            static constexpr std::uintptr_t m_fNoiseStrength                 = 0X0644; // float32
            static constexpr std::uintptr_t m_TintColor                      = 0X0648; // Color
            static constexpr std::uintptr_t m_bOverrideTintColor             = 0X064C; // bool
            static constexpr std::uintptr_t m_bOverrideIndirectLightStrength = 0X064D; // bool
            static constexpr std::uintptr_t m_bOverrideSunLightStrength      = 0X064E; // bool
            static constexpr std::uintptr_t m_bOverrideNoiseStrength         = 0X064F; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSGO_EndOfMatchCharacterPosition : public C_CSGO_TeamPreviewCharacterPosition {
        public:
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

        // Has Trivial Destructor
        // Local Type Scope
        class C_BaseEntityAPI {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_BarnLight : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_bEnabled                    = 0X0E88; // bool
            static constexpr std::uintptr_t m_nColorMode                  = 0X0E8C; // int32
            static constexpr std::uintptr_t m_Color                       = 0X0E90; // Color
            static constexpr std::uintptr_t m_flColorTemperature          = 0X0E94; // float32
            static constexpr std::uintptr_t m_flBrightness                = 0X0E98; // float32
            static constexpr std::uintptr_t m_flBrightnessScale           = 0X0E9C; // float32
            static constexpr std::uintptr_t m_nDirectLight                = 0X0EA0; // int32
            static constexpr std::uintptr_t m_nBakedShadowIndex           = 0X0EA4; // int32
            static constexpr std::uintptr_t m_nLightPathUniqueId          = 0X0EA8; // int32
            static constexpr std::uintptr_t m_nLightMapUniqueId           = 0X0EAC; // int32
            static constexpr std::uintptr_t m_nLuminaireShape             = 0X0EB0; // int32
            static constexpr std::uintptr_t m_flLuminaireSize             = 0X0EB4; // float32
            static constexpr std::uintptr_t m_flLuminaireAnisotropy       = 0X0EB8; // float32
            static constexpr std::uintptr_t m_LightStyleString            = 0X0EC0; // CUtlString
            static constexpr std::uintptr_t m_flLightStyleStartTime       = 0X0EC8; // GameTime_t
            static constexpr std::uintptr_t m_QueuedLightStyleStrings     = 0X0ED0; // C_NetworkUtlVectorBase<CUtlString>
            static constexpr std::uintptr_t m_LightStyleEvents            = 0X0EE8; // C_NetworkUtlVectorBase<CUtlString>
            static constexpr std::uintptr_t m_LightStyleTargets           = 0X0F00; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
            static constexpr std::uintptr_t m_StyleEvent                  = 0X0F18; // CEntityIOOutput[4]
            static constexpr std::uintptr_t m_hLightCookie                = 0X0F78; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_flShape                     = 0X0F80; // float32
            static constexpr std::uintptr_t m_flSoftX                     = 0X0F84; // float32
            static constexpr std::uintptr_t m_flSoftY                     = 0X0F88; // float32
            static constexpr std::uintptr_t m_flSkirt                     = 0X0F8C; // float32
            static constexpr std::uintptr_t m_flSkirtNear                 = 0X0F90; // float32
            static constexpr std::uintptr_t m_vSizeParams                 = 0X0F94; // Vector
            static constexpr std::uintptr_t m_flRange                     = 0X0FA0; // float32
            static constexpr std::uintptr_t m_vShear                      = 0X0FA4; // Vector
            static constexpr std::uintptr_t m_nBakeSpecularToCubemaps     = 0X0FB0; // int32
            static constexpr std::uintptr_t m_vBakeSpecularToCubemapsSize = 0X0FB4; // Vector
            static constexpr std::uintptr_t m_nCastShadows                = 0X0FC0; // int32
            static constexpr std::uintptr_t m_nShadowMapSize              = 0X0FC4; // int32
            static constexpr std::uintptr_t m_nShadowPriority             = 0X0FC8; // int32
            static constexpr std::uintptr_t m_bContactShadow              = 0X0FCC; // bool
            static constexpr std::uintptr_t m_bForceShadowsEnabled        = 0X0FCD; // bool
            static constexpr std::uintptr_t m_nBounceLight                = 0X0FD0; // int32
            static constexpr std::uintptr_t m_flBounceScale               = 0X0FD4; // float32
            static constexpr std::uintptr_t m_bDynamicBounce              = 0X0FD8; // bool
            static constexpr std::uintptr_t m_flMinRoughness              = 0X0FDC; // float32
            static constexpr std::uintptr_t m_vAlternateColor             = 0X0FE0; // Vector
            static constexpr std::uintptr_t m_fAlternateColorBrightness   = 0X0FEC; // float32
            static constexpr std::uintptr_t m_nFog                        = 0X0FF0; // int32
            static constexpr std::uintptr_t m_flFogStrength               = 0X0FF4; // float32
            static constexpr std::uintptr_t m_nFogShadows                 = 0X0FF8; // int32
            static constexpr std::uintptr_t m_flFogScale                  = 0X0FFC; // float32
            static constexpr std::uintptr_t m_bFogMixedShadows            = 0X1000; // bool
            static constexpr std::uintptr_t m_flFadeSizeStart             = 0X1004; // float32
            static constexpr std::uintptr_t m_flFadeSizeEnd               = 0X1008; // float32
            static constexpr std::uintptr_t m_flShadowFadeSizeStart       = 0X100C; // float32
            static constexpr std::uintptr_t m_flShadowFadeSizeEnd         = 0X1010; // float32
            static constexpr std::uintptr_t m_bPrecomputedFieldsValid     = 0X1014; // bool
            static constexpr std::uintptr_t m_vPrecomputedBoundsMins      = 0X1018; // Vector
            static constexpr std::uintptr_t m_vPrecomputedBoundsMaxs      = 0X1024; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBOrigin       = 0X1030; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBAngles       = 0X103C; // QAngle
            static constexpr std::uintptr_t m_vPrecomputedOBBExtent       = 0X1048; // Vector
            static constexpr std::uintptr_t m_nPrecomputedSubFrusta       = 0X1054; // int32
            static constexpr std::uintptr_t m_vPrecomputedOBBOrigin0      = 0X1058; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBAngles0      = 0X1064; // QAngle
            static constexpr std::uintptr_t m_vPrecomputedOBBExtent0      = 0X1070; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBOrigin1      = 0X107C; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBAngles1      = 0X1088; // QAngle
            static constexpr std::uintptr_t m_vPrecomputedOBBExtent1      = 0X1094; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBOrigin2      = 0X10A0; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBAngles2      = 0X10AC; // QAngle
            static constexpr std::uintptr_t m_vPrecomputedOBBExtent2      = 0X10B8; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBOrigin3      = 0X10C4; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBAngles3      = 0X10D0; // QAngle
            static constexpr std::uintptr_t m_vPrecomputedOBBExtent3      = 0X10DC; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBOrigin4      = 0X10E8; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBAngles4      = 0X10F4; // QAngle
            static constexpr std::uintptr_t m_vPrecomputedOBBExtent4      = 0X1100; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBOrigin5      = 0X110C; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBAngles5      = 0X1118; // QAngle
            static constexpr std::uintptr_t m_vPrecomputedOBBExtent5      = 0X1124; // Vector
            static constexpr std::uintptr_t m_bInitialBoneSetup           = 0X1170; // bool
            static constexpr std::uintptr_t m_VisClusters                 = 0X1178; // C_NetworkUtlVectorBase<uint16>
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
        // Is Absract
        // Local Type Scope
        class C_BaseClientUIEntity : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_bEnabled       = 0X0E90; // bool
            static constexpr std::uintptr_t m_DialogXMLName  = 0X0E98; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_PanelClassName = 0X0EA0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_PanelID        = 0X0EA8; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PointClientUIWorldPanel : public C_BaseClientUIEntity {
        public:
            static constexpr std::uintptr_t m_bForceRecreateNextUpdate            = 0X0EC0; // bool
            static constexpr std::uintptr_t m_bMoveViewToPlayerNextThink          = 0X0EC1; // bool
            static constexpr std::uintptr_t m_bCheckCSSClasses                    = 0X0EC2; // bool
            static constexpr std::uintptr_t m_anchorDeltaTransform                = 0X0ED0; // CTransform
            static constexpr std::uintptr_t m_pOffScreenIndicator                 = 0X1060; // CPointOffScreenIndicatorUi*
            static constexpr std::uintptr_t m_bIgnoreInput                        = 0X1088; // bool
            static constexpr std::uintptr_t m_bLit                                = 0X1089; // bool
            static constexpr std::uintptr_t m_bFollowPlayerAcrossTeleport         = 0X108A; // bool
            static constexpr std::uintptr_t m_flWidth                             = 0X108C; // float32
            static constexpr std::uintptr_t m_flHeight                            = 0X1090; // float32
            static constexpr std::uintptr_t m_flDPI                               = 0X1094; // float32
            static constexpr std::uintptr_t m_flInteractDistance                  = 0X1098; // float32
            static constexpr std::uintptr_t m_flDepthOffset                       = 0X109C; // float32
            static constexpr std::uintptr_t m_unOwnerContext                      = 0X10A0; // uint32
            static constexpr std::uintptr_t m_unHorizontalAlign                   = 0X10A4; // uint32
            static constexpr std::uintptr_t m_unVerticalAlign                     = 0X10A8; // uint32
            static constexpr std::uintptr_t m_unOrientation                       = 0X10AC; // uint32
            static constexpr std::uintptr_t m_bAllowInteractionFromAllSceneWorlds = 0X10B0; // bool
            static constexpr std::uintptr_t m_vecCSSClasses                       = 0X10B8; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            static constexpr std::uintptr_t m_bOpaque                             = 0X10D0; // bool
            static constexpr std::uintptr_t m_bNoDepth                            = 0X10D1; // bool
            static constexpr std::uintptr_t m_bVisibleWhenParentNoDraw            = 0X10D2; // bool
            static constexpr std::uintptr_t m_bRenderBackface                     = 0X10D3; // bool
            static constexpr std::uintptr_t m_bUseOffScreenIndicator              = 0X10D4; // bool
            static constexpr std::uintptr_t m_bExcludeFromSaveGames               = 0X10D5; // bool
            static constexpr std::uintptr_t m_bGrabbable                          = 0X10D6; // bool
            static constexpr std::uintptr_t m_bOnlyRenderToTexture                = 0X10D7; // bool
            static constexpr std::uintptr_t m_bDisableMipGen                      = 0X10D8; // bool
            static constexpr std::uintptr_t m_nExplicitImageLayout                = 0X10DC; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointOffScreenIndicatorUi : public C_PointClientUIWorldPanel {
        public:
            static constexpr std::uintptr_t m_bBeenEnabled     = 0X10E0; // bool
            static constexpr std::uintptr_t m_bHide            = 0X10E1; // bool
            static constexpr std::uintptr_t m_flSeenTargetTime = 0X10E4; // float32
            static constexpr std::uintptr_t m_pTargetPanel     = 0X10E8; // C_PointClientUIWorldPanel*
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
        class C_PostProcessingVolume : public C_BaseTrigger {
        public:
            static constexpr std::uintptr_t m_hPostSettings             = 0X0F68; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
            static constexpr std::uintptr_t m_flFadeDuration            = 0X0F70; // float32
            static constexpr std::uintptr_t m_flMinLogExposure          = 0X0F74; // float32
            static constexpr std::uintptr_t m_flMaxLogExposure          = 0X0F78; // float32
            static constexpr std::uintptr_t m_flMinExposure             = 0X0F7C; // float32
            static constexpr std::uintptr_t m_flMaxExposure             = 0X0F80; // float32
            static constexpr std::uintptr_t m_flExposureCompensation    = 0X0F84; // float32
            static constexpr std::uintptr_t m_flExposureFadeSpeedUp     = 0X0F88; // float32
            static constexpr std::uintptr_t m_flExposureFadeSpeedDown   = 0X0F8C; // float32
            static constexpr std::uintptr_t m_flTonemapEVSmoothingRange = 0X0F90; // float32
            static constexpr std::uintptr_t m_bMaster                   = 0X0F94; // bool
            static constexpr std::uintptr_t m_bExposureControl          = 0X0F95; // bool
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_UseServices : public CPlayer_UseServices {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSGO_MapPreviewCameraPath : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_flZFar            = 0X0608; // float32
            static constexpr std::uintptr_t m_flZNear           = 0X060C; // float32
            static constexpr std::uintptr_t m_bLoop             = 0X0610; // bool
            static constexpr std::uintptr_t m_bVerticalFOV      = 0X0611; // bool
            static constexpr std::uintptr_t m_bConstantSpeed    = 0X0612; // bool
            static constexpr std::uintptr_t m_flDuration        = 0X0614; // float32
            static constexpr std::uintptr_t m_flPathLength      = 0X0658; // float32
            static constexpr std::uintptr_t m_flPathDuration    = 0X065C; // float32
            static constexpr std::uintptr_t m_bDofEnabled       = 0X0674; // bool
            static constexpr std::uintptr_t m_flDofNearBlurry   = 0X0678; // float32
            static constexpr std::uintptr_t m_flDofNearCrisp    = 0X067C; // float32
            static constexpr std::uintptr_t m_flDofFarCrisp     = 0X0680; // float32
            static constexpr std::uintptr_t m_flDofFarBlurry    = 0X0684; // float32
            static constexpr std::uintptr_t m_flDofTiltToGround = 0X0688; // float32
        };

        // Has VTable
        // Local Type Scope
        class C_CSGO_TeamPreviewCamera : public C_CSGO_MapPreviewCameraPath {
        public:
            static constexpr std::uintptr_t m_nVariant = 0X0690; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSGO_CounterTerroristWingmanIntroCamera : public C_CSGO_TeamPreviewCamera {
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
        class C_PointEntity : public C_BaseEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoFan : public C_PointEntity {
        public:
            static constexpr std::uintptr_t m_fFanForceMaxRadius  = 0X0648; // float32
            static constexpr std::uintptr_t m_fFanForceMinRadius  = 0X064C; // float32
            static constexpr std::uintptr_t m_flCurveDistRange    = 0X0650; // float32
            static constexpr std::uintptr_t m_FanForceCurveString = 0X0658; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_VoteController : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_iActiveIssueIndex = 0X0618; // int32
            static constexpr std::uintptr_t m_iOnlyTeamToVote   = 0X061C; // int32
            static constexpr std::uintptr_t m_nVoteOptionCount  = 0X0620; // int32[5]
            static constexpr std::uintptr_t m_nPotentialVotes   = 0X0634; // int32
            static constexpr std::uintptr_t m_bVotesDirty       = 0X0638; // bool
            static constexpr std::uintptr_t m_bTypeDirty        = 0X0639; // bool
            static constexpr std::uintptr_t m_bIsYesNoVote      = 0X063A; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_BaseFlex : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_flexWeight                                 = 0X1170; // C_NetworkUtlVectorBase<float32>
            static constexpr std::uintptr_t m_vLookTargetPosition                        = 0X1188; // VectorWS
            static constexpr std::uintptr_t m_nLastFlexUpdateFrameCount                  = 0X1270; // int32
            static constexpr std::uintptr_t m_CachedViewTarget                           = 0X1274; // Vector
            static constexpr std::uintptr_t m_nNextSceneEventId                          = 0X1280; // SceneEventId_t
            static constexpr std::uintptr_t m_iMouthAttachment                           = 0X1284; // AttachmentHandle_t
            static constexpr std::uintptr_t m_iEyeAttachment                             = 0X1285; // AttachmentHandle_t
            static constexpr std::uintptr_t m_bResetFlexWeightsOnModelChange             = 0X1286; // bool
            static constexpr std::uintptr_t m_nEyeOcclusionRendererBone                  = 0X12A0; // int32
            static constexpr std::uintptr_t m_mEyeOcclusionRendererCameraToBoneTransform = 0X12A4; // matrix3x4_t
            static constexpr std::uintptr_t m_vEyeOcclusionRendererHalfExtent            = 0X12D4; // Vector
            static constexpr std::uintptr_t m_PhonemeClasses                             = 0X12F0; // C_BaseFlex::Emphasized_Phoneme[3]
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_BaseCombatCharacter : public C_BaseFlex {
        public:
            static constexpr std::uintptr_t m_hMyWearables         = 0X1350; // C_NetworkUtlVectorBase<CHandle<C_EconWearable>>
            static constexpr std::uintptr_t m_leftFootAttachment   = 0X1368; // AttachmentHandle_t
            static constexpr std::uintptr_t m_rightFootAttachment  = 0X1369; // AttachmentHandle_t
            static constexpr std::uintptr_t m_nWaterWakeMode       = 0X136C; // C_BaseCombatCharacter::WaterWakeMode_t
            static constexpr std::uintptr_t m_flWaterWorldZ        = 0X1370; // float32
            static constexpr std::uintptr_t m_flWaterNextTraceTime = 0X1374; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_BasePlayerPawn : public C_BaseCombatCharacter {
        public:
            static constexpr std::uintptr_t m_pWeaponServices                    = 0X13D8; // CPlayer_WeaponServices*
            static constexpr std::uintptr_t m_pItemServices                      = 0X13E0; // CPlayer_ItemServices*
            static constexpr std::uintptr_t m_pAutoaimServices                   = 0X13E8; // CPlayer_AutoaimServices*
            static constexpr std::uintptr_t m_pObserverServices                  = 0X13F0; // CPlayer_ObserverServices*
            static constexpr std::uintptr_t m_pWaterServices                     = 0X13F8; // CPlayer_WaterServices*
            static constexpr std::uintptr_t m_pUseServices                       = 0X1400; // CPlayer_UseServices*
            static constexpr std::uintptr_t m_pFlashlightServices                = 0X1408; // CPlayer_FlashlightServices*
            static constexpr std::uintptr_t m_pCameraServices                    = 0X1410; // CPlayer_CameraServices*
            static constexpr std::uintptr_t m_pMovementServices                  = 0X1418; // CPlayer_MovementServices*
            static constexpr std::uintptr_t m_ServerViewAngleChanges             = 0X1428; // C_UtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
            static constexpr std::uintptr_t v_angle                              = 0X1490; // QAngle
            static constexpr std::uintptr_t v_anglePrevious                      = 0X149C; // QAngle
            static constexpr std::uintptr_t m_iHideHUD                           = 0X14A8; // uint32
            static constexpr std::uintptr_t m_skybox3d                           = 0X14B0; // sky3dparams_t
            static constexpr std::uintptr_t m_flDeathTime                        = 0X1540; // GameTime_t
            static constexpr std::uintptr_t m_vecPredictionError                 = 0X1544; // Vector
            static constexpr std::uintptr_t m_flPredictionErrorTime              = 0X1550; // GameTime_t
            static constexpr std::uintptr_t m_vecLastCameraSetupLocalOrigin      = 0X1570; // Vector
            static constexpr std::uintptr_t m_flLastCameraSetupTime              = 0X157C; // GameTime_t
            static constexpr std::uintptr_t m_flFOVSensitivityAdjust             = 0X1580; // float32
            static constexpr std::uintptr_t m_flMouseSensitivity                 = 0X1584; // float32
            static constexpr std::uintptr_t m_vOldOrigin                         = 0X1588; // Vector
            static constexpr std::uintptr_t m_flOldSimulationTime                = 0X1594; // float32
            static constexpr std::uintptr_t m_nLastExecutedCommandNumber         = 0X1598; // int32
            static constexpr std::uintptr_t m_nLastExecutedCommandTick           = 0X159C; // int32
            static constexpr std::uintptr_t m_hController                        = 0X15A0; // CHandle<CBasePlayerController>
            static constexpr std::uintptr_t m_hDefaultController                 = 0X15A4; // CHandle<CBasePlayerController>
            static constexpr std::uintptr_t m_bIsSwappingToPredictableController = 0X15A8; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSPlayerPawnBase : public C_BasePlayerPawn {
        public:
            static constexpr std::uintptr_t m_pPingServices                     = 0X15C0; // CCSPlayer_PingServices*
            static constexpr std::uintptr_t m_previousPlayerState               = 0X15C8; // CSPlayerState
            static constexpr std::uintptr_t m_iPlayerState                      = 0X15CC; // CSPlayerState
            static constexpr std::uintptr_t m_bHasMovedSinceSpawn               = 0X15D0; // bool
            static constexpr std::uintptr_t m_flLastSpawnTimeIndex              = 0X15D4; // GameTime_t
            static constexpr std::uintptr_t m_iProgressBarDuration              = 0X15D8; // int32
            static constexpr std::uintptr_t m_flProgressBarStartTime            = 0X15DC; // float32
            static constexpr std::uintptr_t m_flClientDeathTime                 = 0X15E0; // GameTime_t
            static constexpr std::uintptr_t m_flFlashBangTime                   = 0X15E4; // float32
            static constexpr std::uintptr_t m_flFlashScreenshotAlpha            = 0X15E8; // float32
            static constexpr std::uintptr_t m_flFlashOverlayAlpha               = 0X15EC; // float32
            static constexpr std::uintptr_t m_bFlashBuildUp                     = 0X15F0; // bool
            static constexpr std::uintptr_t m_bFlashDspHasBeenCleared           = 0X15F1; // bool
            static constexpr std::uintptr_t m_bFlashScreenshotHasBeenGrabbed    = 0X15F2; // bool
            static constexpr std::uintptr_t m_flFlashMaxAlpha                   = 0X15F4; // float32
            static constexpr std::uintptr_t m_flFlashDuration                   = 0X15F8; // float32
            static constexpr std::uintptr_t m_flClientHealthFadeChangeTimestamp = 0X15FC; // GameTime_t
            static constexpr std::uintptr_t m_nClientHealthFadeParityValue      = 0X1600; // int32
            static constexpr std::uintptr_t m_fNextThinkPushAway                = 0X1604; // float32
            static constexpr std::uintptr_t m_flCurrentMusicStartTime           = 0X160C; // float32
            static constexpr std::uintptr_t m_flMusicRoundStartTime             = 0X1610; // float32
            static constexpr std::uintptr_t m_bDeferStartMusicOnWarmup          = 0X1614; // bool
            static constexpr std::uintptr_t m_flLastSmokeOverlayAlpha           = 0X1618; // float32
            static constexpr std::uintptr_t m_flLastSmokeAge                    = 0X161C; // float32
            static constexpr std::uintptr_t m_vLastSmokeOverlayColor            = 0X1620; // Vector
            static constexpr std::uintptr_t m_hOriginalController               = 0X1648; // CHandle<CCSPlayerController>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_EconEntity : public C_BaseFlex {
        public:
            static constexpr std::uintptr_t m_flFlexDelayTime            = 0X1360; // float32
            static constexpr std::uintptr_t m_flFlexDelayedWeight        = 0X1368; // float32*
            static constexpr std::uintptr_t m_bAttributesInitialized     = 0X1370; // bool
            static constexpr std::uintptr_t m_AttributeManager           = 0X1378; // C_AttributeContainer
            static constexpr std::uintptr_t m_OriginalOwnerXuidLow       = 0X1848; // uint32
            static constexpr std::uintptr_t m_OriginalOwnerXuidHigh      = 0X184C; // uint32
            static constexpr std::uintptr_t m_nFallbackPaintKit          = 0X1850; // int32
            static constexpr std::uintptr_t m_nFallbackSeed              = 0X1854; // int32
            static constexpr std::uintptr_t m_flFallbackWear             = 0X1858; // float32
            static constexpr std::uintptr_t m_nFallbackStatTrak          = 0X185C; // int32
            static constexpr std::uintptr_t m_bClientside                = 0X1860; // bool
            static constexpr std::uintptr_t m_bParticleSystemsCreated    = 0X1861; // bool
            static constexpr std::uintptr_t m_vecAttachedParticles       = 0X1868; // CUtlVector<int32>
            static constexpr std::uintptr_t m_hViewmodelAttachment       = 0X1880; // CHandle<CBaseAnimGraph>
            static constexpr std::uintptr_t m_iOldTeam                   = 0X1884; // int32
            static constexpr std::uintptr_t m_bAttachmentDirty           = 0X1888; // bool
            static constexpr std::uintptr_t m_nUnloadedModelIndex        = 0X188C; // int32
            static constexpr std::uintptr_t m_iNumOwnerValidationRetries = 0X1890; // int32
            static constexpr std::uintptr_t m_hOldProvidee               = 0X18A0; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_vecAttachedModels          = 0X18A8; // CUtlVector<C_EconEntity::AttachedModelData_t>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_BasePlayerWeapon : public C_EconEntity {
        public:
            static constexpr std::uintptr_t m_nNextPrimaryAttackTick         = 0X18C0; // GameTick_t
            static constexpr std::uintptr_t m_flNextPrimaryAttackTickRatio   = 0X18C4; // float32
            static constexpr std::uintptr_t m_nNextSecondaryAttackTick       = 0X18C8; // GameTick_t
            static constexpr std::uintptr_t m_flNextSecondaryAttackTickRatio = 0X18CC; // float32
            static constexpr std::uintptr_t m_iClip1                         = 0X18D0; // int32
            static constexpr std::uintptr_t m_iClip2                         = 0X18D4; // int32
            static constexpr std::uintptr_t m_pReserveAmmo                   = 0X18D8; // int32[2]
        };

        // Has VTable
        // Local Type Scope
        class C_CSWeaponBase : public C_BasePlayerWeapon {
        public:
            static constexpr std::uintptr_t m_iWeaponGameplayAnimState             = 0X1948; // WeaponGameplayAnimState
            static constexpr std::uintptr_t m_flWeaponGameplayAnimStateTimestamp   = 0X194C; // GameTime_t
            static constexpr std::uintptr_t m_flInspectCancelCompleteTime          = 0X1950; // GameTime_t
            static constexpr std::uintptr_t m_bInspectPending                      = 0X1954; // bool
            static constexpr std::uintptr_t m_bInspectShouldLoop                   = 0X1955; // bool
            static constexpr std::uintptr_t m_flCrosshairDistance                  = 0X1980; // float32
            static constexpr std::uintptr_t m_iAmmoLastCheck                       = 0X1984; // int32
            static constexpr std::uintptr_t m_nLastEmptySoundCmdNum                = 0X1988; // int32
            static constexpr std::uintptr_t m_bFireOnEmpty                         = 0X198C; // bool
            static constexpr std::uintptr_t m_OnPlayerPickup                       = 0X1990; // CEntityIOOutput
            static constexpr std::uintptr_t m_weaponMode                           = 0X19A8; // CSWeaponMode
            static constexpr std::uintptr_t m_flTurningInaccuracyDelta             = 0X19AC; // float32
            static constexpr std::uintptr_t m_vecTurningInaccuracyEyeDirLast       = 0X19B0; // Vector
            static constexpr std::uintptr_t m_flTurningInaccuracy                  = 0X19BC; // float32
            static constexpr std::uintptr_t m_fAccuracyPenalty                     = 0X19C0; // float32
            static constexpr std::uintptr_t m_flLastAccuracyUpdateTime             = 0X19C4; // GameTime_t
            static constexpr std::uintptr_t m_fAccuracySmoothedForZoom             = 0X19C8; // float32
            static constexpr std::uintptr_t m_iRecoilIndex                         = 0X19CC; // int32
            static constexpr std::uintptr_t m_flRecoilIndex                        = 0X19D0; // float32
            static constexpr std::uintptr_t m_bBurstMode                           = 0X19D4; // bool
            static constexpr std::uintptr_t m_flLastBurstModeChangeTime            = 0X19D8; // GameTime_t
            static constexpr std::uintptr_t m_nPostponeFireReadyTicks              = 0X19DC; // GameTick_t
            static constexpr std::uintptr_t m_flPostponeFireReadyFrac              = 0X19E0; // float32
            static constexpr std::uintptr_t m_bInReload                            = 0X19E4; // bool
            static constexpr std::uintptr_t m_flDroppedAtTime                      = 0X19E8; // GameTime_t
            static constexpr std::uintptr_t m_bIsHauledBack                        = 0X19EC; // bool
            static constexpr std::uintptr_t m_bSilencerOn                          = 0X19ED; // bool
            static constexpr std::uintptr_t m_flTimeSilencerSwitchComplete         = 0X19F0; // GameTime_t
            static constexpr std::uintptr_t m_flWeaponActionPlaybackRate           = 0X19F4; // float32
            static constexpr std::uintptr_t m_iOriginalTeamNumber                  = 0X19F8; // int32
            static constexpr std::uintptr_t m_iMostRecentTeamNumber                = 0X19FC; // int32
            static constexpr std::uintptr_t m_bDroppedNearBuyZone                  = 0X1A00; // bool
            static constexpr std::uintptr_t m_flNextAttackRenderTimeOffset         = 0X1A04; // float32
            static constexpr std::uintptr_t m_bClearWeaponIdentifyingUGC           = 0X1AA0; // bool
            static constexpr std::uintptr_t m_bVisualsDataSet                      = 0X1AA1; // bool
            static constexpr std::uintptr_t m_bUIWeapon                            = 0X1AA2; // bool
            static constexpr std::uintptr_t m_nCustomEconReloadEventId             = 0X1AA4; // int32
            static constexpr std::uintptr_t m_nextPrevOwnerUseTime                 = 0X1AB0; // GameTime_t
            static constexpr std::uintptr_t m_hPrevOwner                           = 0X1AB4; // CHandle<C_CSPlayerPawn>
            static constexpr std::uintptr_t m_nDropTick                            = 0X1AB8; // GameTick_t
            static constexpr std::uintptr_t m_bWasActiveWeaponWhenDropped          = 0X1ABC; // bool
            static constexpr std::uintptr_t m_donated                              = 0X1ADC; // bool
            static constexpr std::uintptr_t m_fLastShotTime                        = 0X1AE0; // GameTime_t
            static constexpr std::uintptr_t m_bWasOwnedByCT                        = 0X1AE4; // bool
            static constexpr std::uintptr_t m_bWasOwnedByTerrorist                 = 0X1AE5; // bool
            static constexpr std::uintptr_t m_flNextClientFireBulletTime           = 0X1AE8; // float32
            static constexpr std::uintptr_t m_flNextClientFireBulletTime_Repredict = 0X1AEC; // float32
            static constexpr std::uintptr_t m_IronSightController                  = 0X1C50; // C_IronSightController
            static constexpr std::uintptr_t m_iIronSightMode                       = 0X1D00; // int32
            static constexpr std::uintptr_t m_flLastLOSTraceFailureTime            = 0X1D18; // GameTime_t
            static constexpr std::uintptr_t m_flWatTickOffset                      = 0X1D78; // float32
            static constexpr std::uintptr_t m_flLastShakeTime                      = 0X1D8C; // GameTime_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_C4 : public C_CSWeaponBase {
        public:
            static constexpr std::uintptr_t m_activeLightParticleIndex = 0X1F40; // ParticleIndex_t
            static constexpr std::uintptr_t m_eActiveLightEffect       = 0X1F44; // C4LightEffect_t
            static constexpr std::uintptr_t m_bStartedArming           = 0X1F48; // bool
            static constexpr std::uintptr_t m_fArmedTime               = 0X1F4C; // GameTime_t
            static constexpr std::uintptr_t m_bBombPlacedAnimation     = 0X1F50; // bool
            static constexpr std::uintptr_t m_bIsPlantingViaUse        = 0X1F51; // bool
            static constexpr std::uintptr_t m_entitySpottedState       = 0X1F58; // EntitySpottedState_t
            static constexpr std::uintptr_t m_nSpotRules               = 0X1F70; // int32
            static constexpr std::uintptr_t m_bPlayedArmingBeeps       = 0X1F74; // bool[7]
            static constexpr std::uintptr_t m_bBombPlanted             = 0X1F7B; // bool
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
        // Local Type Scope
        class C_RetakeGameRules {
        public:
            static constexpr std::uintptr_t m_nMatchSeed            = 0X0138; // int32
            static constexpr std::uintptr_t m_bBlockersPresent      = 0X013C; // bool
            static constexpr std::uintptr_t m_bRoundInProgress      = 0X013D; // bool
            static constexpr std::uintptr_t m_iFirstSecondHalfRound = 0X0140; // int32
            static constexpr std::uintptr_t m_iBombSite             = 0X0144; // int32
            static constexpr std::uintptr_t m_hBombPlanter          = 0X0148; // CHandle<C_CSPlayerPawn>
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
        // Is Absract
        // Local Type Scope
        class C_SoundAreaEntityBase : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled        = 0X0608; // bool
            static constexpr std::uintptr_t m_bWasEnabled      = 0X0610; // bool
            static constexpr std::uintptr_t m_iszSoundAreaType = 0X0618; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_vPos             = 0X0620; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_SoundAreaEntitySphere : public C_SoundAreaEntityBase {
        public:
            static constexpr std::uintptr_t m_flRadius = 0X0630; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Step_EntFire : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_Input = 0X0048; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSWeaponBaseGun : public C_CSWeaponBase {
        public:
            static constexpr std::uintptr_t m_zoomLevel            = 0X1F40; // int32
            static constexpr std::uintptr_t m_iBurstShotsRemaining = 0X1F44; // int32
            static constexpr std::uintptr_t m_iSilencerBodygroup   = 0X1F48; // int32
            static constexpr std::uintptr_t m_silencedModelIndex   = 0X1F58; // int32
            static constexpr std::uintptr_t m_inPrecache           = 0X1F5C; // bool
            static constexpr std::uintptr_t m_bNeedsBoltAction     = 0X1F5D; // bool
            static constexpr std::uintptr_t m_nRevolverCylinderIdx = 0X1F60; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_WeaponAWP : public C_CSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_BaseButton : public C_BaseToggle {
        public:
            static constexpr std::uintptr_t m_glowEntity    = 0X0E88; // CHandle<C_BaseModelEntity>
            static constexpr std::uintptr_t m_usable        = 0X0E8C; // bool
            static constexpr std::uintptr_t m_szDisplayText = 0X0E90; // CUtlSymbolLarge
        };

        // Has VTable
        // Local Type Scope
        class CPlayer_ObserverServices : public CPlayerPawnComponent {
        public:
            static constexpr std::uintptr_t m_iObserverMode                   = 0X0048; // uint8
            static constexpr std::uintptr_t m_hObserverTarget                 = 0X004C; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_iObserverLastMode               = 0X0050; // ObserverMode_t
            static constexpr std::uintptr_t m_bForcedObserverMode             = 0X0054; // bool
            static constexpr std::uintptr_t m_flObserverChaseDistance         = 0X0058; // float32
            static constexpr std::uintptr_t m_flObserverChaseDistanceCalcTime = 0X005C; // GameTime_t
        };

        // Has VTable
        // Local Type Scope
        class CCSObserver_ObserverServices : public CPlayer_ObserverServices {
        public:
            static constexpr std::uintptr_t m_obsInterpState = 0X0064; // ObserverInterpState_t
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
        class CHitboxComponent : public CEntityComponent {
        public:
            static constexpr std::uintptr_t m_flBoundsExpandRadius = 0X0014; // float32
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
        // Construct Allowed
        // Local Type Scope
        class C_CSMinimapBoundary : public C_BaseEntity {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CPathQueryComponent : public CEntityComponent {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_Precipitation : public C_BaseTrigger {
        public:
            static constexpr std::uintptr_t m_flDensity                               = 0X0F58; // float32
            static constexpr std::uintptr_t m_flParticleInnerDist                     = 0X0F68; // float32
            static constexpr std::uintptr_t m_pParticleDef                            = 0X0F70; // char*
            static constexpr std::uintptr_t m_tParticlePrecipTraceTimer               = 0X0F98; // TimedEvent[1]
            static constexpr std::uintptr_t m_bActiveParticlePrecipEmitter            = 0X0FA0; // bool[1]
            static constexpr std::uintptr_t m_bParticlePrecipInitialized              = 0X0FA1; // bool
            static constexpr std::uintptr_t m_bHasSimulatedSinceLastSceneObjectUpdate = 0X0FA2; // bool
            static constexpr std::uintptr_t m_nAvailableSheetSequencesMaxIndex        = 0X0FA4; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicalEntity : public C_BaseEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicRelay : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled         = 0X0608; // bool
            static constexpr std::uintptr_t m_bWaitForRefire    = 0X0609; // bool
            static constexpr std::uintptr_t m_bTriggerOnce      = 0X060A; // bool
            static constexpr std::uintptr_t m_bFastRetrigger    = 0X060B; // bool
            static constexpr std::uintptr_t m_bPassthoughCaller = 0X060C; // bool
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
        class C_WeaponUMP45 : public C_CSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_WeaponG3SG1 : public C_CSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_SpotlightEnd : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_flLightScale = 0X0E88; // float32
            static constexpr std::uintptr_t m_Radius       = 0X0E8C; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_Fish : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_pos               = 0X1168; // Vector
            static constexpr std::uintptr_t m_vel               = 0X1174; // Vector
            static constexpr std::uintptr_t m_angles            = 0X1180; // QAngle
            static constexpr std::uintptr_t m_localLifeState    = 0X118C; // int32
            static constexpr std::uintptr_t m_deathDepth        = 0X1190; // float32
            static constexpr std::uintptr_t m_deathAngle        = 0X1194; // float32
            static constexpr std::uintptr_t m_buoyancy          = 0X1198; // float32
            static constexpr std::uintptr_t m_wiggleTimer       = 0X11A0; // CountdownTimer
            static constexpr std::uintptr_t m_wigglePhase       = 0X11B8; // float32
            static constexpr std::uintptr_t m_wiggleRate        = 0X11BC; // float32
            static constexpr std::uintptr_t m_actualPos         = 0X11C0; // Vector
            static constexpr std::uintptr_t m_actualAngles      = 0X11CC; // QAngle
            static constexpr std::uintptr_t m_poolOrigin        = 0X11D8; // Vector
            static constexpr std::uintptr_t m_waterLevel        = 0X11E4; // float32
            static constexpr std::uintptr_t m_gotUpdate         = 0X11E8; // bool
            static constexpr std::uintptr_t m_x                 = 0X11EC; // float32
            static constexpr std::uintptr_t m_y                 = 0X11F0; // float32
            static constexpr std::uintptr_t m_z                 = 0X11F4; // float32
            static constexpr std::uintptr_t m_angle             = 0X11F8; // float32
            static constexpr std::uintptr_t m_errorHistory      = 0X11FC; // float32[20]
            static constexpr std::uintptr_t m_errorHistoryIndex = 0X124C; // int32
            static constexpr std::uintptr_t m_errorHistoryCount = 0X1250; // int32
            static constexpr std::uintptr_t m_averageError      = 0X1254; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_WeaponFamas : public C_CSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_EnvVolumetricFogController : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_flScattering               = 0X0608; // float32
            static constexpr std::uintptr_t m_TintColor                  = 0X060C; // Color
            static constexpr std::uintptr_t m_flAnisotropy               = 0X0610; // float32
            static constexpr std::uintptr_t m_flFadeSpeed                = 0X0614; // float32
            static constexpr std::uintptr_t m_flDrawDistance             = 0X0618; // float32
            static constexpr std::uintptr_t m_flFadeInStart              = 0X061C; // float32
            static constexpr std::uintptr_t m_flFadeInEnd                = 0X0620; // float32
            static constexpr std::uintptr_t m_flIndirectStrength         = 0X0624; // float32
            static constexpr std::uintptr_t m_nVolumeDepth               = 0X0628; // int32
            static constexpr std::uintptr_t m_fFirstVolumeSliceThickness = 0X062C; // float32
            static constexpr std::uintptr_t m_nIndirectTextureDimX       = 0X0630; // int32
            static constexpr std::uintptr_t m_nIndirectTextureDimY       = 0X0634; // int32
            static constexpr std::uintptr_t m_nIndirectTextureDimZ       = 0X0638; // int32
            static constexpr std::uintptr_t m_vBoxMins                   = 0X063C; // Vector
            static constexpr std::uintptr_t m_vBoxMaxs                   = 0X0648; // Vector
            static constexpr std::uintptr_t m_bActive                    = 0X0654; // bool
            static constexpr std::uintptr_t m_flStartAnisoTime           = 0X0658; // GameTime_t
            static constexpr std::uintptr_t m_flStartScatterTime         = 0X065C; // GameTime_t
            static constexpr std::uintptr_t m_flStartDrawDistanceTime    = 0X0660; // GameTime_t
            static constexpr std::uintptr_t m_flStartAnisotropy          = 0X0664; // float32
            static constexpr std::uintptr_t m_flStartScattering          = 0X0668; // float32
            static constexpr std::uintptr_t m_flStartDrawDistance        = 0X066C; // float32
            static constexpr std::uintptr_t m_flDefaultAnisotropy        = 0X0670; // float32
            static constexpr std::uintptr_t m_flDefaultScattering        = 0X0674; // float32
            static constexpr std::uintptr_t m_flDefaultDrawDistance      = 0X0678; // float32
            static constexpr std::uintptr_t m_bStartDisabled             = 0X067C; // bool
            static constexpr std::uintptr_t m_bEnableIndirect            = 0X067D; // bool
            static constexpr std::uintptr_t m_bIsMaster                  = 0X067E; // bool
            static constexpr std::uintptr_t m_hFogIndirectTexture        = 0X0680; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_nForceRefreshCount         = 0X0688; // int32
            static constexpr std::uintptr_t m_fNoiseSpeed                = 0X068C; // float32
            static constexpr std::uintptr_t m_fNoiseStrength             = 0X0690; // float32
            static constexpr std::uintptr_t m_vNoiseScale                = 0X0694; // Vector
            static constexpr std::uintptr_t m_fWindSpeed                 = 0X06A0; // float32
            static constexpr std::uintptr_t m_vWindDirection             = 0X06A4; // Vector
            static constexpr std::uintptr_t m_bFirstTime                 = 0X06B0; // bool
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
        class C_EnvDetailController : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_flFadeStartDist = 0X0608; // float32
            static constexpr std::uintptr_t m_flFadeEndDist   = 0X060C; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_EnvWindVolume : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_bActive                           = 0X0608; // bool
            static constexpr std::uintptr_t m_vBoxMins                          = 0X060C; // Vector
            static constexpr std::uintptr_t m_vBoxMaxs                          = 0X0618; // Vector
            static constexpr std::uintptr_t m_bStartDisabled                    = 0X0624; // bool
            static constexpr std::uintptr_t m_nShape                            = 0X0628; // int32
            static constexpr std::uintptr_t m_fWindSpeedMultiplier              = 0X062C; // float32
            static constexpr std::uintptr_t m_fWindTurbulenceMultiplier         = 0X0630; // float32
            static constexpr std::uintptr_t m_fWindSpeedVariationMultiplier     = 0X0634; // float32
            static constexpr std::uintptr_t m_fWindDirectionVariationMultiplier = 0X0638; // float32
        };

        // Has Trivial Destructor
        // Local Type Scope
        class CBasePlayerControllerAPI {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CHostageRescueZoneShim : public C_BaseTrigger {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvSoundscape : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_OnPlay                 = 0X0608; // CEntityIOOutput
            static constexpr std::uintptr_t m_flRadius               = 0X0620; // float32
            static constexpr std::uintptr_t m_soundEventName         = 0X0628; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bOverrideWithEvent     = 0X0630; // bool
            static constexpr std::uintptr_t m_soundscapeIndex        = 0X0634; // int32
            static constexpr std::uintptr_t m_soundscapeEntityListId = 0X0638; // int32
            static constexpr std::uintptr_t m_positionNames          = 0X0640; // CUtlSymbolLarge[8]
            static constexpr std::uintptr_t m_hProxySoundscape       = 0X0680; // CHandle<CEnvSoundscape>
            static constexpr std::uintptr_t m_bDisabled              = 0X0684; // bool
            static constexpr std::uintptr_t m_soundscapeName         = 0X0688; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_soundEventHash         = 0X0690; // uint32
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
            static constexpr std::uintptr_t m_hCarriedHostage     = 0X0048; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_hCarriedHostageProp = 0X004C; // CHandle<C_BaseEntity>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_GameRulesProxy : public C_BaseEntity {
        public:
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
        class C_Team : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_aPlayerControllers = 0X0608; // C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
            static constexpr std::uintptr_t m_aPlayers           = 0X0620; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
            static constexpr std::uintptr_t m_iScore             = 0X0638; // int32
            static constexpr std::uintptr_t m_szTeamname         = 0X063C; // char[129]
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PathParticleRope : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_bStartActive          = 0X0610; // bool
            static constexpr std::uintptr_t m_flMaxSimulationTime   = 0X0614; // float32
            static constexpr std::uintptr_t m_iszEffectName         = 0X0618; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_PathNodes_Name        = 0X0620; // CUtlVector<CUtlSymbolLarge>
            static constexpr std::uintptr_t m_flParticleSpacing     = 0X0638; // float32
            static constexpr std::uintptr_t m_flSlack               = 0X063C; // float32
            static constexpr std::uintptr_t m_flRadius              = 0X0640; // float32
            static constexpr std::uintptr_t m_ColorTint             = 0X0644; // Color
            static constexpr std::uintptr_t m_nEffectState          = 0X0648; // int32
            static constexpr std::uintptr_t m_iEffectIndex          = 0X0650; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            static constexpr std::uintptr_t m_PathNodes_Position    = 0X0658; // C_NetworkUtlVectorBase<Vector>
            static constexpr std::uintptr_t m_PathNodes_TangentIn   = 0X0670; // C_NetworkUtlVectorBase<Vector>
            static constexpr std::uintptr_t m_PathNodes_TangentOut  = 0X0688; // C_NetworkUtlVectorBase<Vector>
            static constexpr std::uintptr_t m_PathNodes_Color       = 0X06A0; // C_NetworkUtlVectorBase<Vector>
            static constexpr std::uintptr_t m_PathNodes_PinEnabled  = 0X06B8; // C_NetworkUtlVectorBase<bool>
            static constexpr std::uintptr_t m_PathNodes_RadiusScale = 0X06D0; // C_NetworkUtlVectorBase<float32>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PathParticleRopeAlias_path_particle_rope_clientside : public C_PathParticleRope {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointChildModifier : public C_PointEntity {
        public:
            static constexpr std::uintptr_t m_bOrphanInsteadOfDeletingChildrenOnRemove = 0X0608; // bool
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
        class C_CSWeaponBaseShotgun : public C_CSWeaponBase {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_WeaponNOVA : public C_CSWeaponBaseShotgun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_DEagle : public C_CSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Is Absract
        // Local Type Scope
        class C_LateUpdatedAnimating : public CBaseAnimGraph {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CS2HudModelAddon : public C_LateUpdatedAnimating {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_TriggerMultiple : public C_BaseTrigger {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_ColorCorrectionVolume : public C_BaseTrigger {
        public:
            static constexpr std::uintptr_t m_LastEnterWeight = 0X0F58; // float32
            static constexpr std::uintptr_t m_LastEnterTime   = 0X0F5C; // GameTime_t
            static constexpr std::uintptr_t m_LastExitWeight  = 0X0F60; // float32
            static constexpr std::uintptr_t m_LastExitTime    = 0X0F64; // GameTime_t
            static constexpr std::uintptr_t m_bEnabled        = 0X0F68; // bool
            static constexpr std::uintptr_t m_MaxWeight       = 0X0F6C; // float32
            static constexpr std::uintptr_t m_FadeDuration    = 0X0F70; // float32
            static constexpr std::uintptr_t m_Weight          = 0X0F74; // float32
            static constexpr std::uintptr_t m_lookupFilename  = 0X0F78; // char[512]
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
        class CInfoDynamicShadowHint : public C_PointEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled    = 0X0608; // bool
            static constexpr std::uintptr_t m_flRange      = 0X060C; // float32
            static constexpr std::uintptr_t m_nImportance  = 0X0610; // int32
            static constexpr std::uintptr_t m_nLightChoice = 0X0614; // int32
            static constexpr std::uintptr_t m_hLight       = 0X0618; // CHandle<C_BaseEntity>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoDynamicShadowHintBox : public CInfoDynamicShadowHint {
        public:
            static constexpr std::uintptr_t m_vBoxMins = 0X0620; // Vector
            static constexpr std::uintptr_t m_vBoxMaxs = 0X062C; // Vector
        };

        // Has VTable
        // Local Type Scope
        class CBaseAnimGraphController : public CSkeletonAnimationController {
        public:
            static constexpr std::uintptr_t m_nAnimationAlgorithm                  = 0X0018; // AnimationAlgorithm_t
            static constexpr std::uintptr_t m_animGraphNetworkedVars               = 0X0020; // CAnimGraphNetworkedVariables
            static constexpr std::uintptr_t m_pAnimGraphInstance                   = 0X14B0; // CSmartPtr<IAnimationGraphInstance>
            static constexpr std::uintptr_t m_nNextExternalGraphHandle             = 0X1510; // ExternalAnimGraphHandle_t
            static constexpr std::uintptr_t m_vecSecondarySkeletonNames            = 0X1518; // CUtlVector<CGlobalSymbol>
            static constexpr std::uintptr_t m_vecSecondarySkeletons                = 0X1530; // C_NetworkUtlVectorBase<CHandle<CBaseAnimGraph>>
            static constexpr std::uintptr_t m_nSecondarySkeletonMasterCount        = 0X1548; // int32
            static constexpr std::uintptr_t m_flSoundSyncTime                      = 0X1550; // float32
            static constexpr std::uintptr_t m_nActiveIKChainMask                   = 0X1554; // uint32
            static constexpr std::uintptr_t m_hSequence                            = 0X15A8; // HSequence
            static constexpr std::uintptr_t m_flSeqStartTime                       = 0X15AC; // GameTime_t
            static constexpr std::uintptr_t m_flSeqFixedCycle                      = 0X15B0; // float32
            static constexpr std::uintptr_t m_nAnimLoopMode                        = 0X15B4; // AnimLoopMode_t
            static constexpr std::uintptr_t m_flPlaybackRate                       = 0X15B8; // CNetworkedQuantizedFloat
            static constexpr std::uintptr_t m_nNotifyState                         = 0X15C4; // SequenceFinishNotifyState_t
            static constexpr std::uintptr_t m_bNetworkedAnimationInputsChanged     = 0X15C5; // bool
            static constexpr std::uintptr_t m_bNetworkedSequenceChanged            = 0X15C6; // bool
            static constexpr std::uintptr_t m_bLastUpdateSkipped                   = 0X15C7; // bool
            static constexpr std::uintptr_t m_bSequenceFinished                    = 0X15C8; // bool
            static constexpr std::uintptr_t m_nPrevAnimUpdateTick                  = 0X15CC; // GameTick_t
            static constexpr std::uintptr_t m_hGraphDefinitionAG2                  = 0X1868; // CStrongHandle<InfoForResourceTypeCNmGraphDefinition>
            static constexpr std::uintptr_t m_serializedPoseRecipeAG2              = 0X1870; // C_NetworkUtlVectorBase<uint8>
            static constexpr std::uintptr_t m_nSerializePoseRecipeSizeAG2          = 0X1888; // int32
            static constexpr std::uintptr_t m_nSerializePoseRecipeVersionAG2       = 0X188C; // int32
            static constexpr std::uintptr_t m_nServerGraphInstanceIteration        = 0X1890; // int32
            static constexpr std::uintptr_t m_nServerSerializationContextIteration = 0X1894; // int32
            static constexpr std::uintptr_t m_primaryGraphId                       = 0X1898; // ResourceId_t
            static constexpr std::uintptr_t m_vecExternalGraphIds                  = 0X18A0; // C_NetworkUtlVectorBase<ResourceId_t>
            static constexpr std::uintptr_t m_vecExternalClipIds                   = 0X18B8; // C_NetworkUtlVectorBase<ResourceId_t>
            static constexpr std::uintptr_t m_sAnimGraph2Identifier                = 0X18D0; // CGlobalSymbol
            static constexpr std::uintptr_t m_vecExternalGraphs                    = 0X1AF8; // CUtlVector<ExternalAnimGraph_t>
            static constexpr std::uintptr_t m_nPrevAnimationAlgorithm              = 0X1B31; // AnimationAlgorithm_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_ColorCorrection : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_vecOrigin           = 0X0608; // Vector
            static constexpr std::uintptr_t m_MinFalloff          = 0X0614; // float32
            static constexpr std::uintptr_t m_MaxFalloff          = 0X0618; // float32
            static constexpr std::uintptr_t m_flFadeInDuration    = 0X061C; // float32
            static constexpr std::uintptr_t m_flFadeOutDuration   = 0X0620; // float32
            static constexpr std::uintptr_t m_flMaxWeight         = 0X0624; // float32
            static constexpr std::uintptr_t m_flCurWeight         = 0X0628; // float32
            static constexpr std::uintptr_t m_netlookupFilename   = 0X062C; // char[512]
            static constexpr std::uintptr_t m_bEnabled            = 0X082C; // bool
            static constexpr std::uintptr_t m_bMaster             = 0X082D; // bool
            static constexpr std::uintptr_t m_bClientSide         = 0X082E; // bool
            static constexpr std::uintptr_t m_bExclusive          = 0X082F; // bool
            static constexpr std::uintptr_t m_bEnabledOnClient    = 0X0830; // bool[1]
            static constexpr std::uintptr_t m_flCurWeightOnClient = 0X0834; // float32[1]
            static constexpr std::uintptr_t m_bFadingIn           = 0X0838; // bool[1]
            static constexpr std::uintptr_t m_flFadeStartWeight   = 0X083C; // float32[1]
            static constexpr std::uintptr_t m_flFadeStartTime     = 0X0840; // float32[1]
            static constexpr std::uintptr_t m_flFadeDuration      = 0X0844; // float32[1]
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
        class C_Breakable : public C_BaseModelEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PhysBox : public C_Breakable {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CPlayer_CameraServices : public CPlayerPawnComponent {
        public:
            static constexpr std::uintptr_t m_vecCsViewPunchAngle         = 0X0048; // QAngle
            static constexpr std::uintptr_t m_nCsViewPunchAngleTick       = 0X0054; // GameTick_t
            static constexpr std::uintptr_t m_flCsViewPunchAngleTickRatio = 0X0058; // float32
            static constexpr std::uintptr_t m_PlayerFog                   = 0X0060; // C_fogplayerparams_t
            static constexpr std::uintptr_t m_hColorCorrectionCtrl        = 0X00A0; // CHandle<C_ColorCorrection>
            static constexpr std::uintptr_t m_hViewEntity                 = 0X00A4; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_hTonemapController          = 0X00A8; // CHandle<C_TonemapController2>
            static constexpr std::uintptr_t m_audio                       = 0X00B0; // audioparams_t
            static constexpr std::uintptr_t m_PostProcessingVolumes       = 0X0128; // C_NetworkUtlVectorBase<CHandle<C_PostProcessingVolume>>
            static constexpr std::uintptr_t m_flOldPlayerZ                = 0X0140; // float32
            static constexpr std::uintptr_t m_flOldPlayerViewOffsetZ      = 0X0144; // float32
            static constexpr std::uintptr_t m_CurrentFog                  = 0X0148; // fogparams_t
            static constexpr std::uintptr_t m_hOldFogController           = 0X01B0; // CHandle<C_FogController>
            static constexpr std::uintptr_t m_bOverrideFogColor           = 0X01B4; // bool[5]
            static constexpr std::uintptr_t m_OverrideFogColor            = 0X01B9; // Color[5]
            static constexpr std::uintptr_t m_bOverrideFogStartEnd        = 0X01CD; // bool[5]
            static constexpr std::uintptr_t m_fOverrideFogStart           = 0X01D4; // float32[5]
            static constexpr std::uintptr_t m_fOverrideFogEnd             = 0X01E8; // float32[5]
            static constexpr std::uintptr_t m_hActivePostProcessingVolume = 0X01FC; // CHandle<C_PostProcessingVolume>
            static constexpr std::uintptr_t m_angDemoViewAngles           = 0X0200; // QAngle
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayerBase_CameraServices : public CPlayer_CameraServices {
        public:
            static constexpr std::uintptr_t m_iFOV          = 0X0290; // uint32
            static constexpr std::uintptr_t m_iFOVStart     = 0X0294; // uint32
            static constexpr std::uintptr_t m_flFOVTime     = 0X0298; // GameTime_t
            static constexpr std::uintptr_t m_flFOVRate     = 0X029C; // float32
            static constexpr std::uintptr_t m_hZoomOwner    = 0X02A0; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_flLastShotFOV = 0X02A4; // float32
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_CameraServices : public CCSPlayerBase_CameraServices {
        public:
            static constexpr std::uintptr_t m_flDeathCamTilt         = 0X02A8; // float32
            static constexpr std::uintptr_t m_vClientScopeInaccuracy = 0X02B0; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBaseFilter : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_bNegated = 0X0608; // bool
            static constexpr std::uintptr_t m_OnPass   = 0X0610; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnFail   = 0X0628; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFilterMultiple : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_nFilterType = 0X0640; // filter_t
            static constexpr std::uintptr_t m_iFilterName = 0X0648; // CUtlSymbolLarge[10]
            static constexpr std::uintptr_t m_hFilter     = 0X0698; // CHandle<C_BaseEntity>[10]
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
        class C_SoundEventEntity : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_bStartOnSpawn         = 0X0608; // bool
            static constexpr std::uintptr_t m_bToLocalPlayer        = 0X0609; // bool
            static constexpr std::uintptr_t m_bStopOnNew            = 0X060A; // bool
            static constexpr std::uintptr_t m_bSaveRestore          = 0X060B; // bool
            static constexpr std::uintptr_t m_bSavedIsPlaying       = 0X060C; // bool
            static constexpr std::uintptr_t m_flSavedElapsedTime    = 0X0610; // float32
            static constexpr std::uintptr_t m_iszSourceEntityName   = 0X0618; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszAttachmentName     = 0X0620; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_onGUIDChanged         = 0X0628; // CEntityOutputTemplate<uint64,uint64>
            static constexpr std::uintptr_t m_onSoundFinished       = 0X0648; // CEntityIOOutput
            static constexpr std::uintptr_t m_flClientCullRadius    = 0X0660; // float32
            static constexpr std::uintptr_t m_iszSoundName          = 0X0690; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hSource               = 0X06AC; // CEntityHandle
            static constexpr std::uintptr_t m_nEntityIndexSelection = 0X06B0; // int32
            static constexpr std::uintptr_t m_bClientSideOnly       = 0X0000; // bitfield:1
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_SoundEventEntityAlias_snd_event_point : public C_SoundEventEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_FogController : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_fog               = 0X0608; // fogparams_t
            static constexpr std::uintptr_t m_bUseAngles        = 0X0670; // bool
            static constexpr std::uintptr_t m_iChangedVariables = 0X0674; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_SoundOpvarSetOBBWindEntity : public C_SoundOpvarSetPointBase {
        public:
        };

        // Has VTable
        // Local Type Scope
        class C_BaseCSGrenade : public C_CSWeaponBase {
        public:
            static constexpr std::uintptr_t m_bClientPredictDelete      = 0X1F40; // bool
            static constexpr std::uintptr_t m_bRedraw                   = 0X1F41; // bool
            static constexpr std::uintptr_t m_bIsHeldByPlayer           = 0X1F42; // bool
            static constexpr std::uintptr_t m_bPinPulled                = 0X1F43; // bool
            static constexpr std::uintptr_t m_bJumpThrow                = 0X1F44; // bool
            static constexpr std::uintptr_t m_bThrowAnimating           = 0X1F45; // bool
            static constexpr std::uintptr_t m_fThrowTime                = 0X1F48; // GameTime_t
            static constexpr std::uintptr_t m_flThrowStrength           = 0X1F50; // float32
            static constexpr std::uintptr_t m_fDropTime                 = 0X1FC8; // GameTime_t
            static constexpr std::uintptr_t m_fPinPullTime              = 0X1FCC; // GameTime_t
            static constexpr std::uintptr_t m_bJustPulledPin            = 0X1FD0; // bool
            static constexpr std::uintptr_t m_nNextHoldTick             = 0X1FD4; // GameTick_t
            static constexpr std::uintptr_t m_flNextHoldFrac            = 0X1FD8; // float32
            static constexpr std::uintptr_t m_hSwitchToWeaponAfterThrow = 0X1FDC; // CHandle<C_CSWeaponBase>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_MolotovGrenade : public C_BaseCSGrenade {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_NetTestBaseCombatCharacter : public C_BaseCombatCharacter {
        public:
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
        class C_WeaponM4A1Silencer : public C_CSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Local Type Scope
        class C_EconItemView : public IEconItemInterface {
        public:
            static constexpr std::uintptr_t m_bInventoryImageRgbaRequested        = 0X0060; // bool
            static constexpr std::uintptr_t m_bInventoryImageTriedCache           = 0X0061; // bool
            static constexpr std::uintptr_t m_nInventoryImageRgbaWidth            = 0X0080; // int32
            static constexpr std::uintptr_t m_nInventoryImageRgbaHeight           = 0X0084; // int32
            static constexpr std::uintptr_t m_szCurrentLoadCachedFileName         = 0X0088; // char[260]
            static constexpr std::uintptr_t m_bRestoreCustomMaterialAfterPrecache = 0X01B8; // bool
            static constexpr std::uintptr_t m_iItemDefinitionIndex                = 0X01BA; // uint16
            static constexpr std::uintptr_t m_iEntityQuality                      = 0X01BC; // int32
            static constexpr std::uintptr_t m_iEntityLevel                        = 0X01C0; // uint32
            static constexpr std::uintptr_t m_iItemID                             = 0X01C8; // uint64
            static constexpr std::uintptr_t m_iItemIDHigh                         = 0X01D0; // uint32
            static constexpr std::uintptr_t m_iItemIDLow                          = 0X01D4; // uint32
            static constexpr std::uintptr_t m_iAccountID                          = 0X01D8; // uint32
            static constexpr std::uintptr_t m_iInventoryPosition                  = 0X01DC; // uint32
            static constexpr std::uintptr_t m_bInitialized                        = 0X01E8; // bool
            static constexpr std::uintptr_t m_bDisallowSOC                        = 0X01E9; // bool
            static constexpr std::uintptr_t m_bIsStoreItem                        = 0X01EA; // bool
            static constexpr std::uintptr_t m_bIsTradeItem                        = 0X01EB; // bool
            static constexpr std::uintptr_t m_iEntityQuantity                     = 0X01EC; // int32
            static constexpr std::uintptr_t m_iRarityOverride                     = 0X01F0; // int32
            static constexpr std::uintptr_t m_iQualityOverride                    = 0X01F4; // int32
            static constexpr std::uintptr_t m_iOriginOverride                     = 0X01F8; // int32
            static constexpr std::uintptr_t m_ubStyleOverride                     = 0X01FC; // uint8
            static constexpr std::uintptr_t m_unClientFlags                       = 0X01FD; // uint8
            static constexpr std::uintptr_t m_AttributeList                       = 0X0208; // CAttributeList
            static constexpr std::uintptr_t m_NetworkedDynamicAttributes          = 0X0280; // CAttributeList
            static constexpr std::uintptr_t m_szCustomName                        = 0X02F8; // char[161]
            static constexpr std::uintptr_t m_szCustomNameOverride                = 0X0399; // char[161]
            static constexpr std::uintptr_t m_bInitializedTags                    = 0X0468; // bool
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
        class C_SoundEventPathCornerEntity : public C_SoundEventEntity {
        public:
            static constexpr std::uintptr_t m_vecCornerPairsNetworked = 0X06B8; // C_NetworkUtlVectorBase<SoundeventPathCornerPairNetworked_t>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_InfoVisibilityBox : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_nMode    = 0X060C; // int32
            static constexpr std::uintptr_t m_vBoxSize = 0X0610; // Vector
            static constexpr std::uintptr_t m_bEnabled = 0X061C; // bool
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
        // Construct Allowed
        // Local Type Scope
        class C_BaseGrenade : public C_BaseFlex {
        public:
            static constexpr std::uintptr_t m_bHasWarnedAI     = 0X1350; // bool
            static constexpr std::uintptr_t m_bIsSmokeGrenade  = 0X1351; // bool
            static constexpr std::uintptr_t m_bIsLive          = 0X1352; // bool
            static constexpr std::uintptr_t m_DmgRadius        = 0X1354; // float32
            static constexpr std::uintptr_t m_flDetonateTime   = 0X1358; // GameTime_t
            static constexpr std::uintptr_t m_flWarnAITime     = 0X135C; // float32
            static constexpr std::uintptr_t m_flDamage         = 0X1360; // float32
            static constexpr std::uintptr_t m_iszBounceSound   = 0X1368; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_ExplosionSound   = 0X1370; // CUtlString
            static constexpr std::uintptr_t m_hThrower         = 0X137C; // CHandle<C_CSPlayerPawn>
            static constexpr std::uintptr_t m_flNextAttack     = 0X1394; // GameTime_t
            static constexpr std::uintptr_t m_hOriginalThrower = 0X1398; // CHandle<C_CSPlayerPawn>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_BaseCSGrenadeProjectile : public C_BaseGrenade {
        public:
            static constexpr std::uintptr_t m_vInitialPosition                     = 0X13A0; // Vector
            static constexpr std::uintptr_t m_vInitialVelocity                     = 0X13AC; // Vector
            static constexpr std::uintptr_t m_nBounces                             = 0X13B8; // int32
            static constexpr std::uintptr_t m_nExplodeEffectIndex                  = 0X13C0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            static constexpr std::uintptr_t m_nExplodeEffectTickBegin              = 0X13C8; // int32
            static constexpr std::uintptr_t m_vecExplodeEffectOrigin               = 0X13CC; // Vector
            static constexpr std::uintptr_t m_flSpawnTime                          = 0X13D8; // GameTime_t
            static constexpr std::uintptr_t vecLastTrailLinePos                    = 0X13DC; // Vector
            static constexpr std::uintptr_t flNextTrailLineTime                    = 0X13E8; // GameTime_t
            static constexpr std::uintptr_t m_bExplodeEffectBegan                  = 0X13EC; // bool
            static constexpr std::uintptr_t m_bCanCreateGrenadeTrail               = 0X13ED; // bool
            static constexpr std::uintptr_t m_nSnapshotTrajectoryEffectIndex       = 0X13F0; // ParticleIndex_t
            static constexpr std::uintptr_t m_hSnapshotTrajectoryParticleSnapshot  = 0X13F8; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            static constexpr std::uintptr_t m_arrTrajectoryTrailPoints             = 0X1400; // CUtlVector<Vector>
            static constexpr std::uintptr_t m_arrTrajectoryTrailPointCreationTimes = 0X1418; // CUtlVector<float32>
            static constexpr std::uintptr_t m_flTrajectoryTrailEffectCreationTime  = 0X1430; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_DecoyProjectile : public C_BaseCSGrenadeProjectile {
        public:
            static constexpr std::uintptr_t m_nDecoyShotTick                = 0X1438; // int32
            static constexpr std::uintptr_t m_nClientLastKnownDecoyShotTick = 0X143C; // int32
            static constexpr std::uintptr_t m_flTimeParticleEffectSpawn     = 0X1460; // GameTime_t
        };

        // Has VTable
        // Local Type Scope
        class CAttributeManager {
        public:
            static constexpr std::uintptr_t m_Providers               = 0X0008; // CUtlVector<CHandle<C_BaseEntity>>
            static constexpr std::uintptr_t m_iReapplyProvisionParity = 0X0020; // int32
            static constexpr std::uintptr_t m_hOuter                  = 0X0024; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_bPreventLoopback        = 0X0028; // bool
            static constexpr std::uintptr_t m_ProviderType            = 0X002C; // attributeprovidertypes_t
            static constexpr std::uintptr_t m_CachedResults           = 0X0030; // CUtlVector<CAttributeManager::cached_attribute_float_t>
        };

        // Has VTable
        // Local Type Scope
        class C_AttributeContainer : public CAttributeManager {
        public:
            static constexpr std::uintptr_t m_Item                                 = 0X0050; // C_EconItemView
            static constexpr std::uintptr_t m_iExternalItemProviderRegisteredToken = 0X04C0; // int32
            static constexpr std::uintptr_t m_ullRegisteredAsItemID                = 0X04C8; // uint64
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
        // Construct Allowed
        // Local Type Scope
        class C_TonemapController2 : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_flAutoExposureMin             = 0X0608; // float32
            static constexpr std::uintptr_t m_flAutoExposureMax             = 0X060C; // float32
            static constexpr std::uintptr_t m_flExposureAdaptationSpeedUp   = 0X0610; // float32
            static constexpr std::uintptr_t m_flExposureAdaptationSpeedDown = 0X0614; // float32
            static constexpr std::uintptr_t m_flTonemapEVSmoothingRange     = 0X0618; // float32
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
        class C_WeaponMag7 : public C_CSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Local Type Scope
        struct WeaponPurchaseCount_t {
        public:
            static constexpr std::uintptr_t m_nItemDefIndex = 0X0030; // uint16
            static constexpr std::uintptr_t m_nCount        = 0X0032; // uint16
        };

        // Has VTable
        // Is Absract
        // Local Type Scope
        class CBasePulseGraphInstance {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class FilterHealth : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_bAdrenalineActive = 0X0640; // bool
            static constexpr std::uintptr_t m_iHealthMin        = 0X0644; // int32
            static constexpr std::uintptr_t m_iHealthMax        = 0X0648; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PointClientUIHUD : public C_BaseClientUIEntity {
        public:
            static constexpr std::uintptr_t m_bCheckCSSClasses                    = 0X0EC0; // bool
            static constexpr std::uintptr_t m_bIgnoreInput                        = 0X1038; // bool
            static constexpr std::uintptr_t m_flWidth                             = 0X103C; // float32
            static constexpr std::uintptr_t m_flHeight                            = 0X1040; // float32
            static constexpr std::uintptr_t m_flDPI                               = 0X1044; // float32
            static constexpr std::uintptr_t m_flInteractDistance                  = 0X1048; // float32
            static constexpr std::uintptr_t m_flDepthOffset                       = 0X104C; // float32
            static constexpr std::uintptr_t m_unOwnerContext                      = 0X1050; // uint32
            static constexpr std::uintptr_t m_unHorizontalAlign                   = 0X1054; // uint32
            static constexpr std::uintptr_t m_unVerticalAlign                     = 0X1058; // uint32
            static constexpr std::uintptr_t m_unOrientation                       = 0X105C; // uint32
            static constexpr std::uintptr_t m_bAllowInteractionFromAllSceneWorlds = 0X1060; // bool
            static constexpr std::uintptr_t m_vecCSSClasses                       = 0X1068; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
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

        // Has Trivial Destructor
        // Local Type Scope
        class CPathSimpleAPI {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_InfoLadderDismount : public C_BaseEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PointCommentaryNode : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_bActive                 = 0X1180; // bool
            static constexpr std::uintptr_t m_bWasActive              = 0X1181; // bool
            static constexpr std::uintptr_t m_flEndTime               = 0X1184; // GameTime_t
            static constexpr std::uintptr_t m_flStartTime             = 0X1188; // GameTime_t
            static constexpr std::uintptr_t m_flStartTimeInCommentary = 0X118C; // float32
            static constexpr std::uintptr_t m_iszCommentaryFile       = 0X1190; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszTitle                = 0X1198; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszSpeakers             = 0X11A0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iNodeNumber             = 0X11A8; // int32
            static constexpr std::uintptr_t m_iNodeNumberMax          = 0X11AC; // int32
            static constexpr std::uintptr_t m_bListenedTo             = 0X11B0; // bool
            static constexpr std::uintptr_t m_sndCommentary           = 0X11B8; // CSoundPatch*
            static constexpr std::uintptr_t m_hViewPosition           = 0X11C0; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_bRestartAfterRestore    = 0X11C4; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_Sprite : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_hSpriteMaterial       = 0X0E88; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_hAttachedToEntity     = 0X0E90; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_nAttachment           = 0X0E94; // AttachmentHandle_t
            static constexpr std::uintptr_t m_flSpriteFramerate     = 0X0E98; // float32
            static constexpr std::uintptr_t m_flFrame               = 0X0E9C; // float32
            static constexpr std::uintptr_t m_flDieTime             = 0X0EA0; // GameTime_t
            static constexpr std::uintptr_t m_nBrightness           = 0X0EB0; // uint32
            static constexpr std::uintptr_t m_flBrightnessDuration  = 0X0EB4; // float32
            static constexpr std::uintptr_t m_flSpriteScale         = 0X0EB8; // float32
            static constexpr std::uintptr_t m_flScaleDuration       = 0X0EBC; // float32
            static constexpr std::uintptr_t m_bWorldSpaceScale      = 0X0EC0; // bool
            static constexpr std::uintptr_t m_flGlowProxySize       = 0X0EC4; // float32
            static constexpr std::uintptr_t m_flHDRColorScale       = 0X0EC8; // float32
            static constexpr std::uintptr_t m_flLastTime            = 0X0ECC; // GameTime_t
            static constexpr std::uintptr_t m_flMaxFrame            = 0X0ED0; // float32
            static constexpr std::uintptr_t m_flStartScale          = 0X0ED4; // float32
            static constexpr std::uintptr_t m_flDestScale           = 0X0ED8; // float32
            static constexpr std::uintptr_t m_flScaleTimeStart      = 0X0EDC; // GameTime_t
            static constexpr std::uintptr_t m_nStartBrightness      = 0X0EE0; // int32
            static constexpr std::uintptr_t m_nDestBrightness       = 0X0EE4; // int32
            static constexpr std::uintptr_t m_flBrightnessTimeStart = 0X0EE8; // GameTime_t
            static constexpr std::uintptr_t m_nSpriteWidth          = 0X0EF8; // int32
            static constexpr std::uintptr_t m_nSpriteHeight         = 0X0EFC; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSpriteOriented : public C_Sprite {
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
            static constexpr std::uintptr_t m_vecPanelVertices       = 0X0040; // C_NetworkUtlVectorBase<Vector2D>
            static constexpr std::uintptr_t m_vInitialPanelVertices  = 0X0058; // C_NetworkUtlVectorBase<Vector4D>
            static constexpr std::uintptr_t m_flGlassHalfThickness   = 0X0070; // float32
            static constexpr std::uintptr_t m_bHasParent             = 0X0074; // bool
            static constexpr std::uintptr_t m_bParentFrozen          = 0X0075; // bool
            static constexpr std::uintptr_t m_SurfacePropStringToken = 0X0078; // CUtlStringToken
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CS2WeaponModuleBase : public CBaseAnimGraph {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_KeychainModule : public C_CS2WeaponModuleBase {
        public:
            static constexpr std::uintptr_t m_nKeychainDefID = 0X1170; // uint32
            static constexpr std::uintptr_t m_nKeychainSeed  = 0X1174; // uint32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncWater : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_BuoyancyHelper = 0X0E88; // CBuoyancyHelper
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_GlowServices : public CPlayerPawnComponent {
        public:
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
        class C_Flashbang : public C_BaseCSGrenade {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PointClientUIWorldTextPanel : public C_PointClientUIWorldPanel {
        public:
            static constexpr std::uintptr_t m_messageText = 0X10E0; // char[512]
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
            static constexpr std::uintptr_t m_flWaterJumpTime = 0X0048; // float32
            static constexpr std::uintptr_t m_vecWaterJumpVel = 0X004C; // Vector
            static constexpr std::uintptr_t m_flSwimSoundTime = 0X0058; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSObserverPawn : public C_CSPlayerPawnBase {
        public:
            static constexpr std::uintptr_t m_hDetectParentChange = 0X1650; // CEntityHandle
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
        class C_FuncLadder : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_vecLadderDir                 = 0X0E88; // Vector
            static constexpr std::uintptr_t m_Dismounts                    = 0X0E98; // CUtlVector<CHandle<C_InfoLadderDismount>>
            static constexpr std::uintptr_t m_vecLocalTop                  = 0X0EB0; // Vector
            static constexpr std::uintptr_t m_vecPlayerMountPositionTop    = 0X0EBC; // VectorWS
            static constexpr std::uintptr_t m_vecPlayerMountPositionBottom = 0X0EC8; // VectorWS
            static constexpr std::uintptr_t m_flAutoRideSpeed              = 0X0ED4; // float32
            static constexpr std::uintptr_t m_bDisabled                    = 0X0ED8; // bool
            static constexpr std::uintptr_t m_bFakeLadder                  = 0X0ED9; // bool
            static constexpr std::uintptr_t m_bHasSlack                    = 0X0EDA; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_WeaponMP5SD : public C_CSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_World : public C_BaseModelEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSGO_TeamSelectCounterTerroristPosition : public C_CSGO_TeamSelectCharacterPosition {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_WeaponGalilAR : public C_CSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Is Absract
        // Local Type Scope
        class C_GameRules {
        public:
            static constexpr std::uintptr_t __m_pChainEntity    = 0X0008; // CNetworkVarChainer
            static constexpr std::uintptr_t m_nTotalPausedTicks = 0X0030; // int32
            static constexpr std::uintptr_t m_nPauseStartTick   = 0X0034; // int32
            static constexpr std::uintptr_t m_bGamePaused       = 0X0038; // bool
        };

        // Has VTable
        // Local Type Scope
        class C_MultiplayRules : public C_GameRules {
        public:
        };

        // Has VTable
        // Local Type Scope
        class C_TeamplayRules : public C_MultiplayRules {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_WeaponSG556 : public C_CSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSPlayerPawn : public C_CSPlayerPawnBase {
        public:
            static constexpr std::uintptr_t m_pBulletServices                   = 0X1660; // CCSPlayer_BulletServices*
            static constexpr std::uintptr_t m_pHostageServices                  = 0X1668; // CCSPlayer_HostageServices*
            static constexpr std::uintptr_t m_pBuyServices                      = 0X1670; // CCSPlayer_BuyServices*
            static constexpr std::uintptr_t m_pGlowServices                     = 0X1678; // CCSPlayer_GlowServices*
            static constexpr std::uintptr_t m_pActionTrackingServices           = 0X1680; // CCSPlayer_ActionTrackingServices*
            static constexpr std::uintptr_t m_pDamageReactServices              = 0X1688; // CCSPlayer_DamageReactServices*
            static constexpr std::uintptr_t m_flHealthShotBoostExpirationTime   = 0X1690; // GameTime_t
            static constexpr std::uintptr_t m_flLastFiredWeaponTime             = 0X1694; // GameTime_t
            static constexpr std::uintptr_t m_bHasFemaleVoice                   = 0X1698; // bool
            static constexpr std::uintptr_t m_flLandingTimeSeconds              = 0X169C; // float32
            static constexpr std::uintptr_t m_flOldFallVelocity                 = 0X16A0; // float32
            static constexpr std::uintptr_t m_szLastPlaceName                   = 0X16A4; // char[18]
            static constexpr std::uintptr_t m_bPrevDefuser                      = 0X16B6; // bool
            static constexpr std::uintptr_t m_bPrevHelmet                       = 0X16B7; // bool
            static constexpr std::uintptr_t m_nPrevArmorVal                     = 0X16B8; // int32
            static constexpr std::uintptr_t m_nPrevGrenadeAmmoCount             = 0X16BC; // int32
            static constexpr std::uintptr_t m_unPreviousWeaponHash              = 0X16C0; // uint32
            static constexpr std::uintptr_t m_unWeaponHash                      = 0X16C4; // uint32
            static constexpr std::uintptr_t m_bInBuyZone                        = 0X16C8; // bool
            static constexpr std::uintptr_t m_bPreviouslyInBuyZone              = 0X16C9; // bool
            static constexpr std::uintptr_t m_aimPunchAngle                     = 0X16CC; // QAngle
            static constexpr std::uintptr_t m_aimPunchAngleVel                  = 0X16D8; // QAngle
            static constexpr std::uintptr_t m_aimPunchTickBase                  = 0X16E4; // GameTick_t
            static constexpr std::uintptr_t m_aimPunchTickFraction              = 0X16E8; // float32
            static constexpr std::uintptr_t m_bInLanding                        = 0X1710; // bool
            static constexpr std::uintptr_t m_flLandingStartTime                = 0X1714; // float32
            static constexpr std::uintptr_t m_bInHostageRescueZone              = 0X1718; // bool
            static constexpr std::uintptr_t m_bInBombZone                       = 0X1719; // bool
            static constexpr std::uintptr_t m_bIsBuyMenuOpen                    = 0X171A; // bool
            static constexpr std::uintptr_t m_flTimeOfLastInjury                = 0X171C; // GameTime_t
            static constexpr std::uintptr_t m_flNextSprayDecalTime              = 0X1720; // GameTime_t
            static constexpr std::uintptr_t m_iRetakesOffering                  = 0X1878; // int32
            static constexpr std::uintptr_t m_iRetakesOfferingCard              = 0X187C; // int32
            static constexpr std::uintptr_t m_bRetakesHasDefuseKit              = 0X1880; // bool
            static constexpr std::uintptr_t m_bRetakesMVPLastRound              = 0X1881; // bool
            static constexpr std::uintptr_t m_iRetakesMVPBoostItem              = 0X1884; // int32
            static constexpr std::uintptr_t m_RetakesMVPBoostExtraUtility       = 0X1888; // loadout_slot_t
            static constexpr std::uintptr_t m_bNeedToReApplyGloves              = 0X188D; // bool
            static constexpr std::uintptr_t m_EconGloves                        = 0X1890; // C_EconItemView
            static constexpr std::uintptr_t m_nEconGlovesChanged                = 0X1D00; // uint8
            static constexpr std::uintptr_t m_bMustSyncRagdollState             = 0X1D01; // bool
            static constexpr std::uintptr_t m_nRagdollDamageBone                = 0X1D04; // int32
            static constexpr std::uintptr_t m_vRagdollDamageForce               = 0X1D08; // Vector
            static constexpr std::uintptr_t m_vRagdollDamagePosition            = 0X1D14; // Vector
            static constexpr std::uintptr_t m_szRagdollDamageWeaponName         = 0X1D20; // char[64]
            static constexpr std::uintptr_t m_bRagdollDamageHeadshot            = 0X1D60; // bool
            static constexpr std::uintptr_t m_vRagdollServerOrigin              = 0X1D64; // Vector
            static constexpr std::uintptr_t m_lastLandTime                      = 0X23E0; // GameTime_t
            static constexpr std::uintptr_t m_bOnGroundLastTick                 = 0X23E4; // bool
            static constexpr std::uintptr_t m_hHudModelArms                     = 0X2400; // CHandle<C_CS2HudModelArms>
            static constexpr std::uintptr_t m_qDeathEyeAngles                   = 0X2404; // QAngle
            static constexpr std::uintptr_t m_bSkipOneHeadConstraintUpdate      = 0X2410; // bool
            static constexpr std::uintptr_t m_bLeftHanded                       = 0X2411; // bool
            static constexpr std::uintptr_t m_fSwitchedHandednessTime           = 0X2414; // GameTime_t
            static constexpr std::uintptr_t m_flViewmodelOffsetX                = 0X2418; // float32
            static constexpr std::uintptr_t m_flViewmodelOffsetY                = 0X241C; // float32
            static constexpr std::uintptr_t m_flViewmodelOffsetZ                = 0X2420; // float32
            static constexpr std::uintptr_t m_flViewmodelFOV                    = 0X2424; // float32
            static constexpr std::uintptr_t m_vecPlayerPatchEconIndices         = 0X2428; // uint32[5]
            static constexpr std::uintptr_t m_GunGameImmunityColor              = 0X2460; // Color
            static constexpr std::uintptr_t m_vecBulletHitModels                = 0X24B0; // CUtlVector<C_BulletHitModel*>
            static constexpr std::uintptr_t m_bIsWalking                        = 0X24C8; // bool
            static constexpr std::uintptr_t m_thirdPersonHeading                = 0X24D0; // QAngle
            static constexpr std::uintptr_t m_flSlopeDropOffset                 = 0X2560; // float32
            static constexpr std::uintptr_t m_flSlopeDropHeight                 = 0X25D8; // float32
            static constexpr std::uintptr_t m_vHeadConstraintOffset             = 0X2650; // Vector
            static constexpr std::uintptr_t m_entitySpottedState                = 0X26E0; // EntitySpottedState_t
            static constexpr std::uintptr_t m_bIsScoped                         = 0X26F8; // bool
            static constexpr std::uintptr_t m_bResumeZoom                       = 0X26F9; // bool
            static constexpr std::uintptr_t m_bIsDefusing                       = 0X26FA; // bool
            static constexpr std::uintptr_t m_bIsGrabbingHostage                = 0X26FB; // bool
            static constexpr std::uintptr_t m_iBlockingUseActionInProgress      = 0X26FC; // CSPlayerBlockingUseAction_t
            static constexpr std::uintptr_t m_flEmitSoundTime                   = 0X2700; // GameTime_t
            static constexpr std::uintptr_t m_bInNoDefuseArea                   = 0X2704; // bool
            static constexpr std::uintptr_t m_nWhichBombZone                    = 0X2708; // int32
            static constexpr std::uintptr_t m_iShotsFired                       = 0X270C; // int32
            static constexpr std::uintptr_t m_flFlinchStack                     = 0X2710; // float32
            static constexpr std::uintptr_t m_flVelocityModifier                = 0X2714; // float32
            static constexpr std::uintptr_t m_flHitHeading                      = 0X2718; // float32
            static constexpr std::uintptr_t m_nHitBodyPart                      = 0X271C; // int32
            static constexpr std::uintptr_t m_bWaitForNoAttack                  = 0X2720; // bool
            static constexpr std::uintptr_t m_ignoreLadderJumpTime              = 0X2724; // float32
            static constexpr std::uintptr_t m_bKilledByHeadshot                 = 0X2729; // bool
            static constexpr std::uintptr_t m_ArmorValue                        = 0X272C; // int32
            static constexpr std::uintptr_t m_unCurrentEquipmentValue           = 0X2730; // uint16
            static constexpr std::uintptr_t m_unRoundStartEquipmentValue        = 0X2732; // uint16
            static constexpr std::uintptr_t m_unFreezetimeEndEquipmentValue     = 0X2734; // uint16
            static constexpr std::uintptr_t m_nLastKillerIndex                  = 0X2738; // CEntityIndex
            static constexpr std::uintptr_t m_bOldIsScoped                      = 0X273C; // bool
            static constexpr std::uintptr_t m_bHasDeathInfo                     = 0X273D; // bool
            static constexpr std::uintptr_t m_flDeathInfoTime                   = 0X2740; // float32
            static constexpr std::uintptr_t m_vecDeathInfoOrigin                = 0X2744; // Vector
            static constexpr std::uintptr_t m_grenadeParameterStashTime         = 0X2754; // GameTime_t
            static constexpr std::uintptr_t m_bGrenadeParametersStashed         = 0X2758; // bool
            static constexpr std::uintptr_t m_angStashedShootAngles             = 0X275C; // QAngle
            static constexpr std::uintptr_t m_vecStashedGrenadeThrowPosition    = 0X2768; // Vector
            static constexpr std::uintptr_t m_vecStashedVelocity                = 0X2774; // Vector
            static constexpr std::uintptr_t m_angShootAngleHistory              = 0X2780; // QAngle[2]
            static constexpr std::uintptr_t m_vecThrowPositionHistory           = 0X2798; // Vector[2]
            static constexpr std::uintptr_t m_vecVelocityHistory                = 0X27B0; // Vector[2]
            static constexpr std::uintptr_t m_PredictedDamageTags               = 0X27C8; // C_UtlVectorEmbeddedNetworkVar<PredictedDamageTag_t>
            static constexpr std::uintptr_t m_nPrevHighestReceivedDamageTagTick = 0X2830; // GameTick_t
            static constexpr std::uintptr_t m_nHighestAppliedDamageTagTick      = 0X2834; // int32
            static constexpr std::uintptr_t m_bShouldAutobuyDMWeapons           = 0X3D6C; // bool
            static constexpr std::uintptr_t m_fImmuneToGunGameDamageTime        = 0X3D70; // GameTime_t
            static constexpr std::uintptr_t m_bGunGameImmunity                  = 0X3D74; // bool
            static constexpr std::uintptr_t m_fImmuneToGunGameDamageTimeLast    = 0X3D78; // GameTime_t
            static constexpr std::uintptr_t m_fMolotovDamageTime                = 0X3D7C; // float32
            static constexpr std::uintptr_t m_vecLastAliveLocalVelocity         = 0X3D84; // Vector
            static constexpr std::uintptr_t m_fRenderingClipPlane               = 0X3D90; // float32[4]
            static constexpr std::uintptr_t m_nLastClipPlaneSetupFrame          = 0X3DA0; // int32
            static constexpr std::uintptr_t m_vecLastClipCameraPos              = 0X3DA4; // Vector
            static constexpr std::uintptr_t m_vecLastClipCameraForward          = 0X3DB0; // Vector
            static constexpr std::uintptr_t m_bClipHitStaticWorld               = 0X3DBC; // bool
            static constexpr std::uintptr_t m_bCachedPlaneIsValid               = 0X3DBD; // bool
            static constexpr std::uintptr_t m_pClippingWeapon                   = 0X3DC0; // C_CSWeaponBase*
            static constexpr std::uintptr_t m_nPlayerInfernoBodyFx              = 0X3DC8; // ParticleIndex_t
            static constexpr std::uintptr_t m_angEyeAngles                      = 0X3DD0; // QAngle
            static constexpr std::uintptr_t m_arrOldEyeAnglesTimes              = 0X3E60; // GameTime_t[4]
            static constexpr std::uintptr_t m_arrOldEyeAngles                   = 0X3E70; // QAngle[4]
            static constexpr std::uintptr_t m_angEyeAnglesVelocity              = 0X3EA0; // QAngle
            static constexpr std::uintptr_t m_iIDEntIndex                       = 0X3EAC; // CEntityIndex
            static constexpr std::uintptr_t m_delayTargetIDTimer                = 0X3EB0; // CountdownTimer
            static constexpr std::uintptr_t m_iTargetItemEntIdx                 = 0X3EC8; // CEntityIndex
            static constexpr std::uintptr_t m_iOldIDEntIndex                    = 0X3ECC; // CEntityIndex
            static constexpr std::uintptr_t m_holdTargetIDTimer                 = 0X3ED0; // CountdownTimer
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSGO_TeamIntroTerroristPosition : public C_CSGO_TeamIntroCharacterPosition {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_Hostage : public C_BaseCombatCharacter {
        public:
            static constexpr std::uintptr_t m_entitySpottedState    = 0X13D8; // EntitySpottedState_t
            static constexpr std::uintptr_t m_leader                = 0X13F0; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_reuseTimer            = 0X13F8; // CountdownTimer
            static constexpr std::uintptr_t m_vel                   = 0X1410; // Vector
            static constexpr std::uintptr_t m_isRescued             = 0X141C; // bool
            static constexpr std::uintptr_t m_jumpedThisFrame       = 0X141D; // bool
            static constexpr std::uintptr_t m_nHostageState         = 0X1420; // int32
            static constexpr std::uintptr_t m_bHandsHaveBeenCut     = 0X1424; // bool
            static constexpr std::uintptr_t m_hHostageGrabber       = 0X1428; // CHandle<C_CSPlayerPawn>
            static constexpr std::uintptr_t m_fLastGrabTime         = 0X142C; // GameTime_t
            static constexpr std::uintptr_t m_vecGrabbedPos         = 0X1430; // Vector
            static constexpr std::uintptr_t m_flRescueStartTime     = 0X143C; // GameTime_t
            static constexpr std::uintptr_t m_flGrabSuccessTime     = 0X1440; // GameTime_t
            static constexpr std::uintptr_t m_flDropStartTime       = 0X1444; // GameTime_t
            static constexpr std::uintptr_t m_flDeadOrRescuedTime   = 0X1448; // GameTime_t
            static constexpr std::uintptr_t m_blinkTimer            = 0X1450; // CountdownTimer
            static constexpr std::uintptr_t m_lookAt                = 0X1468; // Vector
            static constexpr std::uintptr_t m_lookAroundTimer       = 0X1478; // CountdownTimer
            static constexpr std::uintptr_t m_isInit                = 0X1490; // bool
            static constexpr std::uintptr_t m_eyeAttachment         = 0X1491; // AttachmentHandle_t
            static constexpr std::uintptr_t m_chestAttachment       = 0X1492; // AttachmentHandle_t
            static constexpr std::uintptr_t m_pPredictionOwner      = 0X1498; // CBasePlayerController*
            static constexpr std::uintptr_t m_fNewestAlphaThinkTime = 0X14A0; // GameTime_t
        };

        // Has VTable
        // Has Trivial Destructor
        // Local Type Scope
        struct C_fogplayerparams_t {
        public:
            static constexpr std::uintptr_t m_hCtrl              = 0X0008; // CHandle<C_FogController>
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
            static constexpr std::uintptr_t m_vecWrappedLocalOrigin                     = 0X00EC; // Vector
            static constexpr std::uintptr_t m_angWrappedLocalRotation                   = 0X00F8; // QAngle
            static constexpr std::uintptr_t m_flWrappedScale                            = 0X0104; // float32
            static constexpr std::uintptr_t m_nParentAttachmentOrBone                   = 0X0108; // int16
            static constexpr std::uintptr_t m_bDebugAbsOriginChanges                    = 0X010A; // bool
            static constexpr std::uintptr_t m_bDormant                                  = 0X010B; // bool
            static constexpr std::uintptr_t m_bForceParentToBeNetworked                 = 0X010C; // bool
            static constexpr std::uintptr_t m_bDirtyHierarchy                           = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bDirtyBoneMergeInfo                       = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bNetworkedPositionChanged                 = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bNetworkedAnglesChanged                   = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bNetworkedScaleChanged                    = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bWillBeCallingPostDataUpdate              = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bBoneMergeFlex                            = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_nLatchAbsOrigin                           = 0X0000; // bitfield:2
            static constexpr std::uintptr_t m_bDirtyBoneMergeBoneToRoot                 = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_nHierarchicalDepth                        = 0X010F; // uint8
            static constexpr std::uintptr_t m_nHierarchyType                            = 0X0110; // uint8
            static constexpr std::uintptr_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0X0111; // uint8
            static constexpr std::uintptr_t m_name                                      = 0X0114; // CUtlStringToken
            static constexpr std::uintptr_t m_hierarchyAttachName                       = 0X0128; // CUtlStringToken
            static constexpr std::uintptr_t m_flZOffset                                 = 0X012C; // float32
            static constexpr std::uintptr_t m_flClientLocalScale                        = 0X0130; // float32
            static constexpr std::uintptr_t m_vRenderOrigin                             = 0X0134; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PlayerVisibility : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_flVisibilityStrength      = 0X0608; // float32
            static constexpr std::uintptr_t m_flFogDistanceMultiplier   = 0X060C; // float32
            static constexpr std::uintptr_t m_flFogMaxDensityMultiplier = 0X0610; // float32
            static constexpr std::uintptr_t m_flFadeTime                = 0X0614; // float32
            static constexpr std::uintptr_t m_bStartDisabled            = 0X0618; // bool
            static constexpr std::uintptr_t m_bIsEnabled                = 0X0619; // bool
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
        class CRagdollManager : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_iCurrentMaxRagdollCount = 0X0608; // int8
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_HEGrenade : public C_BaseCSGrenade {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_EnvSky : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_hSkyMaterial             = 0X0E88; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_hSkyMaterialLightingOnly = 0X0E90; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_bStartDisabled           = 0X0E98; // bool
            static constexpr std::uintptr_t m_vTintColor               = 0X0E99; // Color
            static constexpr std::uintptr_t m_vTintColorLightingOnly   = 0X0E9D; // Color
            static constexpr std::uintptr_t m_flBrightnessScale        = 0X0EA4; // float32
            static constexpr std::uintptr_t m_nFogType                 = 0X0EA8; // int32
            static constexpr std::uintptr_t m_flFogMinStart            = 0X0EAC; // float32
            static constexpr std::uintptr_t m_flFogMinEnd              = 0X0EB0; // float32
            static constexpr std::uintptr_t m_flFogMaxStart            = 0X0EB4; // float32
            static constexpr std::uintptr_t m_flFogMaxEnd              = 0X0EB8; // float32
            static constexpr std::uintptr_t m_bEnabled                 = 0X0EBC; // bool
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
        class C_EnvWindController : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_EnvWindShared       = 0X0608; // C_EnvWindShared
            static constexpr std::uintptr_t m_fDirectionVariation = 0X0700; // float32
            static constexpr std::uintptr_t m_fSpeedVariation     = 0X0704; // float32
            static constexpr std::uintptr_t m_fTurbulence         = 0X0708; // float32
            static constexpr std::uintptr_t m_fVolumeHalfExtentXY = 0X070C; // float32
            static constexpr std::uintptr_t m_fVolumeHalfExtentZ  = 0X0710; // float32
            static constexpr std::uintptr_t m_nVolumeResolutionXY = 0X0714; // int32
            static constexpr std::uintptr_t m_nVolumeResolutionZ  = 0X0718; // int32
            static constexpr std::uintptr_t m_nClipmapLevels      = 0X071C; // int32
            static constexpr std::uintptr_t m_bIsMaster           = 0X0720; // bool
            static constexpr std::uintptr_t m_bFirstTime          = 0X0721; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_WeaponMAC10 : public C_CSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_ModelPointEntity : public C_BaseModelEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PointWorldText : public C_ModelPointEntity {
        public:
            static constexpr std::uintptr_t m_bForceRecreateNextUpdate = 0X0E90; // bool
            static constexpr std::uintptr_t m_nTextWidthPx             = 0X0EA8; // int32
            static constexpr std::uintptr_t m_nTextHeightPx            = 0X0EAC; // int32
            static constexpr std::uintptr_t m_messageText              = 0X0EB0; // char[512]
            static constexpr std::uintptr_t m_FontName                 = 0X10B0; // char[64]
            static constexpr std::uintptr_t m_BackgroundMaterialName   = 0X10F0; // char[64]
            static constexpr std::uintptr_t m_bEnabled                 = 0X1130; // bool
            static constexpr std::uintptr_t m_bFullbright              = 0X1131; // bool
            static constexpr std::uintptr_t m_flWorldUnitsPerPx        = 0X1134; // float32
            static constexpr std::uintptr_t m_flFontSize               = 0X1138; // float32
            static constexpr std::uintptr_t m_flDepthOffset            = 0X113C; // float32
            static constexpr std::uintptr_t m_bDrawBackground          = 0X1140; // bool
            static constexpr std::uintptr_t m_flBackgroundBorderWidth  = 0X1144; // float32
            static constexpr std::uintptr_t m_flBackgroundBorderHeight = 0X1148; // float32
            static constexpr std::uintptr_t m_flBackgroundWorldToUV    = 0X114C; // float32
            static constexpr std::uintptr_t m_Color                    = 0X1150; // Color
            static constexpr std::uintptr_t m_nJustifyHorizontal       = 0X1154; // PointWorldTextJustifyHorizontal_t
            static constexpr std::uintptr_t m_nJustifyVertical         = 0X1158; // PointWorldTextJustifyVertical_t
            static constexpr std::uintptr_t m_nReorientMode            = 0X115C; // PointWorldTextReorientMode_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_RopeKeyframe : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_LinksTouchingSomething            = 0X0E90; // CBitVec<10>
            static constexpr std::uintptr_t m_nLinksTouchingSomething           = 0X0E94; // int32
            static constexpr std::uintptr_t m_bApplyWind                        = 0X0E98; // bool
            static constexpr std::uintptr_t m_fPrevLockedPoints                 = 0X0E9C; // int32
            static constexpr std::uintptr_t m_iForcePointMoveCounter            = 0X0EA0; // int32
            static constexpr std::uintptr_t m_bPrevEndPointPos                  = 0X0EA4; // bool[2]
            static constexpr std::uintptr_t m_vPrevEndPointPos                  = 0X0EA8; // Vector[2]
            static constexpr std::uintptr_t m_flCurScroll                       = 0X0EC0; // float32
            static constexpr std::uintptr_t m_flScrollSpeed                     = 0X0EC4; // float32
            static constexpr std::uintptr_t m_RopeFlags                         = 0X0EC8; // uint16
            static constexpr std::uintptr_t m_iRopeMaterialModelIndex           = 0X0ED0; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_nSegments                         = 0X1148; // uint8
            static constexpr std::uintptr_t m_hStartPoint                       = 0X114C; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_hEndPoint                         = 0X1150; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_iStartAttachment                  = 0X1154; // AttachmentHandle_t
            static constexpr std::uintptr_t m_iEndAttachment                    = 0X1155; // AttachmentHandle_t
            static constexpr std::uintptr_t m_Subdiv                            = 0X1156; // uint8
            static constexpr std::uintptr_t m_RopeLength                        = 0X1158; // int16
            static constexpr std::uintptr_t m_Slack                             = 0X115A; // int16
            static constexpr std::uintptr_t m_TextureScale                      = 0X115C; // float32
            static constexpr std::uintptr_t m_fLockedPoints                     = 0X1160; // uint8
            static constexpr std::uintptr_t m_nChangeCount                      = 0X1161; // uint8
            static constexpr std::uintptr_t m_Width                             = 0X1164; // float32
            static constexpr std::uintptr_t m_PhysicsDelegate                   = 0X1168; // C_RopeKeyframe::CPhysicsDelegate
            static constexpr std::uintptr_t m_hMaterial                         = 0X1178; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_TextureHeight                     = 0X1180; // int32
            static constexpr std::uintptr_t m_vecImpulse                        = 0X1184; // Vector
            static constexpr std::uintptr_t m_vecPreviousImpulse                = 0X1190; // Vector
            static constexpr std::uintptr_t m_flCurrentGustTimer                = 0X119C; // float32
            static constexpr std::uintptr_t m_flCurrentGustLifetime             = 0X11A0; // float32
            static constexpr std::uintptr_t m_flTimeToNextGust                  = 0X11A4; // float32
            static constexpr std::uintptr_t m_vWindDir                          = 0X11A8; // Vector
            static constexpr std::uintptr_t m_vColorMod                         = 0X11B4; // Vector
            static constexpr std::uintptr_t m_vCachedEndPointAttachmentPos      = 0X11C0; // Vector[2]
            static constexpr std::uintptr_t m_vCachedEndPointAttachmentAngle    = 0X11D8; // QAngle[2]
            static constexpr std::uintptr_t m_bConstrainBetweenEndpoints        = 0X11F0; // bool
            static constexpr std::uintptr_t m_bEndPointAttachmentPositionsDirty = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bEndPointAttachmentAnglesDirty    = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bNewDataThisFrame                 = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bPhysicsInitted                   = 0X0000; // bitfield:1
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_EnvCubemap : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_Entity_hCubemapTexture                = 0X0688; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_bCustomCubemapTexture          = 0X0690; // bool
            static constexpr std::uintptr_t m_Entity_flInfluenceRadius              = 0X0694; // float32
            static constexpr std::uintptr_t m_Entity_vBoxProjectMins                = 0X0698; // Vector
            static constexpr std::uintptr_t m_Entity_vBoxProjectMaxs                = 0X06A4; // Vector
            static constexpr std::uintptr_t m_Entity_bMoveable                      = 0X06B0; // bool
            static constexpr std::uintptr_t m_Entity_nHandshake                     = 0X06B4; // int32
            static constexpr std::uintptr_t m_Entity_nEnvCubeMapArrayIndex          = 0X06B8; // int32
            static constexpr std::uintptr_t m_Entity_nPriority                      = 0X06BC; // int32
            static constexpr std::uintptr_t m_Entity_flEdgeFadeDist                 = 0X06C0; // float32
            static constexpr std::uintptr_t m_Entity_vEdgeFadeDists                 = 0X06C4; // Vector
            static constexpr std::uintptr_t m_Entity_flDiffuseScale                 = 0X06D0; // float32
            static constexpr std::uintptr_t m_Entity_bStartDisabled                 = 0X06D4; // bool
            static constexpr std::uintptr_t m_Entity_bDefaultEnvMap                 = 0X06D5; // bool
            static constexpr std::uintptr_t m_Entity_bDefaultSpecEnvMap             = 0X06D6; // bool
            static constexpr std::uintptr_t m_Entity_bIndoorCubeMap                 = 0X06D7; // bool
            static constexpr std::uintptr_t m_Entity_bCopyDiffuseFromDefaultCubemap = 0X06D8; // bool
            static constexpr std::uintptr_t m_Entity_bEnabled                       = 0X06E8; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_EnvCubemapBox : public C_EnvCubemap {
        public:
        };

        // Has VTable
        // Has Trivial Destructor
        // Local Type Scope
        class C_RopeKeyframe__CPhysicsDelegate {
        public:
            static constexpr std::uintptr_t m_pKeyframe = 0X0008; // C_RopeKeyframe*
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPathNode : public C_PointEntity {
        public:
            static constexpr std::uintptr_t m_vInTangentLocal       = 0X0608; // Vector
            static constexpr std::uintptr_t m_vOutTangentLocal      = 0X0614; // Vector
            static constexpr std::uintptr_t m_strParentPathUniqueID = 0X0620; // CUtlString
            static constexpr std::uintptr_t m_strPathNodeParameter  = 0X0628; // CUtlString
            static constexpr std::uintptr_t m_xWSPrevParent         = 0X0630; // CTransform
            static constexpr std::uintptr_t m_hPath                 = 0X0650; // CHandle<CPathWithDynamicNodes>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_FuncMoveLinear : public C_BaseToggle {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CServerOnlyModelEntity : public C_BaseModelEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSGO_TeamSelectCamera : public C_CSGO_TeamPreviewCamera {
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
        class C_WeaponXM1014 : public C_CSWeaponBaseShotgun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_WorldModelGloves : public CBaseAnimGraph {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PhysicsProp : public C_BreakableProp {
        public:
            static constexpr std::uintptr_t m_bAwake = 0X12D0; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PhysicsPropMultiplayer : public C_PhysicsProp {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_SoundEventOBBEntity : public C_SoundEventEntity {
        public:
            static constexpr std::uintptr_t m_vMins = 0X06B8; // Vector
            static constexpr std::uintptr_t m_vMaxs = 0X06C4; // Vector
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Local Type Scope
        class CPulseTestScriptLib {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_WeaponAug : public C_CSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_BasePropDoor : public C_DynamicProp {
        public:
            static constexpr std::uintptr_t m_eDoorState                = 0X13B0; // DoorState_t
            static constexpr std::uintptr_t m_modelChanged              = 0X13B4; // bool
            static constexpr std::uintptr_t m_bLocked                   = 0X13B5; // bool
            static constexpr std::uintptr_t m_bNoNPCs                   = 0X13B6; // bool
            static constexpr std::uintptr_t m_closedPosition            = 0X13B8; // Vector
            static constexpr std::uintptr_t m_closedAngles              = 0X13C4; // QAngle
            static constexpr std::uintptr_t m_hMaster                   = 0X13D0; // CHandle<C_BasePropDoor>
            static constexpr std::uintptr_t m_vWhereToSetLightingOrigin = 0X13D4; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CChoreoInfoTarget : public C_PointEntity {
        public:
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
        // Local Type Scope
        class C_WeaponBaseItem : public C_CSWeaponBase {
        public:
            static constexpr std::uintptr_t m_bSequenceInProgress = 0X1F40; // bool
            static constexpr std::uintptr_t m_bRedraw             = 0X1F41; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_Item_Healthshot : public C_WeaponBaseItem {
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
        class C_SoundOpvarSetPointEntity : public C_SoundOpvarSetPointBase {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_SoundOpvarSetAutoRoomEntity : public C_SoundOpvarSetPointEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_EnvCombinedLightProbeVolume : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_Entity_Color                                = 0X1680; // Color
            static constexpr std::uintptr_t m_Entity_flBrightness                         = 0X1684; // float32
            static constexpr std::uintptr_t m_Entity_hCubemapTexture                      = 0X1688; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_bCustomCubemapTexture                = 0X1690; // bool
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_AmbientCube       = 0X1698; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SDF               = 0X16A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SH2_DC            = 0X16A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SH2_R             = 0X16B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SH2_G             = 0X16B8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SH2_B             = 0X16C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeDirectLightIndicesTexture = 0X16C8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeDirectLightScalarsTexture = 0X16D0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeDirectLightShadowsTexture = 0X16D8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_vBoxMins                             = 0X16E0; // Vector
            static constexpr std::uintptr_t m_Entity_vBoxMaxs                             = 0X16EC; // Vector
            static constexpr std::uintptr_t m_Entity_bMoveable                            = 0X16F8; // bool
            static constexpr std::uintptr_t m_Entity_nHandshake                           = 0X16FC; // int32
            static constexpr std::uintptr_t m_Entity_nEnvCubeMapArrayIndex                = 0X1700; // int32
            static constexpr std::uintptr_t m_Entity_nPriority                            = 0X1704; // int32
            static constexpr std::uintptr_t m_Entity_bStartDisabled                       = 0X1708; // bool
            static constexpr std::uintptr_t m_Entity_flEdgeFadeDist                       = 0X170C; // float32
            static constexpr std::uintptr_t m_Entity_vEdgeFadeDists                       = 0X1710; // Vector
            static constexpr std::uintptr_t m_Entity_nLightProbeSizeX                     = 0X171C; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeSizeY                     = 0X1720; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeSizeZ                     = 0X1724; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeAtlasX                    = 0X1728; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeAtlasY                    = 0X172C; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeAtlasZ                    = 0X1730; // int32
            static constexpr std::uintptr_t m_Entity_bEnabled                             = 0X1749; // bool
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
        class C_LightEntity : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_CLightComponent = 0X0E88; // CLightComponent*
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_LightDirectionalEntity : public C_LightEntity {
        public:
        };

        // Has VTable
        // Local Type Scope
        struct ActiveModelConfig_t {
        public:
            static constexpr std::uintptr_t m_Handle                = 0X0030; // ModelConfigHandle_t
            static constexpr std::uintptr_t m_Name                  = 0X0038; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_AssociatedEntities    = 0X0040; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
            static constexpr std::uintptr_t m_AssociatedEntityNames = 0X0058; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_WeaponSSG08 : public C_CSWeaponBaseGun {
        public:
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
        class C_Chicken : public C_DynamicProp {
        public:
            static constexpr std::uintptr_t m_hHolidayHatAddon       = 0X13A8; // CHandle<CBaseAnimGraph>
            static constexpr std::uintptr_t m_jumpedThisFrame        = 0X13AC; // bool
            static constexpr std::uintptr_t m_leader                 = 0X13B0; // CHandle<C_CSPlayerPawn>
            static constexpr std::uintptr_t m_AttributeManager       = 0X13B8; // C_AttributeContainer
            static constexpr std::uintptr_t m_bAttributesInitialized = 0X1888; // bool
            static constexpr std::uintptr_t m_hWaterWakeParticles    = 0X188C; // ParticleIndex_t
            static constexpr std::uintptr_t m_bIsPreviewModel        = 0X1890; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_SoundOpvarSetAABBEntity : public C_SoundOpvarSetPointEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_WeaponBizon : public C_CSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_StattrakModule : public C_CS2WeaponModuleBase {
        public:
            static constexpr std::uintptr_t m_bKnife = 0X1170; // bool
        };

        // Has VTable
        // Local Type Scope
        class CCSObserver_CameraServices : public CCSPlayerBase_CameraServices {
        public:
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
            static constexpr std::uintptr_t m_MainSoundscapeName = 0X0698; // CUtlSymbolLarge
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
        class C_LightOrthoEntity : public C_LightEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBombTarget : public C_BaseTrigger {
        public:
            static constexpr std::uintptr_t m_bBombPlantedHere = 0X0F58; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_Knife : public C_CSWeaponBase {
        public:
            static constexpr std::uintptr_t m_bFirstAttack = 0X1F40; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSGO_TerroristWingmanIntroCamera : public C_CSGO_TeamPreviewCamera {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CSkeletonInstance : public CGameSceneNode {
        public:
            static constexpr std::uintptr_t m_modelState                           = 0X0160; // CModelState
            static constexpr std::uintptr_t m_bIsAnimationEnabled                  = 0X0430; // bool
            static constexpr std::uintptr_t m_bUseParentRenderBounds               = 0X0431; // bool
            static constexpr std::uintptr_t m_bDisableSolidCollisionsForHierarchy  = 0X0432; // bool
            static constexpr std::uintptr_t m_bDirtyMotionType                     = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bIsGeneratingLatchedParentSpaceState = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_materialGroup                        = 0X0434; // CUtlStringToken
            static constexpr std::uintptr_t m_nHitboxSet                           = 0X0438; // uint8
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_Item : public C_EconEntity {
        public:
            static constexpr std::uintptr_t m_pReticleHintTextName = 0X18C0; // char[256]
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_ItemDogtags : public C_Item {
        public:
            static constexpr std::uintptr_t m_OwningPlayer  = 0X19C0; // CHandle<C_CSPlayerPawn>
            static constexpr std::uintptr_t m_KillingPlayer = 0X19C4; // CHandle<C_CSPlayerPawn>
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

        // Has Trivial Destructor
        // Local Type Scope
        class CPulseAnimFuncs {
        public:
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
        class C_WeaponUSPSilencer : public C_CSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_MolotovProjectile : public C_BaseCSGrenadeProjectile {
        public:
            static constexpr std::uintptr_t m_bIsIncGrenade = 0X1438; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_TriggerLerpObject : public C_BaseTrigger {
        public:
        };

        // Has Trivial Destructor
        // Local Type Scope
        class CPointTemplateAPI {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_WeaponRevolver : public C_CSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_WeaponElite : public C_CSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_DynamicPropAlias_cable_dynamic : public C_DynamicProp {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoOffscreenPanoramaTexture : public C_PointEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled                = 0X0608; // bool
            static constexpr std::uintptr_t m_nResolutionX             = 0X060C; // int32
            static constexpr std::uintptr_t m_nResolutionY             = 0X0610; // int32
            static constexpr std::uintptr_t m_szPanelType              = 0X0618; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_szLayoutFileName         = 0X0620; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_RenderAttrName           = 0X0628; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_TargetEntities           = 0X0630; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
            static constexpr std::uintptr_t m_nTargetChangeCount       = 0X0648; // int32
            static constexpr std::uintptr_t m_vecCSSClasses            = 0X0650; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            static constexpr std::uintptr_t m_szTargetsName            = 0X0668; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_AdditionalTargetEntities = 0X0670; // CUtlVector<CHandle<C_BaseModelEntity>>
            static constexpr std::uintptr_t m_bCheckCSSClasses         = 0X07E8; // bool
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

        // Local Type Scope
        class SignatureOutflow_Continue : public CPulse_OutflowConnection {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoTarget : public C_PointEntity {
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

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFilterAttributeInt : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_sAttributeName = 0X0640; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointTemplate : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_iszWorldName                 = 0X0608; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszSource2EntityLumpName     = 0X0610; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszEntityFilterName          = 0X0618; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flTimeoutInterval            = 0X0620; // float32
            static constexpr std::uintptr_t m_bAsynchronouslySpawnEntities = 0X0624; // bool
            static constexpr std::uintptr_t m_clientOnlyEntityBehavior     = 0X0628; // PointTemplateClientOnlyEntityBehavior_t
            static constexpr std::uintptr_t m_ownerSpawnGroupType          = 0X062C; // PointTemplateOwnerSpawnGroupType_t
            static constexpr std::uintptr_t m_createdSpawnGroupHandles     = 0X0630; // CUtlVector<uint32>
            static constexpr std::uintptr_t m_SpawnedEntityHandles         = 0X0648; // CUtlVector<CEntityHandle>
            static constexpr std::uintptr_t m_ScriptSpawnCallback          = 0X0660; // HSCRIPT
            static constexpr std::uintptr_t m_ScriptCallbackScope          = 0X0668; // HSCRIPT
        };

        // Has VTable
        // Local Type Scope
        class CPlayer_FlashlightServices : public CPlayerPawnComponent {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBasePlayerController : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_CommandContext            = 0X0610; // C_CommandContext
            static constexpr std::uintptr_t m_nInButtonsWhichAreToggles = 0X06B8; // uint64
            static constexpr std::uintptr_t m_nTickBase                 = 0X06C0; // uint32
            static constexpr std::uintptr_t m_hPawn                     = 0X06C4; // CHandle<C_BasePlayerPawn>
            static constexpr std::uintptr_t m_bKnownTeamMismatch        = 0X06C8; // bool
            static constexpr std::uintptr_t m_hPredictedPawn            = 0X06CC; // CHandle<C_BasePlayerPawn>
            static constexpr std::uintptr_t m_nSplitScreenSlot          = 0X06D0; // CSplitScreenSlot
            static constexpr std::uintptr_t m_hSplitOwner               = 0X06D4; // CHandle<CBasePlayerController>
            static constexpr std::uintptr_t m_hSplitScreenPlayers       = 0X06D8; // CUtlVector<CHandle<CBasePlayerController>>
            static constexpr std::uintptr_t m_bIsHLTV                   = 0X06F0; // bool
            static constexpr std::uintptr_t m_iConnected                = 0X06F4; // PlayerConnectedState
            static constexpr std::uintptr_t m_iszPlayerName             = 0X06F8; // char[128]
            static constexpr std::uintptr_t m_steamID                   = 0X0780; // uint64
            static constexpr std::uintptr_t m_bIsLocalPlayerController  = 0X0788; // bool
            static constexpr std::uintptr_t m_bNoClipEnabled            = 0X0789; // bool
            static constexpr std::uintptr_t m_iDesiredFOV               = 0X078C; // uint32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSPlayerController : public CBasePlayerController {
        public:
            static constexpr std::uintptr_t m_pInGameMoneyServices                = 0X0808; // CCSPlayerController_InGameMoneyServices*
            static constexpr std::uintptr_t m_pInventoryServices                  = 0X0810; // CCSPlayerController_InventoryServices*
            static constexpr std::uintptr_t m_pActionTrackingServices             = 0X0818; // CCSPlayerController_ActionTrackingServices*
            static constexpr std::uintptr_t m_pDamageServices                     = 0X0820; // CCSPlayerController_DamageServices*
            static constexpr std::uintptr_t m_iPing                               = 0X0828; // uint32
            static constexpr std::uintptr_t m_bHasCommunicationAbuseMute          = 0X082C; // bool
            static constexpr std::uintptr_t m_uiCommunicationMuteFlags            = 0X0830; // uint32
            static constexpr std::uintptr_t m_szCrosshairCodes                    = 0X0838; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iPendingTeamNum                     = 0X0840; // uint8
            static constexpr std::uintptr_t m_flForceTeamTime                     = 0X0844; // GameTime_t
            static constexpr std::uintptr_t m_iCompTeammateColor                  = 0X0848; // int32
            static constexpr std::uintptr_t m_bEverPlayedOnTeam                   = 0X084C; // bool
            static constexpr std::uintptr_t m_flPreviousForceJoinTeamTime         = 0X0850; // GameTime_t
            static constexpr std::uintptr_t m_szClan                              = 0X0858; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_sSanitizedPlayerName                = 0X0860; // CUtlString
            static constexpr std::uintptr_t m_iCoachingTeam                       = 0X0868; // int32
            static constexpr std::uintptr_t m_nPlayerDominated                    = 0X0870; // uint64
            static constexpr std::uintptr_t m_nPlayerDominatingMe                 = 0X0878; // uint64
            static constexpr std::uintptr_t m_iCompetitiveRanking                 = 0X0880; // int32
            static constexpr std::uintptr_t m_iCompetitiveWins                    = 0X0884; // int32
            static constexpr std::uintptr_t m_iCompetitiveRankType                = 0X0888; // int8
            static constexpr std::uintptr_t m_iCompetitiveRankingPredicted_Win    = 0X088C; // int32
            static constexpr std::uintptr_t m_iCompetitiveRankingPredicted_Loss   = 0X0890; // int32
            static constexpr std::uintptr_t m_iCompetitiveRankingPredicted_Tie    = 0X0894; // int32
            static constexpr std::uintptr_t m_nEndMatchNextMapVote                = 0X0898; // int32
            static constexpr std::uintptr_t m_unActiveQuestId                     = 0X089C; // uint16
            static constexpr std::uintptr_t m_rtActiveMissionPeriod               = 0X08A0; // uint32
            static constexpr std::uintptr_t m_nQuestProgressReason                = 0X08A4; // QuestProgress::Reason
            static constexpr std::uintptr_t m_unPlayerTvControlFlags              = 0X08A8; // uint32
            static constexpr std::uintptr_t m_iDraftIndex                         = 0X08D8; // int32
            static constexpr std::uintptr_t m_msQueuedModeDisconnectionTimestamp  = 0X08DC; // uint32
            static constexpr std::uintptr_t m_uiAbandonRecordedReason             = 0X08E0; // uint32
            static constexpr std::uintptr_t m_eNetworkDisconnectionReason         = 0X08E4; // uint32
            static constexpr std::uintptr_t m_bCannotBeKicked                     = 0X08E8; // bool
            static constexpr std::uintptr_t m_bEverFullyConnected                 = 0X08E9; // bool
            static constexpr std::uintptr_t m_bAbandonAllowsSurrender             = 0X08EA; // bool
            static constexpr std::uintptr_t m_bAbandonOffersInstantSurrender      = 0X08EB; // bool
            static constexpr std::uintptr_t m_bDisconnection1MinWarningPrinted    = 0X08EC; // bool
            static constexpr std::uintptr_t m_bScoreReported                      = 0X08ED; // bool
            static constexpr std::uintptr_t m_nDisconnectionTick                  = 0X08F0; // int32
            static constexpr std::uintptr_t m_bControllingBot                     = 0X0900; // bool
            static constexpr std::uintptr_t m_bHasControlledBotThisRound          = 0X0901; // bool
            static constexpr std::uintptr_t m_bHasBeenControlledByPlayerThisRound = 0X0902; // bool
            static constexpr std::uintptr_t m_nBotsControlledThisRound            = 0X0904; // int32
            static constexpr std::uintptr_t m_bCanControlObservedBot              = 0X0908; // bool
            static constexpr std::uintptr_t m_hPlayerPawn                         = 0X090C; // CHandle<C_CSPlayerPawn>
            static constexpr std::uintptr_t m_hObserverPawn                       = 0X0910; // CHandle<C_CSObserverPawn>
            static constexpr std::uintptr_t m_bPawnIsAlive                        = 0X0914; // bool
            static constexpr std::uintptr_t m_iPawnHealth                         = 0X0918; // uint32
            static constexpr std::uintptr_t m_iPawnArmor                          = 0X091C; // int32
            static constexpr std::uintptr_t m_bPawnHasDefuser                     = 0X0920; // bool
            static constexpr std::uintptr_t m_bPawnHasHelmet                      = 0X0921; // bool
            static constexpr std::uintptr_t m_nPawnCharacterDefIndex              = 0X0922; // uint16
            static constexpr std::uintptr_t m_iPawnLifetimeStart                  = 0X0924; // int32
            static constexpr std::uintptr_t m_iPawnLifetimeEnd                    = 0X0928; // int32
            static constexpr std::uintptr_t m_iPawnBotDifficulty                  = 0X092C; // int32
            static constexpr std::uintptr_t m_hOriginalControllerOfCurrentPawn    = 0X0930; // CHandle<CCSPlayerController>
            static constexpr std::uintptr_t m_iScore                              = 0X0934; // int32
            static constexpr std::uintptr_t m_recentKillQueue                     = 0X0938; // uint8[8]
            static constexpr std::uintptr_t m_nFirstKill                          = 0X0940; // uint8
            static constexpr std::uintptr_t m_nKillCount                          = 0X0941; // uint8
            static constexpr std::uintptr_t m_bMvpNoMusic                         = 0X0942; // bool
            static constexpr std::uintptr_t m_eMvpReason                          = 0X0944; // int32
            static constexpr std::uintptr_t m_iMusicKitID                         = 0X0948; // int32
            static constexpr std::uintptr_t m_iMusicKitMVPs                       = 0X094C; // int32
            static constexpr std::uintptr_t m_iMVPs                               = 0X0950; // int32
            static constexpr std::uintptr_t m_bIsPlayerNameDirty                  = 0X0954; // bool
            static constexpr std::uintptr_t m_bFireBulletsSeedSynchronized        = 0X0955; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSGO_TeamIntroCounterTerroristPosition : public C_CSGO_TeamIntroCharacterPosition {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSGO_PreviewModel : public C_BaseFlex {
        public:
            static constexpr std::uintptr_t m_defaultAnim          = 0X1350; // CUtlString
            static constexpr std::uintptr_t m_nDefaultAnimLoopMode = 0X1358; // AnimLoopMode_t
            static constexpr std::uintptr_t m_flInitialModelScale  = 0X135C; // float32
            static constexpr std::uintptr_t m_sInitialWeaponState  = 0X1360; // CUtlString
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
        class C_SoundEventAABBEntity : public C_SoundEventEntity {
        public:
            static constexpr std::uintptr_t m_vMins = 0X06B8; // Vector
            static constexpr std::uintptr_t m_vMaxs = 0X06C4; // Vector
        };

        // Has VTable
        // Local Type Scope
        class CPlayer_MovementServices_Humanoid : public CPlayer_MovementServices {
        public:
            static constexpr std::uintptr_t m_flStepSoundTime   = 0X0240; // float32
            static constexpr std::uintptr_t m_flFallVelocity    = 0X0244; // float32
            static constexpr std::uintptr_t m_groundNormal      = 0X0248; // Vector
            static constexpr std::uintptr_t m_flSurfaceFriction = 0X0254; // float32
            static constexpr std::uintptr_t m_surfaceProps      = 0X0258; // CUtlStringToken
            static constexpr std::uintptr_t m_nStepside         = 0X0268; // int32
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_MovementServices : public CPlayer_MovementServices_Humanoid {
        public:
            static constexpr std::uintptr_t m_vecLadderNormal                     = 0X0270; // Vector
            static constexpr std::uintptr_t m_nLadderSurfacePropIndex             = 0X027C; // int32
            static constexpr std::uintptr_t m_bDucked                             = 0X0280; // bool
            static constexpr std::uintptr_t m_flDuckAmount                        = 0X0284; // float32
            static constexpr std::uintptr_t m_flDuckSpeed                         = 0X0288; // float32
            static constexpr std::uintptr_t m_bDuckOverride                       = 0X028C; // bool
            static constexpr std::uintptr_t m_bDesiresDuck                        = 0X028D; // bool
            static constexpr std::uintptr_t m_bDucking                            = 0X028E; // bool
            static constexpr std::uintptr_t m_flDuckOffset                        = 0X0290; // float32
            static constexpr std::uintptr_t m_nDuckTimeMsecs                      = 0X0294; // uint32
            static constexpr std::uintptr_t m_nDuckJumpTimeMsecs                  = 0X0298; // uint32
            static constexpr std::uintptr_t m_nJumpTimeMsecs                      = 0X029C; // uint32
            static constexpr std::uintptr_t m_flLastDuckTime                      = 0X02A0; // float32
            static constexpr std::uintptr_t m_vecLastPositionAtFullCrouchSpeed    = 0X02B0; // Vector2D
            static constexpr std::uintptr_t m_duckUntilOnGround                   = 0X02B8; // bool
            static constexpr std::uintptr_t m_bHasWalkMovedSinceLastJump          = 0X02B9; // bool
            static constexpr std::uintptr_t m_bInStuckTest                        = 0X02BA; // bool
            static constexpr std::uintptr_t m_nTraceCount                         = 0X04C8; // int32
            static constexpr std::uintptr_t m_StuckLast                           = 0X04CC; // int32
            static constexpr std::uintptr_t m_bSpeedCropped                       = 0X04D0; // bool
            static constexpr std::uintptr_t m_nOldWaterLevel                      = 0X04D4; // int32
            static constexpr std::uintptr_t m_flWaterEntryTime                    = 0X04D8; // float32
            static constexpr std::uintptr_t m_vecForward                          = 0X04DC; // Vector
            static constexpr std::uintptr_t m_vecLeft                             = 0X04E8; // Vector
            static constexpr std::uintptr_t m_vecUp                               = 0X04F4; // Vector
            static constexpr std::uintptr_t m_nGameCodeHasMovedPlayerAfterCommand = 0X0500; // int32
            static constexpr std::uintptr_t m_fStashGrenadeParameterWhen          = 0X0504; // GameTime_t
            static constexpr std::uintptr_t m_nButtonDownMaskPrev                 = 0X0508; // uint64
            static constexpr std::uintptr_t m_flOffsetTickCompleteTime            = 0X0510; // float32
            static constexpr std::uintptr_t m_flOffsetTickStashedSpeed            = 0X0514; // float32
            static constexpr std::uintptr_t m_flStamina                           = 0X0518; // float32
            static constexpr std::uintptr_t m_flHeightAtJumpStart                 = 0X051C; // float32
            static constexpr std::uintptr_t m_flMaxJumpHeightThisJump             = 0X0520; // float32
            static constexpr std::uintptr_t m_flMaxJumpHeightLastJump             = 0X0524; // float32
            static constexpr std::uintptr_t m_flStaminaAtJumpStart                = 0X0528; // float32
            static constexpr std::uintptr_t m_flVelMulAtJumpStart                 = 0X052C; // float32
            static constexpr std::uintptr_t m_flAccumulatedJumpError              = 0X0530; // float32
            static constexpr std::uintptr_t m_LegacyJump                          = 0X0538; // CCSPlayerLegacyJump
            static constexpr std::uintptr_t m_ModernJump                          = 0X0550; // CCSPlayerModernJump
            static constexpr std::uintptr_t m_nLastJumpTick                       = 0X0588; // GameTick_t
            static constexpr std::uintptr_t m_flLastJumpFrac                      = 0X058C; // float32
            static constexpr std::uintptr_t m_flLastJumpVelocityZ                 = 0X0590; // float32
            static constexpr std::uintptr_t m_bJumpApexPending                    = 0X0594; // bool
            static constexpr std::uintptr_t m_flTicksSinceLastSurfingDetected     = 0X0598; // float32
            static constexpr std::uintptr_t m_bWasSurfing                         = 0X059C; // bool
            static constexpr std::uintptr_t m_vecInputRotated                     = 0X062C; // Vector
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
        class C_TintController : public C_BaseEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CWaterSplasher : public C_BaseModelEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        struct PhysicsRagdollPose_t {
        public:
            static constexpr std::uintptr_t m_Transforms           = 0X0008; // C_NetworkUtlVectorBase<CTransform>
            static constexpr std::uintptr_t m_hOwner               = 0X0020; // CHandle<C_BaseEntity>
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
        class C_WeaponCZ75a : public C_CSWeaponBaseGun {
        public:
            static constexpr std::uintptr_t m_bMagazineRemoved = 0X1F70; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_DynamicLight : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_Flags      = 0X0E88; // uint8
            static constexpr std::uintptr_t m_LightStyle = 0X0E89; // uint8
            static constexpr std::uintptr_t m_Radius     = 0X0E8C; // float32
            static constexpr std::uintptr_t m_Exponent   = 0X0E90; // int32
            static constexpr std::uintptr_t m_InnerAngle = 0X0E94; // float32
            static constexpr std::uintptr_t m_OuterAngle = 0X0E98; // float32
            static constexpr std::uintptr_t m_SpotRadius = 0X0E9C; // float32
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

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_SoundEventSphereEntity : public C_SoundEventEntity {
        public:
            static constexpr std::uintptr_t m_flRadius = 0X06B8; // float32
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayerController_DamageServices : public CPlayerControllerComponent {
        public:
            static constexpr std::uintptr_t m_nSendUpdate = 0X0040; // int32
            static constexpr std::uintptr_t m_DamageList  = 0X0048; // C_UtlVectorEmbeddedNetworkVar<CDamageRecord>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSGO_PreviewPlayer : public C_CSPlayerPawn {
        public:
            static constexpr std::uintptr_t m_animgraphCharacterModeString = 0X3EF0; // CGlobalSymbol
            static constexpr std::uintptr_t m_flInitialModelScale          = 0X3EF8; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSGO_TeamPreviewModel : public C_CSGO_PreviewPlayer {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_TonemapController2Alias_env_tonemap_controller2 : public C_TonemapController2 {
        public:
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
        class CPointOrient : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_iszSpawnTargetName = 0X0608; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hTarget            = 0X0610; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_bActive            = 0X0614; // bool
            static constexpr std::uintptr_t m_nGoalDirection     = 0X0618; // PointOrientGoalDirectionType_t
            static constexpr std::uintptr_t m_nConstraint        = 0X061C; // PointOrientConstraint_t
            static constexpr std::uintptr_t m_flMaxTurnRate      = 0X0620; // float32
            static constexpr std::uintptr_t m_flLastGameTime     = 0X0624; // GameTime_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_GlobalLight : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_WindClothForceHandle = 0X0AD0; // uint16
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_EnvWindClientside : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_EnvWindShared = 0X0608; // C_EnvWindShared
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
        class C_FlashbangProjectile : public C_BaseCSGrenadeProjectile {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_SoundEventConeEntity : public C_SoundEventEntity {
        public:
            static constexpr std::uintptr_t m_flEmitterAngle   = 0X06B8; // float32
            static constexpr std::uintptr_t m_flSweetSpotAngle = 0X06BC; // float32
            static constexpr std::uintptr_t m_flAttenMin       = 0X06C0; // float32
            static constexpr std::uintptr_t m_flAttenMax       = 0X06C4; // float32
            static constexpr std::uintptr_t m_iszParameterName = 0X06C8; // CUtlSymbolLarge
        };

        // Construct Allowed
        // Local Type Scope
        class CDestructiblePartsComponent {
        public:
            static constexpr std::uintptr_t __m_pChainEntity           = 0X0000; // CNetworkVarChainer
            static constexpr std::uintptr_t m_vecDamageTakenByHitGroup = 0X0048; // CUtlVector<uint16>
            static constexpr std::uintptr_t m_hOwner                   = 0X0060; // CHandle<C_BaseModelEntity>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_WeaponP90 : public C_CSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_EnvWind : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_EnvWindShared = 0X0608; // C_EnvWindShared
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSGO_TerroristTeamIntroCamera : public C_CSGO_TeamPreviewCamera {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Step_DebugLog : public CPulseCell_BaseFlow {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayerController_ActionTrackingServices : public CPlayerControllerComponent {
        public:
            static constexpr std::uintptr_t m_perRoundStats           = 0X0040; // C_UtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
            static constexpr std::uintptr_t m_matchStats              = 0X00A8; // CSMatchStats_t
            static constexpr std::uintptr_t m_iNumRoundKills          = 0X0128; // int32
            static constexpr std::uintptr_t m_iNumRoundKillsHeadshots = 0X012C; // int32
            static constexpr std::uintptr_t m_flTotalRoundDamageDealt = 0X0130; // float32
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
            static constexpr std::uintptr_t m_animationController = 0X0550; // CBaseAnimGraphController
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSGO_PreviewModelAlias_csgo_item_previewmodel : public C_CSGO_PreviewModel {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_InfoInstructorHintHostageRescueZone : public C_PointEntity {
        public:
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
        class C_TriggerBuoyancy : public C_BaseTrigger {
        public:
            static constexpr std::uintptr_t m_BuoyancyHelper = 0X0F58; // CBuoyancyHelper
            static constexpr std::uintptr_t m_flFluidDensity = 0X1070; // float32
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
        class C_WeaponTec9 : public C_CSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PhysPropClientside : public C_BreakableProp {
        public:
            static constexpr std::uintptr_t m_flTouchDelta       = 0X12D0; // GameTime_t
            static constexpr std::uintptr_t m_fDeathTime         = 0X12D4; // GameTime_t
            static constexpr std::uintptr_t m_vecDamagePosition  = 0X12D8; // Vector
            static constexpr std::uintptr_t m_vecDamageDirection = 0X12E4; // Vector
            static constexpr std::uintptr_t m_nDamageType        = 0X12F0; // DamageTypes_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_BaseDoor : public C_BaseToggle {
        public:
            static constexpr std::uintptr_t m_bIsUsable = 0X0E88; // bool
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
            static constexpr std::uintptr_t m_iEnemy5Ks        = 0X0068; // int32
            static constexpr std::uintptr_t m_iEnemy4Ks        = 0X006C; // int32
            static constexpr std::uintptr_t m_iEnemy3Ks        = 0X0070; // int32
            static constexpr std::uintptr_t m_iEnemyKnifeKills = 0X0074; // int32
            static constexpr std::uintptr_t m_iEnemyTaserKills = 0X0078; // int32
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

        // Has Trivial Destructor
        // Local Type Scope
        class CFilterMultipleAPI {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CHostageRescueZone : public CHostageRescueZoneShim {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CModelState {
        public:
            static constexpr std::uintptr_t m_hModel                         = 0X00A0; // CStrongHandle<InfoForResourceTypeCModel>
            static constexpr std::uintptr_t m_ModelName                      = 0X00A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bClientClothCreationSuppressed = 0X0179; // bool
            static constexpr std::uintptr_t m_MeshGroupMask                  = 0X0220; // uint64
            static constexpr std::uintptr_t m_nBodyGroupChoices              = 0X0270; // C_NetworkUtlVectorBase<int32>
            static constexpr std::uintptr_t m_nIdealMotionType               = 0X02BA; // int8
            static constexpr std::uintptr_t m_nForceLOD                      = 0X02BB; // int8
            static constexpr std::uintptr_t m_nClothUpdateFlags              = 0X02BC; // int8
        };

        // Has Trivial Destructor
        // Construct Allowed
        // Local Type Scope
        struct CPulseCell_LerpCameraSettings__CursorState_t : public CPulseCell_BaseLerp__CursorState_t {
        public:
            static constexpr std::uintptr_t m_hCamera       = 0X0008; // CHandle<C_PointCamera>
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
        class C_CSGameRulesProxy : public C_GameRulesProxy {
        public:
            static constexpr std::uintptr_t m_pGameRules = 0X0608; // C_CSGameRules*
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
        class C_WeaponP250 : public C_CSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_ShatterGlassShardPhysics : public C_PhysicsProp {
        public:
            static constexpr std::uintptr_t m_ShardDesc = 0X12E8; // shard_model_desc_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFilterMassGreater : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_fFilterMass = 0X0640; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_EntityDissolve : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_flStartTime          = 0X0E90; // GameTime_t
            static constexpr std::uintptr_t m_flFadeInStart        = 0X0E94; // float32
            static constexpr std::uintptr_t m_flFadeInLength       = 0X0E98; // float32
            static constexpr std::uintptr_t m_flFadeOutModelStart  = 0X0E9C; // float32
            static constexpr std::uintptr_t m_flFadeOutModelLength = 0X0EA0; // float32
            static constexpr std::uintptr_t m_flFadeOutStart       = 0X0EA4; // float32
            static constexpr std::uintptr_t m_flFadeOutLength      = 0X0EA8; // float32
            static constexpr std::uintptr_t m_flNextSparkTime      = 0X0EAC; // GameTime_t
            static constexpr std::uintptr_t m_nDissolveType        = 0X0EB0; // EntityDisolveType_t
            static constexpr std::uintptr_t m_vDissolverOrigin     = 0X0EB4; // Vector
            static constexpr std::uintptr_t m_nMagnitude           = 0X0EC0; // uint32
            static constexpr std::uintptr_t m_bCoreExplode         = 0X0EC4; // bool
            static constexpr std::uintptr_t m_bLinkedToServerEnt   = 0X0EC5; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_SoundOpvarSetOBBEntity : public C_SoundOpvarSetAABBEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSGameModeRules_ArmsRace : public CCSGameModeRules {
        public:
            static constexpr std::uintptr_t m_WeaponSequence = 0X0030; // C_NetworkUtlVectorBase<CUtlString>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_FuncMonitor : public C_FuncBrush {
        public:
            static constexpr std::uintptr_t m_targetCamera          = 0X0E88; // CUtlString
            static constexpr std::uintptr_t m_nResolutionEnum       = 0X0E90; // int32
            static constexpr std::uintptr_t m_bRenderShadows        = 0X0E94; // bool
            static constexpr std::uintptr_t m_bUseUniqueColorTarget = 0X0E95; // bool
            static constexpr std::uintptr_t m_brushModelName        = 0X0E98; // CUtlString
            static constexpr std::uintptr_t m_hTargetCamera         = 0X0EA0; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_bEnabled              = 0X0EA4; // bool
            static constexpr std::uintptr_t m_bDraw3DSkybox         = 0X0EA5; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_ClientRagdoll : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_bFadeOut           = 0X1168; // bool
            static constexpr std::uintptr_t m_bImportant         = 0X1169; // bool
            static constexpr std::uintptr_t m_flEffectTime       = 0X116C; // GameTime_t
            static constexpr std::uintptr_t m_gibDespawnTime     = 0X1170; // GameTime_t
            static constexpr std::uintptr_t m_iCurrentFriction   = 0X1174; // int32
            static constexpr std::uintptr_t m_iMinFriction       = 0X1178; // int32
            static constexpr std::uintptr_t m_iMaxFriction       = 0X117C; // int32
            static constexpr std::uintptr_t m_iFrictionAnimState = 0X1180; // int32
            static constexpr std::uintptr_t m_bReleaseRagdoll    = 0X1184; // bool
            static constexpr std::uintptr_t m_iEyeAttachment     = 0X1185; // AttachmentHandle_t
            static constexpr std::uintptr_t m_bFadingOut         = 0X1186; // bool
            static constexpr std::uintptr_t m_flScaleEnd         = 0X1188; // float32[10]
            static constexpr std::uintptr_t m_flScaleTimeStart   = 0X11B0; // GameTime_t[10]
            static constexpr std::uintptr_t m_flScaleTimeEnd     = 0X11D8; // GameTime_t[10]
        };

        // Construct Allowed
        // Local Type Scope
        struct PulseSelectorOutflowList_t {
        public:
            static constexpr std::uintptr_t m_Outflows = 0X0000; // CUtlVector<OutflowWithRequirements_t>
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
        class C_SmokeGrenadeProjectile : public C_BaseCSGrenadeProjectile {
        public:
            static constexpr std::uintptr_t m_nSmokeEffectTickBegin    = 0X1450; // int32
            static constexpr std::uintptr_t m_bDidSmokeEffect          = 0X1454; // bool
            static constexpr std::uintptr_t m_nRandomSeed              = 0X1458; // int32
            static constexpr std::uintptr_t m_vSmokeColor              = 0X145C; // Vector
            static constexpr std::uintptr_t m_vSmokeDetonationPos      = 0X1468; // Vector
            static constexpr std::uintptr_t m_VoxelFrameData           = 0X1478; // C_NetworkUtlVectorBase<uint8>
            static constexpr std::uintptr_t m_nVoxelFrameDataSize      = 0X1490; // int32
            static constexpr std::uintptr_t m_nVoxelUpdate             = 0X1494; // int32
            static constexpr std::uintptr_t m_bSmokeVolumeDataReceived = 0X1498; // bool
            static constexpr std::uintptr_t m_bSmokeEffectSpawned      = 0X1499; // bool
        };

        // Has VTable
        // Local Type Scope
        class CScriptComponent : public CEntityComponent {
        public:
            static constexpr std::uintptr_t m_scriptClassName = 0X0030; // CUtlSymbolLarge
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_BuyServices : public CPlayerPawnComponent {
        public:
            static constexpr std::uintptr_t m_vecSellbackPurchaseEntries = 0X0048; // C_UtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PortraitWorldCallbackHandler : public C_BaseEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSTeam : public C_Team {
        public:
            static constexpr std::uintptr_t m_szTeamMatchStat = 0X06C0; // char[512]
            static constexpr std::uintptr_t m_numMapVictories = 0X08C0; // int32
            static constexpr std::uintptr_t m_bSurrendered    = 0X08C4; // bool
            static constexpr std::uintptr_t m_scoreFirstHalf  = 0X08C8; // int32
            static constexpr std::uintptr_t m_scoreSecondHalf = 0X08CC; // int32
            static constexpr std::uintptr_t m_scoreOvertime   = 0X08D0; // int32
            static constexpr std::uintptr_t m_szClanTeamname  = 0X08D4; // char[129]
            static constexpr std::uintptr_t m_iClanID         = 0X0958; // uint32
            static constexpr std::uintptr_t m_szTeamFlagImage = 0X095C; // char[8]
            static constexpr std::uintptr_t m_szTeamLogoImage = 0X0964; // char[8]
        };

        // Has VTable
        // Is Absract
        // Local Type Scope
        class C_CS2HudModelBase : public C_LateUpdatedAnimating {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CS2HudModelWeapon : public C_CS2HudModelBase {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_TextureBasedAnimatable : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_bLoop               = 0X0E88; // bool
            static constexpr std::uintptr_t m_flFPS               = 0X0E8C; // float32
            static constexpr std::uintptr_t m_hPositionKeys       = 0X0E90; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_hRotationKeys       = 0X0E98; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_vAnimationBoundsMin = 0X0EA0; // Vector
            static constexpr std::uintptr_t m_vAnimationBoundsMax = 0X0EAC; // Vector
            static constexpr std::uintptr_t m_flStartTime         = 0X0EB8; // float32
            static constexpr std::uintptr_t m_flStartFrame        = 0X0EBC; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_LightEnvironmentEntity : public C_LightDirectionalEntity {
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
        class C_TriggerPhysics : public C_BaseTrigger {
        public:
            static constexpr std::uintptr_t m_gravityScale                 = 0X0F58; // float32
            static constexpr std::uintptr_t m_linearLimit                  = 0X0F5C; // float32
            static constexpr std::uintptr_t m_linearDamping                = 0X0F60; // float32
            static constexpr std::uintptr_t m_angularLimit                 = 0X0F64; // float32
            static constexpr std::uintptr_t m_angularDamping               = 0X0F68; // float32
            static constexpr std::uintptr_t m_linearForce                  = 0X0F6C; // float32
            static constexpr std::uintptr_t m_flFrequency                  = 0X0F70; // float32
            static constexpr std::uintptr_t m_flDampingRatio               = 0X0F74; // float32
            static constexpr std::uintptr_t m_vecLinearForcePointAt        = 0X0F78; // Vector
            static constexpr std::uintptr_t m_bCollapseToForcePoint        = 0X0F84; // bool
            static constexpr std::uintptr_t m_vecLinearForcePointAtWorld   = 0X0F88; // Vector
            static constexpr std::uintptr_t m_vecLinearForceDirection      = 0X0F94; // Vector
            static constexpr std::uintptr_t m_bConvertToDebrisWhenPossible = 0X0FA0; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PropDoorRotating : public C_BasePropDoor {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_HandleTest : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_Handle      = 0X0608; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_bSendHandle = 0X060C; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoWorldLayer : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_pOutputOnEntitiesSpawned   = 0X0608; // CEntityIOOutput
            static constexpr std::uintptr_t m_worldName                  = 0X0620; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_layerName                  = 0X0628; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bWorldLayerVisible         = 0X0630; // bool
            static constexpr std::uintptr_t m_bEntitiesSpawned           = 0X0631; // bool
            static constexpr std::uintptr_t m_bCreateAsChildSpawnGroup   = 0X0632; // bool
            static constexpr std::uintptr_t m_hLayerSpawnGroup           = 0X0634; // uint32
            static constexpr std::uintptr_t m_bWorldLayerActuallyVisible = 0X0638; // bool
        };

        // Has VTable
        // Local Type Scope
        class CBodyComponentBaseModelEntity : public CBodyComponentSkeletonInstance {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_Multimeter : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_hTargetC4 = 0X1170; // CHandle<C_PlantedC4>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class FilterDamageType : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_iDamageType = 0X0640; // int32
        };

        // Has VTable
        // Local Type Scope
        class CAttributeList {
        public:
            static constexpr std::uintptr_t m_Attributes = 0X0008; // C_UtlVectorEmbeddedNetworkVar<CEconItemAttribute>
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
            static constexpr std::uintptr_t m_flRadius = 0X0640; // float32
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
        class CPulseCell_Outflow_CycleShuffled : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_Outputs = 0X0048; // CUtlVector<CPulse_OutflowConnection>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_WeaponSCAR20 : public C_CSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_FuncMover : public C_BaseToggle {
        public:
        };

        // Local Type Scope
        struct CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t {
        public:
            static constexpr std::uintptr_t pItem = 0X0000; // C_EconItemView*
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
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_DecoyGrenade : public C_BaseCSGrenade {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_WaterBullet : public CBaseAnimGraph {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_ActionTrackingServices : public CPlayerPawnComponent {
        public:
            static constexpr std::uintptr_t m_hLastWeaponBeforeC4AutoSwitch = 0X0048; // CHandle<C_BasePlayerWeapon>
            static constexpr std::uintptr_t m_bIsRescuing                   = 0X004C; // bool
            static constexpr std::uintptr_t m_weaponPurchasesThisMatch      = 0X0050; // WeaponPurchaseTracker_t
            static constexpr std::uintptr_t m_weaponPurchasesThisRound      = 0X00C0; // WeaponPurchaseTracker_t
        };

        // Has VTable
        // Local Type Scope
        class CCSObserver_MovementServices : public CPlayer_MovementServices {
        public:
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
        class C_PointClientUIDialog : public C_BaseClientUIEntity {
        public:
            static constexpr std::uintptr_t m_hActivator    = 0X0EB8; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_bStartEnabled = 0X0EBC; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_WeaponHKP2000 : public C_CSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_FootstepControl : public C_BaseTrigger {
        public:
            static constexpr std::uintptr_t m_source      = 0X0F58; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_destination = 0X0F60; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCitadelSoundOpvarSetOBB : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_iszStackName       = 0X0620; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszOperatorName    = 0X0628; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszOpvarName       = 0X0630; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_vDistanceInnerMins = 0X0638; // Vector
            static constexpr std::uintptr_t m_vDistanceInnerMaxs = 0X0644; // Vector
            static constexpr std::uintptr_t m_vDistanceOuterMins = 0X0650; // Vector
            static constexpr std::uintptr_t m_vDistanceOuterMaxs = 0X065C; // Vector
            static constexpr std::uintptr_t m_nAABBDirection     = 0X0668; // int32
        };

        // Has VTable
        // Local Type Scope
        class C_CSGO_EndOfMatchLineupEndpoint : public C_BaseEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSGO_EndOfMatchLineupStart : public C_CSGO_EndOfMatchLineupEndpoint {
        public:
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
        // Local Type Scope
        class CDamageRecord {
        public:
            static constexpr std::uintptr_t m_PlayerDamager              = 0X0030; // CHandle<C_CSPlayerPawn>
            static constexpr std::uintptr_t m_PlayerRecipient            = 0X0034; // CHandle<C_CSPlayerPawn>
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
        class C_DynamicPropAlias_dynamic_prop : public C_DynamicProp {
        public:
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
        class C_OmniLight : public C_BarnLight {
        public:
            static constexpr std::uintptr_t m_flInnerAngle = 0X1198; // float32
            static constexpr std::uintptr_t m_flOuterAngle = 0X119C; // float32
            static constexpr std::uintptr_t m_bShowLight   = 0X11A0; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_SceneEntity : public C_PointEntity {
        public:
            static constexpr std::uintptr_t m_bIsPlayingBack    = 0X0610; // bool
            static constexpr std::uintptr_t m_bPaused           = 0X0611; // bool
            static constexpr std::uintptr_t m_bMultiplayer      = 0X0612; // bool
            static constexpr std::uintptr_t m_bAutogenerated    = 0X0613; // bool
            static constexpr std::uintptr_t m_flForceClientTime = 0X0614; // float32
            static constexpr std::uintptr_t m_nSceneStringIndex = 0X0618; // uint16
            static constexpr std::uintptr_t m_bClientOnly       = 0X061A; // bool
            static constexpr std::uintptr_t m_hOwner            = 0X061C; // CHandle<C_BaseFlex>
            static constexpr std::uintptr_t m_hActorList        = 0X0620; // C_NetworkUtlVectorBase<CHandle<C_BaseFlex>>
            static constexpr std::uintptr_t m_bWasPlaying       = 0X0638; // bool
            static constexpr std::uintptr_t m_QueuedEvents      = 0X0648; // CUtlVector<C_SceneEntity::QueuedEvents_t>
            static constexpr std::uintptr_t m_flCurrentTime     = 0X0660; // float32
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
        class C_NametagModule : public C_CS2WeaponModuleBase {
        public:
            static constexpr std::uintptr_t m_strNametagString = 0X1170; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PointValueRemapper : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled                = 0X0608; // bool
            static constexpr std::uintptr_t m_bDisabledOld             = 0X0609; // bool
            static constexpr std::uintptr_t m_bUpdateOnClient          = 0X060A; // bool
            static constexpr std::uintptr_t m_nInputType               = 0X060C; // ValueRemapperInputType_t
            static constexpr std::uintptr_t m_hRemapLineStart          = 0X0610; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_hRemapLineEnd            = 0X0614; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_flMaximumChangePerSecond = 0X0618; // float32
            static constexpr std::uintptr_t m_flDisengageDistance      = 0X061C; // float32
            static constexpr std::uintptr_t m_flEngageDistance         = 0X0620; // float32
            static constexpr std::uintptr_t m_bRequiresUseKey          = 0X0624; // bool
            static constexpr std::uintptr_t m_nOutputType              = 0X0628; // ValueRemapperOutputType_t
            static constexpr std::uintptr_t m_hOutputEntities          = 0X0630; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
            static constexpr std::uintptr_t m_nHapticsType             = 0X0648; // ValueRemapperHapticsType_t
            static constexpr std::uintptr_t m_nMomentumType            = 0X064C; // ValueRemapperMomentumType_t
            static constexpr std::uintptr_t m_flMomentumModifier       = 0X0650; // float32
            static constexpr std::uintptr_t m_flSnapValue              = 0X0654; // float32
            static constexpr std::uintptr_t m_flCurrentMomentum        = 0X0658; // float32
            static constexpr std::uintptr_t m_nRatchetType             = 0X065C; // ValueRemapperRatchetType_t
            static constexpr std::uintptr_t m_flRatchetOffset          = 0X0660; // float32
            static constexpr std::uintptr_t m_flInputOffset            = 0X0664; // float32
            static constexpr std::uintptr_t m_bEngaged                 = 0X0668; // bool
            static constexpr std::uintptr_t m_bFirstUpdate             = 0X0669; // bool
            static constexpr std::uintptr_t m_flPreviousValue          = 0X066C; // float32
            static constexpr std::uintptr_t m_flPreviousUpdateTickTime = 0X0670; // GameTime_t
            static constexpr std::uintptr_t m_vecPreviousTestPoint     = 0X0674; // Vector
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
        class C_WeaponMP7 : public C_CSWeaponBaseGun {
        public:
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
        // Local Type Scope
        class C_CSGameRules : public C_TeamplayRules {
        public:
            static constexpr std::uintptr_t m_bFreezePeriod                     = 0X0040; // bool
            static constexpr std::uintptr_t m_bWarmupPeriod                     = 0X0041; // bool
            static constexpr std::uintptr_t m_fWarmupPeriodEnd                  = 0X0044; // GameTime_t
            static constexpr std::uintptr_t m_fWarmupPeriodStart                = 0X0048; // GameTime_t
            static constexpr std::uintptr_t m_bTerroristTimeOutActive           = 0X004C; // bool
            static constexpr std::uintptr_t m_bCTTimeOutActive                  = 0X004D; // bool
            static constexpr std::uintptr_t m_flTerroristTimeOutRemaining       = 0X0050; // float32
            static constexpr std::uintptr_t m_flCTTimeOutRemaining              = 0X0054; // float32
            static constexpr std::uintptr_t m_nTerroristTimeOuts                = 0X0058; // int32
            static constexpr std::uintptr_t m_nCTTimeOuts                       = 0X005C; // int32
            static constexpr std::uintptr_t m_bTechnicalTimeOut                 = 0X0060; // bool
            static constexpr std::uintptr_t m_bMatchWaitingForResume            = 0X0061; // bool
            static constexpr std::uintptr_t m_iFreezeTime                       = 0X0064; // int32
            static constexpr std::uintptr_t m_iRoundTime                        = 0X0068; // int32
            static constexpr std::uintptr_t m_fMatchStartTime                   = 0X006C; // float32
            static constexpr std::uintptr_t m_fRoundStartTime                   = 0X0070; // GameTime_t
            static constexpr std::uintptr_t m_flRestartRoundTime                = 0X0074; // GameTime_t
            static constexpr std::uintptr_t m_bGameRestart                      = 0X0078; // bool
            static constexpr std::uintptr_t m_flGameStartTime                   = 0X007C; // float32
            static constexpr std::uintptr_t m_timeUntilNextPhaseStarts          = 0X0080; // float32
            static constexpr std::uintptr_t m_gamePhase                         = 0X0084; // int32
            static constexpr std::uintptr_t m_totalRoundsPlayed                 = 0X0088; // int32
            static constexpr std::uintptr_t m_nRoundsPlayedThisPhase            = 0X008C; // int32
            static constexpr std::uintptr_t m_nOvertimePlaying                  = 0X0090; // int32
            static constexpr std::uintptr_t m_iHostagesRemaining                = 0X0094; // int32
            static constexpr std::uintptr_t m_bAnyHostageReached                = 0X0098; // bool
            static constexpr std::uintptr_t m_bMapHasBombTarget                 = 0X0099; // bool
            static constexpr std::uintptr_t m_bMapHasRescueZone                 = 0X009A; // bool
            static constexpr std::uintptr_t m_bMapHasBuyZone                    = 0X009B; // bool
            static constexpr std::uintptr_t m_bIsQueuedMatchmaking              = 0X009C; // bool
            static constexpr std::uintptr_t m_nQueuedMatchmakingMode            = 0X00A0; // int32
            static constexpr std::uintptr_t m_bIsValveDS                        = 0X00A4; // bool
            static constexpr std::uintptr_t m_bLogoMap                          = 0X00A5; // bool
            static constexpr std::uintptr_t m_bPlayAllStepSoundsOnServer        = 0X00A6; // bool
            static constexpr std::uintptr_t m_iSpectatorSlotCount               = 0X00A8; // int32
            static constexpr std::uintptr_t m_MatchDevice                       = 0X00AC; // int32
            static constexpr std::uintptr_t m_bHasMatchStarted                  = 0X00B0; // bool
            static constexpr std::uintptr_t m_nNextMapInMapgroup                = 0X00B4; // int32
            static constexpr std::uintptr_t m_szTournamentEventName             = 0X00B8; // char[512]
            static constexpr std::uintptr_t m_szTournamentEventStage            = 0X02B8; // char[512]
            static constexpr std::uintptr_t m_szMatchStatTxt                    = 0X04B8; // char[512]
            static constexpr std::uintptr_t m_szTournamentPredictionsTxt        = 0X06B8; // char[512]
            static constexpr std::uintptr_t m_nTournamentPredictionsPct         = 0X08B8; // int32
            static constexpr std::uintptr_t m_flCMMItemDropRevealStartTime      = 0X08BC; // GameTime_t
            static constexpr std::uintptr_t m_flCMMItemDropRevealEndTime        = 0X08C0; // GameTime_t
            static constexpr std::uintptr_t m_bIsDroppingItems                  = 0X08C4; // bool
            static constexpr std::uintptr_t m_bIsQuestEligible                  = 0X08C5; // bool
            static constexpr std::uintptr_t m_bIsHltvActive                     = 0X08C6; // bool
            static constexpr std::uintptr_t m_bBombPlanted                      = 0X08C7; // bool
            static constexpr std::uintptr_t m_arrProhibitedItemIndices          = 0X08C8; // uint16[100]
            static constexpr std::uintptr_t m_arrTournamentActiveCasterAccounts = 0X0990; // uint32[4]
            static constexpr std::uintptr_t m_numBestOfMaps                     = 0X09A0; // int32
            static constexpr std::uintptr_t m_nHalloweenMaskListSeed            = 0X09A4; // int32
            static constexpr std::uintptr_t m_bBombDropped                      = 0X09A8; // bool
            static constexpr std::uintptr_t m_iRoundWinStatus                   = 0X09AC; // int32
            static constexpr std::uintptr_t m_eRoundWinReason                   = 0X09B0; // int32
            static constexpr std::uintptr_t m_bTCantBuy                         = 0X09B4; // bool
            static constexpr std::uintptr_t m_bCTCantBuy                        = 0X09B5; // bool
            static constexpr std::uintptr_t m_iMatchStats_RoundResults          = 0X09B8; // int32[30]
            static constexpr std::uintptr_t m_iMatchStats_PlayersAlive_CT       = 0X0A30; // int32[30]
            static constexpr std::uintptr_t m_iMatchStats_PlayersAlive_T        = 0X0AA8; // int32[30]
            static constexpr std::uintptr_t m_TeamRespawnWaveTimes              = 0X0B20; // float32[32]
            static constexpr std::uintptr_t m_flNextRespawnWave                 = 0X0BA0; // GameTime_t[32]
            static constexpr std::uintptr_t m_vMinimapMins                      = 0X0C20; // Vector
            static constexpr std::uintptr_t m_vMinimapMaxs                      = 0X0C2C; // Vector
            static constexpr std::uintptr_t m_MinimapVerticalSectionHeights     = 0X0C38; // float32[8]
            static constexpr std::uintptr_t m_ullLocalMatchID                   = 0X0C58; // uint64
            static constexpr std::uintptr_t m_nEndMatchMapGroupVoteTypes        = 0X0C60; // int32[10]
            static constexpr std::uintptr_t m_nEndMatchMapGroupVoteOptions      = 0X0C88; // int32[10]
            static constexpr std::uintptr_t m_nEndMatchMapVoteWinner            = 0X0CB0; // int32
            static constexpr std::uintptr_t m_iNumConsecutiveCTLoses            = 0X0CB4; // int32
            static constexpr std::uintptr_t m_iNumConsecutiveTerroristLoses     = 0X0CB8; // int32
            static constexpr std::uintptr_t m_nMatchAbortedEarlyReason          = 0X0D78; // int32
            static constexpr std::uintptr_t m_bHasTriggeredRoundStartMusic      = 0X0D7C; // bool
            static constexpr std::uintptr_t m_bSwitchingTeamsAtRoundReset       = 0X0D7D; // bool
            static constexpr std::uintptr_t m_pGameModeRules                    = 0X0D98; // CCSGameModeRules*
            static constexpr std::uintptr_t m_RetakeRules                       = 0X0DA0; // C_RetakeGameRules
            static constexpr std::uintptr_t m_nMatchEndCount                    = 0X0EF8; // uint8
            static constexpr std::uintptr_t m_nTTeamIntroVariant                = 0X0EFC; // int32
            static constexpr std::uintptr_t m_nCTTeamIntroVariant               = 0X0F00; // int32
            static constexpr std::uintptr_t m_bTeamIntroPeriod                  = 0X0F04; // bool
            static constexpr std::uintptr_t m_iRoundEndWinnerTeam               = 0X0F08; // int32
            static constexpr std::uintptr_t m_eRoundEndReason                   = 0X0F0C; // int32
            static constexpr std::uintptr_t m_bRoundEndShowTimerDefend          = 0X0F10; // bool
            static constexpr std::uintptr_t m_iRoundEndTimerTime                = 0X0F14; // int32
            static constexpr std::uintptr_t m_sRoundEndFunFactToken             = 0X0F18; // CUtlString
            static constexpr std::uintptr_t m_iRoundEndFunFactPlayerSlot        = 0X0F20; // CPlayerSlot
            static constexpr std::uintptr_t m_iRoundEndFunFactData1             = 0X0F24; // int32
            static constexpr std::uintptr_t m_iRoundEndFunFactData2             = 0X0F28; // int32
            static constexpr std::uintptr_t m_iRoundEndFunFactData3             = 0X0F2C; // int32
            static constexpr std::uintptr_t m_sRoundEndMessage                  = 0X0F30; // CUtlString
            static constexpr std::uintptr_t m_iRoundEndPlayerCount              = 0X0F38; // int32
            static constexpr std::uintptr_t m_bRoundEndNoMusic                  = 0X0F3C; // bool
            static constexpr std::uintptr_t m_iRoundEndLegacy                   = 0X0F40; // int32
            static constexpr std::uintptr_t m_nRoundEndCount                    = 0X0F44; // uint8
            static constexpr std::uintptr_t m_iRoundStartRoundNumber            = 0X0F48; // int32
            static constexpr std::uintptr_t m_nRoundStartCount                  = 0X0F4C; // uint8
            static constexpr std::uintptr_t m_flLastPerfSampleTime              = 0X4F58; // float64
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CGrenadeTracer : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_flTracerDuration = 0X0EA0; // float32
            static constexpr std::uintptr_t m_nType            = 0X0EA4; // GrenadeType_t
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
        class C_GradientFog : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_hGradientFogTexture       = 0X0608; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_flFogStartDistance        = 0X0610; // float32
            static constexpr std::uintptr_t m_flFogEndDistance          = 0X0614; // float32
            static constexpr std::uintptr_t m_bHeightFogEnabled         = 0X0618; // bool
            static constexpr std::uintptr_t m_flFogStartHeight          = 0X061C; // float32
            static constexpr std::uintptr_t m_flFogEndHeight            = 0X0620; // float32
            static constexpr std::uintptr_t m_flFarZ                    = 0X0624; // float32
            static constexpr std::uintptr_t m_flFogMaxOpacity           = 0X0628; // float32
            static constexpr std::uintptr_t m_flFogFalloffExponent      = 0X062C; // float32
            static constexpr std::uintptr_t m_flFogVerticalExponent     = 0X0630; // float32
            static constexpr std::uintptr_t m_fogColor                  = 0X0634; // Color
            static constexpr std::uintptr_t m_flFogStrength             = 0X0638; // float32
            static constexpr std::uintptr_t m_flFadeTime                = 0X063C; // float32
            static constexpr std::uintptr_t m_bStartDisabled            = 0X0640; // bool
            static constexpr std::uintptr_t m_bIsEnabled                = 0X0641; // bool
            static constexpr std::uintptr_t m_bGradientFogNeedsTextures = 0X0642; // bool
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayerController_InGameMoneyServices : public CPlayerControllerComponent {
        public:
            static constexpr std::uintptr_t m_iAccount            = 0X0040; // int32
            static constexpr std::uintptr_t m_iStartAccount       = 0X0044; // int32
            static constexpr std::uintptr_t m_iTotalCashSpent     = 0X0048; // int32
            static constexpr std::uintptr_t m_iCashSpentThisRound = 0X004C; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_HEGrenadeProjectile : public C_BaseCSGrenadeProjectile {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CAnimGraphNetworkedVariables {
        public:
            static constexpr std::uintptr_t m_PredNetBoolVariables                  = 0X0008; // C_NetworkUtlVectorBase<uint32>
            static constexpr std::uintptr_t m_PredNetByteVariables                  = 0X0020; // C_NetworkUtlVectorBase<uint8>
            static constexpr std::uintptr_t m_PredNetUInt16Variables                = 0X0038; // C_NetworkUtlVectorBase<uint16>
            static constexpr std::uintptr_t m_PredNetIntVariables                   = 0X0050; // C_NetworkUtlVectorBase<int32>
            static constexpr std::uintptr_t m_PredNetUInt32Variables                = 0X0068; // C_NetworkUtlVectorBase<uint32>
            static constexpr std::uintptr_t m_PredNetUInt64Variables                = 0X0080; // C_NetworkUtlVectorBase<uint64>
            static constexpr std::uintptr_t m_PredNetFloatVariables                 = 0X0098; // C_NetworkUtlVectorBase<float32>
            static constexpr std::uintptr_t m_PredNetVectorVariables                = 0X00B0; // C_NetworkUtlVectorBase<Vector>
            static constexpr std::uintptr_t m_PredNetQuaternionVariables            = 0X00C8; // C_NetworkUtlVectorBase<Quaternion>
            static constexpr std::uintptr_t m_PredNetGlobalSymbolVariables          = 0X00E0; // C_NetworkUtlVectorBase<CGlobalSymbol>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetBoolVariables         = 0X00F8; // C_NetworkUtlVectorBase<uint32>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetByteVariables         = 0X0110; // C_NetworkUtlVectorBase<uint8>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetUInt16Variables       = 0X0128; // C_NetworkUtlVectorBase<uint16>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetIntVariables          = 0X0140; // C_NetworkUtlVectorBase<int32>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetUInt32Variables       = 0X0158; // C_NetworkUtlVectorBase<uint32>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetUInt64Variables       = 0X0170; // C_NetworkUtlVectorBase<uint64>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetFloatVariables        = 0X0188; // C_NetworkUtlVectorBase<float32>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetVectorVariables       = 0X01A0; // C_NetworkUtlVectorBase<Vector>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetQuaternionVariables   = 0X01B8; // C_NetworkUtlVectorBase<Quaternion>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetGlobalSymbolVariables = 0X01D0; // C_NetworkUtlVectorBase<CGlobalSymbol>
            static constexpr std::uintptr_t m_nBoolVariablesCount                   = 0X01E8; // int32
            static constexpr std::uintptr_t m_nOwnerOnlyBoolVariablesCount          = 0X01EC; // int32
            static constexpr std::uintptr_t m_nRandomSeedOffset                     = 0X01F0; // int32
            static constexpr std::uintptr_t m_flLastTeleportTime                    = 0X01F4; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFilterModel : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_iFilterModel = 0X0640; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_SoundAreaEntityOrientedBox : public C_SoundAreaEntityBase {
        public:
            static constexpr std::uintptr_t m_vMin = 0X0630; // Vector
            static constexpr std::uintptr_t m_vMax = 0X063C; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseGameBlackboard : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_strGraphName = 0X0610; // CUtlString
            static constexpr std::uintptr_t m_strStateBlob = 0X0618; // CUtlString
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
        class C_RagdollProp : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_ragEnabled                     = 0X1170; // C_NetworkUtlVectorBase<bool>
            static constexpr std::uintptr_t m_ragPos                         = 0X1188; // C_NetworkUtlVectorBase<Vector>
            static constexpr std::uintptr_t m_ragAngles                      = 0X11A0; // C_NetworkUtlVectorBase<QAngle>
            static constexpr std::uintptr_t m_flBlendWeight                  = 0X11B8; // float32
            static constexpr std::uintptr_t m_hRagdollSource                 = 0X11BC; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_iEyeAttachment                 = 0X11C0; // AttachmentHandle_t
            static constexpr std::uintptr_t m_flBlendWeightCurrent           = 0X11C4; // float32
            static constexpr std::uintptr_t m_parentPhysicsBoneIndices       = 0X11C8; // CUtlVector<int32>
            static constexpr std::uintptr_t m_worldSpaceBoneComputationOrder = 0X11E0; // CUtlVector<int32>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_RagdollPropAttached : public C_RagdollProp {
        public:
            static constexpr std::uintptr_t m_boneIndexAttached           = 0X11F8; // uint32
            static constexpr std::uintptr_t m_ragdollAttachedObjectIndex  = 0X11FC; // uint32
            static constexpr std::uintptr_t m_attachmentPointBoneSpace    = 0X1200; // Vector
            static constexpr std::uintptr_t m_attachmentPointRagdollSpace = 0X120C; // Vector
            static constexpr std::uintptr_t m_vecOffset                   = 0X1218; // Vector
            static constexpr std::uintptr_t m_parentTime                  = 0X1224; // float32
            static constexpr std::uintptr_t m_bHasParent                  = 0X1228; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_RectLight : public C_BarnLight {
        public:
            static constexpr std::uintptr_t m_bShowLight = 0X1198; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPathSimple : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_CPathQueryComponent = 0X0610; // CPathQueryComponent
            static constexpr std::uintptr_t m_pathString          = 0X0700; // CUtlString
            static constexpr std::uintptr_t m_bClosedLoop         = 0X0708; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_FuncTrackTrain : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_nLongAxis    = 0X0E88; // int32
            static constexpr std::uintptr_t m_flRadius     = 0X0E8C; // float32
            static constexpr std::uintptr_t m_flLineLength = 0X0E90; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_EconWearable : public C_EconEntity {
        public:
            static constexpr std::uintptr_t m_nForceSkin   = 0X18C0; // int32
            static constexpr std::uintptr_t m_bAlwaysAllow = 0X18C4; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_EnvDecal : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_hDecalMaterial       = 0X0E88; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_flWidth              = 0X0E90; // float32
            static constexpr std::uintptr_t m_flHeight             = 0X0E94; // float32
            static constexpr std::uintptr_t m_flDepth              = 0X0E98; // float32
            static constexpr std::uintptr_t m_nRenderOrder         = 0X0E9C; // uint32
            static constexpr std::uintptr_t m_bProjectOnWorld      = 0X0EA0; // bool
            static constexpr std::uintptr_t m_bProjectOnCharacters = 0X0EA1; // bool
            static constexpr std::uintptr_t m_bProjectOnWater      = 0X0EA2; // bool
            static constexpr std::uintptr_t m_flDepthSortBias      = 0X0EA4; // float32
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
        class C_WeaponM4A1 : public C_CSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSPetPlacement : public C_BaseEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_Beam : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_flFrameRate     = 0X0E88; // float32
            static constexpr std::uintptr_t m_flHDRColorScale = 0X0E8C; // float32
            static constexpr std::uintptr_t m_flFireTime      = 0X0E90; // GameTime_t
            static constexpr std::uintptr_t m_flDamage        = 0X0E94; // float32
            static constexpr std::uintptr_t m_nNumBeamEnts    = 0X0E98; // uint8
            static constexpr std::uintptr_t m_queryHandleHalo = 0X0E9C; // int32
            static constexpr std::uintptr_t m_hBaseMaterial   = 0X0EC0; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_nHaloIndex      = 0X0EC8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_nBeamType       = 0X0ED0; // BeamType_t
            static constexpr std::uintptr_t m_nBeamFlags      = 0X0ED4; // uint32
            static constexpr std::uintptr_t m_hAttachEntity   = 0X0ED8; // CHandle<C_BaseEntity>[10]
            static constexpr std::uintptr_t m_nAttachIndex    = 0X0F00; // AttachmentHandle_t[10]
            static constexpr std::uintptr_t m_fWidth          = 0X0F0C; // float32
            static constexpr std::uintptr_t m_fEndWidth       = 0X0F10; // float32
            static constexpr std::uintptr_t m_fFadeLength     = 0X0F14; // float32
            static constexpr std::uintptr_t m_fHaloScale      = 0X0F18; // float32
            static constexpr std::uintptr_t m_fAmplitude      = 0X0F1C; // float32
            static constexpr std::uintptr_t m_fStartFrame     = 0X0F20; // float32
            static constexpr std::uintptr_t m_fSpeed          = 0X0F24; // float32
            static constexpr std::uintptr_t m_flFrame         = 0X0F28; // float32
            static constexpr std::uintptr_t m_nClipStyle      = 0X0F2C; // BeamClipStyle_t
            static constexpr std::uintptr_t m_bTurnedOff      = 0X0F30; // bool
            static constexpr std::uintptr_t m_vecEndPos       = 0X0F34; // VectorWS
            static constexpr std::uintptr_t m_hEndEntity      = 0X0F40; // CHandle<C_BaseEntity>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_EnvLightProbeVolume : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_AmbientCube       = 0X1600; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SDF               = 0X1608; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SH2_DC            = 0X1610; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SH2_R             = 0X1618; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SH2_G             = 0X1620; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SH2_B             = 0X1628; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeDirectLightIndicesTexture = 0X1630; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeDirectLightScalarsTexture = 0X1638; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeDirectLightShadowsTexture = 0X1640; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_vBoxMins                             = 0X1648; // Vector
            static constexpr std::uintptr_t m_Entity_vBoxMaxs                             = 0X1654; // Vector
            static constexpr std::uintptr_t m_Entity_bMoveable                            = 0X1660; // bool
            static constexpr std::uintptr_t m_Entity_nHandshake                           = 0X1664; // int32
            static constexpr std::uintptr_t m_Entity_nPriority                            = 0X1668; // int32
            static constexpr std::uintptr_t m_Entity_bStartDisabled                       = 0X166C; // bool
            static constexpr std::uintptr_t m_Entity_nLightProbeSizeX                     = 0X1670; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeSizeY                     = 0X1674; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeSizeZ                     = 0X1678; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeAtlasX                    = 0X167C; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeAtlasY                    = 0X1680; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeAtlasZ                    = 0X1684; // int32
            static constexpr std::uintptr_t m_Entity_bEnabled                             = 0X1691; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_FuncConveyor : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_vecMoveDirEntitySpace    = 0X0E90; // Vector
            static constexpr std::uintptr_t m_flTargetSpeed            = 0X0E9C; // float32
            static constexpr std::uintptr_t m_nTransitionStartTick     = 0X0EA0; // GameTick_t
            static constexpr std::uintptr_t m_nTransitionDurationTicks = 0X0EA4; // int32
            static constexpr std::uintptr_t m_flTransitionStartSpeed   = 0X0EA8; // float32
            static constexpr std::uintptr_t m_hConveyorModels          = 0X0EB0; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
            static constexpr std::uintptr_t m_flCurrentConveyorOffset  = 0X0EC8; // float32
            static constexpr std::uintptr_t m_flCurrentConveyorSpeed   = 0X0ECC; // float32
        };

        // Has VTable
        // Local Type Scope
        class CPlayer_WeaponServices : public CPlayerPawnComponent {
        public:
            static constexpr std::uintptr_t m_hMyWeapons    = 0X0048; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerWeapon>>
            static constexpr std::uintptr_t m_hActiveWeapon = 0X0060; // CHandle<C_BasePlayerWeapon>
            static constexpr std::uintptr_t m_hLastWeapon   = 0X0064; // CHandle<C_BasePlayerWeapon>
            static constexpr std::uintptr_t m_iAmmo         = 0X0068; // uint16[32]
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_WeaponServices : public CPlayer_WeaponServices {
        public:
            static constexpr std::uintptr_t m_flNextAttack                       = 0X00D0; // GameTime_t
            static constexpr std::uintptr_t m_bIsLookingAtWeapon                 = 0X00D4; // bool
            static constexpr std::uintptr_t m_bIsHoldingLookAtWeapon             = 0X00D5; // bool
            static constexpr std::uintptr_t m_nOldTotalShootPositionHistoryCount = 0X00D8; // uint32
            static constexpr std::uintptr_t m_nOldTotalInputHistoryCount         = 0X0370; // uint32
            static constexpr std::uintptr_t m_networkAnimTiming                  = 0X1588; // C_NetworkUtlVectorBase<uint8>
            static constexpr std::uintptr_t m_bBlockInspectUntilNextGraphUpdate  = 0X15A0; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PhysMagnet : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_aAttachedObjectsFromServer = 0X1168; // CUtlVector<int32>
            static constexpr std::uintptr_t m_aAttachedObjects           = 0X1180; // CUtlVector<CHandle<C_BaseEntity>>
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
        class C_PlantedC4 : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_bBombTicking                = 0X1170; // bool
            static constexpr std::uintptr_t m_nBombSite                   = 0X1174; // int32
            static constexpr std::uintptr_t m_nSourceSoundscapeHash       = 0X1178; // int32
            static constexpr std::uintptr_t m_entitySpottedState          = 0X1180; // EntitySpottedState_t
            static constexpr std::uintptr_t m_flNextGlow                  = 0X1198; // GameTime_t
            static constexpr std::uintptr_t m_flNextBeep                  = 0X119C; // GameTime_t
            static constexpr std::uintptr_t m_flC4Blow                    = 0X11A0; // GameTime_t
            static constexpr std::uintptr_t m_bCannotBeDefused            = 0X11A4; // bool
            static constexpr std::uintptr_t m_bHasExploded                = 0X11A5; // bool
            static constexpr std::uintptr_t m_flTimerLength               = 0X11A8; // float32
            static constexpr std::uintptr_t m_bBeingDefused               = 0X11AC; // bool
            static constexpr std::uintptr_t m_bTriggerWarning             = 0X11B0; // float32
            static constexpr std::uintptr_t m_bExplodeWarning             = 0X11B4; // float32
            static constexpr std::uintptr_t m_bC4Activated                = 0X11B8; // bool
            static constexpr std::uintptr_t m_bTenSecWarning              = 0X11B9; // bool
            static constexpr std::uintptr_t m_flDefuseLength              = 0X11BC; // float32
            static constexpr std::uintptr_t m_flDefuseCountDown           = 0X11C0; // GameTime_t
            static constexpr std::uintptr_t m_bBombDefused                = 0X11C4; // bool
            static constexpr std::uintptr_t m_hBombDefuser                = 0X11C8; // CHandle<C_CSPlayerPawn>
            static constexpr std::uintptr_t m_AttributeManager            = 0X11D0; // C_AttributeContainer
            static constexpr std::uintptr_t m_hDefuserMultimeter          = 0X16A0; // CHandle<C_Multimeter>
            static constexpr std::uintptr_t m_flNextRadarFlashTime        = 0X16A4; // GameTime_t
            static constexpr std::uintptr_t m_bRadarFlash                 = 0X16A8; // bool
            static constexpr std::uintptr_t m_pBombDefuser                = 0X16AC; // CHandle<C_CSPlayerPawn>
            static constexpr std::uintptr_t m_fLastDefuseTime             = 0X16B0; // GameTime_t
            static constexpr std::uintptr_t m_pPredictionOwner            = 0X16B8; // CBasePlayerController*
            static constexpr std::uintptr_t m_vecC4ExplodeSpectatePos     = 0X16C0; // Vector
            static constexpr std::uintptr_t m_vecC4ExplodeSpectateAng     = 0X16CC; // QAngle
            static constexpr std::uintptr_t m_flC4ExplodeSpectateDuration = 0X16D8; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFilterName : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_iFilterName = 0X0640; // CUtlSymbolLarge
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
        class C_MapPreviewParticleSystem : public C_ParticleSystem {
        public:
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
        class C_WeaponM249 : public C_CSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_LocalTempEntity : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t flags                    = 0X1168; // int32
            static constexpr std::uintptr_t die                      = 0X116C; // GameTime_t
            static constexpr std::uintptr_t m_flFrameMax             = 0X1170; // float32
            static constexpr std::uintptr_t x                        = 0X1174; // float32
            static constexpr std::uintptr_t y                        = 0X1178; // float32
            static constexpr std::uintptr_t fadeSpeed                = 0X117C; // float32
            static constexpr std::uintptr_t bounceFactor             = 0X1180; // float32
            static constexpr std::uintptr_t hitSound                 = 0X1184; // int32
            static constexpr std::uintptr_t priority                 = 0X1188; // int32
            static constexpr std::uintptr_t tentOffset               = 0X118C; // Vector
            static constexpr std::uintptr_t m_vecTempEntAngVelocity  = 0X1198; // QAngle
            static constexpr std::uintptr_t tempent_renderamt        = 0X11A4; // int32
            static constexpr std::uintptr_t m_vecNormal              = 0X11A8; // Vector
            static constexpr std::uintptr_t m_flSpriteScale          = 0X11B4; // float32
            static constexpr std::uintptr_t m_nFlickerFrame          = 0X11B8; // int32
            static constexpr std::uintptr_t m_flFrameRate            = 0X11BC; // float32
            static constexpr std::uintptr_t m_flFrame                = 0X11C0; // float32
            static constexpr std::uintptr_t m_pszImpactEffect        = 0X11C8; // char*
            static constexpr std::uintptr_t m_pszParticleEffect      = 0X11D0; // char*
            static constexpr std::uintptr_t m_bParticleCollision     = 0X11D8; // bool
            static constexpr std::uintptr_t m_iLastCollisionFrame    = 0X11DC; // int32
            static constexpr std::uintptr_t m_vLastCollisionOrigin   = 0X11E0; // Vector
            static constexpr std::uintptr_t m_vecTempEntVelocity     = 0X11EC; // Vector
            static constexpr std::uintptr_t m_vecPrevAbsOrigin       = 0X11F8; // Vector
            static constexpr std::uintptr_t m_vecTempEntAcceleration = 0X1204; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_WeaponTaser : public C_CSWeaponBaseGun {
        public:
            static constexpr std::uintptr_t m_fFireTime       = 0X1F70; // GameTime_t
            static constexpr std::uintptr_t m_nLastAttackTick = 0X1F74; // int32
        };

        // Has VTable
        // Local Type Scope
        class C_SingleplayRules : public C_GameRules {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PrecipitationBlocker : public C_BaseModelEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSGO_CounterTerroristTeamIntroCamera : public C_CSGO_TeamPreviewCamera {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_SoundOpvarSetPathCornerEntity : public C_SoundOpvarSetPointEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_WeaponNegev : public C_CSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_WeaponFiveSeven : public C_CSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_WeaponSawedoff : public C_CSWeaponBaseShotgun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_TriggerVolume : public C_BaseModelEntity {
        public:
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
        class C_WeaponMP9 : public C_CSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_DynamicPropAlias_prop_dynamic_override : public C_DynamicProp {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PlayerPing : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_hPlayer       = 0X0638; // CHandle<C_CSPlayerPawn>
            static constexpr std::uintptr_t m_hPingedEntity = 0X063C; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_iType         = 0X0640; // int32
            static constexpr std::uintptr_t m_bUrgent       = 0X0644; // bool
            static constexpr std::uintptr_t m_szPlaceName   = 0X0645; // char[18]
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_AK47 : public C_CSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSGO_MapPreviewCameraPathNode : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_szParentPathUniqueID = 0X0608; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_nPathIndex           = 0X0610; // int32
            static constexpr std::uintptr_t m_vInTangentLocal      = 0X0614; // Vector
            static constexpr std::uintptr_t m_vOutTangentLocal     = 0X0620; // Vector
            static constexpr std::uintptr_t m_flFOV                = 0X062C; // float32
            static constexpr std::uintptr_t m_flCameraSpeed        = 0X0630; // float32
            static constexpr std::uintptr_t m_flEaseIn             = 0X0634; // float32
            static constexpr std::uintptr_t m_flEaseOut            = 0X0638; // float32
            static constexpr std::uintptr_t m_vInTangentWorld      = 0X063C; // Vector
            static constexpr std::uintptr_t m_vOutTangentWorld     = 0X0648; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSPlayerResource : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_bHostageAlive             = 0X0608; // bool[12]
            static constexpr std::uintptr_t m_isHostageFollowingSomeone = 0X0614; // bool[12]
            static constexpr std::uintptr_t m_iHostageEntityIDs         = 0X0620; // CEntityIndex[12]
            static constexpr std::uintptr_t m_bombsiteCenterA           = 0X0650; // Vector
            static constexpr std::uintptr_t m_bombsiteCenterB           = 0X065C; // Vector
            static constexpr std::uintptr_t m_hostageRescueX            = 0X0668; // int32[4]
            static constexpr std::uintptr_t m_hostageRescueY            = 0X0678; // int32[4]
            static constexpr std::uintptr_t m_hostageRescueZ            = 0X0688; // int32[4]
            static constexpr std::uintptr_t m_bEndMatchNextMapAllVoted  = 0X0698; // bool
            static constexpr std::uintptr_t m_foundGoalPositions        = 0X0699; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSkyboxReference : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_worldGroupId = 0X0608; // WorldGroupId_t
            static constexpr std::uintptr_t m_hSkyCamera   = 0X060C; // CHandle<C_SkyCamera>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_IncendiaryGrenade : public C_MolotovGrenade {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFilterClass : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_iFilterClass = 0X0640; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PointCamera : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_FOV                   = 0X0608; // float32
            static constexpr std::uintptr_t m_Resolution            = 0X060C; // float32
            static constexpr std::uintptr_t m_bFogEnable            = 0X0610; // bool
            static constexpr std::uintptr_t m_FogColor              = 0X0611; // Color
            static constexpr std::uintptr_t m_flFogStart            = 0X0618; // float32
            static constexpr std::uintptr_t m_flFogEnd              = 0X061C; // float32
            static constexpr std::uintptr_t m_flFogMaxDensity       = 0X0620; // float32
            static constexpr std::uintptr_t m_bActive               = 0X0624; // bool
            static constexpr std::uintptr_t m_bUseScreenAspectRatio = 0X0625; // bool
            static constexpr std::uintptr_t m_flAspectRatio         = 0X0628; // float32
            static constexpr std::uintptr_t m_bNoSky                = 0X062C; // bool
            static constexpr std::uintptr_t m_fBrightness           = 0X0630; // float32
            static constexpr std::uintptr_t m_flZFar                = 0X0634; // float32
            static constexpr std::uintptr_t m_flZNear               = 0X0638; // float32
            static constexpr std::uintptr_t m_bCanHLTVUse           = 0X063C; // bool
            static constexpr std::uintptr_t m_bAlignWithParent      = 0X063D; // bool
            static constexpr std::uintptr_t m_bDofEnabled           = 0X063E; // bool
            static constexpr std::uintptr_t m_flDofNearBlurry       = 0X0640; // float32
            static constexpr std::uintptr_t m_flDofNearCrisp        = 0X0644; // float32
            static constexpr std::uintptr_t m_flDofFarCrisp         = 0X0648; // float32
            static constexpr std::uintptr_t m_flDofFarBlurry        = 0X064C; // float32
            static constexpr std::uintptr_t m_flDofTiltToGround     = 0X0650; // float32
            static constexpr std::uintptr_t m_TargetFOV             = 0X0654; // float32
            static constexpr std::uintptr_t m_DegreesPerSecond      = 0X0658; // float32
            static constexpr std::uintptr_t m_bIsOn                 = 0X065C; // bool
            static constexpr std::uintptr_t m_pNext                 = 0X0660; // C_PointCamera*
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PointCameraVFOV : public C_PointCamera {
        public:
            static constexpr std::uintptr_t m_flVerticalFOV = 0X0668; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPathWithDynamicNodes : public CPathSimple {
        public:
            static constexpr std::uintptr_t m_vecPathNodes             = 0X0710; // C_NetworkUtlVectorBase<CHandle<CPathNode>>
            static constexpr std::uintptr_t m_xInitialPathWorldToLocal = 0X0730; // CTransform
        };

        // Has VTable
        // Local Type Scope
        struct WeaponPurchaseTracker_t {
        public:
            static constexpr std::uintptr_t m_weaponPurchases = 0X0008; // C_UtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
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
        class CMapInfo : public C_PointEntity {
        public:
            static constexpr std::uintptr_t m_iBuyingStatus                 = 0X0608; // int32
            static constexpr std::uintptr_t m_flBombRadius                  = 0X060C; // float32
            static constexpr std::uintptr_t m_iPetPopulation                = 0X0610; // int32
            static constexpr std::uintptr_t m_bUseNormalSpawnsForDM         = 0X0614; // bool
            static constexpr std::uintptr_t m_bDisableAutoGeneratedDMSpawns = 0X0615; // bool
            static constexpr std::uintptr_t m_flBotMaxVisionDistance        = 0X0618; // float32
            static constexpr std::uintptr_t m_iHostageCount                 = 0X061C; // int32
            static constexpr std::uintptr_t m_bFadePlayerVisibilityFarZ     = 0X0620; // bool
            static constexpr std::uintptr_t m_bRainTraceToSkyEnabled        = 0X0621; // bool
            static constexpr std::uintptr_t m_flEnvRainStrength             = 0X0624; // float32
            static constexpr std::uintptr_t m_flEnvPuddleRippleStrength     = 0X0628; // float32
            static constexpr std::uintptr_t m_flEnvPuddleRippleDirection    = 0X062C; // float32
            static constexpr std::uintptr_t m_flEnvWetnessCoverage          = 0X0630; // float32
            static constexpr std::uintptr_t m_flEnvWetnessDryingAmount      = 0X0634; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSGO_EndOfMatchCamera : public C_CSGO_TeamPreviewCamera {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PlayerSprayDecal : public C_ModelPointEntity {
        public:
            static constexpr std::uintptr_t m_nUniqueID         = 0X0E88; // int32
            static constexpr std::uintptr_t m_unAccountID       = 0X0E8C; // uint32
            static constexpr std::uintptr_t m_unTraceID         = 0X0E90; // uint32
            static constexpr std::uintptr_t m_rtGcTime          = 0X0E94; // uint32
            static constexpr std::uintptr_t m_vecEndPos         = 0X0E98; // Vector
            static constexpr std::uintptr_t m_vecStart          = 0X0EA4; // Vector
            static constexpr std::uintptr_t m_vecLeft           = 0X0EB0; // Vector
            static constexpr std::uintptr_t m_vecNormal         = 0X0EBC; // Vector
            static constexpr std::uintptr_t m_nPlayer           = 0X0EC8; // int32
            static constexpr std::uintptr_t m_nEntity           = 0X0ECC; // int32
            static constexpr std::uintptr_t m_nHitbox           = 0X0ED0; // int32
            static constexpr std::uintptr_t m_flCreationTime    = 0X0ED4; // float32
            static constexpr std::uintptr_t m_nTintID           = 0X0ED8; // int32
            static constexpr std::uintptr_t m_nVersion          = 0X0EDC; // uint8
            static constexpr std::uintptr_t m_ubSignature       = 0X0EDD; // uint8[128]
            static constexpr std::uintptr_t m_SprayRenderHelper = 0X0F68; // CPlayerSprayDecalRenderHelper
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
        class C_CS2HudModelArms : public C_CS2HudModelBase {
        public:
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
        class C_LightSpotEntity : public C_LightEntity {
        public:
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
        // Local Type Scope
        class CPulseExecCursor {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CsmFovOverride : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_cameraName            = 0X0608; // CUtlString
            static constexpr std::uintptr_t m_flCsmFovOverrideValue = 0X0610; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_WeaponGlock : public C_CSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFilterTeam : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_iFilterTeam = 0X0640; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoInteraction : public C_PointEntity {
        public:
            static constexpr std::uintptr_t m_strSlotEntityName = 0X0608; // CUtlSymbolLarge[8]
            static constexpr std::uintptr_t m_strInteractVData  = 0X0648; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flInteractRadius  = 0X0650; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSGO_EndOfMatchLineupEnd : public C_CSGO_EndOfMatchLineupEndpoint {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel : public C_CSGO_PreviewPlayer {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_SmokeGrenade : public C_BaseCSGrenade {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoParticleTarget : public C_PointEntity {
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
        class C_EntityFlame : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_hEntAttached = 0X0608; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_hOldAttached = 0X0630; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_bCheapEffect = 0X0634; // bool
        };

        struct GeneratedTextureHandle_t {
        public:
            static constexpr std::uintptr_t m_strBitmapName = 0X0000; // CUtlString
        };

        // Construct Allowed
        struct CompositeMaterialInputContainer_t {
        public:
            static constexpr std::uintptr_t m_bEnabled                                   = 0X0000; // bool
            static constexpr std::uintptr_t m_nCompositeMaterialInputContainerSourceType = 0X0004; // CompositeMaterialInputContainerSourceType_t
            static constexpr std::uintptr_t m_strSpecificContainerMaterial               = 0X0008; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIMaterial2>>
            static constexpr std::uintptr_t m_strAttrName                                = 0X00E8; // CUtlString
            static constexpr std::uintptr_t m_strAlias                                   = 0X00F0; // CUtlString
            static constexpr std::uintptr_t m_vecLooseVariables                          = 0X00F8; // CUtlVector<CompositeMaterialInputLooseVariable_t>
            static constexpr std::uintptr_t m_strAttrNameForVar                          = 0X0110; // CUtlString
            static constexpr std::uintptr_t m_bExposeExternally                          = 0X0118; // bool
        };

        // Construct Allowed
        struct CompositeMaterialAssemblyProcedure_t {
        public:
            static constexpr std::uintptr_t m_vecCompMatIncludes          = 0X0000; // CUtlVector<CResourceNameTyped<CWeakHandle<InfoForResourceTypeCCompositeMaterialKit>>>
            static constexpr std::uintptr_t m_vecMatchFilters             = 0X0018; // CUtlVector<CompositeMaterialMatchFilter_t>
            static constexpr std::uintptr_t m_vecCompositeInputContainers = 0X0030; // CUtlVector<CompositeMaterialInputContainer_t>
            static constexpr std::uintptr_t m_vecPropertyMutators         = 0X0048; // CUtlVector<CompMatPropertyMutator_t>
        };

        // Construct Allowed
        struct CompositeMaterialInputLooseVariable_t {
        public:
            static constexpr std::uintptr_t m_strName                           = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_bExposeExternally                 = 0X0008; // bool
            static constexpr std::uintptr_t m_strExposedFriendlyName            = 0X0010; // CUtlString
            static constexpr std::uintptr_t m_strExposedFriendlyGroupName       = 0X0018; // CUtlString
            static constexpr std::uintptr_t m_bExposedVariableIsFixedRange      = 0X0020; // bool
            static constexpr std::uintptr_t m_strExposedVisibleWhenTrue         = 0X0028; // CUtlString
            static constexpr std::uintptr_t m_strExposedHiddenWhenTrue          = 0X0030; // CUtlString
            static constexpr std::uintptr_t m_strExposedValueList               = 0X0038; // CUtlString
            static constexpr std::uintptr_t m_nVariableType                     = 0X0040; // CompositeMaterialInputLooseVariableType_t
            static constexpr std::uintptr_t m_bValueBoolean                     = 0X0044; // bool
            static constexpr std::uintptr_t m_nValueIntX                        = 0X0048; // int32
            static constexpr std::uintptr_t m_nValueIntY                        = 0X004C; // int32
            static constexpr std::uintptr_t m_nValueIntZ                        = 0X0050; // int32
            static constexpr std::uintptr_t m_nValueIntW                        = 0X0054; // int32
            static constexpr std::uintptr_t m_bHasFloatBounds                   = 0X0058; // bool
            static constexpr std::uintptr_t m_flValueFloatX                     = 0X005C; // float32
            static constexpr std::uintptr_t m_flValueFloatX_Min                 = 0X0060; // float32
            static constexpr std::uintptr_t m_flValueFloatX_Max                 = 0X0064; // float32
            static constexpr std::uintptr_t m_flValueFloatY                     = 0X0068; // float32
            static constexpr std::uintptr_t m_flValueFloatY_Min                 = 0X006C; // float32
            static constexpr std::uintptr_t m_flValueFloatY_Max                 = 0X0070; // float32
            static constexpr std::uintptr_t m_flValueFloatZ                     = 0X0074; // float32
            static constexpr std::uintptr_t m_flValueFloatZ_Min                 = 0X0078; // float32
            static constexpr std::uintptr_t m_flValueFloatZ_Max                 = 0X007C; // float32
            static constexpr std::uintptr_t m_flValueFloatW                     = 0X0080; // float32
            static constexpr std::uintptr_t m_flValueFloatW_Min                 = 0X0084; // float32
            static constexpr std::uintptr_t m_flValueFloatW_Max                 = 0X0088; // float32
            static constexpr std::uintptr_t m_cValueColor4                      = 0X008C; // Color
            static constexpr std::uintptr_t m_nValueSystemVar                   = 0X0090; // CompositeMaterialVarSystemVar_t
            static constexpr std::uintptr_t m_strResourceMaterial               = 0X0098; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIMaterial2>>
            static constexpr std::uintptr_t m_strTextureContentAssetPath        = 0X0178; // CUtlString
            static constexpr std::uintptr_t m_strTextureRuntimeResourcePath     = 0X0180; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCTextureBase>>
            static constexpr std::uintptr_t m_strTextureCompilationVtexTemplate = 0X0260; // CUtlString
            static constexpr std::uintptr_t m_nTextureType                      = 0X0268; // CompositeMaterialInputTextureType_t
            static constexpr std::uintptr_t m_strString                         = 0X0270; // CUtlString
            static constexpr std::uintptr_t m_strPanoramaPanelPath              = 0X0278; // CUtlString
            static constexpr std::uintptr_t m_nPanoramaRenderRes                = 0X0280; // int32
        };

        // Has VTable
        // Construct Allowed
        class CNmEventConsumerHudModelArmsAttributes : public CNmEventConsumerAttributes {
        public:
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct inv_image_light_barn_t {
        public:
            static constexpr std::uintptr_t color          = 0X0000; // Vector
            static constexpr std::uintptr_t angle          = 0X000C; // QAngle
            static constexpr std::uintptr_t brightness     = 0X0018; // float32
            static constexpr std::uintptr_t orbit_distance = 0X001C; // float32
        };

        // Construct Allowed
        struct inv_image_map_t {
        public:
            static constexpr std::uintptr_t map_name     = 0X0000; // CUtlString
            static constexpr std::uintptr_t map_rotation = 0X0008; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct inv_image_light_fill_t {
        public:
            static constexpr std::uintptr_t color      = 0X0000; // Vector
            static constexpr std::uintptr_t angle      = 0X000C; // QAngle
            static constexpr std::uintptr_t brightness = 0X0018; // float32
        };

        // Has Trivial Destructor
        class CInterpolatedValue {
        public:
            static constexpr std::uintptr_t m_flStartTime  = 0X0000; // float32
            static constexpr std::uintptr_t m_flEndTime    = 0X0004; // float32
            static constexpr std::uintptr_t m_flStartValue = 0X0008; // float32
            static constexpr std::uintptr_t m_flEndValue   = 0X000C; // float32
            static constexpr std::uintptr_t m_nInterpType  = 0X0010; // int32
        };

        // Construct Allowed
        struct inv_image_item_t {
        public:
            static constexpr std::uintptr_t position      = 0X0000; // Vector
            static constexpr std::uintptr_t angle         = 0X000C; // QAngle
            static constexpr std::uintptr_t pose_sequence = 0X0018; // CUtlString
        };

        // Has Trivial Destructor
        class TimedEvent {
        public:
            static constexpr std::uintptr_t m_TimeBetweenEvents = 0X0000; // float32
            static constexpr std::uintptr_t m_fNextEvent        = 0X0004; // float32
        };

        // Has VTable
        class CFlashlightEffect {
        public:
            static constexpr std::uintptr_t m_bIsOn                      = 0X0010; // bool
            static constexpr std::uintptr_t m_bMuzzleFlashEnabled        = 0X0020; // bool
            static constexpr std::uintptr_t m_flMuzzleFlashBrightness    = 0X0024; // float32
            static constexpr std::uintptr_t m_quatMuzzleFlashOrientation = 0X0030; // Quaternion
            static constexpr std::uintptr_t m_vecMuzzleFlashOrigin       = 0X0040; // Vector
            static constexpr std::uintptr_t m_flFov                      = 0X004C; // float32
            static constexpr std::uintptr_t m_flFarZ                     = 0X0050; // float32
            static constexpr std::uintptr_t m_flLinearAtten              = 0X0054; // float32
            static constexpr std::uintptr_t m_bCastsShadows              = 0X0058; // bool
            static constexpr std::uintptr_t m_flCurrentPullBackDist      = 0X005C; // float32
            static constexpr std::uintptr_t m_FlashlightTexture          = 0X0060; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_MuzzleFlashTexture         = 0X0068; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_textureName                = 0X0070; // char[64]
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct inv_image_camera_t {
        public:
            static constexpr std::uintptr_t angle          = 0X0000; // QAngle
            static constexpr std::uintptr_t fov            = 0X000C; // float32
            static constexpr std::uintptr_t znear          = 0X0010; // float32
            static constexpr std::uintptr_t zfar           = 0X0014; // float32
            static constexpr std::uintptr_t target         = 0X0018; // Vector
            static constexpr std::uintptr_t target_nudge   = 0X0024; // Vector
            static constexpr std::uintptr_t orbit_distance = 0X0030; // float32
        };

        // Construct Allowed
        class CInventoryImageData {
        public:
            static constexpr std::uintptr_t m_nNodeType          = 0X0000; // InventoryNodeType_t
            static constexpr std::uintptr_t name                 = 0X0008; // CUtlString
            static constexpr std::uintptr_t inventory_image_data = 0X0010; // inv_image_data_t
        };

        // Has VTable
        // Construct Allowed
        class C_CSGO_PreviewPlayer_GraphController : public CAnimGraphControllerBase {
        public:
            static constexpr std::uintptr_t m_pszCharacterMode         = 0X0090; // CAnimGraphParamRef<char*>
            static constexpr std::uintptr_t m_pszTeamPreviewVariant    = 0X00C0; // CAnimGraphParamRef<char*>
            static constexpr std::uintptr_t m_pszTeamPreviewPosition   = 0X00F0; // CAnimGraphParamRef<char*>
            static constexpr std::uintptr_t m_pszEndOfMatchCelebration = 0X0120; // CAnimGraphParamRef<char*>
            static constexpr std::uintptr_t m_nTeamPreviewRandom       = 0X0150; // CAnimGraphParamRef<int32>
            static constexpr std::uintptr_t m_pszWeaponState           = 0X0178; // CAnimGraphParamRef<char*>
            static constexpr std::uintptr_t m_pszWeaponType            = 0X01A8; // CAnimGraphParamRef<char*>
            static constexpr std::uintptr_t m_bCT                      = 0X01D8; // CAnimGraphParamRef<bool>
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct inv_image_clearcolor_t {
        public:
            static constexpr std::uintptr_t color = 0X0000; // Vector
        };

        class C_CommandContext {
        public:
            static constexpr std::uintptr_t needsprocessing = 0X0000; // bool
            static constexpr std::uintptr_t command_number  = 0X00A0; // int32
        };

        // Construct Allowed
        struct CompositeMaterialEditorPoint_t {
        public:
            static constexpr std::uintptr_t m_ModelName                              = 0X0000; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            static constexpr std::uintptr_t m_nSequenceIndex                         = 0X00E0; // int32
            static constexpr std::uintptr_t m_flCycle                                = 0X00E4; // float32
            static constexpr std::uintptr_t m_KVModelStateChoices                    = 0X00E8; // KeyValues3
            static constexpr std::uintptr_t m_bEnableChildModel                      = 0X00F8; // bool
            static constexpr std::uintptr_t m_ChildModelName                         = 0X0100; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            static constexpr std::uintptr_t m_vecCompositeMaterialAssemblyProcedures = 0X01E0; // CUtlVector<CompositeMaterialAssemblyProcedure_t>
            static constexpr std::uintptr_t m_vecCompositeMaterials                  = 0X01F8; // CUtlVector<CompositeMaterial_t>
        };

        class CPlayerSprayDecalRenderHelper {
        public:
        };

        // Has VTable
        class C_IronSightController {
        public:
            static constexpr std::uintptr_t m_bIronSightAvailable                    = 0X0010; // bool
            static constexpr std::uintptr_t m_flIronSightAmount                      = 0X0014; // float32
            static constexpr std::uintptr_t m_flIronSightAmountGained                = 0X0018; // float32
            static constexpr std::uintptr_t m_flIronSightAmountBiased                = 0X001C; // float32
            static constexpr std::uintptr_t m_flIronSightAmount_Interpolated         = 0X0020; // float32
            static constexpr std::uintptr_t m_flIronSightAmountGained_Interpolated   = 0X0024; // float32
            static constexpr std::uintptr_t m_flIronSightAmountBiased_Interpolated   = 0X0028; // float32
            static constexpr std::uintptr_t m_flInterpolationLastUpdated             = 0X002C; // float32
            static constexpr std::uintptr_t m_angDeltaAverage                        = 0X0030; // QAngle[8]
            static constexpr std::uintptr_t m_angViewLast                            = 0X0090; // QAngle
            static constexpr std::uintptr_t m_vecDotCoords                           = 0X009C; // Vector2D
            static constexpr std::uintptr_t m_flFiringInaccuracyExtraWidthMultiplier = 0X00A4; // float32
            static constexpr std::uintptr_t m_flSpeedRatio                           = 0X00A8; // float32
        };

        // Construct Allowed
        struct CompMatMutatorCondition_t {
        public:
            static constexpr std::uintptr_t m_nMutatorCondition                    = 0X0000; // CompMatPropertyMutatorConditionType_t
            static constexpr std::uintptr_t m_strMutatorConditionContainerName     = 0X0008; // CUtlString
            static constexpr std::uintptr_t m_strMutatorConditionContainerVarName  = 0X0010; // CUtlString
            static constexpr std::uintptr_t m_strMutatorConditionContainerVarValue = 0X0018; // CUtlString
            static constexpr std::uintptr_t m_bPassWhenTrue                        = 0X0020; // bool
        };

        // Construct Allowed
        struct inv_image_data_t {
        public:
            static constexpr std::uintptr_t map        = 0X0000; // inv_image_map_t
            static constexpr std::uintptr_t item       = 0X0010; // inv_image_item_t
            static constexpr std::uintptr_t camera     = 0X0030; // inv_image_camera_t
            static constexpr std::uintptr_t lightsun   = 0X0064; // inv_image_light_sun_t
            static constexpr std::uintptr_t lightfill  = 0X0080; // inv_image_light_fill_t
            static constexpr std::uintptr_t light0     = 0X009C; // inv_image_light_barn_t
            static constexpr std::uintptr_t light1     = 0X00BC; // inv_image_light_barn_t
            static constexpr std::uintptr_t clearcolor = 0X00DC; // inv_image_clearcolor_t
        };

        // Construct Allowed
        struct CompMatPropertyMutator_t {
        public:
            static constexpr std::uintptr_t m_bEnabled                                = 0X0000; // bool
            static constexpr std::uintptr_t m_nMutatorCommandType                     = 0X0004; // CompMatPropertyMutatorType_t
            static constexpr std::uintptr_t m_strInitWith_Container                   = 0X0008; // CUtlString
            static constexpr std::uintptr_t m_strCopyProperty_InputContainerSrc       = 0X0010; // CUtlString
            static constexpr std::uintptr_t m_strCopyProperty_InputContainerProperty  = 0X0018; // CUtlString
            static constexpr std::uintptr_t m_strCopyProperty_TargetProperty          = 0X0020; // CUtlString
            static constexpr std::uintptr_t m_strRandomRollInputVars_SeedInputVar     = 0X0028; // CUtlString
            static constexpr std::uintptr_t m_vecRandomRollInputVars_InputVarsToRoll  = 0X0030; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_strCopyMatchingKeys_InputContainerSrc   = 0X0048; // CUtlString
            static constexpr std::uintptr_t m_strCopyKeysWithSuffix_InputContainerSrc = 0X0050; // CUtlString
            static constexpr std::uintptr_t m_strCopyKeysWithSuffix_FindSuffix        = 0X0058; // CUtlString
            static constexpr std::uintptr_t m_strCopyKeysWithSuffix_ReplaceSuffix     = 0X0060; // CUtlString
            static constexpr std::uintptr_t m_nSetValue_Value                         = 0X0068; // CompositeMaterialInputLooseVariable_t
            static constexpr std::uintptr_t m_strGenerateTexture_TargetParam          = 0X02F0; // CUtlString
            static constexpr std::uintptr_t m_strGenerateTexture_InitialContainer     = 0X02F8; // CUtlString
            static constexpr std::uintptr_t m_nResolution                             = 0X0300; // int32
            static constexpr std::uintptr_t m_bIsScratchTarget                        = 0X0304; // bool
            static constexpr std::uintptr_t m_strCompressionFormat                    = 0X0308; // CUtlString
            static constexpr std::uintptr_t m_bSplatDebugInfo                         = 0X0310; // bool
            static constexpr std::uintptr_t m_bCaptureInRenderDoc                     = 0X0311; // bool
            static constexpr std::uintptr_t m_vecTexGenInstructions                   = 0X0318; // CUtlVector<CompMatPropertyMutator_t>
            static constexpr std::uintptr_t m_vecConditionalMutators                  = 0X0330; // CUtlVector<CompMatPropertyMutator_t>
            static constexpr std::uintptr_t m_strPopInputQueue_Container              = 0X0348; // CUtlString
            static constexpr std::uintptr_t m_strDrawText_InputContainerSrc           = 0X0350; // CUtlString
            static constexpr std::uintptr_t m_strDrawText_InputContainerProperty      = 0X0358; // CUtlString
            static constexpr std::uintptr_t m_vecDrawText_Position                    = 0X0360; // Vector2D
            static constexpr std::uintptr_t m_colDrawText_Color                       = 0X0368; // Color
            static constexpr std::uintptr_t m_strDrawText_Font                        = 0X0370; // CUtlString
            static constexpr std::uintptr_t m_vecConditions                           = 0X0378; // CUtlVector<CompMatMutatorCondition_t>
        };

        // Has VTable
        // Construct Allowed
        class CCompositeMaterialEditorDoc {
        public:
            static constexpr std::uintptr_t m_nVersion    = 0X0008; // int32
            static constexpr std::uintptr_t m_Points      = 0X0010; // CUtlVector<CompositeMaterialEditorPoint_t>
            static constexpr std::uintptr_t m_KVthumbnail = 0X0028; // KeyValues3
        };

        // Has VTable
        // Is Absract
        // Has Trivial Destructor
        class IClientAlphaProperty {
        public:
        };

        // Has VTable
        // Has Trivial Destructor
        class CClientAlphaProperty : public IClientAlphaProperty {
        public:
            static constexpr std::uintptr_t m_nDistFadeStart       = 0X0010; // uint16
            static constexpr std::uintptr_t m_nDistFadeEnd         = 0X0012; // uint16
            static constexpr std::uintptr_t m_nDesyncOffset        = 0X0000; // bitfield:14
            static constexpr std::uintptr_t m_bAlphaOverride       = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_bShadowAlphaOverride = 0X0000; // bitfield:1
            static constexpr std::uintptr_t m_nRenderMode          = 0X0000; // bitfield:3
            static constexpr std::uintptr_t m_nRenderFX            = 0X0000; // bitfield:5
            static constexpr std::uintptr_t m_nAlpha               = 0X0017; // uint8
            static constexpr std::uintptr_t m_flFadeScale          = 0X0018; // float32
            static constexpr std::uintptr_t m_flRenderFxStartTime  = 0X001C; // GameTime_t
            static constexpr std::uintptr_t m_flRenderFxDuration   = 0X0020; // float32
        };

        // Has VTable
        class CGlobalLightBase {
        public:
            static constexpr std::uintptr_t m_bSpotLight                  = 0X0010; // bool
            static constexpr std::uintptr_t m_SpotLightOrigin             = 0X0014; // Vector
            static constexpr std::uintptr_t m_SpotLightAngles             = 0X0020; // QAngle
            static constexpr std::uintptr_t m_ShadowDirection             = 0X002C; // Vector
            static constexpr std::uintptr_t m_AmbientDirection            = 0X0038; // Vector
            static constexpr std::uintptr_t m_SpecularDirection           = 0X0044; // Vector
            static constexpr std::uintptr_t m_InspectorSpecularDirection  = 0X0050; // Vector
            static constexpr std::uintptr_t m_flSpecularPower             = 0X005C; // float32
            static constexpr std::uintptr_t m_flSpecularIndependence      = 0X0060; // float32
            static constexpr std::uintptr_t m_SpecularColor               = 0X0064; // Color
            static constexpr std::uintptr_t m_bStartDisabled              = 0X0068; // bool
            static constexpr std::uintptr_t m_bEnabled                    = 0X0069; // bool
            static constexpr std::uintptr_t m_LightColor                  = 0X006A; // Color
            static constexpr std::uintptr_t m_AmbientColor1               = 0X006E; // Color
            static constexpr std::uintptr_t m_AmbientColor2               = 0X0072; // Color
            static constexpr std::uintptr_t m_AmbientColor3               = 0X0076; // Color
            static constexpr std::uintptr_t m_flSunDistance               = 0X007C; // float32
            static constexpr std::uintptr_t m_flFOV                       = 0X0080; // float32
            static constexpr std::uintptr_t m_flNearZ                     = 0X0084; // float32
            static constexpr std::uintptr_t m_flFarZ                      = 0X0088; // float32
            static constexpr std::uintptr_t m_bEnableShadows              = 0X008C; // bool
            static constexpr std::uintptr_t m_bOldEnableShadows           = 0X008D; // bool
            static constexpr std::uintptr_t m_bBackgroundClearNotRequired = 0X008E; // bool
            static constexpr std::uintptr_t m_flCloudScale                = 0X0090; // float32
            static constexpr std::uintptr_t m_flCloud1Speed               = 0X0094; // float32
            static constexpr std::uintptr_t m_flCloud1Direction           = 0X0098; // float32
            static constexpr std::uintptr_t m_flCloud2Speed               = 0X009C; // float32
            static constexpr std::uintptr_t m_flCloud2Direction           = 0X00A0; // float32
            static constexpr std::uintptr_t m_flAmbientScale1             = 0X00B0; // float32
            static constexpr std::uintptr_t m_flAmbientScale2             = 0X00B4; // float32
            static constexpr std::uintptr_t m_flGroundScale               = 0X00B8; // float32
            static constexpr std::uintptr_t m_flLightScale                = 0X00BC; // float32
            static constexpr std::uintptr_t m_flFoWDarkness               = 0X00C0; // float32
            static constexpr std::uintptr_t m_bEnableSeparateSkyboxFog    = 0X00C4; // bool
            static constexpr std::uintptr_t m_vFowColor                   = 0X00C8; // Vector
            static constexpr std::uintptr_t m_ViewOrigin                  = 0X00D4; // Vector
            static constexpr std::uintptr_t m_ViewAngles                  = 0X00E0; // QAngle
            static constexpr std::uintptr_t m_flViewFoV                   = 0X00EC; // float32
            static constexpr std::uintptr_t m_WorldPoints                 = 0X00F0; // Vector[8]
            static constexpr std::uintptr_t m_vFogOffsetLayer0            = 0X04A8; // Vector2D
            static constexpr std::uintptr_t m_vFogOffsetLayer1            = 0X04B0; // Vector2D
            static constexpr std::uintptr_t m_hEnvWind                    = 0X04B8; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_hEnvSky                     = 0X04BC; // CHandle<C_BaseEntity>
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct inv_image_light_sun_t {
        public:
            static constexpr std::uintptr_t color      = 0X0000; // Vector
            static constexpr std::uintptr_t angle      = 0X000C; // QAngle
            static constexpr std::uintptr_t brightness = 0X0018; // float32
        };

        // Construct Allowed
        struct CompositeMaterialMatchFilter_t {
        public:
            static constexpr std::uintptr_t m_nCompositeMaterialMatchFilterType = 0X0000; // CompositeMaterialMatchFilterType_t
            static constexpr std::uintptr_t m_strMatchFilter                    = 0X0008; // CUtlString
            static constexpr std::uintptr_t m_strMatchValue                     = 0X0010; // CUtlString
            static constexpr std::uintptr_t m_bPassWhenTrue                     = 0X0018; // bool
        };

        struct CompositeMaterial_t {
        public:
            static constexpr std::uintptr_t m_TargetKVs            = 0X0008; // KeyValues3
            static constexpr std::uintptr_t m_PreGenerationKVs     = 0X0018; // KeyValues3
            static constexpr std::uintptr_t m_FinalKVs             = 0X0058; // KeyValues3
            static constexpr std::uintptr_t m_vecGeneratedTextures = 0X0080; // CUtlVector<GeneratedTextureHandle_t>
        };
    }
}

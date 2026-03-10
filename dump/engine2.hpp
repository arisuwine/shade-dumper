#pragma once
#include <cstdint>

namespace offsets {
    namespace engine2 {
        enum class EntityDormancyType_t : std::uint32_t {
            ENTITY_NOT_DORMANT = 0x0,
            ENTITY_DORMANT     = 0x1,
            ENTITY_SUSPENDED   = 0x2
        };

        enum class EntityIOTargetType_t : std::uint32_t {
            ENTITY_IO_TARGET_INVALID                 = 0xFFFFFFFF,
            ENTITY_IO_TARGET_ENTITYNAME              = 0x2,
            ENTITY_IO_TARGET_EHANDLE                 = 0x6,
            ENTITY_IO_TARGET_ENTITYNAME_OR_CLASSNAME = 0x7
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
        // Is Absract
        // Has Trivial Destructor
        // Local Type Scope
        class CEntityComponent {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CScriptComponent : public CEntityComponent {
        public:
            static constexpr std::uintptr_t m_scriptClassName = 0X0030; // CUtlSymbolLarge
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
        // Global Type Scope
        struct EventSimulate_t {
        public:
            static constexpr std::uintptr_t m_LoopState  = 0X0000; // EngineLoopState_t
            static constexpr std::uintptr_t m_bFirstTick = 0X0028; // bool
            static constexpr std::uintptr_t m_bLastTick  = 0X0029; // bool
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventClientPostSimulate_t : public EventSimulate_t {
        public:
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventSimpleLoopFrameUpdate_t {
        public:
            static constexpr std::uintptr_t m_LoopState   = 0X0000; // EngineLoopState_t
            static constexpr std::uintptr_t m_flRealTime  = 0X0028; // float32
            static constexpr std::uintptr_t m_flFrameTime = 0X002C; // float32
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventPostAdvanceTick_t : public EventSimulate_t {
        public:
            static constexpr std::uintptr_t m_nCurrentTick          = 0X0030; // int32
            static constexpr std::uintptr_t m_nCurrentTickThisFrame = 0X0034; // int32
            static constexpr std::uintptr_t m_nTotalTicksThisFrame  = 0X0038; // int32
            static constexpr std::uintptr_t m_nTotalTicks           = 0X003C; // int32
        };

        // Has VTable
        class CEntityIOOutput {
        public:
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventClientSceneSystemThreadStateChange_t {
        public:
            static constexpr std::uintptr_t m_bThreadsActive = 0X0000; // bool
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventClientOutput_t {
        public:
            static constexpr std::uintptr_t m_LoopState                  = 0X0000; // EngineLoopState_t
            static constexpr std::uintptr_t m_flRenderTime               = 0X0028; // float32
            static constexpr std::uintptr_t m_flRealTime                 = 0X002C; // float32
            static constexpr std::uintptr_t m_flRenderFrameTimeUnbounded = 0X0030; // float32
            static constexpr std::uintptr_t m_bRenderOnly                = 0X0034; // bool
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventServerPostSimulate_t : public EventSimulate_t {
        public:
            static constexpr std::uintptr_t m_bLastTickBeforeClientUpdate = 0X0030; // bool
        };

        // Has VTable
        // Is Absract
        // Has Trivial Destructor
        class CEntityComponentHelper {
        public:
            static constexpr std::uintptr_t m_flags     = 0X0008; // uint32
            static constexpr std::uintptr_t m_pInfo     = 0X0010; // EntComponentInfo_t*
            static constexpr std::uintptr_t m_nPriority = 0X0018; // int32
            static constexpr std::uintptr_t m_pNext     = 0X0020; // CEntityComponentHelper*
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct GameTime_t {
        public:
            static constexpr std::uintptr_t m_Value = 0X0000; // float32
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventServerBeginSimulate_t : public EventSimulate_t {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        struct EventServerEndAsyncPostTickWork_t {
        public:
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventAdvanceTick_t : public EventSimulate_t {
        public:
            static constexpr std::uintptr_t m_nCurrentTick          = 0X0030; // int32
            static constexpr std::uintptr_t m_nCurrentTickThisFrame = 0X0034; // int32
            static constexpr std::uintptr_t m_nTotalTicksThisFrame  = 0X0038; // int32
            static constexpr std::uintptr_t m_nTotalTicks           = 0X003C; // int32
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventClientAdvanceTick_t : public EventAdvanceTick_t {
        public:
        };

        // Has Trivial Destructor
        struct EntInput_t {
        public:
        };

        // Global Type Scope
        class CNetworkVarChainer {
        public:
            static constexpr std::uintptr_t m_PathIndex = 0X0020; // ChangeAccessorFieldPathIndex_t
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventClientSimulate_t : public EventSimulate_t {
        public:
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventClientPostOutput_t {
        public:
            static constexpr std::uintptr_t m_LoopState                  = 0X0000; // EngineLoopState_t
            static constexpr std::uintptr_t m_flRenderTime               = 0X0028; // float64
            static constexpr std::uintptr_t m_flRenderFrameTime          = 0X0030; // float32
            static constexpr std::uintptr_t m_flRenderFrameTimeUnbounded = 0X0034; // float32
            static constexpr std::uintptr_t m_bRenderOnly                = 0X0038; // bool
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct GameTick_t {
        public:
            static constexpr std::uintptr_t m_Value = 0X0000; // int32
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventClientPollInput_t {
        public:
            static constexpr std::uintptr_t m_LoopState  = 0X0000; // EngineLoopState_t
            static constexpr std::uintptr_t m_flRealTime = 0X0028; // float32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        struct EventPreDataUpdate_t {
        public:
            static constexpr std::uintptr_t m_nCount = 0X0000; // int32
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventClientProcessGameInput_t {
        public:
            static constexpr std::uintptr_t m_LoopState   = 0X0000; // EngineLoopState_t
            static constexpr std::uintptr_t m_flRealTime  = 0X0028; // float32
            static constexpr std::uintptr_t m_flFrameTime = 0X002C; // float32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        struct EventFrameBoundary_t {
        public:
            static constexpr std::uintptr_t m_flFrameTime = 0X0000; // float32
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventAppShutdown_t {
        public:
            static constexpr std::uintptr_t m_nDummy0 = 0X0000; // int32
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventServerPostAdvanceTick_t : public EventPostAdvanceTick_t {
        public:
            static constexpr std::uintptr_t m_bLastTickBeforeClientUpdate = 0X0040; // bool
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventProfileStorageAvailable_t {
        public:
            static constexpr std::uintptr_t m_nSplitScreenSlot = 0X0000; // CSplitScreenSlot
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        struct EventPostDataUpdate_t {
        public:
            static constexpr std::uintptr_t m_nCount = 0X0000; // int32
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventClientPreSimulate_t : public EventSimulate_t {
        public:
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventClientPauseSimulate_t : public EventSimulate_t {
        public:
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventClientProcessNetworking_t {
        public:
            static constexpr std::uintptr_t m_nTickCount = 0X0000; // int32
        };

        class CEntityAttributeTable {
        public:
            static constexpr std::uintptr_t m_Attributes = 0X0000; // CUtlOrderedMap<CUtlStringToken,Attribute_t>
            static constexpr std::uintptr_t m_Names      = 0X0028; // CUtlOrderedMap<CUtlStringToken,CUtlString>
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventClientPreOutput_t {
        public:
            static constexpr std::uintptr_t m_LoopState                  = 0X0000; // EngineLoopState_t
            static constexpr std::uintptr_t m_flRenderTime               = 0X0028; // float64
            static constexpr std::uintptr_t m_flRenderFrameTime          = 0X0030; // float64
            static constexpr std::uintptr_t m_flRenderFrameTimeUnbounded = 0X0038; // float64
            static constexpr std::uintptr_t m_flRealTime                 = 0X0040; // float32
            static constexpr std::uintptr_t m_bRenderOnly                = 0X0044; // bool
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventClientPreOutputParallelWithServer_t : public EventClientPreOutput_t {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        struct EventSplitScreenStateChanged_t {
        public:
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventClientPostAdvanceTick_t : public EventPostAdvanceTick_t {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        class CVariantDefaultAllocator {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        struct EventModInitialized_t {
        public:
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventClientFrameSimulate_t {
        public:
            static constexpr std::uintptr_t m_LoopState               = 0X0000; // EngineLoopState_t
            static constexpr std::uintptr_t m_flRealTime              = 0X0028; // float32
            static constexpr std::uintptr_t m_flFrameTime             = 0X002C; // float32
            static constexpr std::uintptr_t m_bScheduleSendTickPacket = 0X0030; // bool
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventServerAdvanceTick_t : public EventAdvanceTick_t {
        public:
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventSetTime_t {
        public:
            static constexpr std::uintptr_t m_LoopState                  = 0X0000; // EngineLoopState_t
            static constexpr std::uintptr_t m_nClientOutputFrames        = 0X0028; // int32
            static constexpr std::uintptr_t m_flRealTime                 = 0X0030; // float64
            static constexpr std::uintptr_t m_flRenderTime               = 0X0038; // float64
            static constexpr std::uintptr_t m_flRenderFrameTime          = 0X0040; // float64
            static constexpr std::uintptr_t m_flRenderFrameTimeUnbounded = 0X0048; // float64
            static constexpr std::uintptr_t m_flRenderFrameTimeUnscaled  = 0X0050; // float64
            static constexpr std::uintptr_t m_flTickRemainder            = 0X0058; // float64
        };

        // Has Trivial Destructor
        struct EntOutput_t {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        struct EventClientAdvanceNonRenderedFrame_t {
        public:
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventServerProcessNetworking_t : public EventSimulate_t {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        class CEmptyEntityInstance {
        public:
        };

        // Has Trivial Destructor
        struct EntComponentInfo_t {
        public:
            static constexpr std::uintptr_t m_pName                                    = 0X0000; // char*
            static constexpr std::uintptr_t m_pCPPClassname                            = 0X0008; // char*
            static constexpr std::uintptr_t m_pNetworkDataReferencedDescription        = 0X0010; // char*
            static constexpr std::uintptr_t m_pNetworkDataReferencedPtrPropDescription = 0X0018; // char*
            static constexpr std::uintptr_t m_nRuntimeIndex                            = 0X0020; // int32
            static constexpr std::uintptr_t m_nFlags                                   = 0X0024; // uint32
            static constexpr std::uintptr_t m_pBaseClassComponentHelper                = 0X0060; // CEntityComponentHelper*
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        struct EngineLoopState_t {
        public:
            static constexpr std::uintptr_t m_nPlatWindowWidth  = 0X0018; // int32
            static constexpr std::uintptr_t m_nPlatWindowHeight = 0X001C; // int32
            static constexpr std::uintptr_t m_nRenderWidth      = 0X0020; // int32
            static constexpr std::uintptr_t m_nRenderHeight     = 0X0024; // int32
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventClientPollNetworking_t {
        public:
            static constexpr std::uintptr_t m_nTickCount = 0X0000; // int32
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventServerBeginAsyncPostTickWork_t {
        public:
            static constexpr std::uintptr_t m_bIsOncePerFrameAsyncWorkPhase = 0X0000; // bool
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventClientProcessInput_t {
        public:
            static constexpr std::uintptr_t m_LoopState       = 0X0000; // EngineLoopState_t
            static constexpr std::uintptr_t m_flRealTime      = 0X0028; // float32
            static constexpr std::uintptr_t m_flTickInterval  = 0X002C; // float32
            static constexpr std::uintptr_t m_flTickStartTime = 0X0030; // float64
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventServerEndSimulate_t {
        public:
            static constexpr std::uintptr_t m_bLastTick = 0X0000; // bool
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventServerPollNetworking_t : public EventSimulate_t {
        public:
        };
    }
}

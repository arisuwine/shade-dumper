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

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        struct EngineLoopState_t {
        public:
            static constexpr std::uintptr_t m_nPlatWindowWidth  = 0x0018; // int32
            static constexpr std::uintptr_t m_nPlatWindowHeight = 0x001C; // int32
            static constexpr std::uintptr_t m_nRenderWidth      = 0x0020; // int32
            static constexpr std::uintptr_t m_nRenderHeight     = 0x0024; // int32
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct ChangeAccessorFieldPathIndex_t {
        public:
            static constexpr std::uintptr_t m_Value = 0x0000; // int32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        struct EventModInitialized_t {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        struct EventFrameBoundary_t {
        public:
            static constexpr std::uintptr_t m_flFrameTime = 0x0000; // float32
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventProfileStorageAvailable_t {
        public:
            static constexpr std::uintptr_t m_nSplitScreenSlot = 0x0000; // CSplitScreenSlot
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        struct EventSplitScreenStateChanged_t {
        public:
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventSetTime_t {
        public:
            static constexpr std::uintptr_t m_LoopState                  = 0x0000; // EngineLoopState_t
            static constexpr std::uintptr_t m_nClientOutputFrames        = 0x0028; // int32
            static constexpr std::uintptr_t m_flRealTime                 = 0x0030; // float64
            static constexpr std::uintptr_t m_flRenderTime               = 0x0038; // float64
            static constexpr std::uintptr_t m_flRenderFrameTime          = 0x0040; // float64
            static constexpr std::uintptr_t m_flRenderFrameTimeUnbounded = 0x0048; // float64
            static constexpr std::uintptr_t m_flRenderFrameTimeUnscaled  = 0x0050; // float64
            static constexpr std::uintptr_t m_flTickRemainder            = 0x0058; // float64
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventClientPollInput_t {
        public:
            static constexpr std::uintptr_t m_LoopState  = 0x0000; // EngineLoopState_t
            static constexpr std::uintptr_t m_flRealTime = 0x0028; // float32
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventClientProcessInput_t {
        public:
            static constexpr std::uintptr_t m_LoopState       = 0x0000; // EngineLoopState_t
            static constexpr std::uintptr_t m_flRealTime      = 0x0028; // float32
            static constexpr std::uintptr_t m_flTickInterval  = 0x002C; // float32
            static constexpr std::uintptr_t m_flTickStartTime = 0x0030; // float64
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventClientProcessGameInput_t {
        public:
            static constexpr std::uintptr_t m_LoopState   = 0x0000; // EngineLoopState_t
            static constexpr std::uintptr_t m_flRealTime  = 0x0028; // float32
            static constexpr std::uintptr_t m_flFrameTime = 0x002C; // float32
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventClientPreOutput_t {
        public:
            static constexpr std::uintptr_t m_LoopState                  = 0x0000; // EngineLoopState_t
            static constexpr std::uintptr_t m_flRenderTime               = 0x0028; // float64
            static constexpr std::uintptr_t m_flRenderFrameTime          = 0x0030; // float64
            static constexpr std::uintptr_t m_flRenderFrameTimeUnbounded = 0x0038; // float64
            static constexpr std::uintptr_t m_flRealTime                 = 0x0040; // float32
            static constexpr std::uintptr_t m_bRenderOnly                = 0x0044; // bool
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventClientSceneSystemThreadStateChange_t {
        public:
            static constexpr std::uintptr_t m_bThreadsActive = 0x0000; // bool
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventClientOutput_t {
        public:
            static constexpr std::uintptr_t m_LoopState                  = 0x0000; // EngineLoopState_t
            static constexpr std::uintptr_t m_flRenderTime               = 0x0028; // float32
            static constexpr std::uintptr_t m_flRealTime                 = 0x002C; // float32
            static constexpr std::uintptr_t m_flRenderFrameTimeUnbounded = 0x0030; // float32
            static constexpr std::uintptr_t m_bRenderOnly                = 0x0034; // bool
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventClientPostOutput_t {
        public:
            static constexpr std::uintptr_t m_LoopState                  = 0x0000; // EngineLoopState_t
            static constexpr std::uintptr_t m_flRenderTime               = 0x0028; // float64
            static constexpr std::uintptr_t m_flRenderFrameTime          = 0x0030; // float32
            static constexpr std::uintptr_t m_flRenderFrameTimeUnbounded = 0x0034; // float32
            static constexpr std::uintptr_t m_bRenderOnly                = 0x0038; // bool
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        struct EventClientAdvanceNonRenderedFrame_t {
        public:
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventClientFrameSimulate_t {
        public:
            static constexpr std::uintptr_t m_LoopState               = 0x0000; // EngineLoopState_t
            static constexpr std::uintptr_t m_flRealTime              = 0x0028; // float32
            static constexpr std::uintptr_t m_flFrameTime             = 0x002C; // float32
            static constexpr std::uintptr_t m_bScheduleSendTickPacket = 0x0030; // bool
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventSimpleLoopFrameUpdate_t {
        public:
            static constexpr std::uintptr_t m_LoopState   = 0x0000; // EngineLoopState_t
            static constexpr std::uintptr_t m_flRealTime  = 0x0028; // float32
            static constexpr std::uintptr_t m_flFrameTime = 0x002C; // float32
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventSimulate_t {
        public:
            static constexpr std::uintptr_t m_LoopState  = 0x0000; // EngineLoopState_t
            static constexpr std::uintptr_t m_bFirstTick = 0x0028; // bool
            static constexpr std::uintptr_t m_bLastTick  = 0x0029; // bool
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventServerBeginAsyncPostTickWork_t {
        public:
            static constexpr std::uintptr_t m_bIsOncePerFrameAsyncWorkPhase = 0x0000; // bool
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        struct EventServerEndAsyncPostTickWork_t {
        public:
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventClientPollNetworking_t {
        public:
            static constexpr std::uintptr_t m_nTickCount = 0x0000; // int32
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventClientProcessNetworking_t {
        public:
            static constexpr std::uintptr_t m_nTickCount = 0x0000; // int32
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventServerEndSimulate_t {
        public:
            static constexpr std::uintptr_t m_bLastTick = 0x0000; // bool
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        struct EventPostDataUpdate_t {
        public:
            static constexpr std::uintptr_t m_nCount = 0x0000; // int32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        struct EventPreDataUpdate_t {
        public:
            static constexpr std::uintptr_t m_nCount = 0x0000; // int32
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct EventAppShutdown_t {
        public:
            static constexpr std::uintptr_t m_nDummy0 = 0x0000; // int32
        };

        // Global Type Scope
        class CNetworkVarChainer {
        public:
            static constexpr std::uintptr_t m_PathIndex = 0x0020; // ChangeAccessorFieldPathIndex_t
        };

        class CEntityAttributeTable {
        public:
            static constexpr std::uintptr_t m_Attributes = 0x0000; // CUtlOrderedMap<CUtlStringToken,Attribute_t>
            static constexpr std::uintptr_t m_Names      = 0x0028; // CUtlOrderedMap<CUtlStringToken,CUtlString>
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        class CVariantDefaultAllocator {
        public:
        };

        // Has Trivial Destructor
        struct EntOutput_t {
        public:
        };

        // Has Trivial Destructor
        struct EntComponentInfo_t {
        public:
            static constexpr std::uintptr_t m_pName                                    = 0x0000; // char*
            static constexpr std::uintptr_t m_pCPPClassname                            = 0x0008; // char*
            static constexpr std::uintptr_t m_pNetworkDataReferencedDescription        = 0x0010; // char*
            static constexpr std::uintptr_t m_pNetworkDataReferencedPtrPropDescription = 0x0018; // char*
            static constexpr std::uintptr_t m_nRuntimeIndex                            = 0x0020; // int32
            static constexpr std::uintptr_t m_nFlags                                   = 0x0024; // uint32
            static constexpr std::uintptr_t m_pBaseClassComponentHelper                = 0x0060; // CEntityComponentHelper*
        };

        // Has VTable
        // Is Absract
        // Has Trivial Destructor
        class CEntityComponentHelper {
        public:
            static constexpr std::uintptr_t m_flags     = 0x0008; // uint32
            static constexpr std::uintptr_t m_pInfo     = 0x0010; // EntComponentInfo_t*
            static constexpr std::uintptr_t m_nPriority = 0x0018; // int32
            static constexpr std::uintptr_t m_pNext     = 0x0020; // CEntityComponentHelper*
        };

        // Has VTable
        // Is Absract
        // Has Trivial Destructor
        // Local Type Scope
        class CEntityComponent {
        public:
        };

        // Has Trivial Destructor
        struct EntInput_t {
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

        // Has Trivial Constructor
        // Has Trivial Destructor
        class CEmptyEntityInstance {
        public:
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
        class CEntityIOOutput {
        public:
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct GameTime_t {
        public:
            static constexpr std::uintptr_t m_Value = 0x0000; // float32
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct GameTick_t {
        public:
            static constexpr std::uintptr_t m_Value = 0x0000; // int32
        };

        // Has Trivial Destructor
        // Global Type Scope
        class EventServerPollNetworking_t : public EventSimulate_t {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CScriptComponent : public CEntityComponent {
        public:
            static constexpr std::uintptr_t m_scriptClassName = 0x0030; // CUtlSymbolLarge
        };

        // Has Trivial Destructor
        // Global Type Scope
        class EventServerPostSimulate_t : public EventSimulate_t {
        public:
            static constexpr std::uintptr_t m_bLastTickBeforeClientUpdate = 0x0030; // bool
        };

        // Has Trivial Destructor
        // Global Type Scope
        class EventClientPreOutputParallelWithServer_t : public EventClientPreOutput_t {
        public:
        };

        // Has Trivial Destructor
        // Global Type Scope
        class EventAdvanceTick_t : public EventSimulate_t {
        public:
            static constexpr std::uintptr_t m_nCurrentTick          = 0x0030; // int32
            static constexpr std::uintptr_t m_nCurrentTickThisFrame = 0x0034; // int32
            static constexpr std::uintptr_t m_nTotalTicksThisFrame  = 0x0038; // int32
            static constexpr std::uintptr_t m_nTotalTicks           = 0x003C; // int32
        };

        // Has Trivial Destructor
        // Global Type Scope
        class EventPostAdvanceTick_t : public EventSimulate_t {
        public:
            static constexpr std::uintptr_t m_nCurrentTick          = 0x0030; // int32
            static constexpr std::uintptr_t m_nCurrentTickThisFrame = 0x0034; // int32
            static constexpr std::uintptr_t m_nTotalTicksThisFrame  = 0x0038; // int32
            static constexpr std::uintptr_t m_nTotalTicks           = 0x003C; // int32
        };

        // Has Trivial Destructor
        // Global Type Scope
        class EventClientPreSimulate_t : public EventSimulate_t {
        public:
        };

        // Has Trivial Destructor
        // Global Type Scope
        class EventServerAdvanceTick_t : public EventAdvanceTick_t {
        public:
        };

        // Has Trivial Destructor
        // Global Type Scope
        class EventServerPostAdvanceTick_t : public EventPostAdvanceTick_t {
        public:
            static constexpr std::uintptr_t m_bLastTickBeforeClientUpdate = 0x0040; // bool
        };

        // Has Trivial Destructor
        // Global Type Scope
        class EventClientPostAdvanceTick_t : public EventPostAdvanceTick_t {
        public:
        };

        // Has Trivial Destructor
        // Global Type Scope
        class EventClientSimulate_t : public EventSimulate_t {
        public:
        };

        // Has Trivial Destructor
        // Global Type Scope
        class EventServerProcessNetworking_t : public EventSimulate_t {
        public:
        };

        // Has Trivial Destructor
        // Global Type Scope
        class EventServerBeginSimulate_t : public EventSimulate_t {
        public:
        };

        // Has Trivial Destructor
        // Global Type Scope
        class EventClientPostSimulate_t : public EventSimulate_t {
        public:
        };

        // Has Trivial Destructor
        // Global Type Scope
        class EventClientPauseSimulate_t : public EventSimulate_t {
        public:
        };

        // Has Trivial Destructor
        // Global Type Scope
        class EventClientAdvanceTick_t : public EventAdvanceTick_t {
        public:
        };

    }
}

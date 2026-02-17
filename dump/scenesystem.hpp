#pragma once
#include <cstdint>

namespace offsets {
    namespace scenesystem {
        enum class DecalRtEncoding_t : std::uint8_t {
            kDecalInvalid = 0xFF,
            kDecalMin     = 0x0,
            kDecalBlood   = 0x0,
            kDecalCloak   = 0x1,
            kDecalMax     = 0x2,
            kDecalDefault = 0x0
        };

        enum class DisableShadows_t : std::uint8_t {
            kDisableShadows_None     = 0x0,
            kDisableShadows_All      = 0x1,
            kDisableShadows_Baked    = 0x2,
            kDisableShadows_Realtime = 0x3
        };

        enum class ESilhouetteType_t : std::uint32_t {
            SILHOUETTE_NONE   = 0x0,
            SILHOUETTE_LIGHT  = 0x1,
            SILHOUETTE_ENVMAP = 0x2,
            SILHOUETTE_LPV    = 0x4
        };

        enum class ESceneObjectVisualization : std::uint32_t {
            SCENEOBJECT_VIS_NONE         = 0x0,
            SCENEOBJECT_VIS_OBJECT       = 0x1,
            SCENEOBJECT_VIS_MATERIAL     = 0x2,
            SCENEOBJECT_VIS_TEXTURE_SIZE = 0x3,
            SCENEOBJECT_VIS_LOD          = 0x4,
            SCENEOBJECT_VIS_INSTANCING   = 0x5
        };

        // Construct Allowed
        class CSSDSEndFrameViewInfo {
        public:
            static constexpr std::uintptr_t m_nViewId  = 0x0000; // uint64
            static constexpr std::uintptr_t m_ViewName = 0x0008; // CUtlString
        };

        // Construct Allowed
        class CSSDSMsg_EndFrame {
        public:
            static constexpr std::uintptr_t m_Views = 0x0000; // CUtlVector<CSSDSEndFrameViewInfo>
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct SceneViewId_t {
        public:
            static constexpr std::uintptr_t m_nViewId     = 0x0000; // uint64
            static constexpr std::uintptr_t m_nFrameCount = 0x0008; // uint64
        };

        // Construct Allowed
        class CSSDSMsg_ViewRender {
        public:
            static constexpr std::uintptr_t m_viewId   = 0x0000; // SceneViewId_t
            static constexpr std::uintptr_t m_ViewName = 0x0010; // CUtlString
        };

        // Construct Allowed
        class CSSDSMsg_LayerBase {
        public:
            static constexpr std::uintptr_t m_viewId      = 0x0000; // SceneViewId_t
            static constexpr std::uintptr_t m_ViewName    = 0x0010; // CUtlString
            static constexpr std::uintptr_t m_nLayerId    = 0x0018; // uint64
            static constexpr std::uintptr_t m_LayerName   = 0x0020; // CUtlString
            static constexpr std::uintptr_t m_displayText = 0x0028; // CUtlString
        };

        // Construct Allowed
        class CSSDSMsg_ViewTarget {
        public:
            static constexpr std::uintptr_t m_Name                   = 0x0000; // CUtlString
            static constexpr std::uintptr_t m_TextureId              = 0x0008; // uint64
            static constexpr std::uintptr_t m_nWidth                 = 0x0010; // int32
            static constexpr std::uintptr_t m_nHeight                = 0x0014; // int32
            static constexpr std::uintptr_t m_nRequestedWidth        = 0x0018; // int32
            static constexpr std::uintptr_t m_nRequestedHeight       = 0x001C; // int32
            static constexpr std::uintptr_t m_nNumMipLevels          = 0x0020; // int32
            static constexpr std::uintptr_t m_nDepth                 = 0x0024; // int32
            static constexpr std::uintptr_t m_nMultisampleNumSamples = 0x0028; // int32
            static constexpr std::uintptr_t m_nFormat                = 0x002C; // int32
        };

        // Construct Allowed
        class CSSDSMsg_ViewTargetList {
        public:
            static constexpr std::uintptr_t m_viewId   = 0x0000; // SceneViewId_t
            static constexpr std::uintptr_t m_ViewName = 0x0010; // CUtlString
            static constexpr std::uintptr_t m_Targets  = 0x0018; // CUtlVector<CSSDSMsg_ViewTarget>
        };

        // Construct Allowed
        class CSSDSMsg_PreLayer : public CSSDSMsg_LayerBase {
        public:
        };

        // Construct Allowed
        class CSSDSMsg_PostLayer : public CSSDSMsg_LayerBase {
        public:
        };

    }
}

#pragma once
#include <cstdint>

namespace offsets {
    namespace resourcesystem {
        enum class FuseVariableAccess_t : std::uint8_t {
            WRITABLE  = 0x0,
            READ_ONLY = 0x1
        };

        enum class FuseVariableType_t : std::uint8_t {
            INVALID = 0x0,
            BOOL    = 0x1,
            INT8    = 0x2,
            INT16   = 0x3,
            INT32   = 0x4,
            UINT8   = 0x5,
            UINT16  = 0x6,
            UINT32  = 0x7,
            FLOAT32 = 0x8
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCTestResourceData {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        struct InfoForResourceTypeProceduralTestResource_t {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        struct InfoForResourceTypeManifestTestResource_t {
        public:
        };

        // Construct Allowed
        struct ManifestTestResource_t {
        public:
            static constexpr std::uintptr_t m_name  = 0x0000; // CUtlString
            static constexpr std::uintptr_t m_child = 0x0008; // CStrongHandle<InfoForResourceTypeManifestTestResource_t>
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCVDataResource {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeIPulseGraphDef {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCTypeScriptResource {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCJavaScriptResource {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeIParticleSystemDefinition {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeIParticleSnapshot {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCAnimData {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCAnimationGroup {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCSequenceGroupData {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeIMaterial2 {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCMorphSetData {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCRenderMesh {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCModel {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCTextureBase {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeIVectorGraphic {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCVSoundEventScriptList {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCVSoundStackScriptList {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCVoiceContainerBase {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCVMixListResource {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCPhysAggregateData {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCVPhysXSurfacePropertiesList {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCEntityLump {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCWorldNode {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        struct InfoForResourceTypeWorld_t {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCVoxelVisibility {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCPostProcessingResource {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCPanoramaStyle {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCPanoramaLayout {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCPanoramaDynamicImages {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCDotaItemDefinitionResource {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCDOTAPatchNotesList {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCDOTANovelsList {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeIAnimGraphModelBinding {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCChoreoSceneResource {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCCompositeMaterialKit {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCGcExportableExternalData {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCSmartProp {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCCSGOEconItem {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCResponseRulesList {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCNmSkeleton {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCNmClip {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCNmGraphDefinition {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCNmIKRig {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Global Type Scope
        class InfoForResourceTypeCSurfaceGraph {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        struct AABB_t {
        public:
            static constexpr std::uintptr_t m_vMinBounds = 0x0000; // Vector
            static constexpr std::uintptr_t m_vMaxBounds = 0x000C; // Vector
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        struct PackedAABB_t {
        public:
            static constexpr std::uintptr_t m_nPackedMin = 0x0000; // uint32
            static constexpr std::uintptr_t m_nPackedMax = 0x0004; // uint32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        class FourQuaternions {
        public:
            static constexpr std::uintptr_t x = 0x0000; // fltx4
            static constexpr std::uintptr_t y = 0x0010; // fltx4
            static constexpr std::uintptr_t z = 0x0020; // fltx4
            static constexpr std::uintptr_t w = 0x0030; // fltx4
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct FuseVariableIndex_t {
        public:
            static constexpr std::uintptr_t m_Value = 0x0000; // uint16
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct FuseFunctionIndex_t {
        public:
            static constexpr std::uintptr_t m_Value = 0x0000; // uint16
        };

        // Construct Allowed
        struct ConstantInfo_t {
        public:
            static constexpr std::uintptr_t m_name      = 0x0000; // CUtlString
            static constexpr std::uintptr_t m_nameToken = 0x0008; // CUtlStringToken
            static constexpr std::uintptr_t m_flValue   = 0x000C; // float32
        };

        // Construct Allowed
        struct VariableInfo_t {
        public:
            static constexpr std::uintptr_t m_name           = 0x0000; // CUtlString
            static constexpr std::uintptr_t m_nameToken      = 0x0008; // CUtlStringToken
            static constexpr std::uintptr_t m_nIndex         = 0x000C; // FuseVariableIndex_t
            static constexpr std::uintptr_t m_nNumComponents = 0x000E; // uint8
            static constexpr std::uintptr_t m_eVarType       = 0x000F; // FuseVariableType_t
            static constexpr std::uintptr_t m_eAccess        = 0x0010; // FuseVariableAccess_t
        };

        // Construct Allowed
        struct FunctionInfo_t {
        public:
            static constexpr std::uintptr_t m_name        = 0x0008; // CUtlString
            static constexpr std::uintptr_t m_nameToken   = 0x0010; // CUtlStringToken
            static constexpr std::uintptr_t m_nParamCount = 0x0014; // int32
            static constexpr std::uintptr_t m_nIndex      = 0x0018; // FuseFunctionIndex_t
            static constexpr std::uintptr_t m_bIsPure     = 0x001A; // bool
        };

        // Construct Allowed
        class CFuseProgram {
        public:
            static constexpr std::uintptr_t m_programBuffer    = 0x0000; // CUtlVector<uint8>
            static constexpr std::uintptr_t m_variablesRead    = 0x0018; // CUtlVector<FuseVariableIndex_t>
            static constexpr std::uintptr_t m_variablesWritten = 0x0030; // CUtlVector<FuseVariableIndex_t>
            static constexpr std::uintptr_t m_nMaxTempVarsUsed = 0x0048; // int32
        };

        // Construct Allowed
        class CFuseSymbolTable {
        public:
            static constexpr std::uintptr_t m_constants   = 0x0000; // CUtlVector<ConstantInfo_t>
            static constexpr std::uintptr_t m_variables   = 0x0018; // CUtlVector<VariableInfo_t>
            static constexpr std::uintptr_t m_functions   = 0x0030; // CUtlVector<FunctionInfo_t>
            static constexpr std::uintptr_t m_constantMap = 0x0048; // CUtlHashtable<CUtlStringToken,int32>
            static constexpr std::uintptr_t m_variableMap = 0x0068; // CUtlHashtable<CUtlStringToken,int32>
            static constexpr std::uintptr_t m_functionMap = 0x0088; // CUtlHashtable<CUtlStringToken,int32>
        };

    }
}

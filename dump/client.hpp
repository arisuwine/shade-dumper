#pragma once
#include <cstdint>

namespace offsets {
    namespace client {
        /* --- UNRESOLVED CLASSES --- */
        class CEntitySubclassVDataBase {}; 
        class CPlayerControllerComponent {}; 
        class CPulseCell_BaseLerp__CursorState_t {}; 
        class CNmEventConsumerAttributes {}; 
        class CPlayerPawnComponent {}; 
        class CAnimGraphControllerBase {}; 
        class CSkeletonAnimationController {}; 
        class IEconItemInterface {}; 
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

        enum class CompositeMaterialMatchFilterType_t : std::uint32_t {
            MATCH_FILTER_MATERIAL_ATTRIBUTE_EXISTS = 0x0,
            MATCH_FILTER_MATERIAL_SHADER           = 0x1,
            MATCH_FILTER_MATERIAL_NAME_SUBSTR      = 0x2,
            MATCH_FILTER_MATERIAL_ATTRIBUTE_EQUALS = 0x3,
            MATCH_FILTER_MATERIAL_PROPERTY_EXISTS  = 0x4,
            MATCH_FILTER_MATERIAL_PROPERTY_EQUALS  = 0x5
        };

        enum class CompositeMaterialVarSystemVar_t : std::uint32_t {
            COMPMATSYSVAR_COMPOSITETIME         = 0x0,
            COMPMATSYSVAR_EMPTY_RESOURCE_SPACER = 0x1
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

        enum class CompMatPropertyMutatorConditionType_t : std::uint32_t {
            COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_EXISTS       = 0x0,
            COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EXISTS = 0x1,
            COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EQUALS = 0x2
        };

        enum class CompositeMaterialInputContainerSourceType_t : std::uint32_t {
            CONTAINER_SOURCE_TYPE_TARGET_MATERIAL           = 0x0,
            CONTAINER_SOURCE_TYPE_MATERIAL_FROM_TARGET_ATTR = 0x1,
            CONTAINER_SOURCE_TYPE_SPECIFIC_MATERIAL         = 0x2,
            CONTAINER_SOURCE_TYPE_LOOSE_VARIABLES           = 0x3,
            CONTAINER_SOURCE_TYPE_VARIABLE_FROM_TARGET_ATTR = 0x4,
            CONTAINER_SOURCE_TYPE_TARGET_INSTANCE_MATERIAL  = 0x5
        };

        // Local Type Scope
        enum class C_BaseCombatCharacter__WaterWakeMode_t : std::uint32_t {
            WATER_WAKE_NONE           = 0x0,
            WATER_WAKE_IDLE           = 0x1,
            WATER_WAKE_WALKING        = 0x2,
            WATER_WAKE_RUNNING        = 0x3,
            WATER_WAKE_WATER_OVERHEAD = 0x4
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

        // Construct Allowed
        struct CompositeMaterialMatchFilter_t {
        public:
            static constexpr std::uintptr_t m_nCompositeMaterialMatchFilterType = 0x0000; // CompositeMaterialMatchFilterType_t
            static constexpr std::uintptr_t m_strMatchFilter                    = 0x0008; // CUtlString
            static constexpr std::uintptr_t m_strMatchValue                     = 0x0010; // CUtlString
            static constexpr std::uintptr_t m_bPassWhenTrue                     = 0x0018; // bool
        };

        // Construct Allowed
        struct CompositeMaterialInputLooseVariable_t {
        public:
            static constexpr std::uintptr_t m_strName                           = 0x0000; // CUtlString
            static constexpr std::uintptr_t m_bExposeExternally                 = 0x0008; // bool
            static constexpr std::uintptr_t m_strExposedFriendlyName            = 0x0010; // CUtlString
            static constexpr std::uintptr_t m_strExposedFriendlyGroupName       = 0x0018; // CUtlString
            static constexpr std::uintptr_t m_bExposedVariableIsFixedRange      = 0x0020; // bool
            static constexpr std::uintptr_t m_strExposedVisibleWhenTrue         = 0x0028; // CUtlString
            static constexpr std::uintptr_t m_strExposedHiddenWhenTrue          = 0x0030; // CUtlString
            static constexpr std::uintptr_t m_strExposedValueList               = 0x0038; // CUtlString
            static constexpr std::uintptr_t m_nVariableType                     = 0x0040; // CompositeMaterialInputLooseVariableType_t
            static constexpr std::uintptr_t m_bValueBoolean                     = 0x0044; // bool
            static constexpr std::uintptr_t m_nValueIntX                        = 0x0048; // int32
            static constexpr std::uintptr_t m_nValueIntY                        = 0x004C; // int32
            static constexpr std::uintptr_t m_nValueIntZ                        = 0x0050; // int32
            static constexpr std::uintptr_t m_nValueIntW                        = 0x0054; // int32
            static constexpr std::uintptr_t m_bHasFloatBounds                   = 0x0058; // bool
            static constexpr std::uintptr_t m_flValueFloatX                     = 0x005C; // float32
            static constexpr std::uintptr_t m_flValueFloatX_Min                 = 0x0060; // float32
            static constexpr std::uintptr_t m_flValueFloatX_Max                 = 0x0064; // float32
            static constexpr std::uintptr_t m_flValueFloatY                     = 0x0068; // float32
            static constexpr std::uintptr_t m_flValueFloatY_Min                 = 0x006C; // float32
            static constexpr std::uintptr_t m_flValueFloatY_Max                 = 0x0070; // float32
            static constexpr std::uintptr_t m_flValueFloatZ                     = 0x0074; // float32
            static constexpr std::uintptr_t m_flValueFloatZ_Min                 = 0x0078; // float32
            static constexpr std::uintptr_t m_flValueFloatZ_Max                 = 0x007C; // float32
            static constexpr std::uintptr_t m_flValueFloatW                     = 0x0080; // float32
            static constexpr std::uintptr_t m_flValueFloatW_Min                 = 0x0084; // float32
            static constexpr std::uintptr_t m_flValueFloatW_Max                 = 0x0088; // float32
            static constexpr std::uintptr_t m_cValueColor4                      = 0x008C; // Color
            static constexpr std::uintptr_t m_nValueSystemVar                   = 0x0090; // CompositeMaterialVarSystemVar_t
            static constexpr std::uintptr_t m_strResourceMaterial               = 0x0098; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIMaterial2>>
            static constexpr std::uintptr_t m_strTextureContentAssetPath        = 0x0178; // CUtlString
            static constexpr std::uintptr_t m_strTextureRuntimeResourcePath     = 0x0180; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCTextureBase>>
            static constexpr std::uintptr_t m_strTextureCompilationVtexTemplate = 0x0260; // CUtlString
            static constexpr std::uintptr_t m_nTextureType                      = 0x0268; // CompositeMaterialInputTextureType_t
            static constexpr std::uintptr_t m_strString                         = 0x0270; // CUtlString
            static constexpr std::uintptr_t m_strPanoramaPanelPath              = 0x0278; // CUtlString
            static constexpr std::uintptr_t m_nPanoramaRenderRes                = 0x0280; // int32
        };

        // Construct Allowed
        struct CompMatMutatorCondition_t {
        public:
            static constexpr std::uintptr_t m_nMutatorCondition                    = 0x0000; // CompMatPropertyMutatorConditionType_t
            static constexpr std::uintptr_t m_strMutatorConditionContainerName     = 0x0008; // CUtlString
            static constexpr std::uintptr_t m_strMutatorConditionContainerVarName  = 0x0010; // CUtlString
            static constexpr std::uintptr_t m_strMutatorConditionContainerVarValue = 0x0018; // CUtlString
            static constexpr std::uintptr_t m_bPassWhenTrue                        = 0x0020; // bool
        };

        // Construct Allowed
        struct CompMatPropertyMutator_t {
        public:
            static constexpr std::uintptr_t m_bEnabled                                = 0x0000; // bool
            static constexpr std::uintptr_t m_nMutatorCommandType                     = 0x0004; // CompMatPropertyMutatorType_t
            static constexpr std::uintptr_t m_strInitWith_Container                   = 0x0008; // CUtlString
            static constexpr std::uintptr_t m_strCopyProperty_InputContainerSrc       = 0x0010; // CUtlString
            static constexpr std::uintptr_t m_strCopyProperty_InputContainerProperty  = 0x0018; // CUtlString
            static constexpr std::uintptr_t m_strCopyProperty_TargetProperty          = 0x0020; // CUtlString
            static constexpr std::uintptr_t m_strRandomRollInputVars_SeedInputVar     = 0x0028; // CUtlString
            static constexpr std::uintptr_t m_vecRandomRollInputVars_InputVarsToRoll  = 0x0030; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_strCopyMatchingKeys_InputContainerSrc   = 0x0048; // CUtlString
            static constexpr std::uintptr_t m_strCopyKeysWithSuffix_InputContainerSrc = 0x0050; // CUtlString
            static constexpr std::uintptr_t m_strCopyKeysWithSuffix_FindSuffix        = 0x0058; // CUtlString
            static constexpr std::uintptr_t m_strCopyKeysWithSuffix_ReplaceSuffix     = 0x0060; // CUtlString
            static constexpr std::uintptr_t m_nSetValue_Value                         = 0x0068; // CompositeMaterialInputLooseVariable_t
            static constexpr std::uintptr_t m_strGenerateTexture_TargetParam          = 0x02F0; // CUtlString
            static constexpr std::uintptr_t m_strGenerateTexture_InitialContainer     = 0x02F8; // CUtlString
            static constexpr std::uintptr_t m_nResolution                             = 0x0300; // int32
            static constexpr std::uintptr_t m_bIsScratchTarget                        = 0x0304; // bool
            static constexpr std::uintptr_t m_strCompressionFormat                    = 0x0308; // CUtlString
            static constexpr std::uintptr_t m_bSplatDebugInfo                         = 0x0310; // bool
            static constexpr std::uintptr_t m_bCaptureInRenderDoc                     = 0x0311; // bool
            static constexpr std::uintptr_t m_vecTexGenInstructions                   = 0x0318; // CUtlVector<CompMatPropertyMutator_t>
            static constexpr std::uintptr_t m_vecConditionalMutators                  = 0x0330; // CUtlVector<CompMatPropertyMutator_t>
            static constexpr std::uintptr_t m_strPopInputQueue_Container              = 0x0348; // CUtlString
            static constexpr std::uintptr_t m_strDrawText_InputContainerSrc           = 0x0350; // CUtlString
            static constexpr std::uintptr_t m_strDrawText_InputContainerProperty      = 0x0358; // CUtlString
            static constexpr std::uintptr_t m_vecDrawText_Position                    = 0x0360; // Vector2D
            static constexpr std::uintptr_t m_colDrawText_Color                       = 0x0368; // Color
            static constexpr std::uintptr_t m_strDrawText_Font                        = 0x0370; // CUtlString
            static constexpr std::uintptr_t m_vecConditions                           = 0x0378; // CUtlVector<CompMatMutatorCondition_t>
        };

        // Construct Allowed
        struct CompositeMaterialInputContainer_t {
        public:
            static constexpr std::uintptr_t m_bEnabled                                   = 0x0000; // bool
            static constexpr std::uintptr_t m_nCompositeMaterialInputContainerSourceType = 0x0004; // CompositeMaterialInputContainerSourceType_t
            static constexpr std::uintptr_t m_strSpecificContainerMaterial               = 0x0008; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIMaterial2>>
            static constexpr std::uintptr_t m_strAttrName                                = 0x00E8; // CUtlString
            static constexpr std::uintptr_t m_strAlias                                   = 0x00F0; // CUtlString
            static constexpr std::uintptr_t m_vecLooseVariables                          = 0x00F8; // CUtlVector<CompositeMaterialInputLooseVariable_t>
            static constexpr std::uintptr_t m_strAttrNameForVar                          = 0x0110; // CUtlString
            static constexpr std::uintptr_t m_bExposeExternally                          = 0x0118; // bool
        };

        // Construct Allowed
        struct CompositeMaterialAssemblyProcedure_t {
        public:
            static constexpr std::uintptr_t m_vecCompMatIncludes          = 0x0000; // CUtlVector<CResourceNameTyped<CWeakHandle<InfoForResourceTypeCCompositeMaterialKit>>>
            static constexpr std::uintptr_t m_vecMatchFilters             = 0x0018; // CUtlVector<CompositeMaterialMatchFilter_t>
            static constexpr std::uintptr_t m_vecCompositeInputContainers = 0x0030; // CUtlVector<CompositeMaterialInputContainer_t>
            static constexpr std::uintptr_t m_vecPropertyMutators         = 0x0048; // CUtlVector<CompMatPropertyMutator_t>
        };

        struct GeneratedTextureHandle_t {
        public:
            static constexpr std::uintptr_t m_strBitmapName = 0x0000; // CUtlString
        };

        struct CompositeMaterial_t {
        public:
            static constexpr std::uintptr_t m_TargetKVs            = 0x0008; // KeyValues3
            static constexpr std::uintptr_t m_PreGenerationKVs     = 0x0018; // KeyValues3
            static constexpr std::uintptr_t m_FinalKVs             = 0x0058; // KeyValues3
            static constexpr std::uintptr_t m_vecGeneratedTextures = 0x0080; // CUtlVector<GeneratedTextureHandle_t>
        };

        // Construct Allowed
        struct CompositeMaterialEditorPoint_t {
        public:
            static constexpr std::uintptr_t m_ModelName                              = 0x0000; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            static constexpr std::uintptr_t m_nSequenceIndex                         = 0x00E0; // int32
            static constexpr std::uintptr_t m_flCycle                                = 0x00E4; // float32
            static constexpr std::uintptr_t m_KVModelStateChoices                    = 0x00E8; // KeyValues3
            static constexpr std::uintptr_t m_bEnableChildModel                      = 0x00F8; // bool
            static constexpr std::uintptr_t m_ChildModelName                         = 0x0100; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            static constexpr std::uintptr_t m_vecCompositeMaterialAssemblyProcedures = 0x01E0; // CUtlVector<CompositeMaterialAssemblyProcedure_t>
            static constexpr std::uintptr_t m_vecCompositeMaterials                  = 0x01F8; // CUtlVector<CompositeMaterial_t>
        };

        // Has VTable
        // Construct Allowed
        class CCompositeMaterialEditorDoc {
        public:
            static constexpr std::uintptr_t m_nVersion    = 0x0008; // int32
            static constexpr std::uintptr_t m_Points      = 0x0010; // CUtlVector<CompositeMaterialEditorPoint_t>
            static constexpr std::uintptr_t m_KVthumbnail = 0x0028; // KeyValues3
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
            static constexpr std::uintptr_t m_vecWrappedLocalOrigin                     = 0x00EC; // Vector
            static constexpr std::uintptr_t m_angWrappedLocalRotation                   = 0x00F8; // QAngle
            static constexpr std::uintptr_t m_flWrappedScale                            = 0x0104; // float32
            static constexpr std::uintptr_t m_nParentAttachmentOrBone                   = 0x0108; // int16
            static constexpr std::uintptr_t m_bDebugAbsOriginChanges                    = 0x010A; // bool
            static constexpr std::uintptr_t m_bDormant                                  = 0x010B; // bool
            static constexpr std::uintptr_t m_bForceParentToBeNetworked                 = 0x010C; // bool
            static constexpr std::uintptr_t m_bDirtyHierarchy                           = 0x0000; // bitfield:1
            static constexpr std::uintptr_t m_bDirtyBoneMergeInfo                       = 0x0000; // bitfield:1
            static constexpr std::uintptr_t m_bNetworkedPositionChanged                 = 0x0000; // bitfield:1
            static constexpr std::uintptr_t m_bNetworkedAnglesChanged                   = 0x0000; // bitfield:1
            static constexpr std::uintptr_t m_bNetworkedScaleChanged                    = 0x0000; // bitfield:1
            static constexpr std::uintptr_t m_bWillBeCallingPostDataUpdate              = 0x0000; // bitfield:1
            static constexpr std::uintptr_t m_bBoneMergeFlex                            = 0x0000; // bitfield:1
            static constexpr std::uintptr_t m_nLatchAbsOrigin                           = 0x0000; // bitfield:2
            static constexpr std::uintptr_t m_bDirtyBoneMergeBoneToRoot                 = 0x0000; // bitfield:1
            static constexpr std::uintptr_t m_nHierarchicalDepth                        = 0x010F; // uint8
            static constexpr std::uintptr_t m_nHierarchyType                            = 0x0110; // uint8
            static constexpr std::uintptr_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0x0111; // uint8
            static constexpr std::uintptr_t m_name                                      = 0x0114; // CUtlStringToken
            static constexpr std::uintptr_t m_hierarchyAttachName                       = 0x0128; // CUtlStringToken
            static constexpr std::uintptr_t m_flZOffset                                 = 0x012C; // float32
            static constexpr std::uintptr_t m_flClientLocalScale                        = 0x0130; // float32
            static constexpr std::uintptr_t m_vRenderOrigin                             = 0x0134; // Vector
        };

        // Has Trivial Destructor
        // Local Type Scope
        class CPointTemplateAPI {
        public:
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
        // Local Type Scope
        class CBaseTriggerAPI {
        public:
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

        class C_CommandContext {
        public:
            static constexpr std::uintptr_t needsprocessing = 0x0000; // bool
            static constexpr std::uintptr_t command_number  = 0x00A0; // int32
        };

        // Has VTable
        // Local Type Scope
        struct ViewAngleServerChange_t {
        public:
            static constexpr std::uintptr_t nType  = 0x0030; // FixAngleSet_t
            static constexpr std::uintptr_t qAngle = 0x0034; // QAngle
            static constexpr std::uintptr_t nIndex = 0x0040; // uint32
        };

        // Has Trivial Destructor
        // Local Type Scope
        class CFilterMultipleAPI {
        public:
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
        struct C_fogplayerparams_t {
        public:
            static constexpr std::uintptr_t m_hCtrl              = 0x0008; // CHandle<C_FogController>
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
        // Local Type Scope
        struct EntityRenderAttribute_t {
        public:
            static constexpr std::uintptr_t m_ID     = 0x0030; // CUtlStringToken
            static constexpr std::uintptr_t m_Values = 0x0034; // Vector4D
        };

        // Has VTable
        // Local Type Scope
        struct ActiveModelConfig_t {
        public:
            static constexpr std::uintptr_t m_Handle                = 0x0030; // ModelConfigHandle_t
            static constexpr std::uintptr_t m_Name                  = 0x0038; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_AssociatedEntities    = 0x0040; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
            static constexpr std::uintptr_t m_AssociatedEntityNames = 0x0058; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
        };

        // Construct Allowed
        // Local Type Scope
        class CDestructiblePartsComponent {
        public:
            static constexpr std::uintptr_t __m_pChainEntity           = 0x0000; // CNetworkVarChainer
            static constexpr std::uintptr_t m_vecDamageTakenByHitGroup = 0x0048; // CUtlVector<uint16>
            static constexpr std::uintptr_t m_hOwner                   = 0x0060; // CHandle<C_BaseModelEntity>
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
        // Local Type Scope
        class CLogicRelayAPI {
        public:
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
            static constexpr std::uintptr_t m_bClientClothCreationSuppressed = 0x0179; // bool
            static constexpr std::uintptr_t m_MeshGroupMask                  = 0x0220; // uint64
            static constexpr std::uintptr_t m_nBodyGroupChoices              = 0x0270; // C_NetworkUtlVectorBase<int32>
            static constexpr std::uintptr_t m_nIdealMotionType               = 0x02BA; // int8
            static constexpr std::uintptr_t m_nForceLOD                      = 0x02BB; // int8
            static constexpr std::uintptr_t m_nClothUpdateFlags              = 0x02BC; // int8
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
        // Local Type Scope
        class CAnimGraphNetworkedVariables {
        public:
            static constexpr std::uintptr_t m_PredNetBoolVariables                  = 0x0008; // C_NetworkUtlVectorBase<uint32>
            static constexpr std::uintptr_t m_PredNetByteVariables                  = 0x0020; // C_NetworkUtlVectorBase<uint8>
            static constexpr std::uintptr_t m_PredNetUInt16Variables                = 0x0038; // C_NetworkUtlVectorBase<uint16>
            static constexpr std::uintptr_t m_PredNetIntVariables                   = 0x0050; // C_NetworkUtlVectorBase<int32>
            static constexpr std::uintptr_t m_PredNetUInt32Variables                = 0x0068; // C_NetworkUtlVectorBase<uint32>
            static constexpr std::uintptr_t m_PredNetUInt64Variables                = 0x0080; // C_NetworkUtlVectorBase<uint64>
            static constexpr std::uintptr_t m_PredNetFloatVariables                 = 0x0098; // C_NetworkUtlVectorBase<float32>
            static constexpr std::uintptr_t m_PredNetVectorVariables                = 0x00B0; // C_NetworkUtlVectorBase<Vector>
            static constexpr std::uintptr_t m_PredNetQuaternionVariables            = 0x00C8; // C_NetworkUtlVectorBase<Quaternion>
            static constexpr std::uintptr_t m_PredNetGlobalSymbolVariables          = 0x00E0; // C_NetworkUtlVectorBase<CGlobalSymbol>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetBoolVariables         = 0x00F8; // C_NetworkUtlVectorBase<uint32>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetByteVariables         = 0x0110; // C_NetworkUtlVectorBase<uint8>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetUInt16Variables       = 0x0128; // C_NetworkUtlVectorBase<uint16>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetIntVariables          = 0x0140; // C_NetworkUtlVectorBase<int32>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetUInt32Variables       = 0x0158; // C_NetworkUtlVectorBase<uint32>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetUInt64Variables       = 0x0170; // C_NetworkUtlVectorBase<uint64>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetFloatVariables        = 0x0188; // C_NetworkUtlVectorBase<float32>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetVectorVariables       = 0x01A0; // C_NetworkUtlVectorBase<Vector>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetQuaternionVariables   = 0x01B8; // C_NetworkUtlVectorBase<Quaternion>
            static constexpr std::uintptr_t m_OwnerOnlyPredNetGlobalSymbolVariables = 0x01D0; // C_NetworkUtlVectorBase<CGlobalSymbol>
            static constexpr std::uintptr_t m_nBoolVariablesCount                   = 0x01E8; // int32
            static constexpr std::uintptr_t m_nOwnerOnlyBoolVariablesCount          = 0x01EC; // int32
            static constexpr std::uintptr_t m_nRandomSeedOffset                     = 0x01F0; // int32
            static constexpr std::uintptr_t m_flLastTeleportTime                    = 0x01F4; // float32
        };

        // Has Trivial Destructor
        // Local Type Scope
        class C_BaseEntityAPI {
        public:
        };

        // Has Trivial Destructor
        // Local Type Scope
        class CTakeDamageInfoAPI {
        public:
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

        // Local Type Scope
        class C_BaseFlex__Emphasized_Phoneme {
        public:
            static constexpr std::uintptr_t m_sClassName   = 0x0000; // CUtlString
            static constexpr std::uintptr_t m_flAmount     = 0x0018; // float32
            static constexpr std::uintptr_t m_bRequired    = 0x001C; // bool
            static constexpr std::uintptr_t m_bBasechecked = 0x001D; // bool
            static constexpr std::uintptr_t m_bValid       = 0x001E; // bool
        };

        // Has VTable
        // Has Trivial Destructor
        // Local Type Scope
        class C_RopeKeyframe__CPhysicsDelegate {
        public:
            static constexpr std::uintptr_t m_pKeyframe = 0x0008; // C_RopeKeyframe*
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Local Type Scope
        struct C_SceneEntity__QueuedEvents_t {
        public:
            static constexpr std::uintptr_t starttime = 0x0000; // float32
        };

        // Has VTable
        class CFlashlightEffect {
        public:
            static constexpr std::uintptr_t m_bIsOn                      = 0x0010; // bool
            static constexpr std::uintptr_t m_bMuzzleFlashEnabled        = 0x0020; // bool
            static constexpr std::uintptr_t m_flMuzzleFlashBrightness    = 0x0024; // float32
            static constexpr std::uintptr_t m_quatMuzzleFlashOrientation = 0x0030; // Quaternion
            static constexpr std::uintptr_t m_vecMuzzleFlashOrigin       = 0x0040; // Vector
            static constexpr std::uintptr_t m_flFov                      = 0x004C; // float32
            static constexpr std::uintptr_t m_flFarZ                     = 0x0050; // float32
            static constexpr std::uintptr_t m_flLinearAtten              = 0x0054; // float32
            static constexpr std::uintptr_t m_bCastsShadows              = 0x0058; // bool
            static constexpr std::uintptr_t m_flCurrentPullBackDist      = 0x005C; // float32
            static constexpr std::uintptr_t m_FlashlightTexture          = 0x0060; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_MuzzleFlashTexture         = 0x0068; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_textureName                = 0x0070; // char[64]
        };

        // Has Trivial Destructor
        class CInterpolatedValue {
        public:
            static constexpr std::uintptr_t m_flStartTime  = 0x0000; // float32
            static constexpr std::uintptr_t m_flEndTime    = 0x0004; // float32
            static constexpr std::uintptr_t m_flStartValue = 0x0008; // float32
            static constexpr std::uintptr_t m_flEndValue   = 0x000C; // float32
            static constexpr std::uintptr_t m_nInterpType  = 0x0010; // int32
        };

        // Has VTable
        // Is Absract
        // Has Trivial Destructor
        class IClientAlphaProperty {
        public:
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
        class TimedEvent {
        public:
            static constexpr std::uintptr_t m_TimeBetweenEvents = 0x0000; // float32
            static constexpr std::uintptr_t m_fNextEvent        = 0x0004; // float32
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
        class C_EnvWindShared {
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
            static constexpr std::uintptr_t m_hEntOwner          = 0x003C; // CHandle<C_BaseEntity>
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
            static constexpr std::uintptr_t m_vecPanelVertices       = 0x0040; // C_NetworkUtlVectorBase<Vector2D>
            static constexpr std::uintptr_t m_vInitialPanelVertices  = 0x0058; // C_NetworkUtlVectorBase<Vector4D>
            static constexpr std::uintptr_t m_flGlassHalfThickness   = 0x0070; // float32
            static constexpr std::uintptr_t m_bHasParent             = 0x0074; // bool
            static constexpr std::uintptr_t m_bParentFrozen          = 0x0075; // bool
            static constexpr std::uintptr_t m_SurfacePropStringToken = 0x0078; // CUtlStringToken
        };

        // Has VTable
        // Is Absract
        // Local Type Scope
        class C_GameRules {
        public:
            static constexpr std::uintptr_t __m_pChainEntity    = 0x0008; // CNetworkVarChainer
            static constexpr std::uintptr_t m_nTotalPausedTicks = 0x0030; // int32
            static constexpr std::uintptr_t m_nPauseStartTick   = 0x0034; // int32
            static constexpr std::uintptr_t m_bGamePaused       = 0x0038; // bool
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

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        struct PhysicsRagdollPose_t {
        public:
            static constexpr std::uintptr_t m_Transforms           = 0x0008; // C_NetworkUtlVectorBase<CTransform>
            static constexpr std::uintptr_t m_hOwner               = 0x0020; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_bSetFromDebugHistory = 0x0024; // bool
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
            static constexpr std::uintptr_t m_Providers               = 0x0008; // CUtlVector<CHandle<C_BaseEntity>>
            static constexpr std::uintptr_t m_iReapplyProvisionParity = 0x0020; // int32
            static constexpr std::uintptr_t m_hOuter                  = 0x0024; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_bPreventLoopback        = 0x0028; // bool
            static constexpr std::uintptr_t m_ProviderType            = 0x002C; // attributeprovidertypes_t
            static constexpr std::uintptr_t m_CachedResults           = 0x0030; // CUtlVector<CAttributeManager::cached_attribute_float_t>
        };

        // Has VTable
        // Local Type Scope
        class CAttributeList {
        public:
            static constexpr std::uintptr_t m_Attributes = 0x0008; // C_UtlVectorEmbeddedNetworkVar<CEconItemAttribute>
            static constexpr std::uintptr_t m_pManager   = 0x0070; // CAttributeManager*
        };

        // Has Trivial Destructor
        // Local Type Scope
        struct CAttributeManager__cached_attribute_float_t {
        public:
            static constexpr std::uintptr_t flIn        = 0x0000; // float32
            static constexpr std::uintptr_t iAttribHook = 0x0008; // CUtlSymbolLarge
            static constexpr std::uintptr_t flOut       = 0x0010; // float32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Local Type Scope
        struct C_EconEntity__AttachedModelData_t {
        public:
            static constexpr std::uintptr_t m_iModelDisplayFlags = 0x0000; // int32
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
        class C_RetakeGameRules {
        public:
            static constexpr std::uintptr_t m_nMatchSeed            = 0x0138; // int32
            static constexpr std::uintptr_t m_bBlockersPresent      = 0x013C; // bool
            static constexpr std::uintptr_t m_bRoundInProgress      = 0x013D; // bool
            static constexpr std::uintptr_t m_iFirstSecondHalfRound = 0x0140; // int32
            static constexpr std::uintptr_t m_iBombSite             = 0x0144; // int32
            static constexpr std::uintptr_t m_hBombPlanter          = 0x0148; // CHandle<C_CSPlayerPawn>
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
            static constexpr std::uintptr_t m_weaponPurchases = 0x0008; // C_UtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
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

        // Has VTable
        // Local Type Scope
        class CDamageRecord {
        public:
            static constexpr std::uintptr_t m_PlayerDamager              = 0x0030; // CHandle<C_CSPlayerPawn>
            static constexpr std::uintptr_t m_PlayerRecipient            = 0x0034; // CHandle<C_CSPlayerPawn>
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

        // Local Type Scope
        struct CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t {
        public:
            static constexpr std::uintptr_t pItem = 0x0000; // C_EconItemView*
            static constexpr std::uintptr_t team  = 0x0008; // uint16
            static constexpr std::uintptr_t slot  = 0x000A; // uint16
        };

        // Has VTable
        class C_IronSightController {
        public:
            static constexpr std::uintptr_t m_bIronSightAvailable                    = 0x0010; // bool
            static constexpr std::uintptr_t m_flIronSightAmount                      = 0x0014; // float32
            static constexpr std::uintptr_t m_flIronSightAmountGained                = 0x0018; // float32
            static constexpr std::uintptr_t m_flIronSightAmountBiased                = 0x001C; // float32
            static constexpr std::uintptr_t m_flIronSightAmount_Interpolated         = 0x0020; // float32
            static constexpr std::uintptr_t m_flIronSightAmountGained_Interpolated   = 0x0024; // float32
            static constexpr std::uintptr_t m_flIronSightAmountBiased_Interpolated   = 0x0028; // float32
            static constexpr std::uintptr_t m_flInterpolationLastUpdated             = 0x002C; // float32
            static constexpr std::uintptr_t m_angDeltaAverage                        = 0x0030; // QAngle[8]
            static constexpr std::uintptr_t m_angViewLast                            = 0x0090; // QAngle
            static constexpr std::uintptr_t m_vecDotCoords                           = 0x009C; // Vector2D
            static constexpr std::uintptr_t m_flFiringInaccuracyExtraWidthMultiplier = 0x00A4; // float32
            static constexpr std::uintptr_t m_flSpeedRatio                           = 0x00A8; // float32
        };

        // Has VTable
        class CGlobalLightBase {
        public:
            static constexpr std::uintptr_t m_bSpotLight                  = 0x0010; // bool
            static constexpr std::uintptr_t m_SpotLightOrigin             = 0x0014; // Vector
            static constexpr std::uintptr_t m_SpotLightAngles             = 0x0020; // QAngle
            static constexpr std::uintptr_t m_ShadowDirection             = 0x002C; // Vector
            static constexpr std::uintptr_t m_AmbientDirection            = 0x0038; // Vector
            static constexpr std::uintptr_t m_SpecularDirection           = 0x0044; // Vector
            static constexpr std::uintptr_t m_InspectorSpecularDirection  = 0x0050; // Vector
            static constexpr std::uintptr_t m_flSpecularPower             = 0x005C; // float32
            static constexpr std::uintptr_t m_flSpecularIndependence      = 0x0060; // float32
            static constexpr std::uintptr_t m_SpecularColor               = 0x0064; // Color
            static constexpr std::uintptr_t m_bStartDisabled              = 0x0068; // bool
            static constexpr std::uintptr_t m_bEnabled                    = 0x0069; // bool
            static constexpr std::uintptr_t m_LightColor                  = 0x006A; // Color
            static constexpr std::uintptr_t m_AmbientColor1               = 0x006E; // Color
            static constexpr std::uintptr_t m_AmbientColor2               = 0x0072; // Color
            static constexpr std::uintptr_t m_AmbientColor3               = 0x0076; // Color
            static constexpr std::uintptr_t m_flSunDistance               = 0x007C; // float32
            static constexpr std::uintptr_t m_flFOV                       = 0x0080; // float32
            static constexpr std::uintptr_t m_flNearZ                     = 0x0084; // float32
            static constexpr std::uintptr_t m_flFarZ                      = 0x0088; // float32
            static constexpr std::uintptr_t m_bEnableShadows              = 0x008C; // bool
            static constexpr std::uintptr_t m_bOldEnableShadows           = 0x008D; // bool
            static constexpr std::uintptr_t m_bBackgroundClearNotRequired = 0x008E; // bool
            static constexpr std::uintptr_t m_flCloudScale                = 0x0090; // float32
            static constexpr std::uintptr_t m_flCloud1Speed               = 0x0094; // float32
            static constexpr std::uintptr_t m_flCloud1Direction           = 0x0098; // float32
            static constexpr std::uintptr_t m_flCloud2Speed               = 0x009C; // float32
            static constexpr std::uintptr_t m_flCloud2Direction           = 0x00A0; // float32
            static constexpr std::uintptr_t m_flAmbientScale1             = 0x00B0; // float32
            static constexpr std::uintptr_t m_flAmbientScale2             = 0x00B4; // float32
            static constexpr std::uintptr_t m_flGroundScale               = 0x00B8; // float32
            static constexpr std::uintptr_t m_flLightScale                = 0x00BC; // float32
            static constexpr std::uintptr_t m_flFoWDarkness               = 0x00C0; // float32
            static constexpr std::uintptr_t m_bEnableSeparateSkyboxFog    = 0x00C4; // bool
            static constexpr std::uintptr_t m_vFowColor                   = 0x00C8; // Vector
            static constexpr std::uintptr_t m_ViewOrigin                  = 0x00D4; // Vector
            static constexpr std::uintptr_t m_ViewAngles                  = 0x00E0; // QAngle
            static constexpr std::uintptr_t m_flViewFoV                   = 0x00EC; // float32
            static constexpr std::uintptr_t m_WorldPoints                 = 0x00F0; // Vector[8]
            static constexpr std::uintptr_t m_vFogOffsetLayer0            = 0x04A8; // Vector2D
            static constexpr std::uintptr_t m_vFogOffsetLayer1            = 0x04B0; // Vector2D
            static constexpr std::uintptr_t m_hEnvWind                    = 0x04B8; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_hEnvSky                     = 0x04BC; // CHandle<C_BaseEntity>
        };

        class CPlayerSprayDecalRenderHelper {
        public:
        };

        // Construct Allowed
        struct inv_image_map_t {
        public:
            static constexpr std::uintptr_t map_name     = 0x0000; // CUtlString
            static constexpr std::uintptr_t map_rotation = 0x0008; // float32
        };

        // Construct Allowed
        struct inv_image_item_t {
        public:
            static constexpr std::uintptr_t position      = 0x0000; // Vector
            static constexpr std::uintptr_t angle         = 0x000C; // QAngle
            static constexpr std::uintptr_t pose_sequence = 0x0018; // CUtlString
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct inv_image_camera_t {
        public:
            static constexpr std::uintptr_t angle          = 0x0000; // QAngle
            static constexpr std::uintptr_t fov            = 0x000C; // float32
            static constexpr std::uintptr_t znear          = 0x0010; // float32
            static constexpr std::uintptr_t zfar           = 0x0014; // float32
            static constexpr std::uintptr_t target         = 0x0018; // Vector
            static constexpr std::uintptr_t target_nudge   = 0x0024; // Vector
            static constexpr std::uintptr_t orbit_distance = 0x0030; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct inv_image_light_sun_t {
        public:
            static constexpr std::uintptr_t color      = 0x0000; // Vector
            static constexpr std::uintptr_t angle      = 0x000C; // QAngle
            static constexpr std::uintptr_t brightness = 0x0018; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct inv_image_clearcolor_t {
        public:
            static constexpr std::uintptr_t color = 0x0000; // Vector
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct inv_image_light_fill_t {
        public:
            static constexpr std::uintptr_t color      = 0x0000; // Vector
            static constexpr std::uintptr_t angle      = 0x000C; // QAngle
            static constexpr std::uintptr_t brightness = 0x0018; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct inv_image_light_barn_t {
        public:
            static constexpr std::uintptr_t color          = 0x0000; // Vector
            static constexpr std::uintptr_t angle          = 0x000C; // QAngle
            static constexpr std::uintptr_t brightness     = 0x0018; // float32
            static constexpr std::uintptr_t orbit_distance = 0x001C; // float32
        };

        // Construct Allowed
        struct inv_image_data_t {
        public:
            static constexpr std::uintptr_t map        = 0x0000; // inv_image_map_t
            static constexpr std::uintptr_t item       = 0x0010; // inv_image_item_t
            static constexpr std::uintptr_t camera     = 0x0030; // inv_image_camera_t
            static constexpr std::uintptr_t lightsun   = 0x0064; // inv_image_light_sun_t
            static constexpr std::uintptr_t lightfill  = 0x0080; // inv_image_light_fill_t
            static constexpr std::uintptr_t light0     = 0x009C; // inv_image_light_barn_t
            static constexpr std::uintptr_t light1     = 0x00BC; // inv_image_light_barn_t
            static constexpr std::uintptr_t clearcolor = 0x00DC; // inv_image_clearcolor_t
        };

        // Construct Allowed
        class CInventoryImageData {
        public:
            static constexpr std::uintptr_t m_nNodeType          = 0x0000; // InventoryNodeType_t
            static constexpr std::uintptr_t name                 = 0x0008; // CUtlString
            static constexpr std::uintptr_t inventory_image_data = 0x0010; // inv_image_data_t
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
        class C_BaseEntity : public CEntityInstance {
        public:
            static constexpr std::uintptr_t m_CBodyComponent                             = 0x0038; // CBodyComponent*
            static constexpr std::uintptr_t m_NetworkTransmitComponent                   = 0x0040; // CNetworkTransmitComponent
            static constexpr std::uintptr_t m_nLastThinkTick                             = 0x0330; // GameTick_t
            static constexpr std::uintptr_t m_pGameSceneNode                             = 0x0338; // CGameSceneNode*
            static constexpr std::uintptr_t m_pRenderComponent                           = 0x0340; // CRenderComponent*
            static constexpr std::uintptr_t m_pCollision                                 = 0x0348; // CCollisionProperty*
            static constexpr std::uintptr_t m_iMaxHealth                                 = 0x0350; // int32
            static constexpr std::uintptr_t m_iHealth                                    = 0x0354; // int32
            static constexpr std::uintptr_t m_flDamageAccumulator                        = 0x0358; // float32
            static constexpr std::uintptr_t m_lifeState                                  = 0x035C; // uint8
            static constexpr std::uintptr_t m_bTakesDamage                               = 0x035D; // bool
            static constexpr std::uintptr_t m_nTakeDamageFlags                           = 0x0360; // TakeDamageFlags_t
            static constexpr std::uintptr_t m_nPlatformType                              = 0x0368; // EntityPlatformTypes_t
            static constexpr std::uintptr_t m_ubInterpolationFrame                       = 0x0369; // uint8
            static constexpr std::uintptr_t m_hSceneObjectController                     = 0x036C; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_nNoInterpolationTick                       = 0x0370; // int32
            static constexpr std::uintptr_t m_nVisibilityNoInterpolationTick             = 0x0374; // int32
            static constexpr std::uintptr_t m_flProxyRandomValue                         = 0x0378; // float32
            static constexpr std::uintptr_t m_iEFlags                                    = 0x037C; // int32
            static constexpr std::uintptr_t m_nWaterType                                 = 0x0380; // uint8
            static constexpr std::uintptr_t m_bInterpolateEvenWithNoModel                = 0x0381; // bool
            static constexpr std::uintptr_t m_bPredictionEligible                        = 0x0382; // bool
            static constexpr std::uintptr_t m_bApplyLayerMatchIDToModel                  = 0x0383; // bool
            static constexpr std::uintptr_t m_tokLayerMatchID                            = 0x0384; // CUtlStringToken
            static constexpr std::uintptr_t m_nSubclassID                                = 0x0388; // CUtlStringToken
            static constexpr std::uintptr_t m_nSimulationTick                            = 0x0398; // int32
            static constexpr std::uintptr_t m_iCurrentThinkContext                       = 0x039C; // int32
            static constexpr std::uintptr_t m_aThinkFunctions                            = 0x03A0; // CUtlVector<thinkfunc_t>
            static constexpr std::uintptr_t m_bDisabledContextThinks                     = 0x03B8; // bool
            static constexpr std::uintptr_t m_flAnimTime                                 = 0x03BC; // float32
            static constexpr std::uintptr_t m_flSimulationTime                           = 0x03C0; // float32
            static constexpr std::uintptr_t m_nSceneObjectOverrideFlags                  = 0x03C4; // uint8
            static constexpr std::uintptr_t m_bHasSuccessfullyInterpolated               = 0x03C5; // bool
            static constexpr std::uintptr_t m_bHasAddedVarsToInterpolation               = 0x03C6; // bool
            static constexpr std::uintptr_t m_bRenderEvenWhenNotSuccessfullyInterpolated = 0x03C7; // bool
            static constexpr std::uintptr_t m_nInterpolationLatchDirtyFlags              = 0x03C8; // int32[2]
            static constexpr std::uintptr_t m_ListEntry                                  = 0x03D0; // uint16[11]
            static constexpr std::uintptr_t m_flCreateTime                               = 0x03E8; // GameTime_t
            static constexpr std::uintptr_t m_flSpeed                                    = 0x03EC; // float32
            static constexpr std::uintptr_t m_EntClientFlags                             = 0x03F0; // uint16
            static constexpr std::uintptr_t m_bClientSideRagdoll                         = 0x03F2; // bool
            static constexpr std::uintptr_t m_iTeamNum                                   = 0x03F3; // uint8
            static constexpr std::uintptr_t m_spawnflags                                 = 0x03F4; // uint32
            static constexpr std::uintptr_t m_nNextThinkTick                             = 0x03F8; // GameTick_t
            static constexpr std::uintptr_t m_fFlags                                     = 0x0400; // uint32
            static constexpr std::uintptr_t m_vecAbsVelocity                             = 0x0404; // Vector
            static constexpr std::uintptr_t m_vecServerVelocity                          = 0x0410; // CNetworkVelocityVector
            static constexpr std::uintptr_t m_vecVelocity                                = 0x0438; // CNetworkVelocityVector
            static constexpr std::uintptr_t m_vecBaseVelocity                            = 0x0518; // Vector
            static constexpr std::uintptr_t m_hEffectEntity                              = 0x0524; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_hOwnerEntity                               = 0x0528; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_MoveCollide                                = 0x052C; // MoveCollide_t
            static constexpr std::uintptr_t m_MoveType                                   = 0x052D; // MoveType_t
            static constexpr std::uintptr_t m_nActualMoveType                            = 0x052E; // MoveType_t
            static constexpr std::uintptr_t m_flWaterLevel                               = 0x0530; // float32
            static constexpr std::uintptr_t m_fEffects                                   = 0x0534; // uint32
            static constexpr std::uintptr_t m_hGroundEntity                              = 0x0538; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_nGroundBodyIndex                           = 0x053C; // int32
            static constexpr std::uintptr_t m_flFriction                                 = 0x0540; // float32
            static constexpr std::uintptr_t m_flElasticity                               = 0x0544; // float32
            static constexpr std::uintptr_t m_flGravityScale                             = 0x0548; // float32
            static constexpr std::uintptr_t m_flTimeScale                                = 0x054C; // float32
            static constexpr std::uintptr_t m_bAnimatedEveryTick                         = 0x0550; // bool
            static constexpr std::uintptr_t m_bGravityDisabled                           = 0x0551; // bool
            static constexpr std::uintptr_t m_flNavIgnoreUntilTime                       = 0x0554; // GameTime_t
            static constexpr std::uintptr_t m_hThink                                     = 0x0558; // uint16
            static constexpr std::uintptr_t m_fBBoxVisFlags                              = 0x0568; // uint8
            static constexpr std::uintptr_t m_flActualGravityScale                       = 0x056C; // float32
            static constexpr std::uintptr_t m_bGravityActuallyDisabled                   = 0x0570; // bool
            static constexpr std::uintptr_t m_bPredictable                               = 0x0571; // bool
            static constexpr std::uintptr_t m_bRenderWithViewModels                      = 0x0572; // bool
            static constexpr std::uintptr_t m_nFirstPredictableCommand                   = 0x0574; // int32
            static constexpr std::uintptr_t m_nLastPredictableCommand                    = 0x0578; // int32
            static constexpr std::uintptr_t m_hOldMoveParent                             = 0x057C; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_Particles                                  = 0x0580; // CParticleProperty
            static constexpr std::uintptr_t m_vecAngVelocity                             = 0x05B0; // QAngle
            static constexpr std::uintptr_t m_DataChangeEventRef                         = 0x05BC; // int32
            static constexpr std::uintptr_t m_dependencies                               = 0x05C0; // CUtlVector<CEntityHandle>
            static constexpr std::uintptr_t m_nCreationTick                              = 0x05D8; // int32
            static constexpr std::uintptr_t m_bAnimTimeChanged                           = 0x05E9; // bool
            static constexpr std::uintptr_t m_bSimulationTimeChanged                     = 0x05EA; // bool
            static constexpr std::uintptr_t m_sUniqueHammerID                            = 0x05F8; // CUtlString
            static constexpr std::uintptr_t m_nBloodType                                 = 0x0600; // BloodType
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_TonemapController2 : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_flAutoExposureMin             = 0x0608; // float32
            static constexpr std::uintptr_t m_flAutoExposureMax             = 0x060C; // float32
            static constexpr std::uintptr_t m_flExposureAdaptationSpeedUp   = 0x0610; // float32
            static constexpr std::uintptr_t m_flExposureAdaptationSpeedDown = 0x0614; // float32
            static constexpr std::uintptr_t m_flTonemapEVSmoothingRange     = 0x0618; // float32
        };

        // Has VTable
        // Local Type Scope
        class C_CSGO_EndOfMatchLineupEndpoint : public C_BaseEntity {
        public:
        };

        // Local Type Scope
        class CPulse_ResumePoint : public CPulse_OutflowConnection {
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
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_BaseRequirement : public CPulseCell_Base {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Step_EntFire : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_Input = 0x0048; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_FogController : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_fog               = 0x0608; // fogparams_t
            static constexpr std::uintptr_t m_bUseAngles        = 0x0670; // bool
            static constexpr std::uintptr_t m_iChangedVariables = 0x0674; // int32
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
            static constexpr std::uintptr_t m_hCamera       = 0x0008; // CHandle<C_PointCamera>
            static constexpr std::uintptr_t m_OverlaidStart = 0x000C; // PointCameraSettings_t
            static constexpr std::uintptr_t m_OverlaidEnd   = 0x001C; // PointCameraSettings_t
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
        class C_CSGO_EndOfMatchLineupStart : public C_CSGO_EndOfMatchLineupEndpoint {
        public:
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
            static constexpr std::uintptr_t m_modelState                           = 0x0160; // CModelState
            static constexpr std::uintptr_t m_bIsAnimationEnabled                  = 0x0430; // bool
            static constexpr std::uintptr_t m_bUseParentRenderBounds               = 0x0431; // bool
            static constexpr std::uintptr_t m_bDisableSolidCollisionsForHierarchy  = 0x0432; // bool
            static constexpr std::uintptr_t m_bDirtyMotionType                     = 0x0000; // bitfield:1
            static constexpr std::uintptr_t m_bIsGeneratingLatchedParentSpaceState = 0x0000; // bitfield:1
            static constexpr std::uintptr_t m_materialGroup                        = 0x0434; // CUtlStringToken
            static constexpr std::uintptr_t m_nHitboxSet                           = 0x0438; // uint8
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
        class C_TintController : public C_BaseEntity {
        public:
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
        class C_PointCamera : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_FOV                   = 0x0608; // float32
            static constexpr std::uintptr_t m_Resolution            = 0x060C; // float32
            static constexpr std::uintptr_t m_bFogEnable            = 0x0610; // bool
            static constexpr std::uintptr_t m_FogColor              = 0x0611; // Color
            static constexpr std::uintptr_t m_flFogStart            = 0x0618; // float32
            static constexpr std::uintptr_t m_flFogEnd              = 0x061C; // float32
            static constexpr std::uintptr_t m_flFogMaxDensity       = 0x0620; // float32
            static constexpr std::uintptr_t m_bActive               = 0x0624; // bool
            static constexpr std::uintptr_t m_bUseScreenAspectRatio = 0x0625; // bool
            static constexpr std::uintptr_t m_flAspectRatio         = 0x0628; // float32
            static constexpr std::uintptr_t m_bNoSky                = 0x062C; // bool
            static constexpr std::uintptr_t m_fBrightness           = 0x0630; // float32
            static constexpr std::uintptr_t m_flZFar                = 0x0634; // float32
            static constexpr std::uintptr_t m_flZNear               = 0x0638; // float32
            static constexpr std::uintptr_t m_bCanHLTVUse           = 0x063C; // bool
            static constexpr std::uintptr_t m_bAlignWithParent      = 0x063D; // bool
            static constexpr std::uintptr_t m_bDofEnabled           = 0x063E; // bool
            static constexpr std::uintptr_t m_flDofNearBlurry       = 0x0640; // float32
            static constexpr std::uintptr_t m_flDofNearCrisp        = 0x0644; // float32
            static constexpr std::uintptr_t m_flDofFarCrisp         = 0x0648; // float32
            static constexpr std::uintptr_t m_flDofFarBlurry        = 0x064C; // float32
            static constexpr std::uintptr_t m_flDofTiltToGround     = 0x0650; // float32
            static constexpr std::uintptr_t m_TargetFOV             = 0x0654; // float32
            static constexpr std::uintptr_t m_DegreesPerSecond      = 0x0658; // float32
            static constexpr std::uintptr_t m_bIsOn                 = 0x065C; // bool
            static constexpr std::uintptr_t m_pNext                 = 0x0660; // C_PointCamera*
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
        class C_CsmFovOverride : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_cameraName            = 0x0608; // CUtlString
            static constexpr std::uintptr_t m_flCsmFovOverrideValue = 0x0610; // float32
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
        class C_InfoLadderDismount : public C_BaseEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_ColorCorrection : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_vecOrigin           = 0x0608; // Vector
            static constexpr std::uintptr_t m_MinFalloff          = 0x0614; // float32
            static constexpr std::uintptr_t m_MaxFalloff          = 0x0618; // float32
            static constexpr std::uintptr_t m_flFadeInDuration    = 0x061C; // float32
            static constexpr std::uintptr_t m_flFadeOutDuration   = 0x0620; // float32
            static constexpr std::uintptr_t m_flMaxWeight         = 0x0624; // float32
            static constexpr std::uintptr_t m_flCurWeight         = 0x0628; // float32
            static constexpr std::uintptr_t m_netlookupFilename   = 0x062C; // char[512]
            static constexpr std::uintptr_t m_bEnabled            = 0x082C; // bool
            static constexpr std::uintptr_t m_bMaster             = 0x082D; // bool
            static constexpr std::uintptr_t m_bClientSide         = 0x082E; // bool
            static constexpr std::uintptr_t m_bExclusive          = 0x082F; // bool
            static constexpr std::uintptr_t m_bEnabledOnClient    = 0x0830; // bool[1]
            static constexpr std::uintptr_t m_flCurWeightOnClient = 0x0834; // float32[1]
            static constexpr std::uintptr_t m_bFadingIn           = 0x0838; // bool[1]
            static constexpr std::uintptr_t m_flFadeStartWeight   = 0x083C; // float32[1]
            static constexpr std::uintptr_t m_flFadeStartTime     = 0x0840; // float32[1]
            static constexpr std::uintptr_t m_flFadeDuration      = 0x0844; // float32[1]
        };

        // Has VTable
        // Local Type Scope
        class CBodyComponentBaseModelEntity : public CBodyComponentSkeletonInstance {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CBodyComponentBaseAnimGraph : public CBodyComponentSkeletonInstance {
        public:
            static constexpr std::uintptr_t m_animationController = 0x0550; // CBaseAnimGraphController
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_BaseModelEntity : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_CRenderComponent                                   = 0x0AF0; // CRenderComponent*
            static constexpr std::uintptr_t m_CHitboxComponent                                   = 0x0AF8; // CHitboxComponent
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed0           = 0x0B10; // HitGroup_t
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed1           = 0x0B14; // HitGroup_t
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed2           = 0x0B18; // HitGroup_t
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed3           = 0x0B1C; // HitGroup_t
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed4           = 0x0B20; // HitGroup_t
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed0_PartIndex = 0x0B24; // int32
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed1_PartIndex = 0x0B28; // int32
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed2_PartIndex = 0x0B2C; // int32
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed3_PartIndex = 0x0B30; // int32
            static constexpr std::uintptr_t m_nDestructiblePartInitialStateDestructed4_PartIndex = 0x0B34; // int32
            static constexpr std::uintptr_t m_pDestructiblePartsSystemComponent                  = 0x0B38; // CDestructiblePartsComponent*
            static constexpr std::uintptr_t m_bInitModelEffects                                  = 0x0B58; // bool
            static constexpr std::uintptr_t m_bDoingModelEffects                                 = 0x0B59; // bool
            static constexpr std::uintptr_t m_bIsStaticProp                                      = 0x0B5A; // bool
            static constexpr std::uintptr_t m_iOldHealth                                         = 0x0B5C; // int32
            static constexpr std::uintptr_t m_nRenderMode                                        = 0x0B60; // RenderMode_t
            static constexpr std::uintptr_t m_nRenderFX                                          = 0x0B61; // RenderFx_t
            static constexpr std::uintptr_t m_bAllowFadeInView                                   = 0x0B62; // bool
            static constexpr std::uintptr_t m_clrRender                                          = 0x0B80; // Color
            static constexpr std::uintptr_t m_vecRenderAttributes                                = 0x0B88; // C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
            static constexpr std::uintptr_t m_bRenderToCubemaps                                  = 0x0C08; // bool
            static constexpr std::uintptr_t m_bNoInterpolate                                     = 0x0C09; // bool
            static constexpr std::uintptr_t m_Collision                                          = 0x0C10; // CCollisionProperty
            static constexpr std::uintptr_t m_Glow                                               = 0x0CC0; // CGlowProperty
            static constexpr std::uintptr_t m_flGlowBackfaceMult                                 = 0x0D18; // float32
            static constexpr std::uintptr_t m_fadeMinDist                                        = 0x0D1C; // float32
            static constexpr std::uintptr_t m_fadeMaxDist                                        = 0x0D20; // float32
            static constexpr std::uintptr_t m_flFadeScale                                        = 0x0D24; // float32
            static constexpr std::uintptr_t m_flShadowStrength                                   = 0x0D28; // float32
            static constexpr std::uintptr_t m_nObjectCulling                                     = 0x0D2C; // uint8
            static constexpr std::uintptr_t m_nRequiredDecalRtEncoding                           = 0x0D2D; // DecalRtEncoding_t
            static constexpr std::uintptr_t m_vecViewOffset                                      = 0x0D58; // CNetworkViewOffsetVector
            static constexpr std::uintptr_t m_pClientAlphaProperty                               = 0x0E38; // CClientAlphaProperty*
            static constexpr std::uintptr_t m_ClientOverrideTint                                 = 0x0E40; // Color
            static constexpr std::uintptr_t m_bUseClientOverrideTint                             = 0x0E44; // bool
            static constexpr std::uintptr_t m_bvDisabledHitGroups                                = 0x0E80; // uint32[1]
        };

        // Has VTable
        // Local Type Scope
        class CPathQueryComponent : public CEntityComponent {
        public:
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
        // Local Type Scope
        class CLogicalEntity : public C_BaseEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_EntityFlame : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_hEntAttached = 0x0608; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_hOldAttached = 0x0630; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_bCheapEffect = 0x0634; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_RopeKeyframe : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_LinksTouchingSomething            = 0x0E90; // CBitVec<10>
            static constexpr std::uintptr_t m_nLinksTouchingSomething           = 0x0E94; // int32
            static constexpr std::uintptr_t m_bApplyWind                        = 0x0E98; // bool
            static constexpr std::uintptr_t m_fPrevLockedPoints                 = 0x0E9C; // int32
            static constexpr std::uintptr_t m_iForcePointMoveCounter            = 0x0EA0; // int32
            static constexpr std::uintptr_t m_bPrevEndPointPos                  = 0x0EA4; // bool[2]
            static constexpr std::uintptr_t m_vPrevEndPointPos                  = 0x0EA8; // Vector[2]
            static constexpr std::uintptr_t m_flCurScroll                       = 0x0EC0; // float32
            static constexpr std::uintptr_t m_flScrollSpeed                     = 0x0EC4; // float32
            static constexpr std::uintptr_t m_RopeFlags                         = 0x0EC8; // uint16
            static constexpr std::uintptr_t m_iRopeMaterialModelIndex           = 0x0ED0; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_nSegments                         = 0x1148; // uint8
            static constexpr std::uintptr_t m_hStartPoint                       = 0x114C; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_hEndPoint                         = 0x1150; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_iStartAttachment                  = 0x1154; // AttachmentHandle_t
            static constexpr std::uintptr_t m_iEndAttachment                    = 0x1155; // AttachmentHandle_t
            static constexpr std::uintptr_t m_Subdiv                            = 0x1156; // uint8
            static constexpr std::uintptr_t m_RopeLength                        = 0x1158; // int16
            static constexpr std::uintptr_t m_Slack                             = 0x115A; // int16
            static constexpr std::uintptr_t m_TextureScale                      = 0x115C; // float32
            static constexpr std::uintptr_t m_fLockedPoints                     = 0x1160; // uint8
            static constexpr std::uintptr_t m_nChangeCount                      = 0x1161; // uint8
            static constexpr std::uintptr_t m_Width                             = 0x1164; // float32
            static constexpr std::uintptr_t m_PhysicsDelegate                   = 0x1168; // C_RopeKeyframe::CPhysicsDelegate
            static constexpr std::uintptr_t m_hMaterial                         = 0x1178; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_TextureHeight                     = 0x1180; // int32
            static constexpr std::uintptr_t m_vecImpulse                        = 0x1184; // Vector
            static constexpr std::uintptr_t m_vecPreviousImpulse                = 0x1190; // Vector
            static constexpr std::uintptr_t m_flCurrentGustTimer                = 0x119C; // float32
            static constexpr std::uintptr_t m_flCurrentGustLifetime             = 0x11A0; // float32
            static constexpr std::uintptr_t m_flTimeToNextGust                  = 0x11A4; // float32
            static constexpr std::uintptr_t m_vWindDir                          = 0x11A8; // Vector
            static constexpr std::uintptr_t m_vColorMod                         = 0x11B4; // Vector
            static constexpr std::uintptr_t m_vCachedEndPointAttachmentPos      = 0x11C0; // Vector[2]
            static constexpr std::uintptr_t m_vCachedEndPointAttachmentAngle    = 0x11D8; // QAngle[2]
            static constexpr std::uintptr_t m_bConstrainBetweenEndpoints        = 0x11F0; // bool
            static constexpr std::uintptr_t m_bEndPointAttachmentPositionsDirty = 0x0000; // bitfield:1
            static constexpr std::uintptr_t m_bEndPointAttachmentAnglesDirty    = 0x0000; // bitfield:1
            static constexpr std::uintptr_t m_bNewDataThisFrame                 = 0x0000; // bitfield:1
            static constexpr std::uintptr_t m_bPhysicsInitted                   = 0x0000; // bitfield:1
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_SkyCamera : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_skyboxData      = 0x0608; // sky3dparams_t
            static constexpr std::uintptr_t m_skyboxSlotToken = 0x0698; // CUtlStringToken
            static constexpr std::uintptr_t m_bUseAngles      = 0x069C; // bool
            static constexpr std::uintptr_t m_pNext           = 0x06A0; // C_SkyCamera*
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CSkyboxReference : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_worldGroupId = 0x0608; // WorldGroupId_t
            static constexpr std::uintptr_t m_hSkyCamera   = 0x060C; // CHandle<C_SkyCamera>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_EnvDetailController : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_flFadeStartDist = 0x0608; // float32
            static constexpr std::uintptr_t m_flFadeEndDist   = 0x060C; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_EnvWind : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_EnvWindShared = 0x0608; // C_EnvWindShared
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_GameRulesProxy : public C_BaseEntity {
        public:
        };

        // Has VTable
        // Local Type Scope
        class C_MultiplayRules : public C_GameRules {
        public:
        };

        // Has VTable
        // Local Type Scope
        class C_SingleplayRules : public C_GameRules {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_SoundOpvarSetPointBase : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_iszStackName    = 0x0608; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszOperatorName = 0x0610; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszOpvarName    = 0x0618; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iOpvarIndex     = 0x0620; // int32
            static constexpr std::uintptr_t m_bUseAutoCompare = 0x0624; // bool
            static constexpr std::uintptr_t m_bFastRefresh    = 0x0625; // bool
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
        class C_SoundOpvarSetPointEntity : public C_SoundOpvarSetPointBase {
        public:
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
        class C_SoundOpvarSetOBBEntity : public C_SoundOpvarSetAABBEntity {
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
        class C_SoundOpvarSetAutoRoomEntity : public C_SoundOpvarSetPointEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_SoundOpvarSetOBBWindEntity : public C_SoundOpvarSetPointBase {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CGrenadeTracer : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_flTracerDuration = 0x0EA0; // float32
            static constexpr std::uintptr_t m_nType            = 0x0EA4; // GrenadeType_t
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
        class C_EnvWindClientside : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_EnvWindShared = 0x0608; // C_EnvWindShared
        };

        // Has VTable
        // Local Type Scope
        class C_AttributeContainer : public CAttributeManager {
        public:
            static constexpr std::uintptr_t m_Item                                 = 0x0050; // C_EconItemView
            static constexpr std::uintptr_t m_iExternalItemProviderRegisteredToken = 0x04C0; // int32
            static constexpr std::uintptr_t m_ullRegisteredAsItemID                = 0x04C8; // uint64
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSGameRulesProxy : public C_GameRulesProxy {
        public:
            static constexpr std::uintptr_t m_pGameRules = 0x0608; // C_CSGameRules*
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
            static constexpr std::uintptr_t m_WeaponSequence = 0x0030; // C_NetworkUtlVectorBase<CUtlString>
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
        // Local Type Scope
        class CSMatchStats_t : public CSPerRoundStats_t {
        public:
            static constexpr std::uintptr_t m_iEnemy5Ks        = 0x0068; // int32
            static constexpr std::uintptr_t m_iEnemy4Ks        = 0x006C; // int32
            static constexpr std::uintptr_t m_iEnemy3Ks        = 0x0070; // int32
            static constexpr std::uintptr_t m_iEnemyKnifeKills = 0x0074; // int32
            static constexpr std::uintptr_t m_iEnemyTaserKills = 0x0078; // int32
        };

        // Has VTable
        // Is Absract
        // Local Type Scope
        class C_CSGO_TeamPreviewCharacterPosition : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_nVariant    = 0x0608; // int32
            static constexpr std::uintptr_t m_nRandom     = 0x060C; // int32
            static constexpr std::uintptr_t m_nOrdinal    = 0x0610; // int32
            static constexpr std::uintptr_t m_sWeaponName = 0x0618; // CUtlString
            static constexpr std::uintptr_t m_xuid        = 0x0620; // uint64
            static constexpr std::uintptr_t m_agentItem   = 0x0628; // C_EconItemView
            static constexpr std::uintptr_t m_glovesItem  = 0x0A98; // C_EconItemView
            static constexpr std::uintptr_t m_weaponItem  = 0x0F08; // C_EconItemView
        };

        // Has VTable
        // Local Type Scope
        class C_CSGO_TeamIntroCharacterPosition : public C_CSGO_TeamPreviewCharacterPosition {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSGO_TeamIntroTerroristPosition : public C_CSGO_TeamIntroCharacterPosition {
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
        class CCSGO_WingmanIntroTerroristPosition : public CCSGO_WingmanIntroCharacterPosition {
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
        class C_EnvVolumetricFogController : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_flScattering               = 0x0608; // float32
            static constexpr std::uintptr_t m_TintColor                  = 0x060C; // Color
            static constexpr std::uintptr_t m_flAnisotropy               = 0x0610; // float32
            static constexpr std::uintptr_t m_flFadeSpeed                = 0x0614; // float32
            static constexpr std::uintptr_t m_flDrawDistance             = 0x0618; // float32
            static constexpr std::uintptr_t m_flFadeInStart              = 0x061C; // float32
            static constexpr std::uintptr_t m_flFadeInEnd                = 0x0620; // float32
            static constexpr std::uintptr_t m_flIndirectStrength         = 0x0624; // float32
            static constexpr std::uintptr_t m_nVolumeDepth               = 0x0628; // int32
            static constexpr std::uintptr_t m_fFirstVolumeSliceThickness = 0x062C; // float32
            static constexpr std::uintptr_t m_nIndirectTextureDimX       = 0x0630; // int32
            static constexpr std::uintptr_t m_nIndirectTextureDimY       = 0x0634; // int32
            static constexpr std::uintptr_t m_nIndirectTextureDimZ       = 0x0638; // int32
            static constexpr std::uintptr_t m_vBoxMins                   = 0x063C; // Vector
            static constexpr std::uintptr_t m_vBoxMaxs                   = 0x0648; // Vector
            static constexpr std::uintptr_t m_bActive                    = 0x0654; // bool
            static constexpr std::uintptr_t m_flStartAnisoTime           = 0x0658; // GameTime_t
            static constexpr std::uintptr_t m_flStartScatterTime         = 0x065C; // GameTime_t
            static constexpr std::uintptr_t m_flStartDrawDistanceTime    = 0x0660; // GameTime_t
            static constexpr std::uintptr_t m_flStartAnisotropy          = 0x0664; // float32
            static constexpr std::uintptr_t m_flStartScattering          = 0x0668; // float32
            static constexpr std::uintptr_t m_flStartDrawDistance        = 0x066C; // float32
            static constexpr std::uintptr_t m_flDefaultAnisotropy        = 0x0670; // float32
            static constexpr std::uintptr_t m_flDefaultScattering        = 0x0674; // float32
            static constexpr std::uintptr_t m_flDefaultDrawDistance      = 0x0678; // float32
            static constexpr std::uintptr_t m_bStartDisabled             = 0x067C; // bool
            static constexpr std::uintptr_t m_bEnableIndirect            = 0x067D; // bool
            static constexpr std::uintptr_t m_bIsMaster                  = 0x067E; // bool
            static constexpr std::uintptr_t m_hFogIndirectTexture        = 0x0680; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_nForceRefreshCount         = 0x0688; // int32
            static constexpr std::uintptr_t m_fNoiseSpeed                = 0x068C; // float32
            static constexpr std::uintptr_t m_fNoiseStrength             = 0x0690; // float32
            static constexpr std::uintptr_t m_vNoiseScale                = 0x0694; // Vector
            static constexpr std::uintptr_t m_fWindSpeed                 = 0x06A0; // float32
            static constexpr std::uintptr_t m_vWindDirection             = 0x06A4; // Vector
            static constexpr std::uintptr_t m_bFirstTime                 = 0x06B0; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSMinimapBoundary : public C_BaseEntity {
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
        class C_PlayerPing : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_hPlayer       = 0x0638; // CHandle<C_CSPlayerPawn>
            static constexpr std::uintptr_t m_hPingedEntity = 0x063C; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_iType         = 0x0640; // int32
            static constexpr std::uintptr_t m_bUrgent       = 0x0644; // bool
            static constexpr std::uintptr_t m_szPlaceName   = 0x0645; // char[18]
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_EnvVolumetricFogVolume : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_bActive                        = 0x0608; // bool
            static constexpr std::uintptr_t m_vBoxMins                       = 0x060C; // Vector
            static constexpr std::uintptr_t m_vBoxMaxs                       = 0x0618; // Vector
            static constexpr std::uintptr_t m_bStartDisabled                 = 0x0624; // bool
            static constexpr std::uintptr_t m_bIndirectUseLPVs               = 0x0625; // bool
            static constexpr std::uintptr_t m_flStrength                     = 0x0628; // float32
            static constexpr std::uintptr_t m_nFalloffShape                  = 0x062C; // int32
            static constexpr std::uintptr_t m_flFalloffExponent              = 0x0630; // float32
            static constexpr std::uintptr_t m_flHeightFogDepth               = 0x0634; // float32
            static constexpr std::uintptr_t m_fHeightFogEdgeWidth            = 0x0638; // float32
            static constexpr std::uintptr_t m_fIndirectLightStrength         = 0x063C; // float32
            static constexpr std::uintptr_t m_fSunLightStrength              = 0x0640; // float32
            static constexpr std::uintptr_t m_fNoiseStrength                 = 0x0644; // float32
            static constexpr std::uintptr_t m_TintColor                      = 0x0648; // Color
            static constexpr std::uintptr_t m_bOverrideTintColor             = 0x064C; // bool
            static constexpr std::uintptr_t m_bOverrideIndirectLightStrength = 0x064D; // bool
            static constexpr std::uintptr_t m_bOverrideSunLightStrength      = 0x064E; // bool
            static constexpr std::uintptr_t m_bOverrideNoiseStrength         = 0x064F; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSPlayerResource : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_bHostageAlive             = 0x0608; // bool[12]
            static constexpr std::uintptr_t m_isHostageFollowingSomeone = 0x0614; // bool[12]
            static constexpr std::uintptr_t m_iHostageEntityIDs         = 0x0620; // CEntityIndex[12]
            static constexpr std::uintptr_t m_bombsiteCenterA           = 0x0650; // Vector
            static constexpr std::uintptr_t m_bombsiteCenterB           = 0x065C; // Vector
            static constexpr std::uintptr_t m_hostageRescueX            = 0x0668; // int32[4]
            static constexpr std::uintptr_t m_hostageRescueY            = 0x0678; // int32[4]
            static constexpr std::uintptr_t m_hostageRescueZ            = 0x0688; // int32[4]
            static constexpr std::uintptr_t m_bEndMatchNextMapAllVoted  = 0x0698; // bool
            static constexpr std::uintptr_t m_foundGoalPositions        = 0x0699; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_Sprite : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_hSpriteMaterial       = 0x0E88; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_hAttachedToEntity     = 0x0E90; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_nAttachment           = 0x0E94; // AttachmentHandle_t
            static constexpr std::uintptr_t m_flSpriteFramerate     = 0x0E98; // float32
            static constexpr std::uintptr_t m_flFrame               = 0x0E9C; // float32
            static constexpr std::uintptr_t m_flDieTime             = 0x0EA0; // GameTime_t
            static constexpr std::uintptr_t m_nBrightness           = 0x0EB0; // uint32
            static constexpr std::uintptr_t m_flBrightnessDuration  = 0x0EB4; // float32
            static constexpr std::uintptr_t m_flSpriteScale         = 0x0EB8; // float32
            static constexpr std::uintptr_t m_flScaleDuration       = 0x0EBC; // float32
            static constexpr std::uintptr_t m_bWorldSpaceScale      = 0x0EC0; // bool
            static constexpr std::uintptr_t m_flGlowProxySize       = 0x0EC4; // float32
            static constexpr std::uintptr_t m_flHDRColorScale       = 0x0EC8; // float32
            static constexpr std::uintptr_t m_flLastTime            = 0x0ECC; // GameTime_t
            static constexpr std::uintptr_t m_flMaxFrame            = 0x0ED0; // float32
            static constexpr std::uintptr_t m_flStartScale          = 0x0ED4; // float32
            static constexpr std::uintptr_t m_flDestScale           = 0x0ED8; // float32
            static constexpr std::uintptr_t m_flScaleTimeStart      = 0x0EDC; // GameTime_t
            static constexpr std::uintptr_t m_nStartBrightness      = 0x0EE0; // int32
            static constexpr std::uintptr_t m_nDestBrightness       = 0x0EE4; // int32
            static constexpr std::uintptr_t m_flBrightnessTimeStart = 0x0EE8; // GameTime_t
            static constexpr std::uintptr_t m_nSpriteWidth          = 0x0EF8; // int32
            static constexpr std::uintptr_t m_nSpriteHeight         = 0x0EFC; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_MapVetoPickController : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_nDraftType           = 0x0618; // int32
            static constexpr std::uintptr_t m_nTeamWinningCoinToss = 0x061C; // int32
            static constexpr std::uintptr_t m_nTeamWithFirstChoice = 0x0620; // int32[64]
            static constexpr std::uintptr_t m_nVoteMapIdsList      = 0x0720; // int32[7]
            static constexpr std::uintptr_t m_nAccountIDs          = 0x073C; // int32[64]
            static constexpr std::uintptr_t m_nMapId0              = 0x083C; // int32[64]
            static constexpr std::uintptr_t m_nMapId1              = 0x093C; // int32[64]
            static constexpr std::uintptr_t m_nMapId2              = 0x0A3C; // int32[64]
            static constexpr std::uintptr_t m_nMapId3              = 0x0B3C; // int32[64]
            static constexpr std::uintptr_t m_nMapId4              = 0x0C3C; // int32[64]
            static constexpr std::uintptr_t m_nMapId5              = 0x0D3C; // int32[64]
            static constexpr std::uintptr_t m_nStartingSide0       = 0x0E3C; // int32[64]
            static constexpr std::uintptr_t m_nCurrentPhase        = 0x0F3C; // int32
            static constexpr std::uintptr_t m_nPhaseStartTick      = 0x0F40; // int32
            static constexpr std::uintptr_t m_nPhaseDurationTicks  = 0x0F44; // int32
            static constexpr std::uintptr_t m_nPostDataUpdateTick  = 0x0F48; // int32
            static constexpr std::uintptr_t m_bDisabledHud         = 0x0F4C; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_EnvWindVolume : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_bActive                           = 0x0608; // bool
            static constexpr std::uintptr_t m_vBoxMins                          = 0x060C; // Vector
            static constexpr std::uintptr_t m_vBoxMaxs                          = 0x0618; // Vector
            static constexpr std::uintptr_t m_bStartDisabled                    = 0x0624; // bool
            static constexpr std::uintptr_t m_nShape                            = 0x0628; // int32
            static constexpr std::uintptr_t m_fWindSpeedMultiplier              = 0x062C; // float32
            static constexpr std::uintptr_t m_fWindTurbulenceMultiplier         = 0x0630; // float32
            static constexpr std::uintptr_t m_fWindSpeedVariationMultiplier     = 0x0634; // float32
            static constexpr std::uintptr_t m_fWindDirectionVariationMultiplier = 0x0638; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_GlobalLight : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_WindClothForceHandle = 0x0AD0; // uint16
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSGO_MapPreviewCameraPathNode : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_szParentPathUniqueID = 0x0608; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_nPathIndex           = 0x0610; // int32
            static constexpr std::uintptr_t m_vInTangentLocal      = 0x0614; // Vector
            static constexpr std::uintptr_t m_vOutTangentLocal     = 0x0620; // Vector
            static constexpr std::uintptr_t m_flFOV                = 0x062C; // float32
            static constexpr std::uintptr_t m_flCameraSpeed        = 0x0630; // float32
            static constexpr std::uintptr_t m_flEaseIn             = 0x0634; // float32
            static constexpr std::uintptr_t m_flEaseOut            = 0x0638; // float32
            static constexpr std::uintptr_t m_vInTangentWorld      = 0x063C; // Vector
            static constexpr std::uintptr_t m_vOutTangentWorld     = 0x0648; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSGO_MapPreviewCameraPath : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_flZFar            = 0x0608; // float32
            static constexpr std::uintptr_t m_flZNear           = 0x060C; // float32
            static constexpr std::uintptr_t m_bLoop             = 0x0610; // bool
            static constexpr std::uintptr_t m_bVerticalFOV      = 0x0611; // bool
            static constexpr std::uintptr_t m_bConstantSpeed    = 0x0612; // bool
            static constexpr std::uintptr_t m_flDuration        = 0x0614; // float32
            static constexpr std::uintptr_t m_flPathLength      = 0x0658; // float32
            static constexpr std::uintptr_t m_flPathDuration    = 0x065C; // float32
            static constexpr std::uintptr_t m_bDofEnabled       = 0x0674; // bool
            static constexpr std::uintptr_t m_flDofNearBlurry   = 0x0678; // float32
            static constexpr std::uintptr_t m_flDofNearCrisp    = 0x067C; // float32
            static constexpr std::uintptr_t m_flDofFarCrisp     = 0x0680; // float32
            static constexpr std::uintptr_t m_flDofFarBlurry    = 0x0684; // float32
            static constexpr std::uintptr_t m_flDofTiltToGround = 0x0688; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_EnvCubemap : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_Entity_hCubemapTexture                = 0x0688; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_bCustomCubemapTexture          = 0x0690; // bool
            static constexpr std::uintptr_t m_Entity_flInfluenceRadius              = 0x0694; // float32
            static constexpr std::uintptr_t m_Entity_vBoxProjectMins                = 0x0698; // Vector
            static constexpr std::uintptr_t m_Entity_vBoxProjectMaxs                = 0x06A4; // Vector
            static constexpr std::uintptr_t m_Entity_bMoveable                      = 0x06B0; // bool
            static constexpr std::uintptr_t m_Entity_nHandshake                     = 0x06B4; // int32
            static constexpr std::uintptr_t m_Entity_nEnvCubeMapArrayIndex          = 0x06B8; // int32
            static constexpr std::uintptr_t m_Entity_nPriority                      = 0x06BC; // int32
            static constexpr std::uintptr_t m_Entity_flEdgeFadeDist                 = 0x06C0; // float32
            static constexpr std::uintptr_t m_Entity_vEdgeFadeDists                 = 0x06C4; // Vector
            static constexpr std::uintptr_t m_Entity_flDiffuseScale                 = 0x06D0; // float32
            static constexpr std::uintptr_t m_Entity_bStartDisabled                 = 0x06D4; // bool
            static constexpr std::uintptr_t m_Entity_bDefaultEnvMap                 = 0x06D5; // bool
            static constexpr std::uintptr_t m_Entity_bDefaultSpecEnvMap             = 0x06D6; // bool
            static constexpr std::uintptr_t m_Entity_bIndoorCubeMap                 = 0x06D7; // bool
            static constexpr std::uintptr_t m_Entity_bCopyDiffuseFromDefaultCubemap = 0x06D8; // bool
            static constexpr std::uintptr_t m_Entity_bEnabled                       = 0x06E8; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_VoteController : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_iActiveIssueIndex = 0x0618; // int32
            static constexpr std::uintptr_t m_iOnlyTeamToVote   = 0x061C; // int32
            static constexpr std::uintptr_t m_nVoteOptionCount  = 0x0620; // int32[5]
            static constexpr std::uintptr_t m_nPotentialVotes   = 0x0634; // int32
            static constexpr std::uintptr_t m_bVotesDirty       = 0x0638; // bool
            static constexpr std::uintptr_t m_bTypeDirty        = 0x0639; // bool
            static constexpr std::uintptr_t m_bIsYesNoVote      = 0x063A; // bool
        };

        // Has VTable
        // Local Type Scope
        class C_CSGO_TeamPreviewCamera : public C_CSGO_MapPreviewCameraPath {
        public:
            static constexpr std::uintptr_t m_nVariant = 0x0690; // int32
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
        class CCS_PortraitWorldCallbackHandler : public C_BaseEntity {
        public:
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
        class C_FuncLadder : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_vecLadderDir                 = 0x0E88; // Vector
            static constexpr std::uintptr_t m_Dismounts                    = 0x0E98; // CUtlVector<CHandle<C_InfoLadderDismount>>
            static constexpr std::uintptr_t m_vecLocalTop                  = 0x0EB0; // Vector
            static constexpr std::uintptr_t m_vecPlayerMountPositionTop    = 0x0EBC; // VectorWS
            static constexpr std::uintptr_t m_vecPlayerMountPositionBottom = 0x0EC8; // VectorWS
            static constexpr std::uintptr_t m_flAutoRideSpeed              = 0x0ED4; // float32
            static constexpr std::uintptr_t m_bDisabled                    = 0x0ED8; // bool
            static constexpr std::uintptr_t m_bFakeLadder                  = 0x0ED9; // bool
            static constexpr std::uintptr_t m_bHasSlack                    = 0x0EDA; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_EnvCombinedLightProbeVolume : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_Entity_Color                                = 0x1680; // Color
            static constexpr std::uintptr_t m_Entity_flBrightness                         = 0x1684; // float32
            static constexpr std::uintptr_t m_Entity_hCubemapTexture                      = 0x1688; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_bCustomCubemapTexture                = 0x1690; // bool
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_AmbientCube       = 0x1698; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SDF               = 0x16A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SH2_DC            = 0x16A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SH2_R             = 0x16B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SH2_G             = 0x16B8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SH2_B             = 0x16C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x16C8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x16D0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x16D8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_vBoxMins                             = 0x16E0; // Vector
            static constexpr std::uintptr_t m_Entity_vBoxMaxs                             = 0x16EC; // Vector
            static constexpr std::uintptr_t m_Entity_bMoveable                            = 0x16F8; // bool
            static constexpr std::uintptr_t m_Entity_nHandshake                           = 0x16FC; // int32
            static constexpr std::uintptr_t m_Entity_nEnvCubeMapArrayIndex                = 0x1700; // int32
            static constexpr std::uintptr_t m_Entity_nPriority                            = 0x1704; // int32
            static constexpr std::uintptr_t m_Entity_bStartDisabled                       = 0x1708; // bool
            static constexpr std::uintptr_t m_Entity_flEdgeFadeDist                       = 0x170C; // float32
            static constexpr std::uintptr_t m_Entity_vEdgeFadeDists                       = 0x1710; // Vector
            static constexpr std::uintptr_t m_Entity_nLightProbeSizeX                     = 0x171C; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeSizeY                     = 0x1720; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeSizeZ                     = 0x1724; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeAtlasX                    = 0x1728; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeAtlasY                    = 0x172C; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeAtlasZ                    = 0x1730; // int32
            static constexpr std::uintptr_t m_Entity_bEnabled                             = 0x1749; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_EnvCubemapFog : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_flEndDistance        = 0x0608; // float32
            static constexpr std::uintptr_t m_flStartDistance      = 0x060C; // float32
            static constexpr std::uintptr_t m_flFogFalloffExponent = 0x0610; // float32
            static constexpr std::uintptr_t m_bHeightFogEnabled    = 0x0614; // bool
            static constexpr std::uintptr_t m_flFogHeightWidth     = 0x0618; // float32
            static constexpr std::uintptr_t m_flFogHeightEnd       = 0x061C; // float32
            static constexpr std::uintptr_t m_flFogHeightStart     = 0x0620; // float32
            static constexpr std::uintptr_t m_flFogHeightExponent  = 0x0624; // float32
            static constexpr std::uintptr_t m_flLODBias            = 0x0628; // float32
            static constexpr std::uintptr_t m_bActive              = 0x062C; // bool
            static constexpr std::uintptr_t m_bStartDisabled       = 0x062D; // bool
            static constexpr std::uintptr_t m_flFogMaxOpacity      = 0x0630; // float32
            static constexpr std::uintptr_t m_nCubemapSourceType   = 0x0634; // int32
            static constexpr std::uintptr_t m_hSkyMaterial         = 0x0638; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_iszSkyEntity         = 0x0640; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hFogCubemapTexture   = 0x0648; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_bHasHeightFogEnd     = 0x0650; // bool
            static constexpr std::uintptr_t m_bFirstTime           = 0x0651; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_GradientFog : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_hGradientFogTexture       = 0x0608; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_flFogStartDistance        = 0x0610; // float32
            static constexpr std::uintptr_t m_flFogEndDistance          = 0x0614; // float32
            static constexpr std::uintptr_t m_bHeightFogEnabled         = 0x0618; // bool
            static constexpr std::uintptr_t m_flFogStartHeight          = 0x061C; // float32
            static constexpr std::uintptr_t m_flFogEndHeight            = 0x0620; // float32
            static constexpr std::uintptr_t m_flFarZ                    = 0x0624; // float32
            static constexpr std::uintptr_t m_flFogMaxOpacity           = 0x0628; // float32
            static constexpr std::uintptr_t m_flFogFalloffExponent      = 0x062C; // float32
            static constexpr std::uintptr_t m_flFogVerticalExponent     = 0x0630; // float32
            static constexpr std::uintptr_t m_fogColor                  = 0x0634; // Color
            static constexpr std::uintptr_t m_flFogStrength             = 0x0638; // float32
            static constexpr std::uintptr_t m_flFadeTime                = 0x063C; // float32
            static constexpr std::uintptr_t m_bStartDisabled            = 0x0640; // bool
            static constexpr std::uintptr_t m_bIsEnabled                = 0x0641; // bool
            static constexpr std::uintptr_t m_bGradientFogNeedsTextures = 0x0642; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_EnvLightProbeVolume : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_AmbientCube       = 0x1600; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SDF               = 0x1608; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SH2_DC            = 0x1610; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SH2_R             = 0x1618; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SH2_G             = 0x1620; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeTexture_SH2_B             = 0x1628; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x1630; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x1638; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x1640; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_Entity_vBoxMins                             = 0x1648; // Vector
            static constexpr std::uintptr_t m_Entity_vBoxMaxs                             = 0x1654; // Vector
            static constexpr std::uintptr_t m_Entity_bMoveable                            = 0x1660; // bool
            static constexpr std::uintptr_t m_Entity_nHandshake                           = 0x1664; // int32
            static constexpr std::uintptr_t m_Entity_nPriority                            = 0x1668; // int32
            static constexpr std::uintptr_t m_Entity_bStartDisabled                       = 0x166C; // bool
            static constexpr std::uintptr_t m_Entity_nLightProbeSizeX                     = 0x1670; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeSizeY                     = 0x1674; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeSizeZ                     = 0x1678; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeAtlasX                    = 0x167C; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeAtlasY                    = 0x1680; // int32
            static constexpr std::uintptr_t m_Entity_nLightProbeAtlasZ                    = 0x1684; // int32
            static constexpr std::uintptr_t m_Entity_bEnabled                             = 0x1691; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PlayerVisibility : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_flVisibilityStrength      = 0x0608; // float32
            static constexpr std::uintptr_t m_flFogDistanceMultiplier   = 0x060C; // float32
            static constexpr std::uintptr_t m_flFogMaxDensityMultiplier = 0x0610; // float32
            static constexpr std::uintptr_t m_flFadeTime                = 0x0614; // float32
            static constexpr std::uintptr_t m_bStartDisabled            = 0x0618; // bool
            static constexpr std::uintptr_t m_bIsEnabled                = 0x0619; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CMapInfo : public C_PointEntity {
        public:
            static constexpr std::uintptr_t m_iBuyingStatus                 = 0x0608; // int32
            static constexpr std::uintptr_t m_flBombRadius                  = 0x060C; // float32
            static constexpr std::uintptr_t m_iPetPopulation                = 0x0610; // int32
            static constexpr std::uintptr_t m_bUseNormalSpawnsForDM         = 0x0614; // bool
            static constexpr std::uintptr_t m_bDisableAutoGeneratedDMSpawns = 0x0615; // bool
            static constexpr std::uintptr_t m_flBotMaxVisionDistance        = 0x0618; // float32
            static constexpr std::uintptr_t m_iHostageCount                 = 0x061C; // int32
            static constexpr std::uintptr_t m_bFadePlayerVisibilityFarZ     = 0x0620; // bool
            static constexpr std::uintptr_t m_bRainTraceToSkyEnabled        = 0x0621; // bool
            static constexpr std::uintptr_t m_flEnvRainStrength             = 0x0624; // float32
            static constexpr std::uintptr_t m_flEnvPuddleRippleStrength     = 0x0628; // float32
            static constexpr std::uintptr_t m_flEnvPuddleRippleDirection    = 0x062C; // float32
            static constexpr std::uintptr_t m_flEnvWetnessCoverage          = 0x0630; // float32
            static constexpr std::uintptr_t m_flEnvWetnessDryingAmount      = 0x0634; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseGameBlackboard : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_strGraphName = 0x0610; // CUtlString
            static constexpr std::uintptr_t m_strStateBlob = 0x0618; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_EnvWindController : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_EnvWindShared       = 0x0608; // C_EnvWindShared
            static constexpr std::uintptr_t m_fDirectionVariation = 0x0700; // float32
            static constexpr std::uintptr_t m_fSpeedVariation     = 0x0704; // float32
            static constexpr std::uintptr_t m_fTurbulence         = 0x0708; // float32
            static constexpr std::uintptr_t m_fVolumeHalfExtentXY = 0x070C; // float32
            static constexpr std::uintptr_t m_fVolumeHalfExtentZ  = 0x0710; // float32
            static constexpr std::uintptr_t m_nVolumeResolutionXY = 0x0714; // int32
            static constexpr std::uintptr_t m_nVolumeResolutionZ  = 0x0718; // int32
            static constexpr std::uintptr_t m_nClipmapLevels      = 0x071C; // int32
            static constexpr std::uintptr_t m_bIsMaster           = 0x0720; // bool
            static constexpr std::uintptr_t m_bFirstTime          = 0x0721; // bool
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
        class CInfoParticleTarget : public C_PointEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_InfoVisibilityBox : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_nMode    = 0x060C; // int32
            static constexpr std::uintptr_t m_vBoxSize = 0x0610; // Vector
            static constexpr std::uintptr_t m_bEnabled = 0x061C; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoWorldLayer : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_pOutputOnEntitiesSpawned   = 0x0608; // CEntityIOOutput
            static constexpr std::uintptr_t m_worldName                  = 0x0620; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_layerName                  = 0x0628; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bWorldLayerVisible         = 0x0630; // bool
            static constexpr std::uintptr_t m_bEntitiesSpawned           = 0x0631; // bool
            static constexpr std::uintptr_t m_bCreateAsChildSpawnGroup   = 0x0632; // bool
            static constexpr std::uintptr_t m_hLayerSpawnGroup           = 0x0634; // uint32
            static constexpr std::uintptr_t m_bWorldLayerActuallyVisible = 0x0638; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointChildModifier : public C_PointEntity {
        public:
            static constexpr std::uintptr_t m_bOrphanInsteadOfDeletingChildrenOnRemove = 0x0608; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PointCameraVFOV : public C_PointCamera {
        public:
            static constexpr std::uintptr_t m_flVerticalFOV = 0x0668; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointOrient : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_iszSpawnTargetName = 0x0608; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hTarget            = 0x0610; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_bActive            = 0x0614; // bool
            static constexpr std::uintptr_t m_nGoalDirection     = 0x0618; // PointOrientGoalDirectionType_t
            static constexpr std::uintptr_t m_nConstraint        = 0x061C; // PointOrientConstraint_t
            static constexpr std::uintptr_t m_flMaxTurnRate      = 0x0620; // float32
            static constexpr std::uintptr_t m_flLastGameTime     = 0x0624; // GameTime_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointTemplate : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_iszWorldName                 = 0x0608; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszSource2EntityLumpName     = 0x0610; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszEntityFilterName          = 0x0618; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flTimeoutInterval            = 0x0620; // float32
            static constexpr std::uintptr_t m_bAsynchronouslySpawnEntities = 0x0624; // bool
            static constexpr std::uintptr_t m_clientOnlyEntityBehavior     = 0x0628; // PointTemplateClientOnlyEntityBehavior_t
            static constexpr std::uintptr_t m_ownerSpawnGroupType          = 0x062C; // PointTemplateOwnerSpawnGroupType_t
            static constexpr std::uintptr_t m_createdSpawnGroupHandles     = 0x0630; // CUtlVector<uint32>
            static constexpr std::uintptr_t m_SpawnedEntityHandles         = 0x0648; // CUtlVector<CEntityHandle>
            static constexpr std::uintptr_t m_ScriptSpawnCallback          = 0x0660; // HSCRIPT
            static constexpr std::uintptr_t m_ScriptCallbackScope          = 0x0668; // HSCRIPT
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CRagdollManager : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_iCurrentMaxRagdollCount = 0x0608; // int8
        };

        // Has VTable
        // Is Absract
        // Local Type Scope
        class C_SoundAreaEntityBase : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled        = 0x0608; // bool
            static constexpr std::uintptr_t m_bWasEnabled      = 0x0610; // bool
            static constexpr std::uintptr_t m_iszSoundAreaType = 0x0618; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_vPos             = 0x0620; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_SoundAreaEntityOrientedBox : public C_SoundAreaEntityBase {
        public:
            static constexpr std::uintptr_t m_vMin = 0x0630; // Vector
            static constexpr std::uintptr_t m_vMax = 0x063C; // Vector
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
        class C_SoundEventEntity : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_bStartOnSpawn         = 0x0608; // bool
            static constexpr std::uintptr_t m_bToLocalPlayer        = 0x0609; // bool
            static constexpr std::uintptr_t m_bStopOnNew            = 0x060A; // bool
            static constexpr std::uintptr_t m_bSaveRestore          = 0x060B; // bool
            static constexpr std::uintptr_t m_bSavedIsPlaying       = 0x060C; // bool
            static constexpr std::uintptr_t m_flSavedElapsedTime    = 0x0610; // float32
            static constexpr std::uintptr_t m_iszSourceEntityName   = 0x0618; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszAttachmentName     = 0x0620; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_onGUIDChanged         = 0x0628; // CEntityOutputTemplate<uint64,uint64>
            static constexpr std::uintptr_t m_onSoundFinished       = 0x0648; // CEntityIOOutput
            static constexpr std::uintptr_t m_flClientCullRadius    = 0x0660; // float32
            static constexpr std::uintptr_t m_iszSoundName          = 0x0690; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hSource               = 0x06AC; // CEntityHandle
            static constexpr std::uintptr_t m_nEntityIndexSelection = 0x06B0; // int32
            static constexpr std::uintptr_t m_bClientSideOnly       = 0x0000; // bitfield:1
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
        class C_SoundEventOBBEntity : public C_SoundEventEntity {
        public:
            static constexpr std::uintptr_t m_vMins = 0x06B8; // Vector
            static constexpr std::uintptr_t m_vMaxs = 0x06C4; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_SoundEventSphereEntity : public C_SoundEventEntity {
        public:
            static constexpr std::uintptr_t m_flRadius = 0x06B8; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_SoundEventConeEntity : public C_SoundEventEntity {
        public:
            static constexpr std::uintptr_t m_flEmitterAngle   = 0x06B8; // float32
            static constexpr std::uintptr_t m_flSweetSpotAngle = 0x06BC; // float32
            static constexpr std::uintptr_t m_flAttenMin       = 0x06C0; // float32
            static constexpr std::uintptr_t m_flAttenMax       = 0x06C4; // float32
            static constexpr std::uintptr_t m_iszParameterName = 0x06C8; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBasePlayerController : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_CommandContext            = 0x0610; // C_CommandContext
            static constexpr std::uintptr_t m_nInButtonsWhichAreToggles = 0x06B8; // uint64
            static constexpr std::uintptr_t m_nTickBase                 = 0x06C0; // uint32
            static constexpr std::uintptr_t m_hPawn                     = 0x06C4; // CHandle<C_BasePlayerPawn>
            static constexpr std::uintptr_t m_bKnownTeamMismatch        = 0x06C8; // bool
            static constexpr std::uintptr_t m_hPredictedPawn            = 0x06CC; // CHandle<C_BasePlayerPawn>
            static constexpr std::uintptr_t m_nSplitScreenSlot          = 0x06D0; // CSplitScreenSlot
            static constexpr std::uintptr_t m_hSplitOwner               = 0x06D4; // CHandle<CBasePlayerController>
            static constexpr std::uintptr_t m_hSplitScreenPlayers       = 0x06D8; // CUtlVector<CHandle<CBasePlayerController>>
            static constexpr std::uintptr_t m_bIsHLTV                   = 0x06F0; // bool
            static constexpr std::uintptr_t m_iConnected                = 0x06F4; // PlayerConnectedState
            static constexpr std::uintptr_t m_iszPlayerName             = 0x06F8; // char[128]
            static constexpr std::uintptr_t m_steamID                   = 0x0780; // uint64
            static constexpr std::uintptr_t m_bIsLocalPlayerController  = 0x0788; // bool
            static constexpr std::uintptr_t m_bNoClipEnabled            = 0x0789; // bool
            static constexpr std::uintptr_t m_iDesiredFOV               = 0x078C; // uint32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_Team : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_aPlayerControllers = 0x0608; // C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
            static constexpr std::uintptr_t m_aPlayers           = 0x0620; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
            static constexpr std::uintptr_t m_iScore             = 0x0638; // int32
            static constexpr std::uintptr_t m_szTeamname         = 0x063C; // char[129]
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoFan : public C_PointEntity {
        public:
            static constexpr std::uintptr_t m_fFanForceMaxRadius  = 0x0648; // float32
            static constexpr std::uintptr_t m_fFanForceMinRadius  = 0x064C; // float32
            static constexpr std::uintptr_t m_flCurveDistRange    = 0x0650; // float32
            static constexpr std::uintptr_t m_FanForceCurveString = 0x0658; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBaseFilter : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_bNegated = 0x0608; // bool
            static constexpr std::uintptr_t m_OnPass   = 0x0610; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnFail   = 0x0628; // CEntityIOOutput
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFilterMultiple : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_nFilterType = 0x0640; // filter_t
            static constexpr std::uintptr_t m_iFilterName = 0x0648; // CUtlSymbolLarge[10]
            static constexpr std::uintptr_t m_hFilter     = 0x0698; // CHandle<C_BaseEntity>[10]
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFilterClass : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_iFilterClass = 0x0640; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_Beam : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_flFrameRate     = 0x0E88; // float32
            static constexpr std::uintptr_t m_flHDRColorScale = 0x0E8C; // float32
            static constexpr std::uintptr_t m_flFireTime      = 0x0E90; // GameTime_t
            static constexpr std::uintptr_t m_flDamage        = 0x0E94; // float32
            static constexpr std::uintptr_t m_nNumBeamEnts    = 0x0E98; // uint8
            static constexpr std::uintptr_t m_queryHandleHalo = 0x0E9C; // int32
            static constexpr std::uintptr_t m_hBaseMaterial   = 0x0EC0; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_nHaloIndex      = 0x0EC8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_nBeamType       = 0x0ED0; // BeamType_t
            static constexpr std::uintptr_t m_nBeamFlags      = 0x0ED4; // uint32
            static constexpr std::uintptr_t m_hAttachEntity   = 0x0ED8; // CHandle<C_BaseEntity>[10]
            static constexpr std::uintptr_t m_nAttachIndex    = 0x0F00; // AttachmentHandle_t[10]
            static constexpr std::uintptr_t m_fWidth          = 0x0F0C; // float32
            static constexpr std::uintptr_t m_fEndWidth       = 0x0F10; // float32
            static constexpr std::uintptr_t m_fFadeLength     = 0x0F14; // float32
            static constexpr std::uintptr_t m_fHaloScale      = 0x0F18; // float32
            static constexpr std::uintptr_t m_fAmplitude      = 0x0F1C; // float32
            static constexpr std::uintptr_t m_fStartFrame     = 0x0F20; // float32
            static constexpr std::uintptr_t m_fSpeed          = 0x0F24; // float32
            static constexpr std::uintptr_t m_flFrame         = 0x0F28; // float32
            static constexpr std::uintptr_t m_nClipStyle      = 0x0F2C; // BeamClipStyle_t
            static constexpr std::uintptr_t m_bTurnedOff      = 0x0F30; // bool
            static constexpr std::uintptr_t m_vecEndPos       = 0x0F34; // VectorWS
            static constexpr std::uintptr_t m_hEndEntity      = 0x0F40; // CHandle<C_BaseEntity>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_BarnLight : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_bEnabled                    = 0x0E88; // bool
            static constexpr std::uintptr_t m_nColorMode                  = 0x0E8C; // int32
            static constexpr std::uintptr_t m_Color                       = 0x0E90; // Color
            static constexpr std::uintptr_t m_flColorTemperature          = 0x0E94; // float32
            static constexpr std::uintptr_t m_flBrightness                = 0x0E98; // float32
            static constexpr std::uintptr_t m_flBrightnessScale           = 0x0E9C; // float32
            static constexpr std::uintptr_t m_nDirectLight                = 0x0EA0; // int32
            static constexpr std::uintptr_t m_nBakedShadowIndex           = 0x0EA4; // int32
            static constexpr std::uintptr_t m_nLightPathUniqueId          = 0x0EA8; // int32
            static constexpr std::uintptr_t m_nLightMapUniqueId           = 0x0EAC; // int32
            static constexpr std::uintptr_t m_nLuminaireShape             = 0x0EB0; // int32
            static constexpr std::uintptr_t m_flLuminaireSize             = 0x0EB4; // float32
            static constexpr std::uintptr_t m_flLuminaireAnisotropy       = 0x0EB8; // float32
            static constexpr std::uintptr_t m_LightStyleString            = 0x0EC0; // CUtlString
            static constexpr std::uintptr_t m_flLightStyleStartTime       = 0x0EC8; // GameTime_t
            static constexpr std::uintptr_t m_QueuedLightStyleStrings     = 0x0ED0; // C_NetworkUtlVectorBase<CUtlString>
            static constexpr std::uintptr_t m_LightStyleEvents            = 0x0EE8; // C_NetworkUtlVectorBase<CUtlString>
            static constexpr std::uintptr_t m_LightStyleTargets           = 0x0F00; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
            static constexpr std::uintptr_t m_StyleEvent                  = 0x0F18; // CEntityIOOutput[4]
            static constexpr std::uintptr_t m_hLightCookie                = 0x0F78; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_flShape                     = 0x0F80; // float32
            static constexpr std::uintptr_t m_flSoftX                     = 0x0F84; // float32
            static constexpr std::uintptr_t m_flSoftY                     = 0x0F88; // float32
            static constexpr std::uintptr_t m_flSkirt                     = 0x0F8C; // float32
            static constexpr std::uintptr_t m_flSkirtNear                 = 0x0F90; // float32
            static constexpr std::uintptr_t m_vSizeParams                 = 0x0F94; // Vector
            static constexpr std::uintptr_t m_flRange                     = 0x0FA0; // float32
            static constexpr std::uintptr_t m_vShear                      = 0x0FA4; // Vector
            static constexpr std::uintptr_t m_nBakeSpecularToCubemaps     = 0x0FB0; // int32
            static constexpr std::uintptr_t m_vBakeSpecularToCubemapsSize = 0x0FB4; // Vector
            static constexpr std::uintptr_t m_nCastShadows                = 0x0FC0; // int32
            static constexpr std::uintptr_t m_nShadowMapSize              = 0x0FC4; // int32
            static constexpr std::uintptr_t m_nShadowPriority             = 0x0FC8; // int32
            static constexpr std::uintptr_t m_bContactShadow              = 0x0FCC; // bool
            static constexpr std::uintptr_t m_bForceShadowsEnabled        = 0x0FCD; // bool
            static constexpr std::uintptr_t m_nBounceLight                = 0x0FD0; // int32
            static constexpr std::uintptr_t m_flBounceScale               = 0x0FD4; // float32
            static constexpr std::uintptr_t m_bDynamicBounce              = 0x0FD8; // bool
            static constexpr std::uintptr_t m_flMinRoughness              = 0x0FDC; // float32
            static constexpr std::uintptr_t m_vAlternateColor             = 0x0FE0; // Vector
            static constexpr std::uintptr_t m_fAlternateColorBrightness   = 0x0FEC; // float32
            static constexpr std::uintptr_t m_nFog                        = 0x0FF0; // int32
            static constexpr std::uintptr_t m_flFogStrength               = 0x0FF4; // float32
            static constexpr std::uintptr_t m_nFogShadows                 = 0x0FF8; // int32
            static constexpr std::uintptr_t m_flFogScale                  = 0x0FFC; // float32
            static constexpr std::uintptr_t m_bFogMixedShadows            = 0x1000; // bool
            static constexpr std::uintptr_t m_flFadeSizeStart             = 0x1004; // float32
            static constexpr std::uintptr_t m_flFadeSizeEnd               = 0x1008; // float32
            static constexpr std::uintptr_t m_flShadowFadeSizeStart       = 0x100C; // float32
            static constexpr std::uintptr_t m_flShadowFadeSizeEnd         = 0x1010; // float32
            static constexpr std::uintptr_t m_bPrecomputedFieldsValid     = 0x1014; // bool
            static constexpr std::uintptr_t m_vPrecomputedBoundsMins      = 0x1018; // Vector
            static constexpr std::uintptr_t m_vPrecomputedBoundsMaxs      = 0x1024; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBOrigin       = 0x1030; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBAngles       = 0x103C; // QAngle
            static constexpr std::uintptr_t m_vPrecomputedOBBExtent       = 0x1048; // Vector
            static constexpr std::uintptr_t m_nPrecomputedSubFrusta       = 0x1054; // int32
            static constexpr std::uintptr_t m_vPrecomputedOBBOrigin0      = 0x1058; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBAngles0      = 0x1064; // QAngle
            static constexpr std::uintptr_t m_vPrecomputedOBBExtent0      = 0x1070; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBOrigin1      = 0x107C; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBAngles1      = 0x1088; // QAngle
            static constexpr std::uintptr_t m_vPrecomputedOBBExtent1      = 0x1094; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBOrigin2      = 0x10A0; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBAngles2      = 0x10AC; // QAngle
            static constexpr std::uintptr_t m_vPrecomputedOBBExtent2      = 0x10B8; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBOrigin3      = 0x10C4; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBAngles3      = 0x10D0; // QAngle
            static constexpr std::uintptr_t m_vPrecomputedOBBExtent3      = 0x10DC; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBOrigin4      = 0x10E8; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBAngles4      = 0x10F4; // QAngle
            static constexpr std::uintptr_t m_vPrecomputedOBBExtent4      = 0x1100; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBOrigin5      = 0x110C; // Vector
            static constexpr std::uintptr_t m_vPrecomputedOBBAngles5      = 0x1118; // QAngle
            static constexpr std::uintptr_t m_vPrecomputedOBBExtent5      = 0x1124; // Vector
            static constexpr std::uintptr_t m_bInitialBoneSetup           = 0x1170; // bool
            static constexpr std::uintptr_t m_VisClusters                 = 0x1178; // C_NetworkUtlVectorBase<uint16>
        };

        // Has VTable
        // Has Trivial Destructor
        class CClientAlphaProperty : public IClientAlphaProperty {
        public:
            static constexpr std::uintptr_t m_nDistFadeStart       = 0x0010; // uint16
            static constexpr std::uintptr_t m_nDistFadeEnd         = 0x0012; // uint16
            static constexpr std::uintptr_t m_nDesyncOffset        = 0x0000; // bitfield:14
            static constexpr std::uintptr_t m_bAlphaOverride       = 0x0000; // bitfield:1
            static constexpr std::uintptr_t m_bShadowAlphaOverride = 0x0000; // bitfield:1
            static constexpr std::uintptr_t m_nRenderMode          = 0x0000; // bitfield:3
            static constexpr std::uintptr_t m_nRenderFX            = 0x0000; // bitfield:5
            static constexpr std::uintptr_t m_nAlpha               = 0x0017; // uint8
            static constexpr std::uintptr_t m_flFadeScale          = 0x0018; // float32
            static constexpr std::uintptr_t m_flRenderFxStartTime  = 0x001C; // GameTime_t
            static constexpr std::uintptr_t m_flRenderFxDuration   = 0x0020; // float32
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
        class CFilterModel : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_iFilterModel = 0x0640; // CUtlSymbolLarge
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
        class CInfoInteraction : public C_PointEntity {
        public:
            static constexpr std::uintptr_t m_strSlotEntityName = 0x0608; // CUtlSymbolLarge[8]
            static constexpr std::uintptr_t m_strInteractVData  = 0x0648; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_flInteractRadius  = 0x0650; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PathParticleRope : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_bStartActive          = 0x0610; // bool
            static constexpr std::uintptr_t m_flMaxSimulationTime   = 0x0614; // float32
            static constexpr std::uintptr_t m_iszEffectName         = 0x0618; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_PathNodes_Name        = 0x0620; // CUtlVector<CUtlSymbolLarge>
            static constexpr std::uintptr_t m_flParticleSpacing     = 0x0638; // float32
            static constexpr std::uintptr_t m_flSlack               = 0x063C; // float32
            static constexpr std::uintptr_t m_flRadius              = 0x0640; // float32
            static constexpr std::uintptr_t m_ColorTint             = 0x0644; // Color
            static constexpr std::uintptr_t m_nEffectState          = 0x0648; // int32
            static constexpr std::uintptr_t m_iEffectIndex          = 0x0650; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            static constexpr std::uintptr_t m_PathNodes_Position    = 0x0658; // C_NetworkUtlVectorBase<Vector>
            static constexpr std::uintptr_t m_PathNodes_TangentIn   = 0x0670; // C_NetworkUtlVectorBase<Vector>
            static constexpr std::uintptr_t m_PathNodes_TangentOut  = 0x0688; // C_NetworkUtlVectorBase<Vector>
            static constexpr std::uintptr_t m_PathNodes_Color       = 0x06A0; // C_NetworkUtlVectorBase<Vector>
            static constexpr std::uintptr_t m_PathNodes_PinEnabled  = 0x06B8; // C_NetworkUtlVectorBase<bool>
            static constexpr std::uintptr_t m_PathNodes_RadiusScale = 0x06D0; // C_NetworkUtlVectorBase<float32>
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
        class CPathSimple : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_CPathQueryComponent = 0x0610; // CPathQueryComponent
            static constexpr std::uintptr_t m_pathString          = 0x0700; // CUtlString
            static constexpr std::uintptr_t m_bClosedLoop         = 0x0708; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPathWithDynamicNodes : public CPathSimple {
        public:
            static constexpr std::uintptr_t m_vecPathNodes             = 0x0710; // C_NetworkUtlVectorBase<CHandle<CPathNode>>
            static constexpr std::uintptr_t m_xInitialPathWorldToLocal = 0x0730; // CTransform
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_SceneEntity : public C_PointEntity {
        public:
            static constexpr std::uintptr_t m_bIsPlayingBack    = 0x0610; // bool
            static constexpr std::uintptr_t m_bPaused           = 0x0611; // bool
            static constexpr std::uintptr_t m_bMultiplayer      = 0x0612; // bool
            static constexpr std::uintptr_t m_bAutogenerated    = 0x0613; // bool
            static constexpr std::uintptr_t m_flForceClientTime = 0x0614; // float32
            static constexpr std::uintptr_t m_nSceneStringIndex = 0x0618; // uint16
            static constexpr std::uintptr_t m_bClientOnly       = 0x061A; // bool
            static constexpr std::uintptr_t m_hOwner            = 0x061C; // CHandle<C_BaseFlex>
            static constexpr std::uintptr_t m_hActorList        = 0x0620; // C_NetworkUtlVectorBase<CHandle<C_BaseFlex>>
            static constexpr std::uintptr_t m_bWasPlaying       = 0x0638; // bool
            static constexpr std::uintptr_t m_QueuedEvents      = 0x0648; // CUtlVector<C_SceneEntity::QueuedEvents_t>
            static constexpr std::uintptr_t m_flCurrentTime     = 0x0660; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvSoundscape : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_OnPlay                 = 0x0608; // CEntityIOOutput
            static constexpr std::uintptr_t m_flRadius               = 0x0620; // float32
            static constexpr std::uintptr_t m_soundEventName         = 0x0628; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bOverrideWithEvent     = 0x0630; // bool
            static constexpr std::uintptr_t m_soundscapeIndex        = 0x0634; // int32
            static constexpr std::uintptr_t m_soundscapeEntityListId = 0x0638; // int32
            static constexpr std::uintptr_t m_positionNames          = 0x0640; // CUtlSymbolLarge[8]
            static constexpr std::uintptr_t m_hProxySoundscape       = 0x0680; // CHandle<CEnvSoundscape>
            static constexpr std::uintptr_t m_bDisabled              = 0x0684; // bool
            static constexpr std::uintptr_t m_soundscapeName         = 0x0688; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_soundEventHash         = 0x0690; // uint32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_DynamicLight : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_Flags      = 0x0E88; // uint8
            static constexpr std::uintptr_t m_LightStyle = 0x0E89; // uint8
            static constexpr std::uintptr_t m_Radius     = 0x0E8C; // float32
            static constexpr std::uintptr_t m_Exponent   = 0x0E90; // int32
            static constexpr std::uintptr_t m_InnerAngle = 0x0E94; // float32
            static constexpr std::uintptr_t m_OuterAngle = 0x0E98; // float32
            static constexpr std::uintptr_t m_SpotRadius = 0x0E9C; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_FuncTrackTrain : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_nLongAxis    = 0x0E88; // int32
            static constexpr std::uintptr_t m_flRadius     = 0x0E8C; // float32
            static constexpr std::uintptr_t m_flLineLength = 0x0E90; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_SpotlightEnd : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_flLightScale = 0x0E88; // float32
            static constexpr std::uintptr_t m_Radius       = 0x0E8C; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PointValueRemapper : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled                = 0x0608; // bool
            static constexpr std::uintptr_t m_bDisabledOld             = 0x0609; // bool
            static constexpr std::uintptr_t m_bUpdateOnClient          = 0x060A; // bool
            static constexpr std::uintptr_t m_nInputType               = 0x060C; // ValueRemapperInputType_t
            static constexpr std::uintptr_t m_hRemapLineStart          = 0x0610; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_hRemapLineEnd            = 0x0614; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_flMaximumChangePerSecond = 0x0618; // float32
            static constexpr std::uintptr_t m_flDisengageDistance      = 0x061C; // float32
            static constexpr std::uintptr_t m_flEngageDistance         = 0x0620; // float32
            static constexpr std::uintptr_t m_bRequiresUseKey          = 0x0624; // bool
            static constexpr std::uintptr_t m_nOutputType              = 0x0628; // ValueRemapperOutputType_t
            static constexpr std::uintptr_t m_hOutputEntities          = 0x0630; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
            static constexpr std::uintptr_t m_nHapticsType             = 0x0648; // ValueRemapperHapticsType_t
            static constexpr std::uintptr_t m_nMomentumType            = 0x064C; // ValueRemapperMomentumType_t
            static constexpr std::uintptr_t m_flMomentumModifier       = 0x0650; // float32
            static constexpr std::uintptr_t m_flSnapValue              = 0x0654; // float32
            static constexpr std::uintptr_t m_flCurrentMomentum        = 0x0658; // float32
            static constexpr std::uintptr_t m_nRatchetType             = 0x065C; // ValueRemapperRatchetType_t
            static constexpr std::uintptr_t m_flRatchetOffset          = 0x0660; // float32
            static constexpr std::uintptr_t m_flInputOffset            = 0x0664; // float32
            static constexpr std::uintptr_t m_bEngaged                 = 0x0668; // bool
            static constexpr std::uintptr_t m_bFirstUpdate             = 0x0669; // bool
            static constexpr std::uintptr_t m_flPreviousValue          = 0x066C; // float32
            static constexpr std::uintptr_t m_flPreviousUpdateTickTime = 0x0670; // GameTime_t
            static constexpr std::uintptr_t m_vecPreviousTestPoint     = 0x0674; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PointWorldText : public C_ModelPointEntity {
        public:
            static constexpr std::uintptr_t m_bForceRecreateNextUpdate = 0x0E90; // bool
            static constexpr std::uintptr_t m_nTextWidthPx             = 0x0EA8; // int32
            static constexpr std::uintptr_t m_nTextHeightPx            = 0x0EAC; // int32
            static constexpr std::uintptr_t m_messageText              = 0x0EB0; // char[512]
            static constexpr std::uintptr_t m_FontName                 = 0x10B0; // char[64]
            static constexpr std::uintptr_t m_BackgroundMaterialName   = 0x10F0; // char[64]
            static constexpr std::uintptr_t m_bEnabled                 = 0x1130; // bool
            static constexpr std::uintptr_t m_bFullbright              = 0x1131; // bool
            static constexpr std::uintptr_t m_flWorldUnitsPerPx        = 0x1134; // float32
            static constexpr std::uintptr_t m_flFontSize               = 0x1138; // float32
            static constexpr std::uintptr_t m_flDepthOffset            = 0x113C; // float32
            static constexpr std::uintptr_t m_bDrawBackground          = 0x1140; // bool
            static constexpr std::uintptr_t m_flBackgroundBorderWidth  = 0x1144; // float32
            static constexpr std::uintptr_t m_flBackgroundBorderHeight = 0x1148; // float32
            static constexpr std::uintptr_t m_flBackgroundWorldToUV    = 0x114C; // float32
            static constexpr std::uintptr_t m_Color                    = 0x1150; // Color
            static constexpr std::uintptr_t m_nJustifyHorizontal       = 0x1154; // PointWorldTextJustifyHorizontal_t
            static constexpr std::uintptr_t m_nJustifyVertical         = 0x1158; // PointWorldTextJustifyVertical_t
            static constexpr std::uintptr_t m_nReorientMode            = 0x115C; // PointWorldTextReorientMode_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCitadelSoundOpvarSetOBB : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_iszStackName       = 0x0620; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszOperatorName    = 0x0628; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszOpvarName       = 0x0630; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_vDistanceInnerMins = 0x0638; // Vector
            static constexpr std::uintptr_t m_vDistanceInnerMaxs = 0x0644; // Vector
            static constexpr std::uintptr_t m_vDistanceOuterMins = 0x0650; // Vector
            static constexpr std::uintptr_t m_vDistanceOuterMaxs = 0x065C; // Vector
            static constexpr std::uintptr_t m_nAABBDirection     = 0x0668; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_HandleTest : public C_BaseEntity {
        public:
            static constexpr std::uintptr_t m_Handle      = 0x0608; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_bSendHandle = 0x060C; // bool
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
        class C_PrecipitationBlocker : public C_BaseModelEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_EntityDissolve : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_flStartTime          = 0x0E90; // GameTime_t
            static constexpr std::uintptr_t m_flFadeInStart        = 0x0E94; // float32
            static constexpr std::uintptr_t m_flFadeInLength       = 0x0E98; // float32
            static constexpr std::uintptr_t m_flFadeOutModelStart  = 0x0E9C; // float32
            static constexpr std::uintptr_t m_flFadeOutModelLength = 0x0EA0; // float32
            static constexpr std::uintptr_t m_flFadeOutStart       = 0x0EA4; // float32
            static constexpr std::uintptr_t m_flFadeOutLength      = 0x0EA8; // float32
            static constexpr std::uintptr_t m_flNextSparkTime      = 0x0EAC; // GameTime_t
            static constexpr std::uintptr_t m_nDissolveType        = 0x0EB0; // EntityDisolveType_t
            static constexpr std::uintptr_t m_vDissolverOrigin     = 0x0EB4; // Vector
            static constexpr std::uintptr_t m_nMagnitude           = 0x0EC0; // uint32
            static constexpr std::uintptr_t m_bCoreExplode         = 0x0EC4; // bool
            static constexpr std::uintptr_t m_bLinkedToServerEnt   = 0x0EC5; // bool
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
        class C_FuncRotating : public C_BaseModelEntity {
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
        class CSpriteOriented : public C_Sprite {
        public:
        };

        // Has VTable
        // Is Absract
        // Local Type Scope
        class C_BaseClientUIEntity : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_bEnabled       = 0x0E90; // bool
            static constexpr std::uintptr_t m_DialogXMLName  = 0x0E98; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_PanelClassName = 0x0EA0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_PanelID        = 0x0EA8; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PointClientUIHUD : public C_BaseClientUIEntity {
        public:
            static constexpr std::uintptr_t m_bCheckCSSClasses                    = 0x0EC0; // bool
            static constexpr std::uintptr_t m_bIgnoreInput                        = 0x1038; // bool
            static constexpr std::uintptr_t m_flWidth                             = 0x103C; // float32
            static constexpr std::uintptr_t m_flHeight                            = 0x1040; // float32
            static constexpr std::uintptr_t m_flDPI                               = 0x1044; // float32
            static constexpr std::uintptr_t m_flInteractDistance                  = 0x1048; // float32
            static constexpr std::uintptr_t m_flDepthOffset                       = 0x104C; // float32
            static constexpr std::uintptr_t m_unOwnerContext                      = 0x1050; // uint32
            static constexpr std::uintptr_t m_unHorizontalAlign                   = 0x1054; // uint32
            static constexpr std::uintptr_t m_unVerticalAlign                     = 0x1058; // uint32
            static constexpr std::uintptr_t m_unOrientation                       = 0x105C; // uint32
            static constexpr std::uintptr_t m_bAllowInteractionFromAllSceneWorlds = 0x1060; // bool
            static constexpr std::uintptr_t m_vecCSSClasses                       = 0x1068; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PointClientUIWorldPanel : public C_BaseClientUIEntity {
        public:
            static constexpr std::uintptr_t m_bForceRecreateNextUpdate            = 0x0EC0; // bool
            static constexpr std::uintptr_t m_bMoveViewToPlayerNextThink          = 0x0EC1; // bool
            static constexpr std::uintptr_t m_bCheckCSSClasses                    = 0x0EC2; // bool
            static constexpr std::uintptr_t m_anchorDeltaTransform                = 0x0ED0; // CTransform
            static constexpr std::uintptr_t m_pOffScreenIndicator                 = 0x1060; // CPointOffScreenIndicatorUi*
            static constexpr std::uintptr_t m_bIgnoreInput                        = 0x1088; // bool
            static constexpr std::uintptr_t m_bLit                                = 0x1089; // bool
            static constexpr std::uintptr_t m_bFollowPlayerAcrossTeleport         = 0x108A; // bool
            static constexpr std::uintptr_t m_flWidth                             = 0x108C; // float32
            static constexpr std::uintptr_t m_flHeight                            = 0x1090; // float32
            static constexpr std::uintptr_t m_flDPI                               = 0x1094; // float32
            static constexpr std::uintptr_t m_flInteractDistance                  = 0x1098; // float32
            static constexpr std::uintptr_t m_flDepthOffset                       = 0x109C; // float32
            static constexpr std::uintptr_t m_unOwnerContext                      = 0x10A0; // uint32
            static constexpr std::uintptr_t m_unHorizontalAlign                   = 0x10A4; // uint32
            static constexpr std::uintptr_t m_unVerticalAlign                     = 0x10A8; // uint32
            static constexpr std::uintptr_t m_unOrientation                       = 0x10AC; // uint32
            static constexpr std::uintptr_t m_bAllowInteractionFromAllSceneWorlds = 0x10B0; // bool
            static constexpr std::uintptr_t m_vecCSSClasses                       = 0x10B8; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            static constexpr std::uintptr_t m_bOpaque                             = 0x10D0; // bool
            static constexpr std::uintptr_t m_bNoDepth                            = 0x10D1; // bool
            static constexpr std::uintptr_t m_bVisibleWhenParentNoDraw            = 0x10D2; // bool
            static constexpr std::uintptr_t m_bRenderBackface                     = 0x10D3; // bool
            static constexpr std::uintptr_t m_bUseOffScreenIndicator              = 0x10D4; // bool
            static constexpr std::uintptr_t m_bExcludeFromSaveGames               = 0x10D5; // bool
            static constexpr std::uintptr_t m_bGrabbable                          = 0x10D6; // bool
            static constexpr std::uintptr_t m_bOnlyRenderToTexture                = 0x10D7; // bool
            static constexpr std::uintptr_t m_bDisableMipGen                      = 0x10D8; // bool
            static constexpr std::uintptr_t m_nExplicitImageLayout                = 0x10DC; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PointClientUIWorldTextPanel : public C_PointClientUIWorldPanel {
        public:
            static constexpr std::uintptr_t m_messageText = 0x10E0; // char[512]
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoOffscreenPanoramaTexture : public C_PointEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled                = 0x0608; // bool
            static constexpr std::uintptr_t m_nResolutionX             = 0x060C; // int32
            static constexpr std::uintptr_t m_nResolutionY             = 0x0610; // int32
            static constexpr std::uintptr_t m_szPanelType              = 0x0618; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_szLayoutFileName         = 0x0620; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_RenderAttrName           = 0x0628; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_TargetEntities           = 0x0630; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
            static constexpr std::uintptr_t m_nTargetChangeCount       = 0x0648; // int32
            static constexpr std::uintptr_t m_vecCSSClasses            = 0x0650; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            static constexpr std::uintptr_t m_szTargetsName            = 0x0668; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_AdditionalTargetEntities = 0x0670; // CUtlVector<CHandle<C_BaseModelEntity>>
            static constexpr std::uintptr_t m_bCheckCSSClasses         = 0x07E8; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncWater : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_BuoyancyHelper = 0x0E88; // CBuoyancyHelper
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_Inferno : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_nfxFireDamageEffect                   = 0x0EC8; // ParticleIndex_t
            static constexpr std::uintptr_t m_hInfernoPointsSnapshot                = 0x0ED0; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            static constexpr std::uintptr_t m_hInfernoFillerPointsSnapshot          = 0x0ED8; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            static constexpr std::uintptr_t m_hInfernoOutlinePointsSnapshot         = 0x0EE0; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            static constexpr std::uintptr_t m_hInfernoClimbingOutlinePointsSnapshot = 0x0EE8; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            static constexpr std::uintptr_t m_hInfernoDecalsSnapshot                = 0x0EF0; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            static constexpr std::uintptr_t m_firePositions                         = 0x0EF8; // Vector[64]
            static constexpr std::uintptr_t m_fireParentPositions                   = 0x11F8; // Vector[64]
            static constexpr std::uintptr_t m_bFireIsBurning                        = 0x14F8; // bool[64]
            static constexpr std::uintptr_t m_BurnNormal                            = 0x1538; // Vector[64]
            static constexpr std::uintptr_t m_fireCount                             = 0x1838; // int32
            static constexpr std::uintptr_t m_nInfernoType                          = 0x183C; // int32
            static constexpr std::uintptr_t m_nFireLifetime                         = 0x1840; // float32
            static constexpr std::uintptr_t m_bInPostEffectTime                     = 0x1844; // bool
            static constexpr std::uintptr_t m_lastFireCount                         = 0x1848; // int32
            static constexpr std::uintptr_t m_nFireEffectTickBegin                  = 0x184C; // int32
            static constexpr std::uintptr_t m_drawableCount                         = 0x8450; // int32
            static constexpr std::uintptr_t m_blosCheck                             = 0x8454; // bool
            static constexpr std::uintptr_t m_nlosperiod                            = 0x8458; // int32
            static constexpr std::uintptr_t m_maxFireHalfWidth                      = 0x845C; // float32
            static constexpr std::uintptr_t m_maxFireHeight                         = 0x8460; // float32
            static constexpr std::uintptr_t m_minBounds                             = 0x8464; // Vector
            static constexpr std::uintptr_t m_maxBounds                             = 0x8470; // Vector
            static constexpr std::uintptr_t m_flLastGrassBurnThink                  = 0x847C; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_RectLight : public C_BarnLight {
        public:
            static constexpr std::uintptr_t m_bShowLight = 0x1198; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoDynamicShadowHint : public C_PointEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled    = 0x0608; // bool
            static constexpr std::uintptr_t m_flRange      = 0x060C; // float32
            static constexpr std::uintptr_t m_nImportance  = 0x0610; // int32
            static constexpr std::uintptr_t m_nLightChoice = 0x0614; // int32
            static constexpr std::uintptr_t m_hLight       = 0x0618; // CHandle<C_BaseEntity>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CInfoDynamicShadowHintBox : public CInfoDynamicShadowHint {
        public:
            static constexpr std::uintptr_t m_vBoxMins = 0x0620; // Vector
            static constexpr std::uintptr_t m_vBoxMaxs = 0x062C; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_EnvSky : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_hSkyMaterial             = 0x0E88; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_hSkyMaterialLightingOnly = 0x0E90; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_bStartDisabled           = 0x0E98; // bool
            static constexpr std::uintptr_t m_vTintColor               = 0x0E99; // Color
            static constexpr std::uintptr_t m_vTintColorLightingOnly   = 0x0E9D; // Color
            static constexpr std::uintptr_t m_flBrightnessScale        = 0x0EA4; // float32
            static constexpr std::uintptr_t m_nFogType                 = 0x0EA8; // int32
            static constexpr std::uintptr_t m_flFogMinStart            = 0x0EAC; // float32
            static constexpr std::uintptr_t m_flFogMinEnd              = 0x0EB0; // float32
            static constexpr std::uintptr_t m_flFogMaxStart            = 0x0EB4; // float32
            static constexpr std::uintptr_t m_flFogMaxEnd              = 0x0EB8; // float32
            static constexpr std::uintptr_t m_bEnabled                 = 0x0EBC; // bool
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
        class C_LightEntity : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_CLightComponent = 0x0E88; // CLightComponent*
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
        class CFilterName : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_iFilterName = 0x0640; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class FilterHealth : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_bAdrenalineActive = 0x0640; // bool
            static constexpr std::uintptr_t m_iHealthMin        = 0x0644; // int32
            static constexpr std::uintptr_t m_iHealthMax        = 0x0648; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFilterAttributeInt : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_sAttributeName = 0x0640; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_ParticleSystem : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_szSnapshotFileName             = 0x0E88; // char[512]
            static constexpr std::uintptr_t m_bActive                        = 0x1088; // bool
            static constexpr std::uintptr_t m_bFrozen                        = 0x1089; // bool
            static constexpr std::uintptr_t m_flFreezeTransitionDuration     = 0x108C; // float32
            static constexpr std::uintptr_t m_nStopType                      = 0x1090; // int32
            static constexpr std::uintptr_t m_bAnimateDuringGameplayPause    = 0x1094; // bool
            static constexpr std::uintptr_t m_iEffectIndex                   = 0x1098; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            static constexpr std::uintptr_t m_flStartTime                    = 0x10A0; // GameTime_t
            static constexpr std::uintptr_t m_flPreSimTime                   = 0x10A4; // float32
            static constexpr std::uintptr_t m_vServerControlPoints           = 0x10A8; // Vector[4]
            static constexpr std::uintptr_t m_iServerControlPointAssignments = 0x10D8; // uint8[4]
            static constexpr std::uintptr_t m_hControlPointEnts              = 0x10DC; // CHandle<C_BaseEntity>[64]
            static constexpr std::uintptr_t m_bNoSave                        = 0x11DC; // bool
            static constexpr std::uintptr_t m_bNoFreeze                      = 0x11DD; // bool
            static constexpr std::uintptr_t m_bNoRamp                        = 0x11DE; // bool
            static constexpr std::uintptr_t m_bStartActive                   = 0x11DF; // bool
            static constexpr std::uintptr_t m_iszEffectName                  = 0x11E0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszControlPointNames           = 0x11E8; // CUtlSymbolLarge[64]
            static constexpr std::uintptr_t m_nDataCP                        = 0x13E8; // int32
            static constexpr std::uintptr_t m_vecDataCPValue                 = 0x13EC; // Vector
            static constexpr std::uintptr_t m_nTintCP                        = 0x13F8; // int32
            static constexpr std::uintptr_t m_clrTint                        = 0x13FC; // Color
            static constexpr std::uintptr_t m_bOldActive                     = 0x1420; // bool
            static constexpr std::uintptr_t m_bOldFrozen                     = 0x1421; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_TextureBasedAnimatable : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_bLoop               = 0x0E88; // bool
            static constexpr std::uintptr_t m_flFPS               = 0x0E8C; // float32
            static constexpr std::uintptr_t m_hPositionKeys       = 0x0E90; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_hRotationKeys       = 0x0E98; // CStrongHandle<InfoForResourceTypeCTextureBase>
            static constexpr std::uintptr_t m_vAnimationBoundsMin = 0x0EA0; // Vector
            static constexpr std::uintptr_t m_vAnimationBoundsMax = 0x0EAC; // Vector
            static constexpr std::uintptr_t m_flStartTime         = 0x0EB8; // float32
            static constexpr std::uintptr_t m_flStartFrame        = 0x0EBC; // float32
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
        class C_FuncMonitor : public C_FuncBrush {
        public:
            static constexpr std::uintptr_t m_targetCamera          = 0x0E88; // CUtlString
            static constexpr std::uintptr_t m_nResolutionEnum       = 0x0E90; // int32
            static constexpr std::uintptr_t m_bRenderShadows        = 0x0E94; // bool
            static constexpr std::uintptr_t m_bUseUniqueColorTarget = 0x0E95; // bool
            static constexpr std::uintptr_t m_brushModelName        = 0x0E98; // CUtlString
            static constexpr std::uintptr_t m_hTargetCamera         = 0x0EA0; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_bEnabled              = 0x0EA4; // bool
            static constexpr std::uintptr_t m_bDraw3DSkybox         = 0x0EA5; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_EnvParticleGlow : public C_ParticleSystem {
        public:
            static constexpr std::uintptr_t m_flAlphaScale     = 0x1438; // float32
            static constexpr std::uintptr_t m_flRadiusScale    = 0x143C; // float32
            static constexpr std::uintptr_t m_flSelfIllumScale = 0x1440; // float32
            static constexpr std::uintptr_t m_ColorTint        = 0x1444; // Color
            static constexpr std::uintptr_t m_hTextureOverride = 0x1448; // CStrongHandle<InfoForResourceTypeCTextureBase>
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
        class C_CSTeam : public C_Team {
        public:
            static constexpr std::uintptr_t m_szTeamMatchStat = 0x06C0; // char[512]
            static constexpr std::uintptr_t m_numMapVictories = 0x08C0; // int32
            static constexpr std::uintptr_t m_bSurrendered    = 0x08C4; // bool
            static constexpr std::uintptr_t m_scoreFirstHalf  = 0x08C8; // int32
            static constexpr std::uintptr_t m_scoreSecondHalf = 0x08CC; // int32
            static constexpr std::uintptr_t m_scoreOvertime   = 0x08D0; // int32
            static constexpr std::uintptr_t m_szClanTeamname  = 0x08D4; // char[129]
            static constexpr std::uintptr_t m_iClanID         = 0x0958; // uint32
            static constexpr std::uintptr_t m_szTeamFlagImage = 0x095C; // char[8]
            static constexpr std::uintptr_t m_szTeamLogoImage = 0x0964; // char[8]
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
        class C_EnvDecal : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_hDecalMaterial       = 0x0E88; // CStrongHandle<InfoForResourceTypeIMaterial2>
            static constexpr std::uintptr_t m_flWidth              = 0x0E90; // float32
            static constexpr std::uintptr_t m_flHeight             = 0x0E94; // float32
            static constexpr std::uintptr_t m_flDepth              = 0x0E98; // float32
            static constexpr std::uintptr_t m_nRenderOrder         = 0x0E9C; // uint32
            static constexpr std::uintptr_t m_bProjectOnWorld      = 0x0EA0; // bool
            static constexpr std::uintptr_t m_bProjectOnCharacters = 0x0EA1; // bool
            static constexpr std::uintptr_t m_bProjectOnWater      = 0x0EA2; // bool
            static constexpr std::uintptr_t m_flDepthSortBias      = 0x0EA4; // float32
        };

        // Local Type Scope
        class SignatureOutflow_Resume : public CPulse_ResumePoint {
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
        class CPulseCell_IsRequirementValid : public CPulseCell_BaseRequirement {
        public:
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
        class CPulseCell_CursorQueue : public CPulseCell_WaitForCursorsWithTagBase {
        public:
            static constexpr std::uintptr_t m_nCursorsAllowedToRunParallel = 0x0098; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFilterProximity : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_flRadius = 0x0640; // float32
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
        class C_EnvCubemapBox : public C_EnvCubemap {
        public:
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
        class CPulseCell_Inflow_EventHandler : public CPulseCell_Inflow_BaseEntrypoint {
        public:
            static constexpr std::uintptr_t m_EventName = 0x0080; // PulseSymbol_t
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
        class CPulseCell_Inflow_EntOutputHandler : public CPulseCell_Inflow_BaseEntrypoint {
        public:
            static constexpr std::uintptr_t m_SourceEntity      = 0x0080; // PulseSymbol_t
            static constexpr std::uintptr_t m_SourceOutput      = 0x0090; // PulseSymbol_t
            static constexpr std::uintptr_t m_ExpectedParamType = 0x00A0; // CPulseValueFullType
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
        class CFilterTeam : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_iFilterTeam = 0x0640; // int32
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
        // Local Type Scope
        class CBaseAnimGraph : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_graphControllerManager          = 0x0E88; // CAnimGraphControllerManager
            static constexpr std::uintptr_t m_pMainGraphController            = 0x0F38; // CAnimGraphControllerBase*
            static constexpr std::uintptr_t m_bInitiallyPopulateInterpHistory = 0x0F40; // bool
            static constexpr std::uintptr_t m_bSuppressAnimEventSounds        = 0x0F42; // bool
            static constexpr std::uintptr_t m_bAnimGraphUpdateEnabled         = 0x0F50; // bool
            static constexpr std::uintptr_t m_flMaxSlopeDistance              = 0x0F54; // float32
            static constexpr std::uintptr_t m_vLastSlopeCheckPos              = 0x0F58; // VectorWS
            static constexpr std::uintptr_t m_nAnimGraphUpdateId              = 0x0F64; // uint32
            static constexpr std::uintptr_t m_bAnimationUpdateScheduled       = 0x0F68; // bool
            static constexpr std::uintptr_t m_vecForce                        = 0x0F6C; // Vector
            static constexpr std::uintptr_t m_nForceBone                      = 0x0F78; // int32
            static constexpr std::uintptr_t m_pClientsideRagdoll              = 0x0F80; // CBaseAnimGraph*
            static constexpr std::uintptr_t m_bBuiltRagdoll                   = 0x0F88; // bool
            static constexpr std::uintptr_t m_RagdollPose                     = 0x0FA0; // PhysicsRagdollPose_t
            static constexpr std::uintptr_t m_bRagdollEnabled                 = 0x0FE8; // bool
            static constexpr std::uintptr_t m_bRagdollClientSide              = 0x0FE9; // bool
            static constexpr std::uintptr_t m_bHasAnimatedMaterialAttributes  = 0x0FF8; // bool
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
        class C_LightSpotEntity : public C_LightEntity {
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
        class CChoreoInfoTarget : public C_PointEntity {
        public:
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
        class CEnvSoundscapeTriggerable : public CEnvSoundscape {
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
        class FilterDamageType : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_iDamageType = 0x0640; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPointOffScreenIndicatorUi : public C_PointClientUIWorldPanel {
        public:
            static constexpr std::uintptr_t m_bBeenEnabled     = 0x10E0; // bool
            static constexpr std::uintptr_t m_bHide            = 0x10E1; // bool
            static constexpr std::uintptr_t m_flSeenTargetTime = 0x10E4; // float32
            static constexpr std::uintptr_t m_pTargetPanel     = 0x10E8; // C_PointClientUIWorldPanel*
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CLogicRelay : public CLogicalEntity {
        public:
            static constexpr std::uintptr_t m_bDisabled         = 0x0608; // bool
            static constexpr std::uintptr_t m_bWaitForRefire    = 0x0609; // bool
            static constexpr std::uintptr_t m_bTriggerOnce      = 0x060A; // bool
            static constexpr std::uintptr_t m_bFastRetrigger    = 0x060B; // bool
            static constexpr std::uintptr_t m_bPassthoughCaller = 0x060C; // bool
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
        class C_CSGO_TerroristTeamIntroCamera : public C_CSGO_TeamPreviewCamera {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_FuncConveyor : public C_BaseModelEntity {
        public:
            static constexpr std::uintptr_t m_vecMoveDirEntitySpace    = 0x0E90; // Vector
            static constexpr std::uintptr_t m_flTargetSpeed            = 0x0E9C; // float32
            static constexpr std::uintptr_t m_nTransitionStartTick     = 0x0EA0; // GameTick_t
            static constexpr std::uintptr_t m_nTransitionDurationTicks = 0x0EA4; // int32
            static constexpr std::uintptr_t m_flTransitionStartSpeed   = 0x0EA8; // float32
            static constexpr std::uintptr_t m_hConveyorModels          = 0x0EB0; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
            static constexpr std::uintptr_t m_flCurrentConveyorOffset  = 0x0EC8; // float32
            static constexpr std::uintptr_t m_flCurrentConveyorSpeed   = 0x0ECC; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSGO_CounterTerroristWingmanIntroCamera : public C_CSGO_TeamPreviewCamera {
        public:
        };

        // Has VTable
        // Local Type Scope
        class C_CSGO_TeamSelectCharacterPosition : public C_CSGO_TeamPreviewCharacterPosition {
        public:
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
        class C_CSGO_TeamIntroCounterTerroristPosition : public C_CSGO_TeamIntroCharacterPosition {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBaseProp : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_bModelOverrodeBlockLOS    = 0x1168; // bool
            static constexpr std::uintptr_t m_iShapeType                = 0x116C; // int32
            static constexpr std::uintptr_t m_bConformToCollisionBounds = 0x1170; // bool
            static constexpr std::uintptr_t m_mPreferredCatchTransform  = 0x1180; // CTransform
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_OmniLight : public C_BarnLight {
        public:
            static constexpr std::uintptr_t m_flInnerAngle = 0x1198; // float32
            static constexpr std::uintptr_t m_flOuterAngle = 0x119C; // float32
            static constexpr std::uintptr_t m_bShowLight   = 0x11A0; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_FireCrackerBlast : public C_Inferno {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_FuncElectrifiedVolume : public C_FuncBrush {
        public:
            static constexpr std::uintptr_t m_nAmbientEffect = 0x0E88; // ParticleIndex_t
            static constexpr std::uintptr_t m_EffectName     = 0x0E90; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_bState         = 0x0E98; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSGO_TerroristWingmanIntroCamera : public C_CSGO_TeamPreviewCamera {
        public:
        };

        // Has VTable
        // Local Type Scope
        class C_CSGameRules : public C_TeamplayRules {
        public:
            static constexpr std::uintptr_t m_bFreezePeriod                     = 0x0040; // bool
            static constexpr std::uintptr_t m_bWarmupPeriod                     = 0x0041; // bool
            static constexpr std::uintptr_t m_fWarmupPeriodEnd                  = 0x0044; // GameTime_t
            static constexpr std::uintptr_t m_fWarmupPeriodStart                = 0x0048; // GameTime_t
            static constexpr std::uintptr_t m_bTerroristTimeOutActive           = 0x004C; // bool
            static constexpr std::uintptr_t m_bCTTimeOutActive                  = 0x004D; // bool
            static constexpr std::uintptr_t m_flTerroristTimeOutRemaining       = 0x0050; // float32
            static constexpr std::uintptr_t m_flCTTimeOutRemaining              = 0x0054; // float32
            static constexpr std::uintptr_t m_nTerroristTimeOuts                = 0x0058; // int32
            static constexpr std::uintptr_t m_nCTTimeOuts                       = 0x005C; // int32
            static constexpr std::uintptr_t m_bTechnicalTimeOut                 = 0x0060; // bool
            static constexpr std::uintptr_t m_bMatchWaitingForResume            = 0x0061; // bool
            static constexpr std::uintptr_t m_iFreezeTime                       = 0x0064; // int32
            static constexpr std::uintptr_t m_iRoundTime                        = 0x0068; // int32
            static constexpr std::uintptr_t m_fMatchStartTime                   = 0x006C; // float32
            static constexpr std::uintptr_t m_fRoundStartTime                   = 0x0070; // GameTime_t
            static constexpr std::uintptr_t m_flRestartRoundTime                = 0x0074; // GameTime_t
            static constexpr std::uintptr_t m_bGameRestart                      = 0x0078; // bool
            static constexpr std::uintptr_t m_flGameStartTime                   = 0x007C; // float32
            static constexpr std::uintptr_t m_timeUntilNextPhaseStarts          = 0x0080; // float32
            static constexpr std::uintptr_t m_gamePhase                         = 0x0084; // int32
            static constexpr std::uintptr_t m_totalRoundsPlayed                 = 0x0088; // int32
            static constexpr std::uintptr_t m_nRoundsPlayedThisPhase            = 0x008C; // int32
            static constexpr std::uintptr_t m_nOvertimePlaying                  = 0x0090; // int32
            static constexpr std::uintptr_t m_iHostagesRemaining                = 0x0094; // int32
            static constexpr std::uintptr_t m_bAnyHostageReached                = 0x0098; // bool
            static constexpr std::uintptr_t m_bMapHasBombTarget                 = 0x0099; // bool
            static constexpr std::uintptr_t m_bMapHasRescueZone                 = 0x009A; // bool
            static constexpr std::uintptr_t m_bMapHasBuyZone                    = 0x009B; // bool
            static constexpr std::uintptr_t m_bIsQueuedMatchmaking              = 0x009C; // bool
            static constexpr std::uintptr_t m_nQueuedMatchmakingMode            = 0x00A0; // int32
            static constexpr std::uintptr_t m_bIsValveDS                        = 0x00A4; // bool
            static constexpr std::uintptr_t m_bLogoMap                          = 0x00A5; // bool
            static constexpr std::uintptr_t m_bPlayAllStepSoundsOnServer        = 0x00A6; // bool
            static constexpr std::uintptr_t m_iSpectatorSlotCount               = 0x00A8; // int32
            static constexpr std::uintptr_t m_MatchDevice                       = 0x00AC; // int32
            static constexpr std::uintptr_t m_bHasMatchStarted                  = 0x00B0; // bool
            static constexpr std::uintptr_t m_nNextMapInMapgroup                = 0x00B4; // int32
            static constexpr std::uintptr_t m_szTournamentEventName             = 0x00B8; // char[512]
            static constexpr std::uintptr_t m_szTournamentEventStage            = 0x02B8; // char[512]
            static constexpr std::uintptr_t m_szMatchStatTxt                    = 0x04B8; // char[512]
            static constexpr std::uintptr_t m_szTournamentPredictionsTxt        = 0x06B8; // char[512]
            static constexpr std::uintptr_t m_nTournamentPredictionsPct         = 0x08B8; // int32
            static constexpr std::uintptr_t m_flCMMItemDropRevealStartTime      = 0x08BC; // GameTime_t
            static constexpr std::uintptr_t m_flCMMItemDropRevealEndTime        = 0x08C0; // GameTime_t
            static constexpr std::uintptr_t m_bIsDroppingItems                  = 0x08C4; // bool
            static constexpr std::uintptr_t m_bIsQuestEligible                  = 0x08C5; // bool
            static constexpr std::uintptr_t m_bIsHltvActive                     = 0x08C6; // bool
            static constexpr std::uintptr_t m_bBombPlanted                      = 0x08C7; // bool
            static constexpr std::uintptr_t m_arrProhibitedItemIndices          = 0x08C8; // uint16[100]
            static constexpr std::uintptr_t m_arrTournamentActiveCasterAccounts = 0x0990; // uint32[4]
            static constexpr std::uintptr_t m_numBestOfMaps                     = 0x09A0; // int32
            static constexpr std::uintptr_t m_nHalloweenMaskListSeed            = 0x09A4; // int32
            static constexpr std::uintptr_t m_bBombDropped                      = 0x09A8; // bool
            static constexpr std::uintptr_t m_iRoundWinStatus                   = 0x09AC; // int32
            static constexpr std::uintptr_t m_eRoundWinReason                   = 0x09B0; // int32
            static constexpr std::uintptr_t m_bTCantBuy                         = 0x09B4; // bool
            static constexpr std::uintptr_t m_bCTCantBuy                        = 0x09B5; // bool
            static constexpr std::uintptr_t m_iMatchStats_RoundResults          = 0x09B8; // int32[30]
            static constexpr std::uintptr_t m_iMatchStats_PlayersAlive_CT       = 0x0A30; // int32[30]
            static constexpr std::uintptr_t m_iMatchStats_PlayersAlive_T        = 0x0AA8; // int32[30]
            static constexpr std::uintptr_t m_TeamRespawnWaveTimes              = 0x0B20; // float32[32]
            static constexpr std::uintptr_t m_flNextRespawnWave                 = 0x0BA0; // GameTime_t[32]
            static constexpr std::uintptr_t m_vMinimapMins                      = 0x0C20; // Vector
            static constexpr std::uintptr_t m_vMinimapMaxs                      = 0x0C2C; // Vector
            static constexpr std::uintptr_t m_MinimapVerticalSectionHeights     = 0x0C38; // float32[8]
            static constexpr std::uintptr_t m_ullLocalMatchID                   = 0x0C58; // uint64
            static constexpr std::uintptr_t m_nEndMatchMapGroupVoteTypes        = 0x0C60; // int32[10]
            static constexpr std::uintptr_t m_nEndMatchMapGroupVoteOptions      = 0x0C88; // int32[10]
            static constexpr std::uintptr_t m_nEndMatchMapVoteWinner            = 0x0CB0; // int32
            static constexpr std::uintptr_t m_iNumConsecutiveCTLoses            = 0x0CB4; // int32
            static constexpr std::uintptr_t m_iNumConsecutiveTerroristLoses     = 0x0CB8; // int32
            static constexpr std::uintptr_t m_nMatchAbortedEarlyReason          = 0x0D78; // int32
            static constexpr std::uintptr_t m_bHasTriggeredRoundStartMusic      = 0x0D7C; // bool
            static constexpr std::uintptr_t m_bSwitchingTeamsAtRoundReset       = 0x0D7D; // bool
            static constexpr std::uintptr_t m_pGameModeRules                    = 0x0D98; // CCSGameModeRules*
            static constexpr std::uintptr_t m_RetakeRules                       = 0x0DA0; // C_RetakeGameRules
            static constexpr std::uintptr_t m_nMatchEndCount                    = 0x0EF8; // uint8
            static constexpr std::uintptr_t m_nTTeamIntroVariant                = 0x0EFC; // int32
            static constexpr std::uintptr_t m_nCTTeamIntroVariant               = 0x0F00; // int32
            static constexpr std::uintptr_t m_bTeamIntroPeriod                  = 0x0F04; // bool
            static constexpr std::uintptr_t m_iRoundEndWinnerTeam               = 0x0F08; // int32
            static constexpr std::uintptr_t m_eRoundEndReason                   = 0x0F0C; // int32
            static constexpr std::uintptr_t m_bRoundEndShowTimerDefend          = 0x0F10; // bool
            static constexpr std::uintptr_t m_iRoundEndTimerTime                = 0x0F14; // int32
            static constexpr std::uintptr_t m_sRoundEndFunFactToken             = 0x0F18; // CUtlString
            static constexpr std::uintptr_t m_iRoundEndFunFactPlayerSlot        = 0x0F20; // CPlayerSlot
            static constexpr std::uintptr_t m_iRoundEndFunFactData1             = 0x0F24; // int32
            static constexpr std::uintptr_t m_iRoundEndFunFactData2             = 0x0F28; // int32
            static constexpr std::uintptr_t m_iRoundEndFunFactData3             = 0x0F2C; // int32
            static constexpr std::uintptr_t m_sRoundEndMessage                  = 0x0F30; // CUtlString
            static constexpr std::uintptr_t m_iRoundEndPlayerCount              = 0x0F38; // int32
            static constexpr std::uintptr_t m_bRoundEndNoMusic                  = 0x0F3C; // bool
            static constexpr std::uintptr_t m_iRoundEndLegacy                   = 0x0F40; // int32
            static constexpr std::uintptr_t m_nRoundEndCount                    = 0x0F44; // uint8
            static constexpr std::uintptr_t m_iRoundStartRoundNumber            = 0x0F48; // int32
            static constexpr std::uintptr_t m_nRoundStartCount                  = 0x0F4C; // uint8
            static constexpr std::uintptr_t m_flLastPerfSampleTime              = 0x4F58; // float64
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PointCommentaryNode : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_bActive                 = 0x1180; // bool
            static constexpr std::uintptr_t m_bWasActive              = 0x1181; // bool
            static constexpr std::uintptr_t m_flEndTime               = 0x1184; // GameTime_t
            static constexpr std::uintptr_t m_flStartTime             = 0x1188; // GameTime_t
            static constexpr std::uintptr_t m_flStartTimeInCommentary = 0x118C; // float32
            static constexpr std::uintptr_t m_iszCommentaryFile       = 0x1190; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszTitle                = 0x1198; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iszSpeakers             = 0x11A0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iNodeNumber             = 0x11A8; // int32
            static constexpr std::uintptr_t m_iNodeNumberMax          = 0x11AC; // int32
            static constexpr std::uintptr_t m_bListenedTo             = 0x11B0; // bool
            static constexpr std::uintptr_t m_sndCommentary           = 0x11B8; // CSoundPatch*
            static constexpr std::uintptr_t m_hViewPosition           = 0x11C0; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_bRestartAfterRestore    = 0x11C4; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFilterMassGreater : public CBaseFilter {
        public:
            static constexpr std::uintptr_t m_fFilterMass = 0x0640; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_LightDirectionalEntity : public C_LightEntity {
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
        class C_SoundEventPathCornerEntity : public C_SoundEventEntity {
        public:
            static constexpr std::uintptr_t m_vecCornerPairsNetworked = 0x06B8; // C_NetworkUtlVectorBase<SoundeventPathCornerPairNetworked_t>
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
        class C_BaseButton : public C_BaseToggle {
        public:
            static constexpr std::uintptr_t m_glowEntity    = 0x0E88; // CHandle<C_BaseModelEntity>
            static constexpr std::uintptr_t m_usable        = 0x0E8C; // bool
            static constexpr std::uintptr_t m_szDisplayText = 0x0E90; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_Fish : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_pos               = 0x1168; // Vector
            static constexpr std::uintptr_t m_vel               = 0x1174; // Vector
            static constexpr std::uintptr_t m_angles            = 0x1180; // QAngle
            static constexpr std::uintptr_t m_localLifeState    = 0x118C; // int32
            static constexpr std::uintptr_t m_deathDepth        = 0x1190; // float32
            static constexpr std::uintptr_t m_deathAngle        = 0x1194; // float32
            static constexpr std::uintptr_t m_buoyancy          = 0x1198; // float32
            static constexpr std::uintptr_t m_wiggleTimer       = 0x11A0; // CountdownTimer
            static constexpr std::uintptr_t m_wigglePhase       = 0x11B8; // float32
            static constexpr std::uintptr_t m_wiggleRate        = 0x11BC; // float32
            static constexpr std::uintptr_t m_actualPos         = 0x11C0; // Vector
            static constexpr std::uintptr_t m_actualAngles      = 0x11CC; // QAngle
            static constexpr std::uintptr_t m_poolOrigin        = 0x11D8; // Vector
            static constexpr std::uintptr_t m_waterLevel        = 0x11E4; // float32
            static constexpr std::uintptr_t m_gotUpdate         = 0x11E8; // bool
            static constexpr std::uintptr_t m_x                 = 0x11EC; // float32
            static constexpr std::uintptr_t m_y                 = 0x11F0; // float32
            static constexpr std::uintptr_t m_z                 = 0x11F4; // float32
            static constexpr std::uintptr_t m_angle             = 0x11F8; // float32
            static constexpr std::uintptr_t m_errorHistory      = 0x11FC; // float32[20]
            static constexpr std::uintptr_t m_errorHistoryIndex = 0x124C; // int32
            static constexpr std::uintptr_t m_errorHistoryCount = 0x1250; // int32
            static constexpr std::uintptr_t m_averageError      = 0x1254; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_InfoInstructorHintHostageRescueZone : public C_PointEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPathNode : public C_PointEntity {
        public:
            static constexpr std::uintptr_t m_vInTangentLocal       = 0x0608; // Vector
            static constexpr std::uintptr_t m_vOutTangentLocal      = 0x0614; // Vector
            static constexpr std::uintptr_t m_strParentPathUniqueID = 0x0620; // CUtlString
            static constexpr std::uintptr_t m_strPathNodeParameter  = 0x0628; // CUtlString
            static constexpr std::uintptr_t m_xWSPrevParent         = 0x0630; // CTransform
            static constexpr std::uintptr_t m_hPath                 = 0x0650; // CHandle<CPathWithDynamicNodes>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CCSPlayerController : public CBasePlayerController {
        public:
            static constexpr std::uintptr_t m_pInGameMoneyServices                = 0x0808; // CCSPlayerController_InGameMoneyServices*
            static constexpr std::uintptr_t m_pInventoryServices                  = 0x0810; // CCSPlayerController_InventoryServices*
            static constexpr std::uintptr_t m_pActionTrackingServices             = 0x0818; // CCSPlayerController_ActionTrackingServices*
            static constexpr std::uintptr_t m_pDamageServices                     = 0x0820; // CCSPlayerController_DamageServices*
            static constexpr std::uintptr_t m_iPing                               = 0x0828; // uint32
            static constexpr std::uintptr_t m_bHasCommunicationAbuseMute          = 0x082C; // bool
            static constexpr std::uintptr_t m_uiCommunicationMuteFlags            = 0x0830; // uint32
            static constexpr std::uintptr_t m_szCrosshairCodes                    = 0x0838; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_iPendingTeamNum                     = 0x0840; // uint8
            static constexpr std::uintptr_t m_flForceTeamTime                     = 0x0844; // GameTime_t
            static constexpr std::uintptr_t m_iCompTeammateColor                  = 0x0848; // int32
            static constexpr std::uintptr_t m_bEverPlayedOnTeam                   = 0x084C; // bool
            static constexpr std::uintptr_t m_flPreviousForceJoinTeamTime         = 0x0850; // GameTime_t
            static constexpr std::uintptr_t m_szClan                              = 0x0858; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_sSanitizedPlayerName                = 0x0860; // CUtlString
            static constexpr std::uintptr_t m_iCoachingTeam                       = 0x0868; // int32
            static constexpr std::uintptr_t m_nPlayerDominated                    = 0x0870; // uint64
            static constexpr std::uintptr_t m_nPlayerDominatingMe                 = 0x0878; // uint64
            static constexpr std::uintptr_t m_iCompetitiveRanking                 = 0x0880; // int32
            static constexpr std::uintptr_t m_iCompetitiveWins                    = 0x0884; // int32
            static constexpr std::uintptr_t m_iCompetitiveRankType                = 0x0888; // int8
            static constexpr std::uintptr_t m_iCompetitiveRankingPredicted_Win    = 0x088C; // int32
            static constexpr std::uintptr_t m_iCompetitiveRankingPredicted_Loss   = 0x0890; // int32
            static constexpr std::uintptr_t m_iCompetitiveRankingPredicted_Tie    = 0x0894; // int32
            static constexpr std::uintptr_t m_nEndMatchNextMapVote                = 0x0898; // int32
            static constexpr std::uintptr_t m_unActiveQuestId                     = 0x089C; // uint16
            static constexpr std::uintptr_t m_rtActiveMissionPeriod               = 0x08A0; // uint32
            static constexpr std::uintptr_t m_nQuestProgressReason                = 0x08A4; // QuestProgress::Reason
            static constexpr std::uintptr_t m_unPlayerTvControlFlags              = 0x08A8; // uint32
            static constexpr std::uintptr_t m_iDraftIndex                         = 0x08D8; // int32
            static constexpr std::uintptr_t m_msQueuedModeDisconnectionTimestamp  = 0x08DC; // uint32
            static constexpr std::uintptr_t m_uiAbandonRecordedReason             = 0x08E0; // uint32
            static constexpr std::uintptr_t m_eNetworkDisconnectionReason         = 0x08E4; // uint32
            static constexpr std::uintptr_t m_bCannotBeKicked                     = 0x08E8; // bool
            static constexpr std::uintptr_t m_bEverFullyConnected                 = 0x08E9; // bool
            static constexpr std::uintptr_t m_bAbandonAllowsSurrender             = 0x08EA; // bool
            static constexpr std::uintptr_t m_bAbandonOffersInstantSurrender      = 0x08EB; // bool
            static constexpr std::uintptr_t m_bDisconnection1MinWarningPrinted    = 0x08EC; // bool
            static constexpr std::uintptr_t m_bScoreReported                      = 0x08ED; // bool
            static constexpr std::uintptr_t m_nDisconnectionTick                  = 0x08F0; // int32
            static constexpr std::uintptr_t m_bControllingBot                     = 0x0900; // bool
            static constexpr std::uintptr_t m_bHasControlledBotThisRound          = 0x0901; // bool
            static constexpr std::uintptr_t m_bHasBeenControlledByPlayerThisRound = 0x0902; // bool
            static constexpr std::uintptr_t m_nBotsControlledThisRound            = 0x0904; // int32
            static constexpr std::uintptr_t m_bCanControlObservedBot              = 0x0908; // bool
            static constexpr std::uintptr_t m_hPlayerPawn                         = 0x090C; // CHandle<C_CSPlayerPawn>
            static constexpr std::uintptr_t m_hObserverPawn                       = 0x0910; // CHandle<C_CSObserverPawn>
            static constexpr std::uintptr_t m_bPawnIsAlive                        = 0x0914; // bool
            static constexpr std::uintptr_t m_iPawnHealth                         = 0x0918; // uint32
            static constexpr std::uintptr_t m_iPawnArmor                          = 0x091C; // int32
            static constexpr std::uintptr_t m_bPawnHasDefuser                     = 0x0920; // bool
            static constexpr std::uintptr_t m_bPawnHasHelmet                      = 0x0921; // bool
            static constexpr std::uintptr_t m_nPawnCharacterDefIndex              = 0x0922; // uint16
            static constexpr std::uintptr_t m_iPawnLifetimeStart                  = 0x0924; // int32
            static constexpr std::uintptr_t m_iPawnLifetimeEnd                    = 0x0928; // int32
            static constexpr std::uintptr_t m_iPawnBotDifficulty                  = 0x092C; // int32
            static constexpr std::uintptr_t m_hOriginalControllerOfCurrentPawn    = 0x0930; // CHandle<CCSPlayerController>
            static constexpr std::uintptr_t m_iScore                              = 0x0934; // int32
            static constexpr std::uintptr_t m_recentKillQueue                     = 0x0938; // uint8[8]
            static constexpr std::uintptr_t m_nFirstKill                          = 0x0940; // uint8
            static constexpr std::uintptr_t m_nKillCount                          = 0x0941; // uint8
            static constexpr std::uintptr_t m_bMvpNoMusic                         = 0x0942; // bool
            static constexpr std::uintptr_t m_eMvpReason                          = 0x0944; // int32
            static constexpr std::uintptr_t m_iMusicKitID                         = 0x0948; // int32
            static constexpr std::uintptr_t m_iMusicKitMVPs                       = 0x094C; // int32
            static constexpr std::uintptr_t m_iMVPs                               = 0x0950; // int32
            static constexpr std::uintptr_t m_bIsPlayerNameDirty                  = 0x0954; // bool
            static constexpr std::uintptr_t m_bFireBulletsSeedSynchronized        = 0x0955; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_SoundEventAABBEntity : public C_SoundEventEntity {
        public:
            static constexpr std::uintptr_t m_vMins = 0x06B8; // Vector
            static constexpr std::uintptr_t m_vMaxs = 0x06C4; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_SoundAreaEntitySphere : public C_SoundAreaEntityBase {
        public:
            static constexpr std::uintptr_t m_flRadius = 0x0630; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PointClientUIDialog : public C_BaseClientUIEntity {
        public:
            static constexpr std::uintptr_t m_hActivator    = 0x0EB8; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_bStartEnabled = 0x0EBC; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CEnvSoundscapeProxy : public CEnvSoundscape {
        public:
            static constexpr std::uintptr_t m_MainSoundscapeName = 0x0698; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PlayerSprayDecal : public C_ModelPointEntity {
        public:
            static constexpr std::uintptr_t m_nUniqueID         = 0x0E88; // int32
            static constexpr std::uintptr_t m_unAccountID       = 0x0E8C; // uint32
            static constexpr std::uintptr_t m_unTraceID         = 0x0E90; // uint32
            static constexpr std::uintptr_t m_rtGcTime          = 0x0E94; // uint32
            static constexpr std::uintptr_t m_vecEndPos         = 0x0E98; // Vector
            static constexpr std::uintptr_t m_vecStart          = 0x0EA4; // Vector
            static constexpr std::uintptr_t m_vecLeft           = 0x0EB0; // Vector
            static constexpr std::uintptr_t m_vecNormal         = 0x0EBC; // Vector
            static constexpr std::uintptr_t m_nPlayer           = 0x0EC8; // int32
            static constexpr std::uintptr_t m_nEntity           = 0x0ECC; // int32
            static constexpr std::uintptr_t m_nHitbox           = 0x0ED0; // int32
            static constexpr std::uintptr_t m_flCreationTime    = 0x0ED4; // float32
            static constexpr std::uintptr_t m_nTintID           = 0x0ED8; // int32
            static constexpr std::uintptr_t m_nVersion          = 0x0EDC; // uint8
            static constexpr std::uintptr_t m_ubSignature       = 0x0EDD; // uint8[128]
            static constexpr std::uintptr_t m_SprayRenderHelper = 0x0F68; // CPlayerSprayDecalRenderHelper
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_BaseFlex : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_flexWeight                                 = 0x1170; // C_NetworkUtlVectorBase<float32>
            static constexpr std::uintptr_t m_vLookTargetPosition                        = 0x1188; // VectorWS
            static constexpr std::uintptr_t m_nLastFlexUpdateFrameCount                  = 0x1270; // int32
            static constexpr std::uintptr_t m_CachedViewTarget                           = 0x1274; // Vector
            static constexpr std::uintptr_t m_nNextSceneEventId                          = 0x1280; // SceneEventId_t
            static constexpr std::uintptr_t m_iMouthAttachment                           = 0x1284; // AttachmentHandle_t
            static constexpr std::uintptr_t m_iEyeAttachment                             = 0x1285; // AttachmentHandle_t
            static constexpr std::uintptr_t m_bResetFlexWeightsOnModelChange             = 0x1286; // bool
            static constexpr std::uintptr_t m_nEyeOcclusionRendererBone                  = 0x12A0; // int32
            static constexpr std::uintptr_t m_mEyeOcclusionRendererCameraToBoneTransform = 0x12A4; // matrix3x4_t
            static constexpr std::uintptr_t m_vEyeOcclusionRendererHalfExtent            = 0x12D4; // Vector
            static constexpr std::uintptr_t m_PhonemeClasses                             = 0x12F0; // C_BaseFlex::Emphasized_Phoneme[3]
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
        class C_ClientRagdoll : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_bFadeOut           = 0x1168; // bool
            static constexpr std::uintptr_t m_bImportant         = 0x1169; // bool
            static constexpr std::uintptr_t m_flEffectTime       = 0x116C; // GameTime_t
            static constexpr std::uintptr_t m_gibDespawnTime     = 0x1170; // GameTime_t
            static constexpr std::uintptr_t m_iCurrentFriction   = 0x1174; // int32
            static constexpr std::uintptr_t m_iMinFriction       = 0x1178; // int32
            static constexpr std::uintptr_t m_iMaxFriction       = 0x117C; // int32
            static constexpr std::uintptr_t m_iFrictionAnimState = 0x1180; // int32
            static constexpr std::uintptr_t m_bReleaseRagdoll    = 0x1184; // bool
            static constexpr std::uintptr_t m_iEyeAttachment     = 0x1185; // AttachmentHandle_t
            static constexpr std::uintptr_t m_bFadingOut         = 0x1186; // bool
            static constexpr std::uintptr_t m_flScaleEnd         = 0x1188; // float32[10]
            static constexpr std::uintptr_t m_flScaleTimeStart   = 0x11B0; // GameTime_t[10]
            static constexpr std::uintptr_t m_flScaleTimeEnd     = 0x11D8; // GameTime_t[10]
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSGO_PreviewModel : public C_BaseFlex {
        public:
            static constexpr std::uintptr_t m_defaultAnim          = 0x1350; // CUtlString
            static constexpr std::uintptr_t m_nDefaultAnimLoopMode = 0x1358; // AnimLoopMode_t
            static constexpr std::uintptr_t m_flInitialModelScale  = 0x135C; // float32
            static constexpr std::uintptr_t m_sInitialWeaponState  = 0x1360; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PhysBox : public C_Breakable {
        public:
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
        class C_StattrakModule : public C_CS2WeaponModuleBase {
        public:
            static constexpr std::uintptr_t m_bKnife = 0x1170; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_LightEnvironmentEntity : public C_LightDirectionalEntity {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_BaseTrigger : public C_BaseToggle {
        public:
            static constexpr std::uintptr_t m_OnStartTouch         = 0x0E88; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnStartTouchAll      = 0x0EA0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnEndTouch           = 0x0EB8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnEndTouchAll        = 0x0ED0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnTouching           = 0x0EE8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnTouchingEachEntity = 0x0F00; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnNotTouching        = 0x0F18; // CEntityIOOutput
            static constexpr std::uintptr_t m_hTouchingEntities    = 0x0F30; // CUtlVector<CHandle<C_BaseEntity>>
            static constexpr std::uintptr_t m_iFilterName          = 0x0F48; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hFilter              = 0x0F50; // CHandle<CBaseFilter>
            static constexpr std::uintptr_t m_bDisabled            = 0x0F54; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_BreakableProp : public CBaseProp {
        public:
            static constexpr std::uintptr_t m_CPropDataComponent                    = 0x11A0; // CPropDataComponent
            static constexpr std::uintptr_t m_OnStartDeath                          = 0x11E0; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnBreak                               = 0x11F8; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnHealthChanged                       = 0x1210; // CEntityOutputTemplate<float32,float32>
            static constexpr std::uintptr_t m_OnTakeDamage                          = 0x1230; // CEntityIOOutput
            static constexpr std::uintptr_t m_impactEnergyScale                     = 0x1248; // float32
            static constexpr std::uintptr_t m_iMinHealthDmg                         = 0x124C; // int32
            static constexpr std::uintptr_t m_flPressureDelay                       = 0x1250; // float32
            static constexpr std::uintptr_t m_flDefBurstScale                       = 0x1254; // float32
            static constexpr std::uintptr_t m_vDefBurstOffset                       = 0x1258; // Vector
            static constexpr std::uintptr_t m_hBreaker                              = 0x1264; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_PerformanceMode                       = 0x1268; // PerformanceMode_t
            static constexpr std::uintptr_t m_flPreventDamageBeforeTime             = 0x126C; // GameTime_t
            static constexpr std::uintptr_t m_BreakableContentsType                 = 0x1270; // BreakableContentsType_t
            static constexpr std::uintptr_t m_strBreakableContentsPropGroupOverride = 0x1278; // CUtlString
            static constexpr std::uintptr_t m_strBreakableContentsParticleOverride  = 0x1280; // CUtlString
            static constexpr std::uintptr_t m_bHasBreakPiecesOrCommands             = 0x1288; // bool
            static constexpr std::uintptr_t m_explodeDamage                         = 0x128C; // float32
            static constexpr std::uintptr_t m_explodeRadius                         = 0x1290; // float32
            static constexpr std::uintptr_t m_nExplosionType                        = 0x1294; // BaseExplosionTypes_t
            static constexpr std::uintptr_t m_explosionDelay                        = 0x1298; // float32
            static constexpr std::uintptr_t m_explosionBuildupSound                 = 0x12A0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_explosionCustomEffect                 = 0x12A8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_explosionCustomSound                  = 0x12B0; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_explosionModifier                     = 0x12B8; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_hPhysicsAttacker                      = 0x12C0; // CHandle<C_BasePlayerPawn>
            static constexpr std::uintptr_t m_flLastPhysicsInfluenceTime            = 0x12C4; // GameTime_t
            static constexpr std::uintptr_t m_flDefaultFadeScale                    = 0x12C8; // float32
            static constexpr std::uintptr_t m_hLastAttacker                         = 0x12CC; // CHandle<C_BaseEntity>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_ColorCorrectionVolume : public C_BaseTrigger {
        public:
            static constexpr std::uintptr_t m_LastEnterWeight = 0x0F58; // float32
            static constexpr std::uintptr_t m_LastEnterTime   = 0x0F5C; // GameTime_t
            static constexpr std::uintptr_t m_LastExitWeight  = 0x0F60; // float32
            static constexpr std::uintptr_t m_LastExitTime    = 0x0F64; // GameTime_t
            static constexpr std::uintptr_t m_bEnabled        = 0x0F68; // bool
            static constexpr std::uintptr_t m_MaxWeight       = 0x0F6C; // float32
            static constexpr std::uintptr_t m_FadeDuration    = 0x0F70; // float32
            static constexpr std::uintptr_t m_Weight          = 0x0F74; // float32
            static constexpr std::uintptr_t m_lookupFilename  = 0x0F78; // char[512]
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
        class C_FuncMover : public C_BaseToggle {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PhysMagnet : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_aAttachedObjectsFromServer = 0x1168; // CUtlVector<int32>
            static constexpr std::uintptr_t m_aAttachedObjects           = 0x1180; // CUtlVector<CHandle<C_BaseEntity>>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_WaterBullet : public CBaseAnimGraph {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_BaseDoor : public C_BaseToggle {
        public:
            static constexpr std::uintptr_t m_bIsUsable = 0x0E88; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_Precipitation : public C_BaseTrigger {
        public:
            static constexpr std::uintptr_t m_flDensity                               = 0x0F58; // float32
            static constexpr std::uintptr_t m_flParticleInnerDist                     = 0x0F68; // float32
            static constexpr std::uintptr_t m_pParticleDef                            = 0x0F70; // char*
            static constexpr std::uintptr_t m_tParticlePrecipTraceTimer               = 0x0F98; // TimedEvent[1]
            static constexpr std::uintptr_t m_bActiveParticlePrecipEmitter            = 0x0FA0; // bool[1]
            static constexpr std::uintptr_t m_bParticlePrecipInitialized              = 0x0FA1; // bool
            static constexpr std::uintptr_t m_bHasSimulatedSinceLastSceneObjectUpdate = 0x0FA2; // bool
            static constexpr std::uintptr_t m_nAvailableSheetSequencesMaxIndex        = 0x0FA4; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PhysicsProp : public C_BreakableProp {
        public:
            static constexpr std::uintptr_t m_bAwake = 0x12D0; // bool
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
        class C_TriggerLerpObject : public C_BaseTrigger {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_RagdollProp : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_ragEnabled                     = 0x1170; // C_NetworkUtlVectorBase<bool>
            static constexpr std::uintptr_t m_ragPos                         = 0x1188; // C_NetworkUtlVectorBase<Vector>
            static constexpr std::uintptr_t m_ragAngles                      = 0x11A0; // C_NetworkUtlVectorBase<QAngle>
            static constexpr std::uintptr_t m_flBlendWeight                  = 0x11B8; // float32
            static constexpr std::uintptr_t m_hRagdollSource                 = 0x11BC; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_iEyeAttachment                 = 0x11C0; // AttachmentHandle_t
            static constexpr std::uintptr_t m_flBlendWeightCurrent           = 0x11C4; // float32
            static constexpr std::uintptr_t m_parentPhysicsBoneIndices       = 0x11C8; // CUtlVector<int32>
            static constexpr std::uintptr_t m_worldSpaceBoneComputationOrder = 0x11E0; // CUtlVector<int32>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_LocalTempEntity : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t flags                    = 0x1168; // int32
            static constexpr std::uintptr_t die                      = 0x116C; // GameTime_t
            static constexpr std::uintptr_t m_flFrameMax             = 0x1170; // float32
            static constexpr std::uintptr_t x                        = 0x1174; // float32
            static constexpr std::uintptr_t y                        = 0x1178; // float32
            static constexpr std::uintptr_t fadeSpeed                = 0x117C; // float32
            static constexpr std::uintptr_t bounceFactor             = 0x1180; // float32
            static constexpr std::uintptr_t hitSound                 = 0x1184; // int32
            static constexpr std::uintptr_t priority                 = 0x1188; // int32
            static constexpr std::uintptr_t tentOffset               = 0x118C; // Vector
            static constexpr std::uintptr_t m_vecTempEntAngVelocity  = 0x1198; // QAngle
            static constexpr std::uintptr_t tempent_renderamt        = 0x11A4; // int32
            static constexpr std::uintptr_t m_vecNormal              = 0x11A8; // Vector
            static constexpr std::uintptr_t m_flSpriteScale          = 0x11B4; // float32
            static constexpr std::uintptr_t m_nFlickerFrame          = 0x11B8; // int32
            static constexpr std::uintptr_t m_flFrameRate            = 0x11BC; // float32
            static constexpr std::uintptr_t m_flFrame                = 0x11C0; // float32
            static constexpr std::uintptr_t m_pszImpactEffect        = 0x11C8; // char*
            static constexpr std::uintptr_t m_pszParticleEffect      = 0x11D0; // char*
            static constexpr std::uintptr_t m_bParticleCollision     = 0x11D8; // bool
            static constexpr std::uintptr_t m_iLastCollisionFrame    = 0x11DC; // int32
            static constexpr std::uintptr_t m_vLastCollisionOrigin   = 0x11E0; // Vector
            static constexpr std::uintptr_t m_vecTempEntVelocity     = 0x11EC; // Vector
            static constexpr std::uintptr_t m_vecPrevAbsOrigin       = 0x11F8; // Vector
            static constexpr std::uintptr_t m_vecTempEntAcceleration = 0x1204; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_ShatterGlassShardPhysics : public C_PhysicsProp {
        public:
            static constexpr std::uintptr_t m_ShardDesc = 0x12E8; // shard_model_desc_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_BaseGrenade : public C_BaseFlex {
        public:
            static constexpr std::uintptr_t m_bHasWarnedAI     = 0x1350; // bool
            static constexpr std::uintptr_t m_bIsSmokeGrenade  = 0x1351; // bool
            static constexpr std::uintptr_t m_bIsLive          = 0x1352; // bool
            static constexpr std::uintptr_t m_DmgRadius        = 0x1354; // float32
            static constexpr std::uintptr_t m_flDetonateTime   = 0x1358; // GameTime_t
            static constexpr std::uintptr_t m_flWarnAITime     = 0x135C; // float32
            static constexpr std::uintptr_t m_flDamage         = 0x1360; // float32
            static constexpr std::uintptr_t m_iszBounceSound   = 0x1368; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_ExplosionSound   = 0x1370; // CUtlString
            static constexpr std::uintptr_t m_hThrower         = 0x137C; // CHandle<C_CSPlayerPawn>
            static constexpr std::uintptr_t m_flNextAttack     = 0x1394; // GameTime_t
            static constexpr std::uintptr_t m_hOriginalThrower = 0x1398; // CHandle<C_CSPlayerPawn>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CBombTarget : public C_BaseTrigger {
        public:
            static constexpr std::uintptr_t m_bBombPlantedHere = 0x0F58; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_TriggerBuoyancy : public C_BaseTrigger {
        public:
            static constexpr std::uintptr_t m_BuoyancyHelper = 0x0F58; // CBuoyancyHelper
            static constexpr std::uintptr_t m_flFluidDensity = 0x1070; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_FootstepControl : public C_BaseTrigger {
        public:
            static constexpr std::uintptr_t m_source      = 0x0F58; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_destination = 0x0F60; // CUtlSymbolLarge
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_NametagModule : public C_CS2WeaponModuleBase {
        public:
            static constexpr std::uintptr_t m_strNametagString = 0x1170; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_KeychainModule : public C_CS2WeaponModuleBase {
        public:
            static constexpr std::uintptr_t m_nKeychainDefID = 0x1170; // uint32
            static constexpr std::uintptr_t m_nKeychainSeed  = 0x1174; // uint32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_BaseCSGrenadeProjectile : public C_BaseGrenade {
        public:
            static constexpr std::uintptr_t m_vInitialPosition                     = 0x13A0; // Vector
            static constexpr std::uintptr_t m_vInitialVelocity                     = 0x13AC; // Vector
            static constexpr std::uintptr_t m_nBounces                             = 0x13B8; // int32
            static constexpr std::uintptr_t m_nExplodeEffectIndex                  = 0x13C0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            static constexpr std::uintptr_t m_nExplodeEffectTickBegin              = 0x13C8; // int32
            static constexpr std::uintptr_t m_vecExplodeEffectOrigin               = 0x13CC; // Vector
            static constexpr std::uintptr_t m_flSpawnTime                          = 0x13D8; // GameTime_t
            static constexpr std::uintptr_t vecLastTrailLinePos                    = 0x13DC; // Vector
            static constexpr std::uintptr_t flNextTrailLineTime                    = 0x13E8; // GameTime_t
            static constexpr std::uintptr_t m_bExplodeEffectBegan                  = 0x13EC; // bool
            static constexpr std::uintptr_t m_bCanCreateGrenadeTrail               = 0x13ED; // bool
            static constexpr std::uintptr_t m_nSnapshotTrajectoryEffectIndex       = 0x13F0; // ParticleIndex_t
            static constexpr std::uintptr_t m_hSnapshotTrajectoryParticleSnapshot  = 0x13F8; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            static constexpr std::uintptr_t m_arrTrajectoryTrailPoints             = 0x1400; // CUtlVector<Vector>
            static constexpr std::uintptr_t m_arrTrajectoryTrailPointCreationTimes = 0x1418; // CUtlVector<float32>
            static constexpr std::uintptr_t m_flTrajectoryTrailEffectCreationTime  = 0x1430; // float32
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
        class C_PlantedC4 : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_bBombTicking                = 0x1170; // bool
            static constexpr std::uintptr_t m_nBombSite                   = 0x1174; // int32
            static constexpr std::uintptr_t m_nSourceSoundscapeHash       = 0x1178; // int32
            static constexpr std::uintptr_t m_entitySpottedState          = 0x1180; // EntitySpottedState_t
            static constexpr std::uintptr_t m_flNextGlow                  = 0x1198; // GameTime_t
            static constexpr std::uintptr_t m_flNextBeep                  = 0x119C; // GameTime_t
            static constexpr std::uintptr_t m_flC4Blow                    = 0x11A0; // GameTime_t
            static constexpr std::uintptr_t m_bCannotBeDefused            = 0x11A4; // bool
            static constexpr std::uintptr_t m_bHasExploded                = 0x11A5; // bool
            static constexpr std::uintptr_t m_flTimerLength               = 0x11A8; // float32
            static constexpr std::uintptr_t m_bBeingDefused               = 0x11AC; // bool
            static constexpr std::uintptr_t m_bTriggerWarning             = 0x11B0; // float32
            static constexpr std::uintptr_t m_bExplodeWarning             = 0x11B4; // float32
            static constexpr std::uintptr_t m_bC4Activated                = 0x11B8; // bool
            static constexpr std::uintptr_t m_bTenSecWarning              = 0x11B9; // bool
            static constexpr std::uintptr_t m_flDefuseLength              = 0x11BC; // float32
            static constexpr std::uintptr_t m_flDefuseCountDown           = 0x11C0; // GameTime_t
            static constexpr std::uintptr_t m_bBombDefused                = 0x11C4; // bool
            static constexpr std::uintptr_t m_hBombDefuser                = 0x11C8; // CHandle<C_CSPlayerPawn>
            static constexpr std::uintptr_t m_AttributeManager            = 0x11D0; // C_AttributeContainer
            static constexpr std::uintptr_t m_hDefuserMultimeter          = 0x16A0; // CHandle<C_Multimeter>
            static constexpr std::uintptr_t m_flNextRadarFlashTime        = 0x16A4; // GameTime_t
            static constexpr std::uintptr_t m_bRadarFlash                 = 0x16A8; // bool
            static constexpr std::uintptr_t m_pBombDefuser                = 0x16AC; // CHandle<C_CSPlayerPawn>
            static constexpr std::uintptr_t m_fLastDefuseTime             = 0x16B0; // GameTime_t
            static constexpr std::uintptr_t m_pPredictionOwner            = 0x16B8; // CBasePlayerController*
            static constexpr std::uintptr_t m_vecC4ExplodeSpectatePos     = 0x16C0; // Vector
            static constexpr std::uintptr_t m_vecC4ExplodeSpectateAng     = 0x16CC; // QAngle
            static constexpr std::uintptr_t m_flC4ExplodeSpectateDuration = 0x16D8; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_Multimeter : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_hTargetC4 = 0x1170; // CHandle<C_PlantedC4>
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
        class C_HEGrenadeProjectile : public C_BaseCSGrenadeProjectile {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_RagdollPropAttached : public C_RagdollProp {
        public:
            static constexpr std::uintptr_t m_boneIndexAttached           = 0x11F8; // uint32
            static constexpr std::uintptr_t m_ragdollAttachedObjectIndex  = 0x11FC; // uint32
            static constexpr std::uintptr_t m_attachmentPointBoneSpace    = 0x1200; // Vector
            static constexpr std::uintptr_t m_attachmentPointRagdollSpace = 0x120C; // Vector
            static constexpr std::uintptr_t m_vecOffset                   = 0x1218; // Vector
            static constexpr std::uintptr_t m_parentTime                  = 0x1224; // float32
            static constexpr std::uintptr_t m_bHasParent                  = 0x1228; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_BaseCombatCharacter : public C_BaseFlex {
        public:
            static constexpr std::uintptr_t m_hMyWearables         = 0x1350; // C_NetworkUtlVectorBase<CHandle<C_EconWearable>>
            static constexpr std::uintptr_t m_leftFootAttachment   = 0x1368; // AttachmentHandle_t
            static constexpr std::uintptr_t m_rightFootAttachment  = 0x1369; // AttachmentHandle_t
            static constexpr std::uintptr_t m_nWaterWakeMode       = 0x136C; // C_BaseCombatCharacter::WaterWakeMode_t
            static constexpr std::uintptr_t m_flWaterWorldZ        = 0x1370; // float32
            static constexpr std::uintptr_t m_flWaterNextTraceTime = 0x1374; // float32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_MolotovProjectile : public C_BaseCSGrenadeProjectile {
        public:
            static constexpr std::uintptr_t m_bIsIncGrenade = 0x1438; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_SmokeGrenadeProjectile : public C_BaseCSGrenadeProjectile {
        public:
            static constexpr std::uintptr_t m_nSmokeEffectTickBegin    = 0x1450; // int32
            static constexpr std::uintptr_t m_bDidSmokeEffect          = 0x1454; // bool
            static constexpr std::uintptr_t m_nRandomSeed              = 0x1458; // int32
            static constexpr std::uintptr_t m_vSmokeColor              = 0x145C; // Vector
            static constexpr std::uintptr_t m_vSmokeDetonationPos      = 0x1468; // Vector
            static constexpr std::uintptr_t m_VoxelFrameData           = 0x1478; // C_NetworkUtlVectorBase<uint8>
            static constexpr std::uintptr_t m_nVoxelFrameDataSize      = 0x1490; // int32
            static constexpr std::uintptr_t m_nVoxelUpdate             = 0x1494; // int32
            static constexpr std::uintptr_t m_bSmokeVolumeDataReceived = 0x1498; // bool
            static constexpr std::uintptr_t m_bSmokeEffectSpawned      = 0x1499; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_BulletHitModel : public CBaseAnimGraph {
        public:
            static constexpr std::uintptr_t m_matLocal      = 0x1168; // matrix3x4_t
            static constexpr std::uintptr_t m_iBoneIndex    = 0x1198; // int32
            static constexpr std::uintptr_t m_hPlayerParent = 0x119C; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_bIsHit        = 0x11A0; // bool
            static constexpr std::uintptr_t m_flTimeCreated = 0x11A4; // float32
            static constexpr std::uintptr_t m_vecStartPos   = 0x11A8; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PhysPropClientside : public C_BreakableProp {
        public:
            static constexpr std::uintptr_t m_flTouchDelta       = 0x12D0; // GameTime_t
            static constexpr std::uintptr_t m_fDeathTime         = 0x12D4; // GameTime_t
            static constexpr std::uintptr_t m_vecDamagePosition  = 0x12D8; // Vector
            static constexpr std::uintptr_t m_vecDamageDirection = 0x12E4; // Vector
            static constexpr std::uintptr_t m_nDamageType        = 0x12F0; // DamageTypes_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSGO_TeamSelectTerroristPosition : public C_CSGO_TeamSelectCharacterPosition {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_EconEntity : public C_BaseFlex {
        public:
            static constexpr std::uintptr_t m_flFlexDelayTime            = 0x1360; // float32
            static constexpr std::uintptr_t m_flFlexDelayedWeight        = 0x1368; // float32*
            static constexpr std::uintptr_t m_bAttributesInitialized     = 0x1370; // bool
            static constexpr std::uintptr_t m_AttributeManager           = 0x1378; // C_AttributeContainer
            static constexpr std::uintptr_t m_OriginalOwnerXuidLow       = 0x1848; // uint32
            static constexpr std::uintptr_t m_OriginalOwnerXuidHigh      = 0x184C; // uint32
            static constexpr std::uintptr_t m_nFallbackPaintKit          = 0x1850; // int32
            static constexpr std::uintptr_t m_nFallbackSeed              = 0x1854; // int32
            static constexpr std::uintptr_t m_flFallbackWear             = 0x1858; // float32
            static constexpr std::uintptr_t m_nFallbackStatTrak          = 0x185C; // int32
            static constexpr std::uintptr_t m_bClientside                = 0x1860; // bool
            static constexpr std::uintptr_t m_bParticleSystemsCreated    = 0x1861; // bool
            static constexpr std::uintptr_t m_vecAttachedParticles       = 0x1868; // CUtlVector<int32>
            static constexpr std::uintptr_t m_hViewmodelAttachment       = 0x1880; // CHandle<CBaseAnimGraph>
            static constexpr std::uintptr_t m_iOldTeam                   = 0x1884; // int32
            static constexpr std::uintptr_t m_bAttachmentDirty           = 0x1888; // bool
            static constexpr std::uintptr_t m_nUnloadedModelIndex        = 0x188C; // int32
            static constexpr std::uintptr_t m_iNumOwnerValidationRetries = 0x1890; // int32
            static constexpr std::uintptr_t m_hOldProvidee               = 0x18A0; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_vecAttachedModels          = 0x18A8; // CUtlVector<C_EconEntity::AttachedModelData_t>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_PostProcessingVolume : public C_BaseTrigger {
        public:
            static constexpr std::uintptr_t m_hPostSettings             = 0x0F68; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
            static constexpr std::uintptr_t m_flFadeDuration            = 0x0F70; // float32
            static constexpr std::uintptr_t m_flMinLogExposure          = 0x0F74; // float32
            static constexpr std::uintptr_t m_flMaxLogExposure          = 0x0F78; // float32
            static constexpr std::uintptr_t m_flMinExposure             = 0x0F7C; // float32
            static constexpr std::uintptr_t m_flMaxExposure             = 0x0F80; // float32
            static constexpr std::uintptr_t m_flExposureCompensation    = 0x0F84; // float32
            static constexpr std::uintptr_t m_flExposureFadeSpeedUp     = 0x0F88; // float32
            static constexpr std::uintptr_t m_flExposureFadeSpeedDown   = 0x0F8C; // float32
            static constexpr std::uintptr_t m_flTonemapEVSmoothingRange = 0x0F90; // float32
            static constexpr std::uintptr_t m_bMaster                   = 0x0F94; // bool
            static constexpr std::uintptr_t m_bExposureControl          = 0x0F95; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_BasePlayerWeapon : public C_EconEntity {
        public:
            static constexpr std::uintptr_t m_nNextPrimaryAttackTick         = 0x18C0; // GameTick_t
            static constexpr std::uintptr_t m_flNextPrimaryAttackTickRatio   = 0x18C4; // float32
            static constexpr std::uintptr_t m_nNextSecondaryAttackTick       = 0x18C8; // GameTick_t
            static constexpr std::uintptr_t m_flNextSecondaryAttackTickRatio = 0x18CC; // float32
            static constexpr std::uintptr_t m_iClip1                         = 0x18D0; // int32
            static constexpr std::uintptr_t m_iClip2                         = 0x18D4; // int32
            static constexpr std::uintptr_t m_pReserveAmmo                   = 0x18D8; // int32[2]
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
        class C_Hostage : public C_BaseCombatCharacter {
        public:
            static constexpr std::uintptr_t m_entitySpottedState    = 0x13D8; // EntitySpottedState_t
            static constexpr std::uintptr_t m_leader                = 0x13F0; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_reuseTimer            = 0x13F8; // CountdownTimer
            static constexpr std::uintptr_t m_vel                   = 0x1410; // Vector
            static constexpr std::uintptr_t m_isRescued             = 0x141C; // bool
            static constexpr std::uintptr_t m_jumpedThisFrame       = 0x141D; // bool
            static constexpr std::uintptr_t m_nHostageState         = 0x1420; // int32
            static constexpr std::uintptr_t m_bHandsHaveBeenCut     = 0x1424; // bool
            static constexpr std::uintptr_t m_hHostageGrabber       = 0x1428; // CHandle<C_CSPlayerPawn>
            static constexpr std::uintptr_t m_fLastGrabTime         = 0x142C; // GameTime_t
            static constexpr std::uintptr_t m_vecGrabbedPos         = 0x1430; // Vector
            static constexpr std::uintptr_t m_flRescueStartTime     = 0x143C; // GameTime_t
            static constexpr std::uintptr_t m_flGrabSuccessTime     = 0x1440; // GameTime_t
            static constexpr std::uintptr_t m_flDropStartTime       = 0x1444; // GameTime_t
            static constexpr std::uintptr_t m_flDeadOrRescuedTime   = 0x1448; // GameTime_t
            static constexpr std::uintptr_t m_blinkTimer            = 0x1450; // CountdownTimer
            static constexpr std::uintptr_t m_lookAt                = 0x1468; // Vector
            static constexpr std::uintptr_t m_lookAroundTimer       = 0x1478; // CountdownTimer
            static constexpr std::uintptr_t m_isInit                = 0x1490; // bool
            static constexpr std::uintptr_t m_eyeAttachment         = 0x1491; // AttachmentHandle_t
            static constexpr std::uintptr_t m_chestAttachment       = 0x1492; // AttachmentHandle_t
            static constexpr std::uintptr_t m_pPredictionOwner      = 0x1498; // CBasePlayerController*
            static constexpr std::uintptr_t m_fNewestAlphaThinkTime = 0x14A0; // GameTime_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_DynamicProp : public C_BreakableProp {
        public:
            static constexpr std::uintptr_t m_bUseHitboxesForRenderBox = 0x12D0; // bool
            static constexpr std::uintptr_t m_bUseAnimGraph            = 0x12D1; // bool
            static constexpr std::uintptr_t m_pOutputAnimBegun         = 0x12D8; // CEntityIOOutput
            static constexpr std::uintptr_t m_pOutputAnimOver          = 0x12F0; // CEntityIOOutput
            static constexpr std::uintptr_t m_pOutputAnimLoopCycleOver = 0x1308; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnAnimReachedStart       = 0x1320; // CEntityIOOutput
            static constexpr std::uintptr_t m_OnAnimReachedEnd         = 0x1338; // CEntityIOOutput
            static constexpr std::uintptr_t m_iszIdleAnim              = 0x1350; // CUtlSymbolLarge
            static constexpr std::uintptr_t m_nIdleAnimLoopMode        = 0x1358; // AnimLoopMode_t
            static constexpr std::uintptr_t m_bRandomizeCycle          = 0x135C; // bool
            static constexpr std::uintptr_t m_bStartDisabled           = 0x135D; // bool
            static constexpr std::uintptr_t m_bFiredStartEndOutput     = 0x135E; // bool
            static constexpr std::uintptr_t m_bForceNpcExclude         = 0x135F; // bool
            static constexpr std::uintptr_t m_bCreateNonSolid          = 0x1360; // bool
            static constexpr std::uintptr_t m_bIsOverrideProp          = 0x1361; // bool
            static constexpr std::uintptr_t m_iInitialGlowState        = 0x1364; // int32
            static constexpr std::uintptr_t m_nGlowRange               = 0x1368; // int32
            static constexpr std::uintptr_t m_nGlowRangeMin            = 0x136C; // int32
            static constexpr std::uintptr_t m_glowColor                = 0x1370; // Color
            static constexpr std::uintptr_t m_nGlowTeam                = 0x1374; // int32
            static constexpr std::uintptr_t m_iCachedFrameCount        = 0x1378; // int32
            static constexpr std::uintptr_t m_vecCachedRenderMins      = 0x137C; // Vector
            static constexpr std::uintptr_t m_vecCachedRenderMaxs      = 0x1388; // Vector
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_TriggerPhysics : public C_BaseTrigger {
        public:
            static constexpr std::uintptr_t m_gravityScale                 = 0x0F58; // float32
            static constexpr std::uintptr_t m_linearLimit                  = 0x0F5C; // float32
            static constexpr std::uintptr_t m_linearDamping                = 0x0F60; // float32
            static constexpr std::uintptr_t m_angularLimit                 = 0x0F64; // float32
            static constexpr std::uintptr_t m_angularDamping               = 0x0F68; // float32
            static constexpr std::uintptr_t m_linearForce                  = 0x0F6C; // float32
            static constexpr std::uintptr_t m_flFrequency                  = 0x0F70; // float32
            static constexpr std::uintptr_t m_flDampingRatio               = 0x0F74; // float32
            static constexpr std::uintptr_t m_vecLinearForcePointAt        = 0x0F78; // Vector
            static constexpr std::uintptr_t m_bCollapseToForcePoint        = 0x0F84; // bool
            static constexpr std::uintptr_t m_vecLinearForcePointAtWorld   = 0x0F88; // Vector
            static constexpr std::uintptr_t m_vecLinearForceDirection      = 0x0F94; // Vector
            static constexpr std::uintptr_t m_bConvertToDebrisWhenPossible = 0x0FA0; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_BasePlayerPawn : public C_BaseCombatCharacter {
        public:
            static constexpr std::uintptr_t m_pWeaponServices                    = 0x13D8; // CPlayer_WeaponServices*
            static constexpr std::uintptr_t m_pItemServices                      = 0x13E0; // CPlayer_ItemServices*
            static constexpr std::uintptr_t m_pAutoaimServices                   = 0x13E8; // CPlayer_AutoaimServices*
            static constexpr std::uintptr_t m_pObserverServices                  = 0x13F0; // CPlayer_ObserverServices*
            static constexpr std::uintptr_t m_pWaterServices                     = 0x13F8; // CPlayer_WaterServices*
            static constexpr std::uintptr_t m_pUseServices                       = 0x1400; // CPlayer_UseServices*
            static constexpr std::uintptr_t m_pFlashlightServices                = 0x1408; // CPlayer_FlashlightServices*
            static constexpr std::uintptr_t m_pCameraServices                    = 0x1410; // CPlayer_CameraServices*
            static constexpr std::uintptr_t m_pMovementServices                  = 0x1418; // CPlayer_MovementServices*
            static constexpr std::uintptr_t m_ServerViewAngleChanges             = 0x1428; // C_UtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
            static constexpr std::uintptr_t v_angle                              = 0x1490; // QAngle
            static constexpr std::uintptr_t v_anglePrevious                      = 0x149C; // QAngle
            static constexpr std::uintptr_t m_iHideHUD                           = 0x14A8; // uint32
            static constexpr std::uintptr_t m_skybox3d                           = 0x14B0; // sky3dparams_t
            static constexpr std::uintptr_t m_flDeathTime                        = 0x1540; // GameTime_t
            static constexpr std::uintptr_t m_vecPredictionError                 = 0x1544; // Vector
            static constexpr std::uintptr_t m_flPredictionErrorTime              = 0x1550; // GameTime_t
            static constexpr std::uintptr_t m_vecLastCameraSetupLocalOrigin      = 0x1570; // Vector
            static constexpr std::uintptr_t m_flLastCameraSetupTime              = 0x157C; // GameTime_t
            static constexpr std::uintptr_t m_flFOVSensitivityAdjust             = 0x1580; // float32
            static constexpr std::uintptr_t m_flMouseSensitivity                 = 0x1584; // float32
            static constexpr std::uintptr_t m_vOldOrigin                         = 0x1588; // Vector
            static constexpr std::uintptr_t m_flOldSimulationTime                = 0x1594; // float32
            static constexpr std::uintptr_t m_nLastExecutedCommandNumber         = 0x1598; // int32
            static constexpr std::uintptr_t m_nLastExecutedCommandTick           = 0x159C; // int32
            static constexpr std::uintptr_t m_hController                        = 0x15A0; // CHandle<CBasePlayerController>
            static constexpr std::uintptr_t m_hDefaultController                 = 0x15A4; // CHandle<CBasePlayerController>
            static constexpr std::uintptr_t m_bIsSwappingToPredictableController = 0x15A8; // bool
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
        class C_PhysicsPropMultiplayer : public C_PhysicsProp {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CTriggerFan : public C_BaseTrigger {
        public:
            static constexpr std::uintptr_t m_vFanOriginOffset        = 0x0F58; // Vector
            static constexpr std::uintptr_t m_vDirection              = 0x0F64; // Vector
            static constexpr std::uintptr_t m_bPushTowardsInfoTarget  = 0x0F70; // bool
            static constexpr std::uintptr_t m_bPushAwayFromInfoTarget = 0x0F71; // bool
            static constexpr std::uintptr_t m_qNoiseDelta             = 0x0F80; // Quaternion
            static constexpr std::uintptr_t m_hInfoFan                = 0x0F90; // CHandle<CInfoFan>
            static constexpr std::uintptr_t m_flForce                 = 0x0F94; // float32
            static constexpr std::uintptr_t m_bFalloff                = 0x0F98; // bool
            static constexpr std::uintptr_t m_RampTimer               = 0x0FA0; // CountdownTimer
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_NetTestBaseCombatCharacter : public C_BaseCombatCharacter {
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
        class C_Item : public C_EconEntity {
        public:
            static constexpr std::uintptr_t m_pReticleHintTextName = 0x18C0; // char[256]
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSPlayerPawnBase : public C_BasePlayerPawn {
        public:
            static constexpr std::uintptr_t m_pPingServices                     = 0x15C0; // CCSPlayer_PingServices*
            static constexpr std::uintptr_t m_previousPlayerState               = 0x15C8; // CSPlayerState
            static constexpr std::uintptr_t m_iPlayerState                      = 0x15CC; // CSPlayerState
            static constexpr std::uintptr_t m_bHasMovedSinceSpawn               = 0x15D0; // bool
            static constexpr std::uintptr_t m_flLastSpawnTimeIndex              = 0x15D4; // GameTime_t
            static constexpr std::uintptr_t m_iProgressBarDuration              = 0x15D8; // int32
            static constexpr std::uintptr_t m_flProgressBarStartTime            = 0x15DC; // float32
            static constexpr std::uintptr_t m_flClientDeathTime                 = 0x15E0; // GameTime_t
            static constexpr std::uintptr_t m_flFlashBangTime                   = 0x15E4; // float32
            static constexpr std::uintptr_t m_flFlashScreenshotAlpha            = 0x15E8; // float32
            static constexpr std::uintptr_t m_flFlashOverlayAlpha               = 0x15EC; // float32
            static constexpr std::uintptr_t m_bFlashBuildUp                     = 0x15F0; // bool
            static constexpr std::uintptr_t m_bFlashDspHasBeenCleared           = 0x15F1; // bool
            static constexpr std::uintptr_t m_bFlashScreenshotHasBeenGrabbed    = 0x15F2; // bool
            static constexpr std::uintptr_t m_flFlashMaxAlpha                   = 0x15F4; // float32
            static constexpr std::uintptr_t m_flFlashDuration                   = 0x15F8; // float32
            static constexpr std::uintptr_t m_flClientHealthFadeChangeTimestamp = 0x15FC; // GameTime_t
            static constexpr std::uintptr_t m_nClientHealthFadeParityValue      = 0x1600; // int32
            static constexpr std::uintptr_t m_fNextThinkPushAway                = 0x1604; // float32
            static constexpr std::uintptr_t m_flCurrentMusicStartTime           = 0x160C; // float32
            static constexpr std::uintptr_t m_flMusicRoundStartTime             = 0x1610; // float32
            static constexpr std::uintptr_t m_bDeferStartMusicOnWarmup          = 0x1614; // bool
            static constexpr std::uintptr_t m_flLastSmokeOverlayAlpha           = 0x1618; // float32
            static constexpr std::uintptr_t m_flLastSmokeAge                    = 0x161C; // float32
            static constexpr std::uintptr_t m_vLastSmokeOverlayColor            = 0x1620; // Vector
            static constexpr std::uintptr_t m_hOriginalController               = 0x1648; // CHandle<CCSPlayerController>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSObserverPawn : public C_CSPlayerPawnBase {
        public:
            static constexpr std::uintptr_t m_hDetectParentChange = 0x1650; // CEntityHandle
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_DynamicPropAlias_dynamic_prop : public C_DynamicProp {
        public:
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
        class C_DynamicPropAlias_prop_dynamic_override : public C_DynamicProp {
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
        class C_DecoyProjectile : public C_BaseCSGrenadeProjectile {
        public:
            static constexpr std::uintptr_t m_nDecoyShotTick                = 0x1438; // int32
            static constexpr std::uintptr_t m_nClientLastKnownDecoyShotTick = 0x143C; // int32
            static constexpr std::uintptr_t m_flTimeParticleEffectSpawn     = 0x1460; // GameTime_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_BasePropDoor : public C_DynamicProp {
        public:
            static constexpr std::uintptr_t m_eDoorState                = 0x13B0; // DoorState_t
            static constexpr std::uintptr_t m_modelChanged              = 0x13B4; // bool
            static constexpr std::uintptr_t m_bLocked                   = 0x13B5; // bool
            static constexpr std::uintptr_t m_bNoNPCs                   = 0x13B6; // bool
            static constexpr std::uintptr_t m_closedPosition            = 0x13B8; // Vector
            static constexpr std::uintptr_t m_closedAngles              = 0x13C4; // QAngle
            static constexpr std::uintptr_t m_hMaster                   = 0x13D0; // CHandle<C_BasePropDoor>
            static constexpr std::uintptr_t m_vWhereToSetLightingOrigin = 0x13D4; // Vector
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
        class C_CS2HudModelWeapon : public C_CS2HudModelBase {
        public:
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
        class C_Chicken : public C_DynamicProp {
        public:
            static constexpr std::uintptr_t m_hHolidayHatAddon       = 0x13A8; // CHandle<CBaseAnimGraph>
            static constexpr std::uintptr_t m_jumpedThisFrame        = 0x13AC; // bool
            static constexpr std::uintptr_t m_leader                 = 0x13B0; // CHandle<C_CSPlayerPawn>
            static constexpr std::uintptr_t m_AttributeManager       = 0x13B8; // C_AttributeContainer
            static constexpr std::uintptr_t m_bAttributesInitialized = 0x1888; // bool
            static constexpr std::uintptr_t m_hWaterWakeParticles    = 0x188C; // ParticleIndex_t
            static constexpr std::uintptr_t m_bIsPreviewModel        = 0x1890; // bool
        };

        // Has VTable
        // Local Type Scope
        class C_CSWeaponBase : public C_BasePlayerWeapon {
        public:
            static constexpr std::uintptr_t m_iWeaponGameplayAnimState             = 0x1948; // WeaponGameplayAnimState
            static constexpr std::uintptr_t m_flWeaponGameplayAnimStateTimestamp   = 0x194C; // GameTime_t
            static constexpr std::uintptr_t m_flInspectCancelCompleteTime          = 0x1950; // GameTime_t
            static constexpr std::uintptr_t m_bInspectPending                      = 0x1954; // bool
            static constexpr std::uintptr_t m_bInspectShouldLoop                   = 0x1955; // bool
            static constexpr std::uintptr_t m_flCrosshairDistance                  = 0x1980; // float32
            static constexpr std::uintptr_t m_iAmmoLastCheck                       = 0x1984; // int32
            static constexpr std::uintptr_t m_nLastEmptySoundCmdNum                = 0x1988; // int32
            static constexpr std::uintptr_t m_bFireOnEmpty                         = 0x198C; // bool
            static constexpr std::uintptr_t m_OnPlayerPickup                       = 0x1990; // CEntityIOOutput
            static constexpr std::uintptr_t m_weaponMode                           = 0x19A8; // CSWeaponMode
            static constexpr std::uintptr_t m_flTurningInaccuracyDelta             = 0x19AC; // float32
            static constexpr std::uintptr_t m_vecTurningInaccuracyEyeDirLast       = 0x19B0; // Vector
            static constexpr std::uintptr_t m_flTurningInaccuracy                  = 0x19BC; // float32
            static constexpr std::uintptr_t m_fAccuracyPenalty                     = 0x19C0; // float32
            static constexpr std::uintptr_t m_flLastAccuracyUpdateTime             = 0x19C4; // GameTime_t
            static constexpr std::uintptr_t m_fAccuracySmoothedForZoom             = 0x19C8; // float32
            static constexpr std::uintptr_t m_iRecoilIndex                         = 0x19CC; // int32
            static constexpr std::uintptr_t m_flRecoilIndex                        = 0x19D0; // float32
            static constexpr std::uintptr_t m_bBurstMode                           = 0x19D4; // bool
            static constexpr std::uintptr_t m_flLastBurstModeChangeTime            = 0x19D8; // GameTime_t
            static constexpr std::uintptr_t m_nPostponeFireReadyTicks              = 0x19DC; // GameTick_t
            static constexpr std::uintptr_t m_flPostponeFireReadyFrac              = 0x19E0; // float32
            static constexpr std::uintptr_t m_bInReload                            = 0x19E4; // bool
            static constexpr std::uintptr_t m_flDroppedAtTime                      = 0x19E8; // GameTime_t
            static constexpr std::uintptr_t m_bIsHauledBack                        = 0x19EC; // bool
            static constexpr std::uintptr_t m_bSilencerOn                          = 0x19ED; // bool
            static constexpr std::uintptr_t m_flTimeSilencerSwitchComplete         = 0x19F0; // GameTime_t
            static constexpr std::uintptr_t m_flWeaponActionPlaybackRate           = 0x19F4; // float32
            static constexpr std::uintptr_t m_iOriginalTeamNumber                  = 0x19F8; // int32
            static constexpr std::uintptr_t m_iMostRecentTeamNumber                = 0x19FC; // int32
            static constexpr std::uintptr_t m_bDroppedNearBuyZone                  = 0x1A00; // bool
            static constexpr std::uintptr_t m_flNextAttackRenderTimeOffset         = 0x1A04; // float32
            static constexpr std::uintptr_t m_bClearWeaponIdentifyingUGC           = 0x1AA0; // bool
            static constexpr std::uintptr_t m_bVisualsDataSet                      = 0x1AA1; // bool
            static constexpr std::uintptr_t m_bUIWeapon                            = 0x1AA2; // bool
            static constexpr std::uintptr_t m_nCustomEconReloadEventId             = 0x1AA4; // int32
            static constexpr std::uintptr_t m_nextPrevOwnerUseTime                 = 0x1AB0; // GameTime_t
            static constexpr std::uintptr_t m_hPrevOwner                           = 0x1AB4; // CHandle<C_CSPlayerPawn>
            static constexpr std::uintptr_t m_nDropTick                            = 0x1AB8; // GameTick_t
            static constexpr std::uintptr_t m_bWasActiveWeaponWhenDropped          = 0x1ABC; // bool
            static constexpr std::uintptr_t m_donated                              = 0x1ADC; // bool
            static constexpr std::uintptr_t m_fLastShotTime                        = 0x1AE0; // GameTime_t
            static constexpr std::uintptr_t m_bWasOwnedByCT                        = 0x1AE4; // bool
            static constexpr std::uintptr_t m_bWasOwnedByTerrorist                 = 0x1AE5; // bool
            static constexpr std::uintptr_t m_flNextClientFireBulletTime           = 0x1AE8; // float32
            static constexpr std::uintptr_t m_flNextClientFireBulletTime_Repredict = 0x1AEC; // float32
            static constexpr std::uintptr_t m_IronSightController                  = 0x1C50; // C_IronSightController
            static constexpr std::uintptr_t m_iIronSightMode                       = 0x1D00; // int32
            static constexpr std::uintptr_t m_flLastLOSTraceFailureTime            = 0x1D18; // GameTime_t
            static constexpr std::uintptr_t m_flWatTickOffset                      = 0x1D78; // float32
            static constexpr std::uintptr_t m_flLastShakeTime                      = 0x1D8C; // GameTime_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSWeaponBaseGun : public C_CSWeaponBase {
        public:
            static constexpr std::uintptr_t m_zoomLevel            = 0x1F40; // int32
            static constexpr std::uintptr_t m_iBurstShotsRemaining = 0x1F44; // int32
            static constexpr std::uintptr_t m_iSilencerBodygroup   = 0x1F48; // int32
            static constexpr std::uintptr_t m_silencedModelIndex   = 0x1F58; // int32
            static constexpr std::uintptr_t m_inPrecache           = 0x1F5C; // bool
            static constexpr std::uintptr_t m_bNeedsBoltAction     = 0x1F5D; // bool
            static constexpr std::uintptr_t m_nRevolverCylinderIdx = 0x1F60; // int32
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
        class C_WeaponTaser : public C_CSWeaponBaseGun {
        public:
            static constexpr std::uintptr_t m_fFireTime       = 0x1F70; // GameTime_t
            static constexpr std::uintptr_t m_nLastAttackTick = 0x1F74; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_WeaponP90 : public C_CSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Local Type Scope
        class C_WeaponBaseItem : public C_CSWeaponBase {
        public:
            static constexpr std::uintptr_t m_bSequenceInProgress = 0x1F40; // bool
            static constexpr std::uintptr_t m_bRedraw             = 0x1F41; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_ItemDogtags : public C_Item {
        public:
            static constexpr std::uintptr_t m_OwningPlayer  = 0x19C0; // CHandle<C_CSPlayerPawn>
            static constexpr std::uintptr_t m_KillingPlayer = 0x19C4; // CHandle<C_CSPlayerPawn>
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
        class C_WeaponBizon : public C_CSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_WeaponGalilAR : public C_CSWeaponBaseGun {
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
        class C_WeaponM4A1 : public C_CSWeaponBaseGun {
        public:
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
        class C_WeaponMag7 : public C_CSWeaponBaseGun {
        public:
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
        class C_WeaponMP9 : public C_CSWeaponBaseGun {
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
        class C_WeaponTec9 : public C_CSWeaponBaseGun {
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
        class C_WeaponM249 : public C_CSWeaponBaseGun {
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
        class C_WeaponXM1014 : public C_CSWeaponBaseShotgun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_EconWearable : public C_EconEntity {
        public:
            static constexpr std::uintptr_t m_nForceSkin   = 0x18C0; // int32
            static constexpr std::uintptr_t m_bAlwaysAllow = 0x18C4; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_C4 : public C_CSWeaponBase {
        public:
            static constexpr std::uintptr_t m_activeLightParticleIndex = 0x1F40; // ParticleIndex_t
            static constexpr std::uintptr_t m_eActiveLightEffect       = 0x1F44; // C4LightEffect_t
            static constexpr std::uintptr_t m_bStartedArming           = 0x1F48; // bool
            static constexpr std::uintptr_t m_fArmedTime               = 0x1F4C; // GameTime_t
            static constexpr std::uintptr_t m_bBombPlacedAnimation     = 0x1F50; // bool
            static constexpr std::uintptr_t m_bIsPlantingViaUse        = 0x1F51; // bool
            static constexpr std::uintptr_t m_entitySpottedState       = 0x1F58; // EntitySpottedState_t
            static constexpr std::uintptr_t m_nSpotRules               = 0x1F70; // int32
            static constexpr std::uintptr_t m_bPlayedArmingBeeps       = 0x1F74; // bool[7]
            static constexpr std::uintptr_t m_bBombPlanted             = 0x1F7B; // bool
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
        class C_WeaponNOVA : public C_CSWeaponBaseShotgun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_WeaponCZ75a : public C_CSWeaponBaseGun {
        public:
            static constexpr std::uintptr_t m_bMagazineRemoved = 0x1F70; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CFuncRetakeBarrier : public C_DynamicProp {
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
        class C_PropDoorRotating : public C_BasePropDoor {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_Item_Healthshot : public C_WeaponBaseItem {
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
        class C_WeaponMP7 : public C_CSWeaponBaseGun {
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
        class C_WeaponP250 : public C_CSWeaponBaseGun {
        public:
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
        class C_WeaponSawedoff : public C_CSWeaponBaseShotgun {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSPlayerPawn : public C_CSPlayerPawnBase {
        public:
            static constexpr std::uintptr_t m_pBulletServices                   = 0x1660; // CCSPlayer_BulletServices*
            static constexpr std::uintptr_t m_pHostageServices                  = 0x1668; // CCSPlayer_HostageServices*
            static constexpr std::uintptr_t m_pBuyServices                      = 0x1670; // CCSPlayer_BuyServices*
            static constexpr std::uintptr_t m_pGlowServices                     = 0x1678; // CCSPlayer_GlowServices*
            static constexpr std::uintptr_t m_pActionTrackingServices           = 0x1680; // CCSPlayer_ActionTrackingServices*
            static constexpr std::uintptr_t m_pDamageReactServices              = 0x1688; // CCSPlayer_DamageReactServices*
            static constexpr std::uintptr_t m_flHealthShotBoostExpirationTime   = 0x1690; // GameTime_t
            static constexpr std::uintptr_t m_flLastFiredWeaponTime             = 0x1694; // GameTime_t
            static constexpr std::uintptr_t m_bHasFemaleVoice                   = 0x1698; // bool
            static constexpr std::uintptr_t m_flLandingTimeSeconds              = 0x169C; // float32
            static constexpr std::uintptr_t m_flOldFallVelocity                 = 0x16A0; // float32
            static constexpr std::uintptr_t m_szLastPlaceName                   = 0x16A4; // char[18]
            static constexpr std::uintptr_t m_bPrevDefuser                      = 0x16B6; // bool
            static constexpr std::uintptr_t m_bPrevHelmet                       = 0x16B7; // bool
            static constexpr std::uintptr_t m_nPrevArmorVal                     = 0x16B8; // int32
            static constexpr std::uintptr_t m_nPrevGrenadeAmmoCount             = 0x16BC; // int32
            static constexpr std::uintptr_t m_unPreviousWeaponHash              = 0x16C0; // uint32
            static constexpr std::uintptr_t m_unWeaponHash                      = 0x16C4; // uint32
            static constexpr std::uintptr_t m_bInBuyZone                        = 0x16C8; // bool
            static constexpr std::uintptr_t m_bPreviouslyInBuyZone              = 0x16C9; // bool
            static constexpr std::uintptr_t m_aimPunchAngle                     = 0x16CC; // QAngle
            static constexpr std::uintptr_t m_aimPunchAngleVel                  = 0x16D8; // QAngle
            static constexpr std::uintptr_t m_aimPunchTickBase                  = 0x16E4; // GameTick_t
            static constexpr std::uintptr_t m_aimPunchTickFraction              = 0x16E8; // float32
            static constexpr std::uintptr_t m_bInLanding                        = 0x1710; // bool
            static constexpr std::uintptr_t m_flLandingStartTime                = 0x1714; // float32
            static constexpr std::uintptr_t m_bInHostageRescueZone              = 0x1718; // bool
            static constexpr std::uintptr_t m_bInBombZone                       = 0x1719; // bool
            static constexpr std::uintptr_t m_bIsBuyMenuOpen                    = 0x171A; // bool
            static constexpr std::uintptr_t m_flTimeOfLastInjury                = 0x171C; // GameTime_t
            static constexpr std::uintptr_t m_flNextSprayDecalTime              = 0x1720; // GameTime_t
            static constexpr std::uintptr_t m_iRetakesOffering                  = 0x1878; // int32
            static constexpr std::uintptr_t m_iRetakesOfferingCard              = 0x187C; // int32
            static constexpr std::uintptr_t m_bRetakesHasDefuseKit              = 0x1880; // bool
            static constexpr std::uintptr_t m_bRetakesMVPLastRound              = 0x1881; // bool
            static constexpr std::uintptr_t m_iRetakesMVPBoostItem              = 0x1884; // int32
            static constexpr std::uintptr_t m_RetakesMVPBoostExtraUtility       = 0x1888; // loadout_slot_t
            static constexpr std::uintptr_t m_bNeedToReApplyGloves              = 0x188D; // bool
            static constexpr std::uintptr_t m_EconGloves                        = 0x1890; // C_EconItemView
            static constexpr std::uintptr_t m_nEconGlovesChanged                = 0x1D00; // uint8
            static constexpr std::uintptr_t m_bMustSyncRagdollState             = 0x1D01; // bool
            static constexpr std::uintptr_t m_nRagdollDamageBone                = 0x1D04; // int32
            static constexpr std::uintptr_t m_vRagdollDamageForce               = 0x1D08; // Vector
            static constexpr std::uintptr_t m_vRagdollDamagePosition            = 0x1D14; // Vector
            static constexpr std::uintptr_t m_szRagdollDamageWeaponName         = 0x1D20; // char[64]
            static constexpr std::uintptr_t m_bRagdollDamageHeadshot            = 0x1D60; // bool
            static constexpr std::uintptr_t m_vRagdollServerOrigin              = 0x1D64; // Vector
            static constexpr std::uintptr_t m_lastLandTime                      = 0x23E0; // GameTime_t
            static constexpr std::uintptr_t m_bOnGroundLastTick                 = 0x23E4; // bool
            static constexpr std::uintptr_t m_hHudModelArms                     = 0x2400; // CHandle<C_CS2HudModelArms>
            static constexpr std::uintptr_t m_qDeathEyeAngles                   = 0x2404; // QAngle
            static constexpr std::uintptr_t m_bSkipOneHeadConstraintUpdate      = 0x2410; // bool
            static constexpr std::uintptr_t m_bLeftHanded                       = 0x2411; // bool
            static constexpr std::uintptr_t m_fSwitchedHandednessTime           = 0x2414; // GameTime_t
            static constexpr std::uintptr_t m_flViewmodelOffsetX                = 0x2418; // float32
            static constexpr std::uintptr_t m_flViewmodelOffsetY                = 0x241C; // float32
            static constexpr std::uintptr_t m_flViewmodelOffsetZ                = 0x2420; // float32
            static constexpr std::uintptr_t m_flViewmodelFOV                    = 0x2424; // float32
            static constexpr std::uintptr_t m_vecPlayerPatchEconIndices         = 0x2428; // uint32[5]
            static constexpr std::uintptr_t m_GunGameImmunityColor              = 0x2460; // Color
            static constexpr std::uintptr_t m_vecBulletHitModels                = 0x24B0; // CUtlVector<C_BulletHitModel*>
            static constexpr std::uintptr_t m_bIsWalking                        = 0x24C8; // bool
            static constexpr std::uintptr_t m_thirdPersonHeading                = 0x24D0; // QAngle
            static constexpr std::uintptr_t m_flSlopeDropOffset                 = 0x2560; // float32
            static constexpr std::uintptr_t m_flSlopeDropHeight                 = 0x25D8; // float32
            static constexpr std::uintptr_t m_vHeadConstraintOffset             = 0x2650; // Vector
            static constexpr std::uintptr_t m_entitySpottedState                = 0x26E0; // EntitySpottedState_t
            static constexpr std::uintptr_t m_bIsScoped                         = 0x26F8; // bool
            static constexpr std::uintptr_t m_bResumeZoom                       = 0x26F9; // bool
            static constexpr std::uintptr_t m_bIsDefusing                       = 0x26FA; // bool
            static constexpr std::uintptr_t m_bIsGrabbingHostage                = 0x26FB; // bool
            static constexpr std::uintptr_t m_iBlockingUseActionInProgress      = 0x26FC; // CSPlayerBlockingUseAction_t
            static constexpr std::uintptr_t m_flEmitSoundTime                   = 0x2700; // GameTime_t
            static constexpr std::uintptr_t m_bInNoDefuseArea                   = 0x2704; // bool
            static constexpr std::uintptr_t m_nWhichBombZone                    = 0x2708; // int32
            static constexpr std::uintptr_t m_iShotsFired                       = 0x270C; // int32
            static constexpr std::uintptr_t m_flFlinchStack                     = 0x2710; // float32
            static constexpr std::uintptr_t m_flVelocityModifier                = 0x2714; // float32
            static constexpr std::uintptr_t m_flHitHeading                      = 0x2718; // float32
            static constexpr std::uintptr_t m_nHitBodyPart                      = 0x271C; // int32
            static constexpr std::uintptr_t m_bWaitForNoAttack                  = 0x2720; // bool
            static constexpr std::uintptr_t m_ignoreLadderJumpTime              = 0x2724; // float32
            static constexpr std::uintptr_t m_bKilledByHeadshot                 = 0x2729; // bool
            static constexpr std::uintptr_t m_ArmorValue                        = 0x272C; // int32
            static constexpr std::uintptr_t m_unCurrentEquipmentValue           = 0x2730; // uint16
            static constexpr std::uintptr_t m_unRoundStartEquipmentValue        = 0x2732; // uint16
            static constexpr std::uintptr_t m_unFreezetimeEndEquipmentValue     = 0x2734; // uint16
            static constexpr std::uintptr_t m_nLastKillerIndex                  = 0x2738; // CEntityIndex
            static constexpr std::uintptr_t m_bOldIsScoped                      = 0x273C; // bool
            static constexpr std::uintptr_t m_bHasDeathInfo                     = 0x273D; // bool
            static constexpr std::uintptr_t m_flDeathInfoTime                   = 0x2740; // float32
            static constexpr std::uintptr_t m_vecDeathInfoOrigin                = 0x2744; // Vector
            static constexpr std::uintptr_t m_grenadeParameterStashTime         = 0x2754; // GameTime_t
            static constexpr std::uintptr_t m_bGrenadeParametersStashed         = 0x2758; // bool
            static constexpr std::uintptr_t m_angStashedShootAngles             = 0x275C; // QAngle
            static constexpr std::uintptr_t m_vecStashedGrenadeThrowPosition    = 0x2768; // Vector
            static constexpr std::uintptr_t m_vecStashedVelocity                = 0x2774; // Vector
            static constexpr std::uintptr_t m_angShootAngleHistory              = 0x2780; // QAngle[2]
            static constexpr std::uintptr_t m_vecThrowPositionHistory           = 0x2798; // Vector[2]
            static constexpr std::uintptr_t m_vecVelocityHistory                = 0x27B0; // Vector[2]
            static constexpr std::uintptr_t m_PredictedDamageTags               = 0x27C8; // C_UtlVectorEmbeddedNetworkVar<PredictedDamageTag_t>
            static constexpr std::uintptr_t m_nPrevHighestReceivedDamageTagTick = 0x2830; // GameTick_t
            static constexpr std::uintptr_t m_nHighestAppliedDamageTagTick      = 0x2834; // int32
            static constexpr std::uintptr_t m_bShouldAutobuyDMWeapons           = 0x3D6C; // bool
            static constexpr std::uintptr_t m_fImmuneToGunGameDamageTime        = 0x3D70; // GameTime_t
            static constexpr std::uintptr_t m_bGunGameImmunity                  = 0x3D74; // bool
            static constexpr std::uintptr_t m_fImmuneToGunGameDamageTimeLast    = 0x3D78; // GameTime_t
            static constexpr std::uintptr_t m_fMolotovDamageTime                = 0x3D7C; // float32
            static constexpr std::uintptr_t m_vecLastAliveLocalVelocity         = 0x3D84; // Vector
            static constexpr std::uintptr_t m_fRenderingClipPlane               = 0x3D90; // float32[4]
            static constexpr std::uintptr_t m_nLastClipPlaneSetupFrame          = 0x3DA0; // int32
            static constexpr std::uintptr_t m_vecLastClipCameraPos              = 0x3DA4; // Vector
            static constexpr std::uintptr_t m_vecLastClipCameraForward          = 0x3DB0; // Vector
            static constexpr std::uintptr_t m_bClipHitStaticWorld               = 0x3DBC; // bool
            static constexpr std::uintptr_t m_bCachedPlaneIsValid               = 0x3DBD; // bool
            static constexpr std::uintptr_t m_pClippingWeapon                   = 0x3DC0; // C_CSWeaponBase*
            static constexpr std::uintptr_t m_nPlayerInfernoBodyFx              = 0x3DC8; // ParticleIndex_t
            static constexpr std::uintptr_t m_angEyeAngles                      = 0x3DD0; // QAngle
            static constexpr std::uintptr_t m_arrOldEyeAnglesTimes              = 0x3E60; // GameTime_t[4]
            static constexpr std::uintptr_t m_arrOldEyeAngles                   = 0x3E70; // QAngle[4]
            static constexpr std::uintptr_t m_angEyeAnglesVelocity              = 0x3EA0; // QAngle
            static constexpr std::uintptr_t m_iIDEntIndex                       = 0x3EAC; // CEntityIndex
            static constexpr std::uintptr_t m_delayTargetIDTimer                = 0x3EB0; // CountdownTimer
            static constexpr std::uintptr_t m_iTargetItemEntIdx                 = 0x3EC8; // CEntityIndex
            static constexpr std::uintptr_t m_iOldIDEntIndex                    = 0x3ECC; // CEntityIndex
            static constexpr std::uintptr_t m_holdTargetIDTimer                 = 0x3ED0; // CountdownTimer
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_Knife : public C_CSWeaponBase {
        public:
            static constexpr std::uintptr_t m_bFirstAttack = 0x1F40; // bool
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
        class C_WeaponG3SG1 : public C_CSWeaponBaseGun {
        public:
        };

        // Has VTable
        // Local Type Scope
        class C_BaseCSGrenade : public C_CSWeaponBase {
        public:
            static constexpr std::uintptr_t m_bClientPredictDelete      = 0x1F40; // bool
            static constexpr std::uintptr_t m_bRedraw                   = 0x1F41; // bool
            static constexpr std::uintptr_t m_bIsHeldByPlayer           = 0x1F42; // bool
            static constexpr std::uintptr_t m_bPinPulled                = 0x1F43; // bool
            static constexpr std::uintptr_t m_bJumpThrow                = 0x1F44; // bool
            static constexpr std::uintptr_t m_bThrowAnimating           = 0x1F45; // bool
            static constexpr std::uintptr_t m_fThrowTime                = 0x1F48; // GameTime_t
            static constexpr std::uintptr_t m_flThrowStrength           = 0x1F50; // float32
            static constexpr std::uintptr_t m_fDropTime                 = 0x1FC8; // GameTime_t
            static constexpr std::uintptr_t m_fPinPullTime              = 0x1FCC; // GameTime_t
            static constexpr std::uintptr_t m_bJustPulledPin            = 0x1FD0; // bool
            static constexpr std::uintptr_t m_nNextHoldTick             = 0x1FD4; // GameTick_t
            static constexpr std::uintptr_t m_flNextHoldFrac            = 0x1FD8; // float32
            static constexpr std::uintptr_t m_hSwitchToWeaponAfterThrow = 0x1FDC; // CHandle<C_CSWeaponBase>
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class C_CSGO_PreviewPlayer : public C_CSPlayerPawn {
        public:
            static constexpr std::uintptr_t m_animgraphCharacterModeString = 0x3EF0; // CGlobalSymbol
            static constexpr std::uintptr_t m_flInitialModelScale          = 0x3EF8; // float32
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
        class C_DEagle : public C_CSWeaponBaseGun {
        public:
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
        class C_WeaponM4A1Silencer : public C_CSWeaponBaseGun {
        public:
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
        class C_WeaponSSG08 : public C_CSWeaponBaseGun {
        public:
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
        class C_WeaponHKP2000 : public C_CSWeaponBaseGun {
        public:
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
        class C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel : public C_CSGO_PreviewPlayer {
        public:
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
        class C_IncendiaryGrenade : public C_MolotovGrenade {
        public:
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
        class C_SmokeGrenade : public C_BaseCSGrenade {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayerController_ActionTrackingServices : public CPlayerControllerComponent {
        public:
            static constexpr std::uintptr_t m_perRoundStats           = 0x0040; // C_UtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
            static constexpr std::uintptr_t m_matchStats              = 0x00A8; // CSMatchStats_t
            static constexpr std::uintptr_t m_iNumRoundKills          = 0x0128; // int32
            static constexpr std::uintptr_t m_iNumRoundKillsHeadshots = 0x012C; // int32
            static constexpr std::uintptr_t m_flTotalRoundDamageDealt = 0x0130; // float32
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_ActionTrackingServices : public CPlayerPawnComponent {
        public:
            static constexpr std::uintptr_t m_hLastWeaponBeforeC4AutoSwitch = 0x0048; // CHandle<C_BasePlayerWeapon>
            static constexpr std::uintptr_t m_bIsRescuing                   = 0x004C; // bool
            static constexpr std::uintptr_t m_weaponPurchasesThisMatch      = 0x0050; // WeaponPurchaseTracker_t
            static constexpr std::uintptr_t m_weaponPurchasesThisRound      = 0x00C0; // WeaponPurchaseTracker_t
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
        // Local Type Scope
        class CPlayer_FlashlightServices : public CPlayerPawnComponent {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CPlayer_CameraServices : public CPlayerPawnComponent {
        public:
            static constexpr std::uintptr_t m_vecCsViewPunchAngle         = 0x0048; // QAngle
            static constexpr std::uintptr_t m_nCsViewPunchAngleTick       = 0x0054; // GameTick_t
            static constexpr std::uintptr_t m_flCsViewPunchAngleTickRatio = 0x0058; // float32
            static constexpr std::uintptr_t m_PlayerFog                   = 0x0060; // C_fogplayerparams_t
            static constexpr std::uintptr_t m_hColorCorrectionCtrl        = 0x00A0; // CHandle<C_ColorCorrection>
            static constexpr std::uintptr_t m_hViewEntity                 = 0x00A4; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_hTonemapController          = 0x00A8; // CHandle<C_TonemapController2>
            static constexpr std::uintptr_t m_audio                       = 0x00B0; // audioparams_t
            static constexpr std::uintptr_t m_PostProcessingVolumes       = 0x0128; // C_NetworkUtlVectorBase<CHandle<C_PostProcessingVolume>>
            static constexpr std::uintptr_t m_flOldPlayerZ                = 0x0140; // float32
            static constexpr std::uintptr_t m_flOldPlayerViewOffsetZ      = 0x0144; // float32
            static constexpr std::uintptr_t m_CurrentFog                  = 0x0148; // fogparams_t
            static constexpr std::uintptr_t m_hOldFogController           = 0x01B0; // CHandle<C_FogController>
            static constexpr std::uintptr_t m_bOverrideFogColor           = 0x01B4; // bool[5]
            static constexpr std::uintptr_t m_OverrideFogColor            = 0x01B9; // Color[5]
            static constexpr std::uintptr_t m_bOverrideFogStartEnd        = 0x01CD; // bool[5]
            static constexpr std::uintptr_t m_fOverrideFogStart           = 0x01D4; // float32[5]
            static constexpr std::uintptr_t m_fOverrideFogEnd             = 0x01E8; // float32[5]
            static constexpr std::uintptr_t m_hActivePostProcessingVolume = 0x01FC; // CHandle<C_PostProcessingVolume>
            static constexpr std::uintptr_t m_angDemoViewAngles           = 0x0200; // QAngle
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayerBase_CameraServices : public CPlayer_CameraServices {
        public:
            static constexpr std::uintptr_t m_iFOV          = 0x0290; // uint32
            static constexpr std::uintptr_t m_iFOVStart     = 0x0294; // uint32
            static constexpr std::uintptr_t m_flFOVTime     = 0x0298; // GameTime_t
            static constexpr std::uintptr_t m_flFOVRate     = 0x029C; // float32
            static constexpr std::uintptr_t m_hZoomOwner    = 0x02A0; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_flLastShotFOV = 0x02A4; // float32
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_CameraServices : public CCSPlayerBase_CameraServices {
        public:
            static constexpr std::uintptr_t m_flDeathCamTilt         = 0x02A8; // float32
            static constexpr std::uintptr_t m_vClientScopeInaccuracy = 0x02B0; // Vector
        };

        // Has VTable
        // Local Type Scope
        class CCSObserver_CameraServices : public CCSPlayerBase_CameraServices {
        public:
        };

        // Has VTable
        // Is Absract
        // Local Type Scope
        class CPlayer_AutoaimServices : public CPlayerPawnComponent {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayerController_InventoryServices : public CPlayerControllerComponent {
        public:
            static constexpr std::uintptr_t m_vecNetworkableLoadout              = 0x0040; // CUtlVector<CCSPlayerController_InventoryServices::NetworkedLoadoutSlot_t>
            static constexpr std::uintptr_t m_unMusicID                          = 0x0058; // uint16
            static constexpr std::uintptr_t m_rank                               = 0x005C; // MedalRank_t[6]
            static constexpr std::uintptr_t m_nPersonaDataPublicLevel            = 0x0074; // int32
            static constexpr std::uintptr_t m_nPersonaDataPublicCommendsLeader   = 0x0078; // int32
            static constexpr std::uintptr_t m_nPersonaDataPublicCommendsTeacher  = 0x007C; // int32
            static constexpr std::uintptr_t m_nPersonaDataPublicCommendsFriendly = 0x0080; // int32
            static constexpr std::uintptr_t m_nPersonaDataXpTrailLevel           = 0x0084; // int32
            static constexpr std::uintptr_t m_vecServerAuthoritativeWeaponSlots  = 0x0088; // C_UtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>
        };

        // Has VTable
        // Local Type Scope
        class CPlayer_ItemServices : public CPlayerPawnComponent {
        public:
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
            static constexpr std::uintptr_t m_flStepSoundTime   = 0x0240; // float32
            static constexpr std::uintptr_t m_flFallVelocity    = 0x0244; // float32
            static constexpr std::uintptr_t m_groundNormal      = 0x0248; // Vector
            static constexpr std::uintptr_t m_flSurfaceFriction = 0x0254; // float32
            static constexpr std::uintptr_t m_surfaceProps      = 0x0258; // CUtlStringToken
            static constexpr std::uintptr_t m_nStepside         = 0x0268; // int32
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_MovementServices : public CPlayer_MovementServices_Humanoid {
        public:
            static constexpr std::uintptr_t m_vecLadderNormal                     = 0x0270; // Vector
            static constexpr std::uintptr_t m_nLadderSurfacePropIndex             = 0x027C; // int32
            static constexpr std::uintptr_t m_bDucked                             = 0x0280; // bool
            static constexpr std::uintptr_t m_flDuckAmount                        = 0x0284; // float32
            static constexpr std::uintptr_t m_flDuckSpeed                         = 0x0288; // float32
            static constexpr std::uintptr_t m_bDuckOverride                       = 0x028C; // bool
            static constexpr std::uintptr_t m_bDesiresDuck                        = 0x028D; // bool
            static constexpr std::uintptr_t m_bDucking                            = 0x028E; // bool
            static constexpr std::uintptr_t m_flDuckOffset                        = 0x0290; // float32
            static constexpr std::uintptr_t m_nDuckTimeMsecs                      = 0x0294; // uint32
            static constexpr std::uintptr_t m_nDuckJumpTimeMsecs                  = 0x0298; // uint32
            static constexpr std::uintptr_t m_nJumpTimeMsecs                      = 0x029C; // uint32
            static constexpr std::uintptr_t m_flLastDuckTime                      = 0x02A0; // float32
            static constexpr std::uintptr_t m_vecLastPositionAtFullCrouchSpeed    = 0x02B0; // Vector2D
            static constexpr std::uintptr_t m_duckUntilOnGround                   = 0x02B8; // bool
            static constexpr std::uintptr_t m_bHasWalkMovedSinceLastJump          = 0x02B9; // bool
            static constexpr std::uintptr_t m_bInStuckTest                        = 0x02BA; // bool
            static constexpr std::uintptr_t m_nTraceCount                         = 0x04C8; // int32
            static constexpr std::uintptr_t m_StuckLast                           = 0x04CC; // int32
            static constexpr std::uintptr_t m_bSpeedCropped                       = 0x04D0; // bool
            static constexpr std::uintptr_t m_nOldWaterLevel                      = 0x04D4; // int32
            static constexpr std::uintptr_t m_flWaterEntryTime                    = 0x04D8; // float32
            static constexpr std::uintptr_t m_vecForward                          = 0x04DC; // Vector
            static constexpr std::uintptr_t m_vecLeft                             = 0x04E8; // Vector
            static constexpr std::uintptr_t m_vecUp                               = 0x04F4; // Vector
            static constexpr std::uintptr_t m_nGameCodeHasMovedPlayerAfterCommand = 0x0500; // int32
            static constexpr std::uintptr_t m_fStashGrenadeParameterWhen          = 0x0504; // GameTime_t
            static constexpr std::uintptr_t m_nButtonDownMaskPrev                 = 0x0508; // uint64
            static constexpr std::uintptr_t m_flOffsetTickCompleteTime            = 0x0510; // float32
            static constexpr std::uintptr_t m_flOffsetTickStashedSpeed            = 0x0514; // float32
            static constexpr std::uintptr_t m_flStamina                           = 0x0518; // float32
            static constexpr std::uintptr_t m_flHeightAtJumpStart                 = 0x051C; // float32
            static constexpr std::uintptr_t m_flMaxJumpHeightThisJump             = 0x0520; // float32
            static constexpr std::uintptr_t m_flMaxJumpHeightLastJump             = 0x0524; // float32
            static constexpr std::uintptr_t m_flStaminaAtJumpStart                = 0x0528; // float32
            static constexpr std::uintptr_t m_flVelMulAtJumpStart                 = 0x052C; // float32
            static constexpr std::uintptr_t m_flAccumulatedJumpError              = 0x0530; // float32
            static constexpr std::uintptr_t m_LegacyJump                          = 0x0538; // CCSPlayerLegacyJump
            static constexpr std::uintptr_t m_ModernJump                          = 0x0550; // CCSPlayerModernJump
            static constexpr std::uintptr_t m_nLastJumpTick                       = 0x0588; // GameTick_t
            static constexpr std::uintptr_t m_flLastJumpFrac                      = 0x058C; // float32
            static constexpr std::uintptr_t m_flLastJumpVelocityZ                 = 0x0590; // float32
            static constexpr std::uintptr_t m_bJumpApexPending                    = 0x0594; // bool
            static constexpr std::uintptr_t m_flTicksSinceLastSurfingDetected     = 0x0598; // float32
            static constexpr std::uintptr_t m_bWasSurfing                         = 0x059C; // bool
            static constexpr std::uintptr_t m_vecInputRotated                     = 0x062C; // Vector
        };

        // Has VTable
        // Local Type Scope
        class CCSObserver_MovementServices : public CPlayer_MovementServices {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CPlayer_ObserverServices : public CPlayerPawnComponent {
        public:
            static constexpr std::uintptr_t m_iObserverMode                   = 0x0048; // uint8
            static constexpr std::uintptr_t m_hObserverTarget                 = 0x004C; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_iObserverLastMode               = 0x0050; // ObserverMode_t
            static constexpr std::uintptr_t m_bForcedObserverMode             = 0x0054; // bool
            static constexpr std::uintptr_t m_flObserverChaseDistance         = 0x0058; // float32
            static constexpr std::uintptr_t m_flObserverChaseDistanceCalcTime = 0x005C; // GameTime_t
        };

        // Has VTable
        // Local Type Scope
        class CCSObserver_ObserverServices : public CPlayer_ObserverServices {
        public:
            static constexpr std::uintptr_t m_obsInterpState = 0x0064; // ObserverInterpState_t
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
        // Local Type Scope
        class CCSPlayer_UseServices : public CPlayer_UseServices {
        public:
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
            static constexpr std::uintptr_t m_flWaterJumpTime = 0x0048; // float32
            static constexpr std::uintptr_t m_vecWaterJumpVel = 0x004C; // Vector
            static constexpr std::uintptr_t m_flSwimSoundTime = 0x0058; // float32
        };

        // Has VTable
        // Local Type Scope
        class CPlayer_WeaponServices : public CPlayerPawnComponent {
        public:
            static constexpr std::uintptr_t m_hMyWeapons    = 0x0048; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerWeapon>>
            static constexpr std::uintptr_t m_hActiveWeapon = 0x0060; // CHandle<C_BasePlayerWeapon>
            static constexpr std::uintptr_t m_hLastWeapon   = 0x0064; // CHandle<C_BasePlayerWeapon>
            static constexpr std::uintptr_t m_iAmmo         = 0x0068; // uint16[32]
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_WeaponServices : public CPlayer_WeaponServices {
        public:
            static constexpr std::uintptr_t m_flNextAttack                       = 0x00D0; // GameTime_t
            static constexpr std::uintptr_t m_bIsLookingAtWeapon                 = 0x00D4; // bool
            static constexpr std::uintptr_t m_bIsHoldingLookAtWeapon             = 0x00D5; // bool
            static constexpr std::uintptr_t m_nOldTotalShootPositionHistoryCount = 0x00D8; // uint32
            static constexpr std::uintptr_t m_nOldTotalInputHistoryCount         = 0x0370; // uint32
            static constexpr std::uintptr_t m_networkAnimTiming                  = 0x1588; // C_NetworkUtlVectorBase<uint8>
            static constexpr std::uintptr_t m_bBlockInspectUntilNextGraphUpdate  = 0x15A0; // bool
        };

        // Has VTable
        // Local Type Scope
        class CBaseAnimGraphController : public CSkeletonAnimationController {
        public:
            static constexpr std::uintptr_t m_nAnimationAlgorithm                  = 0x0018; // AnimationAlgorithm_t
            static constexpr std::uintptr_t m_animGraphNetworkedVars               = 0x0020; // CAnimGraphNetworkedVariables
            static constexpr std::uintptr_t m_pAnimGraphInstance                   = 0x14B0; // CSmartPtr<IAnimationGraphInstance>
            static constexpr std::uintptr_t m_nNextExternalGraphHandle             = 0x1510; // ExternalAnimGraphHandle_t
            static constexpr std::uintptr_t m_vecSecondarySkeletonNames            = 0x1518; // CUtlVector<CGlobalSymbol>
            static constexpr std::uintptr_t m_vecSecondarySkeletons                = 0x1530; // C_NetworkUtlVectorBase<CHandle<CBaseAnimGraph>>
            static constexpr std::uintptr_t m_nSecondarySkeletonMasterCount        = 0x1548; // int32
            static constexpr std::uintptr_t m_flSoundSyncTime                      = 0x1550; // float32
            static constexpr std::uintptr_t m_nActiveIKChainMask                   = 0x1554; // uint32
            static constexpr std::uintptr_t m_hSequence                            = 0x15A8; // HSequence
            static constexpr std::uintptr_t m_flSeqStartTime                       = 0x15AC; // GameTime_t
            static constexpr std::uintptr_t m_flSeqFixedCycle                      = 0x15B0; // float32
            static constexpr std::uintptr_t m_nAnimLoopMode                        = 0x15B4; // AnimLoopMode_t
            static constexpr std::uintptr_t m_flPlaybackRate                       = 0x15B8; // CNetworkedQuantizedFloat
            static constexpr std::uintptr_t m_nNotifyState                         = 0x15C4; // SequenceFinishNotifyState_t
            static constexpr std::uintptr_t m_bNetworkedAnimationInputsChanged     = 0x15C5; // bool
            static constexpr std::uintptr_t m_bNetworkedSequenceChanged            = 0x15C6; // bool
            static constexpr std::uintptr_t m_bLastUpdateSkipped                   = 0x15C7; // bool
            static constexpr std::uintptr_t m_bSequenceFinished                    = 0x15C8; // bool
            static constexpr std::uintptr_t m_nPrevAnimUpdateTick                  = 0x15CC; // GameTick_t
            static constexpr std::uintptr_t m_hGraphDefinitionAG2                  = 0x1868; // CStrongHandle<InfoForResourceTypeCNmGraphDefinition>
            static constexpr std::uintptr_t m_serializedPoseRecipeAG2              = 0x1870; // C_NetworkUtlVectorBase<uint8>
            static constexpr std::uintptr_t m_nSerializePoseRecipeSizeAG2          = 0x1888; // int32
            static constexpr std::uintptr_t m_nSerializePoseRecipeVersionAG2       = 0x188C; // int32
            static constexpr std::uintptr_t m_nServerGraphInstanceIteration        = 0x1890; // int32
            static constexpr std::uintptr_t m_nServerSerializationContextIteration = 0x1894; // int32
            static constexpr std::uintptr_t m_primaryGraphId                       = 0x1898; // ResourceId_t
            static constexpr std::uintptr_t m_vecExternalGraphIds                  = 0x18A0; // C_NetworkUtlVectorBase<ResourceId_t>
            static constexpr std::uintptr_t m_vecExternalClipIds                   = 0x18B8; // C_NetworkUtlVectorBase<ResourceId_t>
            static constexpr std::uintptr_t m_sAnimGraph2Identifier                = 0x18D0; // CGlobalSymbol
            static constexpr std::uintptr_t m_vecExternalGraphs                    = 0x1AF8; // CUtlVector<ExternalAnimGraph_t>
            static constexpr std::uintptr_t m_nPrevAnimationAlgorithm              = 0x1B31; // AnimationAlgorithm_t
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
        class CNmEventConsumerHudModelArmsAttributes : public CNmEventConsumerAttributes {
        public:
        };

        // Has VTable
        // Local Type Scope
        class C_EconItemView : public IEconItemInterface {
        public:
            static constexpr std::uintptr_t m_bInventoryImageRgbaRequested        = 0x0060; // bool
            static constexpr std::uintptr_t m_bInventoryImageTriedCache           = 0x0061; // bool
            static constexpr std::uintptr_t m_nInventoryImageRgbaWidth            = 0x0080; // int32
            static constexpr std::uintptr_t m_nInventoryImageRgbaHeight           = 0x0084; // int32
            static constexpr std::uintptr_t m_szCurrentLoadCachedFileName         = 0x0088; // char[260]
            static constexpr std::uintptr_t m_bRestoreCustomMaterialAfterPrecache = 0x01B8; // bool
            static constexpr std::uintptr_t m_iItemDefinitionIndex                = 0x01BA; // uint16
            static constexpr std::uintptr_t m_iEntityQuality                      = 0x01BC; // int32
            static constexpr std::uintptr_t m_iEntityLevel                        = 0x01C0; // uint32
            static constexpr std::uintptr_t m_iItemID                             = 0x01C8; // uint64
            static constexpr std::uintptr_t m_iItemIDHigh                         = 0x01D0; // uint32
            static constexpr std::uintptr_t m_iItemIDLow                          = 0x01D4; // uint32
            static constexpr std::uintptr_t m_iAccountID                          = 0x01D8; // uint32
            static constexpr std::uintptr_t m_iInventoryPosition                  = 0x01DC; // uint32
            static constexpr std::uintptr_t m_bInitialized                        = 0x01E8; // bool
            static constexpr std::uintptr_t m_bDisallowSOC                        = 0x01E9; // bool
            static constexpr std::uintptr_t m_bIsStoreItem                        = 0x01EA; // bool
            static constexpr std::uintptr_t m_bIsTradeItem                        = 0x01EB; // bool
            static constexpr std::uintptr_t m_iEntityQuantity                     = 0x01EC; // int32
            static constexpr std::uintptr_t m_iRarityOverride                     = 0x01F0; // int32
            static constexpr std::uintptr_t m_iQualityOverride                    = 0x01F4; // int32
            static constexpr std::uintptr_t m_iOriginOverride                     = 0x01F8; // int32
            static constexpr std::uintptr_t m_ubStyleOverride                     = 0x01FC; // uint8
            static constexpr std::uintptr_t m_unClientFlags                       = 0x01FD; // uint8
            static constexpr std::uintptr_t m_AttributeList                       = 0x0208; // CAttributeList
            static constexpr std::uintptr_t m_NetworkedDynamicAttributes          = 0x0280; // CAttributeList
            static constexpr std::uintptr_t m_szCustomName                        = 0x02F8; // char[161]
            static constexpr std::uintptr_t m_szCustomNameOverride                = 0x0399; // char[161]
            static constexpr std::uintptr_t m_bInitializedTags                    = 0x0468; // bool
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
        // Local Type Scope
        class CCSPlayer_PingServices : public CPlayerPawnComponent {
        public:
            static constexpr std::uintptr_t m_hPlayerPing = 0x0048; // CHandle<C_PlayerPing>
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_DamageReactServices : public CPlayerPawnComponent {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_BulletServices : public CPlayerPawnComponent {
        public:
            static constexpr std::uintptr_t m_totalHitsOnServer = 0x0048; // int32
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_BuyServices : public CPlayerPawnComponent {
        public:
            static constexpr std::uintptr_t m_vecSellbackPurchaseEntries = 0x0048; // C_UtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayerController_InGameMoneyServices : public CPlayerControllerComponent {
        public:
            static constexpr std::uintptr_t m_iAccount            = 0x0040; // int32
            static constexpr std::uintptr_t m_iStartAccount       = 0x0044; // int32
            static constexpr std::uintptr_t m_iTotalCashSpent     = 0x0048; // int32
            static constexpr std::uintptr_t m_iCashSpentThisRound = 0x004C; // int32
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_HostageServices : public CPlayerPawnComponent {
        public:
            static constexpr std::uintptr_t m_hCarriedHostage     = 0x0048; // CHandle<C_BaseEntity>
            static constexpr std::uintptr_t m_hCarriedHostageProp = 0x004C; // CHandle<C_BaseEntity>
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayerController_DamageServices : public CPlayerControllerComponent {
        public:
            static constexpr std::uintptr_t m_nSendUpdate = 0x0040; // int32
            static constexpr std::uintptr_t m_DamageList  = 0x0048; // C_UtlVectorEmbeddedNetworkVar<CDamageRecord>
        };

        // Has VTable
        // Construct Allowed
        class C_CSGO_PreviewPlayer_GraphController : public CAnimGraphControllerBase {
        public:
            static constexpr std::uintptr_t m_pszCharacterMode         = 0x0090; // CAnimGraphParamRef<char*>
            static constexpr std::uintptr_t m_pszTeamPreviewVariant    = 0x00C0; // CAnimGraphParamRef<char*>
            static constexpr std::uintptr_t m_pszTeamPreviewPosition   = 0x00F0; // CAnimGraphParamRef<char*>
            static constexpr std::uintptr_t m_pszEndOfMatchCelebration = 0x0120; // CAnimGraphParamRef<char*>
            static constexpr std::uintptr_t m_nTeamPreviewRandom       = 0x0150; // CAnimGraphParamRef<int32>
            static constexpr std::uintptr_t m_pszWeaponState           = 0x0178; // CAnimGraphParamRef<char*>
            static constexpr std::uintptr_t m_pszWeaponType            = 0x01A8; // CAnimGraphParamRef<char*>
            static constexpr std::uintptr_t m_bCT                      = 0x01D8; // CAnimGraphParamRef<bool>
        };

        // Has VTable
        // Local Type Scope
        class CCSPlayer_GlowServices : public CPlayerPawnComponent {
        public:
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

    }
}

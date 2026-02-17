#pragma once
#include <cstdint>

namespace offsets {
    namespace pulse_system {
        // Local Type Scope
        enum class PulseTestEnumColor_t : std::uint32_t {
            BLACK = 0x0,
            WHITE = 0x1,
            RED   = 0x2,
            GREEN = 0x3,
            BLUE  = 0x4
        };

        // Local Type Scope
        enum class PulseTestEnumShape_t : std::uint32_t {
            CIRCLE   = 0x64,
            SQUARE   = 0xC8,
            TRIANGLE = 0x12C
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
        // Local Type Scope
        class FakeEntity_tAPI {
        public:
        };

        // Has Trivial Destructor
        // Local Type Scope
        class FakeEntityDerivedA_tAPI {
        public:
        };

        // Has Trivial Destructor
        // Local Type Scope
        class FakeEntityDerivedB_tAPI {
        public:
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Local Type Scope
        class CPulseTestFuncs_LibraryA {
        public:
        };

        // Has Trivial Destructor
        // Local Type Scope
        struct CPulseCell_ExampleCriteria__Criteria_t {
        public:
            static constexpr std::uintptr_t m_flFloatValue1 = 0x0000; // float32
            static constexpr std::uintptr_t m_flFloatValue2 = 0x0004; // float32
            static constexpr std::uintptr_t m_bMyBool       = 0x0008; // bool
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        // Local Type Scope
        struct CPulseCell_TestWaitWithCursorState__CursorState_t {
        public:
            static constexpr std::uintptr_t flWaitValue   = 0x0000; // float32
            static constexpr std::uintptr_t bFailOnCancel = 0x0004; // bool
        };

        // Has Trivial Destructor
        // Construct Allowed
        // Local Type Scope
        struct CPulseCell_Test_MultiOutflow_WithParams_Yielding__CursorState_t {
        public:
            static constexpr std::uintptr_t nTestStep = 0x0000; // int32
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

        // Local Type Scope
        class CPulse_ResumePoint : public CPulse_OutflowConnection {
        public:
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
        // Local Type Scope
        class CPulseCell_Outflow_TestRandomYesNo : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_Yes = 0x0048; // CPulse_OutflowConnection
            static constexpr std::uintptr_t m_No  = 0x0090; // CPulse_OutflowConnection
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
        class CPulseCell_Step_TestDomainTracepoint : public CPulseCell_BaseFlow {
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
        // Local Type Scope
        class CPulseGraphInstance_TurtleGraphics : public CBasePulseGraphInstance {
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
        class CPulseCell_Step_TestDomainCreateFakeEntity : public CPulseCell_BaseFlow {
        public:
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
        class CPulseCell_ExampleCriteria : public CPulseCell_BaseRequirement {
        public:
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
        class CPulseTurtleGraphicsCursor : public CPulseExecCursor {
        public:
            static constexpr std::uintptr_t m_Color        = 0x00D0; // Color
            static constexpr std::uintptr_t m_vPos         = 0x00D4; // Vector2D
            static constexpr std::uintptr_t m_flHeadingDeg = 0x00DC; // float32
            static constexpr std::uintptr_t m_bPenUp       = 0x00E0; // bool
        };

        // Has VTable
        // Local Type Scope
        class CTestDomainDerived_Cursor : public CPulseExecCursor {
        public:
            static constexpr std::uintptr_t m_nCursorValueA = 0x00D0; // int32
            static constexpr std::uintptr_t m_nCursorValueB = 0x00D4; // int32
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
        class CPulseCell_Value_TestValue50 : public CPulseCell_BaseValue {
        public:
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
        class CPulseGraphInstance_TestDomain : public CBasePulseGraphInstance {
        public:
            static constexpr std::uintptr_t m_bIsRunningUnitTests                            = 0x0130; // bool
            static constexpr std::uintptr_t m_bExplicitTimeStepping                          = 0x0131; // bool
            static constexpr std::uintptr_t m_bExpectingToDestroyWithYieldedCursors          = 0x0132; // bool
            static constexpr std::uintptr_t m_bQuietTracepoints                              = 0x0133; // bool
            static constexpr std::uintptr_t m_bExpectingCursorTerminatedDueToMaxInstructions = 0x0134; // bool
            static constexpr std::uintptr_t m_nCursorsTerminatedDueToMaxInstructions         = 0x0138; // int32
            static constexpr std::uintptr_t m_nNextValidateIndex                             = 0x013C; // int32
            static constexpr std::uintptr_t m_Tracepoints                                    = 0x0140; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_bTestYesOrNoPath                               = 0x0158; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_ExampleSelector : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_OutflowList = 0x0048; // PulseSelectorOutflowList_t
        };

        // Has VTable
        // Local Type Scope
        class CPulseGraphInstance_TestDomain_UseReadOnlyBlackboardView : public CPulseGraphInstance_TestDomain {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Step_TestDomainDestroyFakeEntity : public CPulseCell_BaseFlow {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CPulseGraphInstance_TestDomain_FakeEntityOwner : public CBasePulseGraphInstance {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Step_TestDomainEntFire : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_Input = 0x0048; // CUtlString
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Val_TestDomainGetEntityName : public CPulseCell_BaseValue {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_TestWaitWithCursorState : public CPulseCell_BaseYieldingInflow {
        public:
            static constexpr std::uintptr_t m_WakeResume = 0x0048; // CPulse_ResumePoint
            static constexpr std::uintptr_t m_WakeCancel = 0x0090; // CPulse_ResumePoint
            static constexpr std::uintptr_t m_WakeFail   = 0x00D8; // CPulse_ResumePoint
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Test_NoInflow : public CPulseCell_BaseFlow {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Test_MultiInflow_WithDefault : public CPulseCell_BaseFlow {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Test_MultiInflow_NoDefault : public CPulseCell_BaseFlow {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Test_MultiOutflow_WithParams : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_Out1 = 0x0048; // SignatureOutflow_Continue
            static constexpr std::uintptr_t m_Out2 = 0x0090; // SignatureOutflow_Continue
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Test_MultiOutflow_WithParams_Yielding : public CPulseCell_BaseYieldingInflow {
        public:
            static constexpr std::uintptr_t m_Out1         = 0x0048; // SignatureOutflow_Continue
            static constexpr std::uintptr_t m_AsyncChild1  = 0x0090; // SignatureOutflow_Continue
            static constexpr std::uintptr_t m_AsyncChild2  = 0x00D8; // SignatureOutflow_Continue
            static constexpr std::uintptr_t m_YieldResume1 = 0x0120; // SignatureOutflow_Resume
            static constexpr std::uintptr_t m_YieldResume2 = 0x0168; // SignatureOutflow_Resume
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Outflow_TestExplicitYesNo : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_Yes = 0x0048; // CPulse_OutflowConnection
            static constexpr std::uintptr_t m_No  = 0x0090; // CPulse_OutflowConnection
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Inflow_BaseEntrypoint : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_EntryChunk  = 0x0048; // PulseRuntimeChunkIndex_t
            static constexpr std::uintptr_t m_RegisterMap = 0x0050; // PulseRegisterMap_t
        };

        // Local Type Scope
        class SignatureOutflow_Resume : public CPulse_ResumePoint {
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
        // Local Type Scope
        class CPulseGraphInstance_TestDomain_Derived : public CPulseGraphInstance_TestDomain {
        public:
            static constexpr std::uintptr_t m_nInstanceValueX = 0x0160; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Val_TestDomainFindEntityByName : public CPulseCell_BaseValue {
        public:
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

    }
}

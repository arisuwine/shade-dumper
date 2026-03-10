#pragma once
#include <cstdint>

namespace offsets {
    namespace pulse_system {
        // Local Type Scope
        enum class PulseBestOutflowRules_t : std::uint32_t {
            SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0,
            SORT_BY_OUTFLOW_INDEX            = 0x1
        };

        // Local Type Scope
        enum class PulseTestEnumShape_t : std::uint32_t {
            CIRCLE   = 0x64,
            SQUARE   = 0xC8,
            TRIANGLE = 0x12C
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
        enum class PulseTestEnumColor_t : std::uint32_t {
            BLACK = 0x0,
            WHITE = 0x1,
            RED   = 0x2,
            GREEN = 0x3,
            BLUE  = 0x4
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
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Step_TestDomainDestroyFakeEntity : public CPulseCell_BaseFlow {
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
        class CPulseCell_Test_NoInflow : public CPulseCell_BaseFlow {
        public:
        };

        // Has VTable
        // Is Absract
        // Local Type Scope
        class CBasePulseGraphInstance {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CPulseGraphInstance_TestDomain_FakeEntityOwner : public CBasePulseGraphInstance {
        public:
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
        // Local Type Scope
        class CPulseExecCursor {
        public:
        };

        // Has VTable
        // Local Type Scope
        class CTestDomainDerived_Cursor : public CPulseExecCursor {
        public:
            static constexpr std::uintptr_t m_nCursorValueA = 0X00D0; // int32
            static constexpr std::uintptr_t m_nCursorValueB = 0X00D4; // int32
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_PickBestOutflowSelector : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_nCheckType  = 0X0048; // PulseBestOutflowRules_t
            static constexpr std::uintptr_t m_OutflowList = 0X0050; // PulseSelectorOutflowList_t
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Local Type Scope
        class CPulseTestFuncs_LibraryA {
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
        // Local Type Scope
        class CPulseGraphInstance_TestDomain : public CBasePulseGraphInstance {
        public:
            static constexpr std::uintptr_t m_bIsRunningUnitTests                            = 0X0130; // bool
            static constexpr std::uintptr_t m_bExplicitTimeStepping                          = 0X0131; // bool
            static constexpr std::uintptr_t m_bExpectingToDestroyWithYieldedCursors          = 0X0132; // bool
            static constexpr std::uintptr_t m_bQuietTracepoints                              = 0X0133; // bool
            static constexpr std::uintptr_t m_bExpectingCursorTerminatedDueToMaxInstructions = 0X0134; // bool
            static constexpr std::uintptr_t m_nCursorsTerminatedDueToMaxInstructions         = 0X0138; // int32
            static constexpr std::uintptr_t m_nNextValidateIndex                             = 0X013C; // int32
            static constexpr std::uintptr_t m_Tracepoints                                    = 0X0140; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_bTestYesOrNoPath                               = 0X0158; // bool
        };

        // Has VTable
        // Local Type Scope
        class CPulseGraphInstance_TestDomain_UseReadOnlyBlackboardView : public CPulseGraphInstance_TestDomain {
        public:
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

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Local Type Scope
        class CPulseCursorFuncs {
        public:
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
        class CPulseCell_Test_MultiOutflow_WithParams : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_Out1 = 0X0048; // SignatureOutflow_Continue
            static constexpr std::uintptr_t m_Out2 = 0X0090; // SignatureOutflow_Continue
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
        // Construct Allowed
        // Local Type Scope
        struct CPulseCell_Test_MultiOutflow_WithParams_Yielding__CursorState_t {
        public:
            static constexpr std::uintptr_t nTestStep = 0X0000; // int32
        };

        // Has VTable
        // Local Type Scope
        class CPulseTurtleGraphicsCursor : public CPulseExecCursor {
        public:
            static constexpr std::uintptr_t m_Color        = 0X00D0; // Color
            static constexpr std::uintptr_t m_vPos         = 0X00D4; // Vector2D
            static constexpr std::uintptr_t m_flHeadingDeg = 0X00DC; // float32
            static constexpr std::uintptr_t m_bPenUp       = 0X00E0; // bool
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        // Local Type Scope
        struct CPulseCell_TestWaitWithCursorState__CursorState_t {
        public:
            static constexpr std::uintptr_t flWaitValue   = 0X0000; // float32
            static constexpr std::uintptr_t bFailOnCancel = 0X0004; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Test_MultiInflow_NoDefault : public CPulseCell_BaseFlow {
        public:
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
        class CPulseCell_IntervalTimer : public CPulseCell_BaseYieldingInflow {
        public:
            static constexpr std::uintptr_t m_Completed  = 0X0048; // CPulse_ResumePoint
            static constexpr std::uintptr_t m_OnInterval = 0X0090; // SignatureOutflow_Continue
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Local Type Scope
        class CPulseTestScriptLib {
        public:
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
        class CPulseCell_Value_TestValue50 : public CPulseCell_BaseValue {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Test_MultiOutflow_WithParams_Yielding : public CPulseCell_BaseYieldingInflow {
        public:
            static constexpr std::uintptr_t m_Out1         = 0X0048; // SignatureOutflow_Continue
            static constexpr std::uintptr_t m_AsyncChild1  = 0X0090; // SignatureOutflow_Continue
            static constexpr std::uintptr_t m_AsyncChild2  = 0X00D8; // SignatureOutflow_Continue
            static constexpr std::uintptr_t m_YieldResume1 = 0X0120; // SignatureOutflow_Resume
            static constexpr std::uintptr_t m_YieldResume2 = 0X0168; // SignatureOutflow_Resume
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
        class CPulseCell_Inflow_EventHandler : public CPulseCell_Inflow_BaseEntrypoint {
        public:
            static constexpr std::uintptr_t m_EventName = 0X0080; // PulseSymbol_t
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Step_TestDomainTracepoint : public CPulseCell_BaseFlow {
        public:
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
        // Local Type Scope
        class CPulseGraphInstance_TestDomain_Derived : public CPulseGraphInstance_TestDomain {
        public:
            static constexpr std::uintptr_t m_nInstanceValueX = 0X0160; // int32
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

        // Local Type Scope
        class SignatureOutflow_Continue : public CPulse_OutflowConnection {
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
        class CPulseCell_Outflow_TestExplicitYesNo : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_Yes = 0X0048; // CPulse_OutflowConnection
            static constexpr std::uintptr_t m_No  = 0X0090; // CPulse_OutflowConnection
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Outflow_TestRandomYesNo : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_Yes = 0X0048; // CPulse_OutflowConnection
            static constexpr std::uintptr_t m_No  = 0X0090; // CPulse_OutflowConnection
        };

        // Has Trivial Destructor
        // Construct Allowed
        // Local Type Scope
        struct CPulseCell_Outflow_CycleOrdered__InstanceState_t {
        public:
            static constexpr std::uintptr_t m_nNextIndex = 0X0000; // int32
        };

        // Has Trivial Destructor
        // Construct Allowed
        // Local Type Scope
        struct CPulseCell_LimitCount__InstanceState_t {
        public:
            static constexpr std::uintptr_t m_nCurrentCount = 0X0000; // int32
        };

        // Has Trivial Destructor
        // Local Type Scope
        class FakeEntity_tAPI {
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
        class CPulseCell_Step_DebugLog : public CPulseCell_BaseFlow {
        public:
        };

        // Construct Allowed
        // Local Type Scope
        struct PulseNodeDynamicOutflows_t {
        public:
            static constexpr std::uintptr_t m_Outflows = 0X0000; // CUtlVector<PulseNodeDynamicOutflows_t::DynamicOutflow_t>
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
        class CPulseCell_Inflow_ObservableVariableListener : public CPulseCell_Inflow_BaseEntrypoint {
        public:
            static constexpr std::uintptr_t m_nBlackboardReference = 0X0080; // PulseRuntimeBlackboardReferenceIndex_t
            static constexpr std::uintptr_t m_bSelfReference       = 0X0082; // bool
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Outflow_CycleOrdered : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_Outputs = 0X0048; // CUtlVector<CPulse_OutflowConnection>
        };

        // Construct Allowed
        // Local Type Scope
        struct PulseSelectorOutflowList_t {
        public:
            static constexpr std::uintptr_t m_Outflows = 0X0000; // CUtlVector<OutflowWithRequirements_t>
        };

        // Has VTable
        // Local Type Scope
        class CPulseGraphInstance_TurtleGraphics : public CBasePulseGraphInstance {
        public:
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
        class CPulseCell_Inflow_Wait : public CPulseCell_BaseYieldingInflow {
        public:
            static constexpr std::uintptr_t m_WakeResume = 0X0048; // CPulse_ResumePoint
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_TestWaitWithCursorState : public CPulseCell_BaseYieldingInflow {
        public:
            static constexpr std::uintptr_t m_WakeResume = 0X0048; // CPulse_ResumePoint
            static constexpr std::uintptr_t m_WakeCancel = 0X0090; // CPulse_ResumePoint
            static constexpr std::uintptr_t m_WakeFail   = 0X00D8; // CPulse_ResumePoint
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
        class CPulseCell_BooleanSwitchState : public CPulseCell_BaseState {
        public:
            static constexpr std::uintptr_t m_Condition = 0X0048; // PulseObservableBoolExpression_t
            static constexpr std::uintptr_t m_SubGraph  = 0X00C0; // CPulse_OutflowConnection
            static constexpr std::uintptr_t m_WhenTrue  = 0X0108; // CPulse_OutflowConnection
            static constexpr std::uintptr_t m_WhenFalse = 0X0150; // CPulse_OutflowConnection
        };

        // Has Trivial Destructor
        // Local Type Scope
        class FakeEntityDerivedB_tAPI {
        public:
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
        class CPulseCell_Unknown : public CPulseCell_Base {
        public:
            static constexpr std::uintptr_t m_UnknownKeys = 0X0048; // KeyValues3
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
        class CPulseCell_Val_TestDomainFindEntityByName : public CPulseCell_BaseValue {
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
        class CPulseCell_Value_RandomInt : public CPulseCell_BaseValue {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_Step_TestDomainEntFire : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_Input = 0X0048; // CUtlString
        };

        // Has Trivial Destructor
        // Local Type Scope
        class FakeEntityDerivedA_tAPI {
        public:
        };

        // Has VTable
        // Construct Allowed
        // Local Type Scope
        class CPulseCell_ExampleSelector : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_OutflowList = 0X0048; // PulseSelectorOutflowList_t
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
        class CPulseCell_InlineNodeSkipSelector : public CPulseCell_BaseFlow {
        public:
            static constexpr std::uintptr_t m_nFlowNodeID = 0X0048; // PulseDocNodeID_t
            static constexpr std::uintptr_t m_bAnd        = 0X004C; // bool
            static constexpr std::uintptr_t m_PassOutflow = 0X0050; // PulseSelectorOutflowList_t
            static constexpr std::uintptr_t m_FailOutflow = 0X0068; // CPulse_OutflowConnection
        };

        // Has Trivial Destructor
        // Local Type Scope
        struct CPulseCell_ExampleCriteria__Criteria_t {
        public:
            static constexpr std::uintptr_t m_flFloatValue1 = 0X0000; // float32
            static constexpr std::uintptr_t m_flFloatValue2 = 0X0004; // float32
            static constexpr std::uintptr_t m_bMyBool       = 0X0008; // bool
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

        // Construct Allowed
        // Local Type Scope
        struct PulseObservableBoolExpression_t {
        public:
            static constexpr std::uintptr_t m_EvaluateConnection                      = 0X0000; // CPulse_OutflowConnection
            static constexpr std::uintptr_t m_DependentObservableVars                 = 0X0048; // CUtlVector<PulseRuntimeVarIndex_t>
            static constexpr std::uintptr_t m_DependentObservableBlackboardReferences = 0X0060; // CUtlVector<PulseRuntimeBlackboardReferenceIndex_t>
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
        class CPulseCell_Step_TestDomainCreateFakeEntity : public CPulseCell_BaseFlow {
        public:
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
    }
}

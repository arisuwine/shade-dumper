#pragma once
#include <cstdint>

namespace offsets {
    namespace vphysics2 {
        // Global Type Scope
        enum class JointMotion_t : std::uint32_t {
            JOINT_MOTION_FREE   = 0x0,
            JOINT_MOTION_LOCKED = 0x1,
            JOINT_MOTION_COUNT  = 0x2
        };

        // Global Type Scope
        enum class JointAxis_t : std::uint32_t {
            JOINT_AXIS_X     = 0x0,
            JOINT_AXIS_Y     = 0x1,
            JOINT_AXIS_Z     = 0x2,
            JOINT_AXIS_COUNT = 0x3
        };

        // Global Type Scope
        enum class DynamicContinuousContactBehavior_t : std::uint8_t {
            DYNAMIC_CONTINUOUS_ALLOW_IF_REQUESTED_BY_OTHER_BODY = 0x0,
            DYNAMIC_CONTINUOUS_ALWAYS                           = 0x1,
            DYNAMIC_CONTINUOUS_NEVER                            = 0x2
        };

        // Construct Allowed
        struct RnShapeDesc_t {
        public:
            static constexpr std::uintptr_t m_nCollisionAttributeIndex = 0X0000; // uint32
            static constexpr std::uintptr_t m_nSurfacePropertyIndex    = 0X0004; // uint32
            static constexpr std::uintptr_t m_UserFriendlyName         = 0X0008; // CUtlString
            static constexpr std::uintptr_t m_bUserFriendlyNameSealed  = 0X0010; // bool
            static constexpr std::uintptr_t m_bUserFriendlyNameLong    = 0X0011; // bool
            static constexpr std::uintptr_t m_nToolMaterialHash        = 0X0014; // uint32
        };

        // Construct Allowed
        struct RnSphereDesc_t : public RnShapeDesc_t {
        public:
            static constexpr std::uintptr_t m_Sphere = 0X0018; // SphereBase_t<float32>
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct RnSoftbodyParticle_t {
        public:
            static constexpr std::uintptr_t m_flMassInv = 0X0000; // float32
        };

        // Construct Allowed
        struct RnHullDesc_t : public RnShapeDesc_t {
        public:
            static constexpr std::uintptr_t m_Hull = 0X0018; // RnHull_t
        };

        // Construct Allowed
        struct RnCapsuleDesc_t : public RnShapeDesc_t {
        public:
            static constexpr std::uintptr_t m_Capsule = 0X0018; // RnCapsule_t
        };

        // Construct Allowed
        struct PhysFeModelDesc_t {
        public:
            static constexpr std::uintptr_t m_CtrlHash                        = 0X0000; // CUtlVector<uint32>
            static constexpr std::uintptr_t m_CtrlName                        = 0X0018; // CUtlVector<CUtlString>
            static constexpr std::uintptr_t m_nStaticNodeFlags                = 0X0030; // uint32
            static constexpr std::uintptr_t m_nDynamicNodeFlags               = 0X0034; // uint32
            static constexpr std::uintptr_t m_flLocalForce                    = 0X0038; // float32
            static constexpr std::uintptr_t m_flLocalRotation                 = 0X003C; // float32
            static constexpr std::uintptr_t m_nNodeCount                      = 0X0040; // uint16
            static constexpr std::uintptr_t m_nStaticNodes                    = 0X0042; // uint16
            static constexpr std::uintptr_t m_nRotLockStaticNodes             = 0X0044; // uint16
            static constexpr std::uintptr_t m_nFirstPositionDrivenNode        = 0X0046; // uint16
            static constexpr std::uintptr_t m_nSimdTriCount1                  = 0X0048; // uint16
            static constexpr std::uintptr_t m_nSimdTriCount2                  = 0X004A; // uint16
            static constexpr std::uintptr_t m_nSimdQuadCount1                 = 0X004C; // uint16
            static constexpr std::uintptr_t m_nSimdQuadCount2                 = 0X004E; // uint16
            static constexpr std::uintptr_t m_nQuadCount1                     = 0X0050; // uint16
            static constexpr std::uintptr_t m_nQuadCount2                     = 0X0052; // uint16
            static constexpr std::uintptr_t m_nTreeDepth                      = 0X0054; // uint16
            static constexpr std::uintptr_t m_nNodeBaseJiggleboneDependsCount = 0X0056; // uint16
            static constexpr std::uintptr_t m_nRopeCount                      = 0X0058; // uint16
            static constexpr std::uintptr_t m_Ropes                           = 0X0060; // CUtlVector<uint16>
            static constexpr std::uintptr_t m_NodeBases                       = 0X0078; // CUtlVector<FeNodeBase_t>
            static constexpr std::uintptr_t m_SimdNodeBases                   = 0X0090; // CUtlVector<FeSimdNodeBase_t>
            static constexpr std::uintptr_t m_Quads                           = 0X00A8; // CUtlVector<FeQuad_t>
            static constexpr std::uintptr_t m_SimdQuads                       = 0X00C0; // CUtlVector<FeSimdQuad_t>
            static constexpr std::uintptr_t m_SimdTris                        = 0X00D8; // CUtlVector<FeSimdTri_t>
            static constexpr std::uintptr_t m_SimdRods                        = 0X00F0; // CUtlVector<FeSimdRodConstraint_t>
            static constexpr std::uintptr_t m_SimdRodsAnim                    = 0X0108; // CUtlVector<FeSimdRodConstraintAnim_t>
            static constexpr std::uintptr_t m_InitPose                        = 0X0120; // CUtlVector<CTransform>
            static constexpr std::uintptr_t m_Rods                            = 0X0138; // CUtlVector<FeRodConstraint_t>
            static constexpr std::uintptr_t m_Twists                          = 0X0150; // CUtlVector<FeTwistConstraint_t>
            static constexpr std::uintptr_t m_HingeLimits                     = 0X0168; // CUtlVector<FeHingeLimit_t>
            static constexpr std::uintptr_t m_AntiTunnelBytecode              = 0X0180; // CUtlVector<uint32>
            static constexpr std::uintptr_t m_DynKinLinks                     = 0X0198; // CUtlVector<FeDynKinLink_t>
            static constexpr std::uintptr_t m_AntiTunnelProbes                = 0X01B0; // CUtlVector<FeAntiTunnelProbe_t>
            static constexpr std::uintptr_t m_AntiTunnelTargetNodes           = 0X01C8; // CUtlVector<uint16>
            static constexpr std::uintptr_t m_NodeStrayBoxes                  = 0X01E0; // CUtlVector<FeNodeStrayBox_t>
            static constexpr std::uintptr_t m_AxialEdges                      = 0X01F8; // CUtlVector<FeAxialEdgeBend_t>
            static constexpr std::uintptr_t m_NodeInvMasses                   = 0X0210; // CUtlVector<float32>
            static constexpr std::uintptr_t m_CtrlOffsets                     = 0X0228; // CUtlVector<FeCtrlOffset_t>
            static constexpr std::uintptr_t m_CtrlOsOffsets                   = 0X0240; // CUtlVector<FeCtrlOsOffset_t>
            static constexpr std::uintptr_t m_FollowNodes                     = 0X0258; // CUtlVector<FeFollowNode_t>
            static constexpr std::uintptr_t m_CollisionPlanes                 = 0X0270; // CUtlVector<FeCollisionPlane_t>
            static constexpr std::uintptr_t m_NodeIntegrator                  = 0X0288; // CUtlVector<FeNodeIntegrator_t>
            static constexpr std::uintptr_t m_SpringIntegrator                = 0X02A0; // CUtlVector<FeSpringIntegrator_t>
            static constexpr std::uintptr_t m_SimdSpringIntegrator            = 0X02B8; // CUtlVector<FeSimdSpringIntegrator_t>
            static constexpr std::uintptr_t m_WorldCollisionParams            = 0X02D0; // CUtlVector<FeWorldCollisionParams_t>
            static constexpr std::uintptr_t m_LegacyStretchForce              = 0X02E8; // CUtlVector<float32>
            static constexpr std::uintptr_t m_NodeCollisionRadii              = 0X0300; // CUtlVector<float32>
            static constexpr std::uintptr_t m_DynNodeFriction                 = 0X0318; // CUtlVector<float32>
            static constexpr std::uintptr_t m_LocalRotation                   = 0X0330; // CUtlVector<float32>
            static constexpr std::uintptr_t m_LocalForce                      = 0X0348; // CUtlVector<float32>
            static constexpr std::uintptr_t m_TaperedCapsuleStretches         = 0X0360; // CUtlVector<FeTaperedCapsuleStretch_t>
            static constexpr std::uintptr_t m_TaperedCapsuleRigids            = 0X0378; // CUtlVector<FeTaperedCapsuleRigid_t>
            static constexpr std::uintptr_t m_SphereRigids                    = 0X0390; // CUtlVector<FeSphereRigid_t>
            static constexpr std::uintptr_t m_WorldCollisionNodes             = 0X03A8; // CUtlVector<uint16>
            static constexpr std::uintptr_t m_TreeParents                     = 0X03C0; // CUtlVector<uint16>
            static constexpr std::uintptr_t m_TreeCollisionMasks              = 0X03D8; // CUtlVector<uint16>
            static constexpr std::uintptr_t m_TreeChildren                    = 0X03F0; // CUtlVector<FeTreeChildren_t>
            static constexpr std::uintptr_t m_FreeNodes                       = 0X0408; // CUtlVector<uint16>
            static constexpr std::uintptr_t m_FitMatrices                     = 0X0420; // CUtlVector<FeFitMatrix_t>
            static constexpr std::uintptr_t m_FitWeights                      = 0X0438; // CUtlVector<FeFitWeight_t>
            static constexpr std::uintptr_t m_ReverseOffsets                  = 0X0450; // CUtlVector<FeNodeReverseOffset_t>
            static constexpr std::uintptr_t m_AnimStrayRadii                  = 0X0468; // CUtlVector<FeAnimStrayRadius_t>
            static constexpr std::uintptr_t m_SimdAnimStrayRadii              = 0X0480; // CUtlVector<FeSimdAnimStrayRadius_t>
            static constexpr std::uintptr_t m_KelagerBends                    = 0X0498; // CUtlVector<FeKelagerBend2_t>
            static constexpr std::uintptr_t m_CtrlSoftOffsets                 = 0X04B0; // CUtlVector<FeCtrlSoftOffset_t>
            static constexpr std::uintptr_t m_JiggleBones                     = 0X04C8; // CUtlVector<CFeIndexedJiggleBone>
            static constexpr std::uintptr_t m_SourceElems                     = 0X04E0; // CUtlVector<uint16>
            static constexpr std::uintptr_t m_GoalDampedSpringIntegrators     = 0X04F8; // CUtlVector<uint32>
            static constexpr std::uintptr_t m_Tris                            = 0X0510; // CUtlVector<FeTri_t>
            static constexpr std::uintptr_t m_nTriCount1                      = 0X0528; // uint16
            static constexpr std::uintptr_t m_nTriCount2                      = 0X052A; // uint16
            static constexpr std::uintptr_t m_nReservedUint8                  = 0X052C; // uint8
            static constexpr std::uintptr_t m_nExtraPressureIterations        = 0X052D; // uint8
            static constexpr std::uintptr_t m_nExtraGoalIterations            = 0X052E; // uint8
            static constexpr std::uintptr_t m_nExtraIterations                = 0X052F; // uint8
            static constexpr std::uintptr_t m_SDFRigids                       = 0X0530; // CUtlVector<FeSDFRigid_t>
            static constexpr std::uintptr_t m_BoxRigids                       = 0X0548; // CUtlVector<FeBoxRigid_t>
            static constexpr std::uintptr_t m_DynNodeVertexSet                = 0X0560; // CUtlVector<uint8>
            static constexpr std::uintptr_t m_VertexSetNames                  = 0X0578; // CUtlVector<uint32>
            static constexpr std::uintptr_t m_RigidColliderPriorities         = 0X0590; // CUtlVector<FeRigidColliderIndices_t>
            static constexpr std::uintptr_t m_MorphLayers                     = 0X05A8; // CUtlVector<FeMorphLayerDepr_t>
            static constexpr std::uintptr_t m_MorphSetData                    = 0X05C0; // CUtlVector<uint8>
            static constexpr std::uintptr_t m_VertexMaps                      = 0X05D8; // CUtlVector<FeVertexMapDesc_t>
            static constexpr std::uintptr_t m_VertexMapValues                 = 0X05F0; // CUtlVector<uint8>
            static constexpr std::uintptr_t m_Effects                         = 0X0608; // CUtlVector<FeEffectDesc_t>
            static constexpr std::uintptr_t m_LockToParent                    = 0X0620; // CUtlVector<FeCtrlOffset_t>
            static constexpr std::uintptr_t m_LockToGoal                      = 0X0638; // CUtlVector<uint16>
            static constexpr std::uintptr_t m_SkelParents                     = 0X0650; // CUtlVector<int16>
            static constexpr std::uintptr_t m_DynNodeWindBases                = 0X0668; // CUtlVector<FeNodeWindBase_t>
            static constexpr std::uintptr_t m_SelfCollisionLayers             = 0X0680; // CUtlVector<FeModelSelfCollisionLayer_t>
            static constexpr std::uintptr_t m_flInternalPressure              = 0X0698; // float32
            static constexpr std::uintptr_t m_flDefaultTimeDilation           = 0X069C; // float32
            static constexpr std::uintptr_t m_flWindage                       = 0X06A0; // float32
            static constexpr std::uintptr_t m_flWindDrag                      = 0X06A4; // float32
            static constexpr std::uintptr_t m_flDefaultSurfaceStretch         = 0X06A8; // float32
            static constexpr std::uintptr_t m_flDefaultThreadStretch          = 0X06AC; // float32
            static constexpr std::uintptr_t m_flDefaultGravityScale           = 0X06B0; // float32
            static constexpr std::uintptr_t m_flDefaultVelAirDrag             = 0X06B4; // float32
            static constexpr std::uintptr_t m_flDefaultExpAirDrag             = 0X06B8; // float32
            static constexpr std::uintptr_t m_flDefaultVelQuadAirDrag         = 0X06BC; // float32
            static constexpr std::uintptr_t m_flDefaultExpQuadAirDrag         = 0X06C0; // float32
            static constexpr std::uintptr_t m_flRodVelocitySmoothRate         = 0X06C4; // float32
            static constexpr std::uintptr_t m_flQuadVelocitySmoothRate        = 0X06C8; // float32
            static constexpr std::uintptr_t m_flAddWorldCollisionRadius       = 0X06CC; // float32
            static constexpr std::uintptr_t m_flDefaultVolumetricSolveAmount  = 0X06D0; // float32
            static constexpr std::uintptr_t m_flMotionSmoothCDT               = 0X06D4; // float32
            static constexpr std::uintptr_t m_flLocalDrag1                    = 0X06D8; // float32
            static constexpr std::uintptr_t m_nRodVelocitySmoothIterations    = 0X06DC; // uint16
            static constexpr std::uintptr_t m_nQuadVelocitySmoothIterations   = 0X06DE; // uint16
        };

        // Construct Allowed
        struct RnMeshDesc_t : public RnShapeDesc_t {
        public:
            static constexpr std::uintptr_t m_Mesh = 0X0018; // RnMesh_t
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct RnSoftbodySpring_t {
        public:
            static constexpr std::uintptr_t m_nParticle = 0X0000; // uint16[2]
            static constexpr std::uintptr_t m_flLength  = 0X0004; // float32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct RnSoftbodyCapsule_t {
        public:
            static constexpr std::uintptr_t m_vCenter   = 0X0000; // Vector[2]
            static constexpr std::uintptr_t m_flRadius  = 0X0018; // float32
            static constexpr std::uintptr_t m_nParticle = 0X001C; // uint16[2]
        };

        // Construct Allowed
        struct RnBodyDesc_t {
        public:
            static constexpr std::uintptr_t m_sDebugName                        = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_vPosition                         = 0X0008; // Vector
            static constexpr std::uintptr_t m_qOrientation                      = 0X0014; // QuaternionStorage
            static constexpr std::uintptr_t m_vLinearVelocity                   = 0X0024; // Vector
            static constexpr std::uintptr_t m_vAngularVelocity                  = 0X0030; // Vector
            static constexpr std::uintptr_t m_vLocalMassCenter                  = 0X003C; // Vector
            static constexpr std::uintptr_t m_LocalInertiaInv                   = 0X0048; // Vector[3]
            static constexpr std::uintptr_t m_flMassInv                         = 0X006C; // float32
            static constexpr std::uintptr_t m_flGameMass                        = 0X0070; // float32
            static constexpr std::uintptr_t m_flMassScaleInv                    = 0X0074; // float32
            static constexpr std::uintptr_t m_flInertiaScaleInv                 = 0X0078; // float32
            static constexpr std::uintptr_t m_flLinearDamping                   = 0X007C; // float32
            static constexpr std::uintptr_t m_flAngularDamping                  = 0X0080; // float32
            static constexpr std::uintptr_t m_flLinearDragScale                 = 0X0084; // float32
            static constexpr std::uintptr_t m_flAngularDragScale                = 0X0088; // float32
            static constexpr std::uintptr_t m_flLinearFluidDragScale            = 0X008C; // float32
            static constexpr std::uintptr_t m_flAngularFluidDragScale           = 0X0090; // float32
            static constexpr std::uintptr_t m_vLastAwakeForceAccum              = 0X0094; // Vector
            static constexpr std::uintptr_t m_vLastAwakeTorqueAccum             = 0X00A0; // Vector
            static constexpr std::uintptr_t m_flBuoyancyScale                   = 0X00AC; // float32
            static constexpr std::uintptr_t m_flGravityScale                    = 0X00B0; // float32
            static constexpr std::uintptr_t m_flTimeScale                       = 0X00B4; // float32
            static constexpr std::uintptr_t m_nBodyType                         = 0X00B8; // int32
            static constexpr std::uintptr_t m_nGameIndex                        = 0X00BC; // uint32
            static constexpr std::uintptr_t m_nGameFlags                        = 0X00C0; // uint32
            static constexpr std::uintptr_t m_nMinVelocityIterations            = 0X00C4; // int8
            static constexpr std::uintptr_t m_nMinPositionIterations            = 0X00C5; // int8
            static constexpr std::uintptr_t m_nMassPriority                     = 0X00C6; // int8
            static constexpr std::uintptr_t m_bEnabled                          = 0X00C7; // bool
            static constexpr std::uintptr_t m_bSleeping                         = 0X00C8; // bool
            static constexpr std::uintptr_t m_bIsContinuousEnabled              = 0X00C9; // bool
            static constexpr std::uintptr_t m_bDragEnabled                      = 0X00CA; // bool
            static constexpr std::uintptr_t m_vGravity                          = 0X00CC; // Vector
            static constexpr std::uintptr_t m_bSpeculativeEnabled               = 0X00D8; // bool
            static constexpr std::uintptr_t m_bHasShadowController              = 0X00D9; // bool
            static constexpr std::uintptr_t m_nDynamicContinuousContactBehavior = 0X00DA; // DynamicContinuousContactBehavior_t
        };

        // Construct Allowed
        struct vphysics_save_cphysicsbody_t : public RnBodyDesc_t {
        public:
            static constexpr std::uintptr_t m_nOldPointer = 0X00E0; // uint64
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeBoxRigid_t {
        public:
            static constexpr std::uintptr_t tmFrame2        = 0X0000; // CTransform
            static constexpr std::uintptr_t nNode           = 0X0020; // uint16
            static constexpr std::uintptr_t nCollisionMask  = 0X0022; // uint16
            static constexpr std::uintptr_t vSize           = 0X0024; // Vector
            static constexpr std::uintptr_t nVertexMapIndex = 0X0030; // uint16
            static constexpr std::uintptr_t nFlags          = 0X0032; // uint16
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeBuildBoxRigid_t : public FeBoxRigid_t {
        public:
            static constexpr std::uintptr_t m_nPriority            = 0X0040; // int32
            static constexpr std::uintptr_t m_nVertexMapHash       = 0X0044; // uint32
            static constexpr std::uintptr_t m_nAntitunnelGroupBits = 0X0048; // uint32
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CFeIndexedJiggleBone {
        public:
            static constexpr std::uintptr_t m_nNode         = 0X0000; // uint32
            static constexpr std::uintptr_t m_nJiggleParent = 0X0004; // uint32
            static constexpr std::uintptr_t m_jiggleBone    = 0X0008; // CFeJiggleBone
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct FeBandBendLimit_t {
        public:
            static constexpr std::uintptr_t flDistMin = 0X0000; // float32
            static constexpr std::uintptr_t flDistMax = 0X0004; // float32
            static constexpr std::uintptr_t nNode     = 0X0008; // uint16[6]
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeTaperedCapsuleStretch_t {
        public:
            static constexpr std::uintptr_t nNode          = 0X0000; // uint16[2]
            static constexpr std::uintptr_t nCollisionMask = 0X0004; // uint16
            static constexpr std::uintptr_t nDummy         = 0X0006; // uint16
            static constexpr std::uintptr_t flRadius       = 0X0008; // float32[2]
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        struct constraint_axislimit_t {
        public:
            static constexpr std::uintptr_t flMinRotation         = 0X0000; // float32
            static constexpr std::uintptr_t flMaxRotation         = 0X0004; // float32
            static constexpr std::uintptr_t flMotorTargetAngSpeed = 0X0008; // float32
            static constexpr std::uintptr_t flMotorMaxTorque      = 0X000C; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeSimdRodConstraintAnim_t {
        public:
            static constexpr std::uintptr_t nNode              = 0X0000; // uint16[4][2]
            static constexpr std::uintptr_t f4Weight0          = 0X0010; // fltx4
            static constexpr std::uintptr_t f4RelaxationFactor = 0X0020; // fltx4
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeSimdRodConstraint_t {
        public:
            static constexpr std::uintptr_t nNode              = 0X0000; // uint16[4][2]
            static constexpr std::uintptr_t f4MaxDist          = 0X0010; // fltx4
            static constexpr std::uintptr_t f4MinDist          = 0X0020; // fltx4
            static constexpr std::uintptr_t f4Weight0          = 0X0030; // fltx4
            static constexpr std::uintptr_t f4RelaxationFactor = 0X0040; // fltx4
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        struct constraint_hingeparams_t {
        public:
            static constexpr std::uintptr_t worldPosition      = 0X0000; // Vector
            static constexpr std::uintptr_t worldAxisDirection = 0X000C; // Vector
            static constexpr std::uintptr_t hingeAxis          = 0X0018; // constraint_axislimit_t
            static constexpr std::uintptr_t constraint         = 0X0028; // constraint_breakableparams_t
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeSphereRigid_t {
        public:
            static constexpr std::uintptr_t vSphere         = 0X0000; // fltx4
            static constexpr std::uintptr_t nNode           = 0X0010; // uint16
            static constexpr std::uintptr_t nCollisionMask  = 0X0012; // uint16
            static constexpr std::uintptr_t nVertexMapIndex = 0X0014; // uint16
            static constexpr std::uintptr_t nFlags          = 0X0016; // uint16
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeBuildSphereRigid_t : public FeSphereRigid_t {
        public:
            static constexpr std::uintptr_t m_nPriority            = 0X0020; // int32
            static constexpr std::uintptr_t m_nVertexMapHash       = 0X0024; // uint32
            static constexpr std::uintptr_t m_nAntitunnelGroupBits = 0X0028; // uint32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeSimdAnimStrayRadius_t {
        public:
            static constexpr std::uintptr_t nNode              = 0X0000; // uint16[4][2]
            static constexpr std::uintptr_t flMaxDist          = 0X0010; // fltx4
            static constexpr std::uintptr_t flRelaxationFactor = 0X0020; // fltx4
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct RnTriangle_t {
        public:
            static constexpr std::uintptr_t m_nIndex = 0X0000; // int32[3]
        };

        // Construct Allowed
        struct FeProxyVertexMap_t {
        public:
            static constexpr std::uintptr_t m_Name     = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_flWeight = 0X0008; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeNodeIntegrator_t {
        public:
            static constexpr std::uintptr_t flPointDamping              = 0X0000; // float32
            static constexpr std::uintptr_t flAnimationForceAttraction  = 0X0004; // float32
            static constexpr std::uintptr_t flAnimationVertexAttraction = 0X0008; // float32
            static constexpr std::uintptr_t flGravity                   = 0X000C; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct RnCapsule_t {
        public:
            static constexpr std::uintptr_t m_vCenter  = 0X0000; // Vector[2]
            static constexpr std::uintptr_t m_flRadius = 0X0018; // float32
        };

        // Construct Allowed
        class CFeNamedJiggleBone {
        public:
            static constexpr std::uintptr_t m_strParentBone = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_transform     = 0X0010; // CTransform
            static constexpr std::uintptr_t m_nJiggleParent = 0X0030; // uint32
            static constexpr std::uintptr_t m_jiggleBone    = 0X0034; // CFeJiggleBone
        };

        // Construct Allowed
        struct FeAntiTunnelProbeBuild_t {
        public:
            static constexpr std::uintptr_t flWeight             = 0X0000; // float32
            static constexpr std::uintptr_t flActivationDistance = 0X0004; // float32
            static constexpr std::uintptr_t flBias               = 0X0008; // float32
            static constexpr std::uintptr_t flCurvature          = 0X000C; // float32
            static constexpr std::uintptr_t nFlags               = 0X0010; // uint32
            static constexpr std::uintptr_t nProbeNode           = 0X0014; // uint16
            static constexpr std::uintptr_t targetNodes          = 0X0018; // CUtlVector<uint16>
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct OldFeEdge_t {
        public:
            static constexpr std::uintptr_t m_flK               = 0X0000; // float32[3]
            static constexpr std::uintptr_t invA                = 0X000C; // float32
            static constexpr std::uintptr_t t                   = 0X0010; // float32
            static constexpr std::uintptr_t flThetaRelaxed      = 0X0014; // float32
            static constexpr std::uintptr_t flThetaFactor       = 0X0018; // float32
            static constexpr std::uintptr_t c01                 = 0X001C; // float32
            static constexpr std::uintptr_t c02                 = 0X0020; // float32
            static constexpr std::uintptr_t c03                 = 0X0024; // float32
            static constexpr std::uintptr_t c04                 = 0X0028; // float32
            static constexpr std::uintptr_t flAxialModelDist    = 0X002C; // float32
            static constexpr std::uintptr_t flAxialModelWeights = 0X0030; // float32[4]
            static constexpr std::uintptr_t m_nNode             = 0X0040; // uint16[4]
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeFollowNode_t {
        public:
            static constexpr std::uintptr_t nParentNode = 0X0000; // uint16
            static constexpr std::uintptr_t nChildNode  = 0X0002; // uint16
            static constexpr std::uintptr_t flWeight    = 0X0004; // float32
        };

        // Construct Allowed
        struct RnMesh_t {
        public:
            static constexpr std::uintptr_t m_vMin               = 0X0000; // Vector
            static constexpr std::uintptr_t m_vMax               = 0X000C; // Vector
            static constexpr std::uintptr_t m_Nodes              = 0X0018; // CUtlVector<RnNode_t>
            static constexpr std::uintptr_t m_Vertices           = 0X0030; // CUtlVectorSIMDPaddedVector
            static constexpr std::uintptr_t m_Triangles          = 0X0048; // CUtlVector<RnTriangle_t>
            static constexpr std::uintptr_t m_Wings              = 0X0060; // CUtlVector<RnWing_t>
            static constexpr std::uintptr_t m_TriangleEdgeFlags  = 0X0078; // CUtlVector<uint8>
            static constexpr std::uintptr_t m_Materials          = 0X0090; // CUtlVector<uint8>
            static constexpr std::uintptr_t m_vOrthographicAreas = 0X00A8; // Vector
            static constexpr std::uintptr_t m_nFlags             = 0X00B4; // uint32
            static constexpr std::uintptr_t m_nDebugFlags        = 0X00B8; // uint32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        struct VertexPositionNormal_t {
        public:
            static constexpr std::uintptr_t m_vPosition = 0X0000; // Vector
            static constexpr std::uintptr_t m_vNormal   = 0X000C; // Vector
        };

        // Construct Allowed
        struct FeSDFRigid_t {
        public:
            static constexpr std::uintptr_t vLocalMin       = 0X0000; // Vector
            static constexpr std::uintptr_t vLocalMax       = 0X000C; // Vector
            static constexpr std::uintptr_t flBounciness    = 0X0018; // float32
            static constexpr std::uintptr_t nNode           = 0X001C; // uint16
            static constexpr std::uintptr_t nCollisionMask  = 0X001E; // uint16
            static constexpr std::uintptr_t nVertexMapIndex = 0X0020; // uint16
            static constexpr std::uintptr_t nFlags          = 0X0022; // uint16
            static constexpr std::uintptr_t m_Distances     = 0X0028; // CUtlVector<float32>
            static constexpr std::uintptr_t m_nWidth        = 0X0040; // int32
            static constexpr std::uintptr_t m_nHeight       = 0X0044; // int32
            static constexpr std::uintptr_t m_nDepth        = 0X0048; // int32
        };

        // Construct Allowed
        struct FeBuildSDFRigid_t : public FeSDFRigid_t {
        public:
            static constexpr std::uintptr_t m_nPriority            = 0X0050; // int32
            static constexpr std::uintptr_t m_nVertexMapHash       = 0X0054; // uint32
            static constexpr std::uintptr_t m_nAntitunnelGroupBits = 0X0058; // uint32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct RnBlendVertex_t {
        public:
            static constexpr std::uintptr_t m_nWeight0     = 0X0000; // uint16
            static constexpr std::uintptr_t m_nIndex0      = 0X0002; // uint16
            static constexpr std::uintptr_t m_nWeight1     = 0X0004; // uint16
            static constexpr std::uintptr_t m_nIndex1      = 0X0006; // uint16
            static constexpr std::uintptr_t m_nWeight2     = 0X0008; // uint16
            static constexpr std::uintptr_t m_nIndex2      = 0X000A; // uint16
            static constexpr std::uintptr_t m_nFlags       = 0X000C; // uint16
            static constexpr std::uintptr_t m_nTargetIndex = 0X000E; // uint16
        };

        // Construct Allowed
        class CFeMorphLayer {
        public:
            static constexpr std::uintptr_t m_Name         = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_nNameHash    = 0X0008; // uint32
            static constexpr std::uintptr_t m_Nodes        = 0X0010; // CUtlVector<uint16>
            static constexpr std::uintptr_t m_InitPos      = 0X0028; // CUtlVector<Vector>
            static constexpr std::uintptr_t m_Gravity      = 0X0040; // CUtlVector<float32>
            static constexpr std::uintptr_t m_GoalStrength = 0X0058; // CUtlVector<float32>
            static constexpr std::uintptr_t m_GoalDamping  = 0X0070; // CUtlVector<float32>
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeCtrlSoftOffset_t {
        public:
            static constexpr std::uintptr_t nCtrlParent = 0X0000; // uint16
            static constexpr std::uintptr_t nCtrlChild  = 0X0002; // uint16
            static constexpr std::uintptr_t vOffset     = 0X0004; // Vector
            static constexpr std::uintptr_t flAlpha     = 0X0010; // float32
        };

        // Construct Allowed
        struct FeVertexMapDesc_t {
        public:
            static constexpr std::uintptr_t sName                     = 0X0000; // CUtlString
            static constexpr std::uintptr_t nNameHash                 = 0X0008; // uint32
            static constexpr std::uintptr_t nColor                    = 0X000C; // uint32
            static constexpr std::uintptr_t nFlags                    = 0X0010; // uint32
            static constexpr std::uintptr_t nVertexBase               = 0X0014; // uint16
            static constexpr std::uintptr_t nVertexCount              = 0X0016; // uint16
            static constexpr std::uintptr_t nMapOffset                = 0X0018; // uint32
            static constexpr std::uintptr_t nNodeListOffset           = 0X001C; // uint32
            static constexpr std::uintptr_t vCenterOfMass             = 0X0020; // Vector
            static constexpr std::uintptr_t flVolumetricSolveStrength = 0X002C; // float32
            static constexpr std::uintptr_t nScaleSourceNode          = 0X0030; // int16
            static constexpr std::uintptr_t nNodeListCount            = 0X0032; // uint16
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeTaperedCapsuleRigid_t {
        public:
            static constexpr std::uintptr_t vSphere         = 0X0000; // fltx4[2]
            static constexpr std::uintptr_t nNode           = 0X0020; // uint16
            static constexpr std::uintptr_t nCollisionMask  = 0X0022; // uint16
            static constexpr std::uintptr_t nVertexMapIndex = 0X0024; // uint16
            static constexpr std::uintptr_t nFlags          = 0X0026; // uint16
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeAnimStrayRadius_t {
        public:
            static constexpr std::uintptr_t nNode              = 0X0000; // uint16[2]
            static constexpr std::uintptr_t flMaxDist          = 0X0004; // float32
            static constexpr std::uintptr_t flRelaxationFactor = 0X0008; // float32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct FeEdgeDesc_t {
        public:
            static constexpr std::uintptr_t nEdge     = 0X0000; // uint16[2]
            static constexpr std::uintptr_t nSide     = 0X0004; // uint16[2][2]
            static constexpr std::uintptr_t nVirtElem = 0X000C; // uint16[2]
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeNodeStrayBox_t {
        public:
            static constexpr std::uintptr_t vMin   = 0X0000; // Vector
            static constexpr std::uintptr_t nFlags = 0X000C; // uint32
            static constexpr std::uintptr_t vMax   = 0X0010; // Vector
            static constexpr std::uintptr_t nNode  = 0X001C; // uint16[2]
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeNodeReverseOffset_t {
        public:
            static constexpr std::uintptr_t vOffset     = 0X0000; // Vector
            static constexpr std::uintptr_t nBoneCtrl   = 0X000C; // uint16
            static constexpr std::uintptr_t nTargetNode = 0X000E; // uint16
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct RnPlane_t {
        public:
            static constexpr std::uintptr_t m_vNormal  = 0X0000; // Vector
            static constexpr std::uintptr_t m_flOffset = 0X000C; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CFeJiggleBone {
        public:
            static constexpr std::uintptr_t m_nFlags                = 0X0000; // uint32
            static constexpr std::uintptr_t m_flLength              = 0X0004; // float32
            static constexpr std::uintptr_t m_flTipMass             = 0X0008; // float32
            static constexpr std::uintptr_t m_flYawStiffness        = 0X000C; // float32
            static constexpr std::uintptr_t m_flYawDamping          = 0X0010; // float32
            static constexpr std::uintptr_t m_flPitchStiffness      = 0X0014; // float32
            static constexpr std::uintptr_t m_flPitchDamping        = 0X0018; // float32
            static constexpr std::uintptr_t m_flAlongStiffness      = 0X001C; // float32
            static constexpr std::uintptr_t m_flAlongDamping        = 0X0020; // float32
            static constexpr std::uintptr_t m_flAngleLimit          = 0X0024; // float32
            static constexpr std::uintptr_t m_flMinYaw              = 0X0028; // float32
            static constexpr std::uintptr_t m_flMaxYaw              = 0X002C; // float32
            static constexpr std::uintptr_t m_flYawFriction         = 0X0030; // float32
            static constexpr std::uintptr_t m_flYawBounce           = 0X0034; // float32
            static constexpr std::uintptr_t m_flMinPitch            = 0X0038; // float32
            static constexpr std::uintptr_t m_flMaxPitch            = 0X003C; // float32
            static constexpr std::uintptr_t m_flPitchFriction       = 0X0040; // float32
            static constexpr std::uintptr_t m_flPitchBounce         = 0X0044; // float32
            static constexpr std::uintptr_t m_flBaseMass            = 0X0048; // float32
            static constexpr std::uintptr_t m_flBaseStiffness       = 0X004C; // float32
            static constexpr std::uintptr_t m_flBaseDamping         = 0X0050; // float32
            static constexpr std::uintptr_t m_flBaseMinLeft         = 0X0054; // float32
            static constexpr std::uintptr_t m_flBaseMaxLeft         = 0X0058; // float32
            static constexpr std::uintptr_t m_flBaseLeftFriction    = 0X005C; // float32
            static constexpr std::uintptr_t m_flBaseMinUp           = 0X0060; // float32
            static constexpr std::uintptr_t m_flBaseMaxUp           = 0X0064; // float32
            static constexpr std::uintptr_t m_flBaseUpFriction      = 0X0068; // float32
            static constexpr std::uintptr_t m_flBaseMinForward      = 0X006C; // float32
            static constexpr std::uintptr_t m_flBaseMaxForward      = 0X0070; // float32
            static constexpr std::uintptr_t m_flBaseForwardFriction = 0X0074; // float32
            static constexpr std::uintptr_t m_flRadius0             = 0X0078; // float32
            static constexpr std::uintptr_t m_flRadius1             = 0X007C; // float32
            static constexpr std::uintptr_t m_vPoint0               = 0X0080; // Vector
            static constexpr std::uintptr_t m_vPoint1               = 0X008C; // Vector
            static constexpr std::uintptr_t m_nCollisionMask        = 0X0098; // uint16
        };

        // Construct Allowed
        class CRegionSVM {
        public:
            static constexpr std::uintptr_t m_Planes = 0X0000; // CUtlVector<RnPlane_t>
            static constexpr std::uintptr_t m_Nodes  = 0X0018; // CUtlVector<uint32>
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeWorldCollisionParams_t {
        public:
            static constexpr std::uintptr_t flWorldFriction  = 0X0000; // float32
            static constexpr std::uintptr_t flGroundFriction = 0X0004; // float32
            static constexpr std::uintptr_t nListBegin       = 0X0008; // uint16
            static constexpr std::uintptr_t nListEnd         = 0X000A; // uint16
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct RnNode_t {
        public:
            static constexpr std::uintptr_t m_vMin            = 0X0000; // Vector
            static constexpr std::uintptr_t m_nChildren       = 0X000C; // uint32
            static constexpr std::uintptr_t m_vMax            = 0X0010; // Vector
            static constexpr std::uintptr_t m_nTriangleOffset = 0X001C; // uint32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeFitMatrix_t {
        public:
            static constexpr std::uintptr_t bone          = 0X0000; // CTransform
            static constexpr std::uintptr_t vCenter       = 0X0020; // Vector
            static constexpr std::uintptr_t nEnd          = 0X002C; // uint16
            static constexpr std::uintptr_t nNode         = 0X002E; // uint16
            static constexpr std::uintptr_t nBeginDynamic = 0X0030; // uint16
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeSimdQuad_t {
        public:
            static constexpr std::uintptr_t nNode     = 0X0000; // uint16[4][4]
            static constexpr std::uintptr_t f4Slack   = 0X0020; // fltx4
            static constexpr std::uintptr_t vShape    = 0X0030; // FourVectors[4]
            static constexpr std::uintptr_t f4Weights = 0X00F0; // fltx4[4]
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeSimdSpringIntegrator_t {
        public:
            static constexpr std::uintptr_t nNode              = 0X0000; // uint16[4][2]
            static constexpr std::uintptr_t flSpringRestLength = 0X0010; // fltx4
            static constexpr std::uintptr_t flSpringConstant   = 0X0020; // fltx4
            static constexpr std::uintptr_t flSpringDamping    = 0X0030; // fltx4
            static constexpr std::uintptr_t flNodeWeight0      = 0X0040; // fltx4
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeSimdNodeBase_t {
        public:
            static constexpr std::uintptr_t nNode   = 0X0000; // uint16[4]
            static constexpr std::uintptr_t nNodeX0 = 0X0008; // uint16[4]
            static constexpr std::uintptr_t nNodeX1 = 0X0010; // uint16[4]
            static constexpr std::uintptr_t nNodeY0 = 0X0018; // uint16[4]
            static constexpr std::uintptr_t nNodeY1 = 0X0020; // uint16[4]
            static constexpr std::uintptr_t nDummy  = 0X0028; // uint16[4]
            static constexpr std::uintptr_t qAdjust = 0X0030; // FourQuaternions
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeQuad_t {
        public:
            static constexpr std::uintptr_t nNode   = 0X0000; // uint16[4]
            static constexpr std::uintptr_t flSlack = 0X0008; // float32
            static constexpr std::uintptr_t vShape  = 0X000C; // Vector4D[4]
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeHingeLimit_t {
        public:
            static constexpr std::uintptr_t nNode          = 0X0000; // uint16[6]
            static constexpr std::uintptr_t nFlags         = 0X000C; // uint32
            static constexpr std::uintptr_t flWeight4      = 0X0010; // float32
            static constexpr std::uintptr_t flWeight5      = 0X0014; // float32
            static constexpr std::uintptr_t flAngleCenter  = 0X0018; // float32
            static constexpr std::uintptr_t flAngleExtents = 0X001C; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct RnWing_t {
        public:
            static constexpr std::uintptr_t m_nIndex = 0X0000; // int32[3]
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeWeightedNode_t {
        public:
            static constexpr std::uintptr_t nNode   = 0X0000; // uint16
            static constexpr std::uintptr_t nWeight = 0X0002; // uint16
        };

        // Construct Allowed
        struct CollisionDetailLayerInfo_t {
        public:
            static constexpr std::uintptr_t m_sDescription           = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_sFriendlyName          = 0X0008; // CUtlString
            static constexpr std::uintptr_t m_bIsQueryOnly           = 0X0010; // bool
            static constexpr std::uintptr_t m_sParentDetailLayer     = 0X0018; // CUtlString
            static constexpr std::uintptr_t m_vecSubtreeDetailLayers = 0X0020; // CUtlVector<CollisionDetailLayerInfo_t::Name_t>
            static constexpr std::uintptr_t m_bNotPickable           = 0X0038; // bool
        };

        // Construct Allowed
        struct FeEffectDesc_t {
        public:
            static constexpr std::uintptr_t sName     = 0X0000; // CUtlString
            static constexpr std::uintptr_t nNameHash = 0X0008; // uint32
            static constexpr std::uintptr_t nType     = 0X000C; // int32
            static constexpr std::uintptr_t m_Params  = 0X0010; // KeyValues3
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeSpringIntegrator_t {
        public:
            static constexpr std::uintptr_t nNode              = 0X0000; // uint16[2]
            static constexpr std::uintptr_t flSpringRestLength = 0X0004; // float32
            static constexpr std::uintptr_t flSpringConstant   = 0X0008; // float32
            static constexpr std::uintptr_t flSpringDamping    = 0X000C; // float32
            static constexpr std::uintptr_t flNodeWeight0      = 0X0010; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        class FourVectors2D {
        public:
            static constexpr std::uintptr_t x = 0X0000; // fltx4
            static constexpr std::uintptr_t y = 0X0010; // fltx4
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeKelagerBend2_t {
        public:
            static constexpr std::uintptr_t flWeight  = 0X0000; // float32[3]
            static constexpr std::uintptr_t flHeight0 = 0X000C; // float32
            static constexpr std::uintptr_t nNode     = 0X0010; // uint16[3]
            static constexpr std::uintptr_t nReserved = 0X0016; // uint16
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct CastSphereSATParams_t {
        public:
            static constexpr std::uintptr_t m_vRayStart     = 0X0000; // Vector
            static constexpr std::uintptr_t m_vRayDelta     = 0X000C; // Vector
            static constexpr std::uintptr_t m_flRadius      = 0X0018; // float32
            static constexpr std::uintptr_t m_flMaxFraction = 0X001C; // float32
            static constexpr std::uintptr_t m_flScale       = 0X0020; // float32
            static constexpr std::uintptr_t m_pHull         = 0X0028; // RnHull_t*
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeRigidColliderIndices_t {
        public:
            static constexpr std::uintptr_t m_nTaperedCapsuleRigidIndex = 0X0000; // uint16
            static constexpr std::uintptr_t m_nSphereRigidIndex         = 0X0002; // uint16
            static constexpr std::uintptr_t m_nBoxRigidIndex            = 0X0004; // uint16
            static constexpr std::uintptr_t m_nSDFRigidIndex            = 0X0006; // uint16
            static constexpr std::uintptr_t m_nCollisionPlaneIndex      = 0X0008; // uint16
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeCollisionPlane_t {
        public:
            static constexpr std::uintptr_t nCtrlParent = 0X0000; // uint16
            static constexpr std::uintptr_t nChildNode  = 0X0002; // uint16
            static constexpr std::uintptr_t m_Plane     = 0X0004; // RnPlane_t
            static constexpr std::uintptr_t flStrength  = 0X0014; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeStiffHingeBuild_t {
        public:
            static constexpr std::uintptr_t flMaxAngle   = 0X0000; // float32
            static constexpr std::uintptr_t flStrength   = 0X0004; // float32
            static constexpr std::uintptr_t flMotionBias = 0X0008; // float32[3]
            static constexpr std::uintptr_t nNode        = 0X0014; // uint16[3]
        };

        // Construct Allowed
        struct FeMorphLayerDepr_t {
        public:
            static constexpr std::uintptr_t m_Name         = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_nNameHash    = 0X0008; // uint32
            static constexpr std::uintptr_t m_Nodes        = 0X0010; // CUtlVector<uint16>
            static constexpr std::uintptr_t m_InitPos      = 0X0028; // CUtlVector<Vector>
            static constexpr std::uintptr_t m_Gravity      = 0X0040; // CUtlVector<float32>
            static constexpr std::uintptr_t m_GoalStrength = 0X0058; // CUtlVector<float32>
            static constexpr std::uintptr_t m_GoalDamping  = 0X0070; // CUtlVector<float32>
            static constexpr std::uintptr_t m_nFlags       = 0X0088; // uint32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeCtrlOffset_t {
        public:
            static constexpr std::uintptr_t vOffset     = 0X0000; // Vector
            static constexpr std::uintptr_t nCtrlParent = 0X000C; // uint16
            static constexpr std::uintptr_t nCtrlChild  = 0X000E; // uint16
        };

        // Has VTable
        // Is Absract
        class IPhysicsPlayerController {
        public:
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeNodeBase_t {
        public:
            static constexpr std::uintptr_t nNode   = 0X0000; // uint16
            static constexpr std::uintptr_t nDummy  = 0X0002; // uint16[3]
            static constexpr std::uintptr_t nNodeX0 = 0X0008; // uint16
            static constexpr std::uintptr_t nNodeX1 = 0X000A; // uint16
            static constexpr std::uintptr_t nNodeY0 = 0X000C; // uint16
            static constexpr std::uintptr_t nNodeY1 = 0X000E; // uint16
            static constexpr std::uintptr_t qAdjust = 0X0010; // QuaternionStorage
        };

        // Construct Allowed
        struct FeVertexMapBuild_t {
        public:
            static constexpr std::uintptr_t m_VertexMapName             = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_nNameHash                 = 0X0008; // uint32
            static constexpr std::uintptr_t m_Color                     = 0X000C; // Color
            static constexpr std::uintptr_t m_flVolumetricSolveStrength = 0X0010; // float32
            static constexpr std::uintptr_t m_nScaleSourceNode          = 0X0014; // int32
            static constexpr std::uintptr_t m_Weights                   = 0X0018; // CUtlVector<float32>
        };

        // Construct Allowed
        class CFeVertexMapBuildArray {
        public:
            static constexpr std::uintptr_t m_Array = 0X0000; // CUtlVector<FeVertexMapBuild_t*>
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeTri_t {
        public:
            static constexpr std::uintptr_t nNode = 0X0000; // uint16[3]
            static constexpr std::uintptr_t w1    = 0X0008; // float32
            static constexpr std::uintptr_t w2    = 0X000C; // float32
            static constexpr std::uintptr_t v1x   = 0X0010; // float32
            static constexpr std::uintptr_t v2    = 0X0014; // Vector2D
        };

        // Construct Allowed
        struct RnHull_t {
        public:
            static constexpr std::uintptr_t m_vCentroid          = 0X0000; // Vector
            static constexpr std::uintptr_t m_flMaxAngularRadius = 0X000C; // float32
            static constexpr std::uintptr_t m_Bounds             = 0X0010; // AABB_t
            static constexpr std::uintptr_t m_vOrthographicAreas = 0X0028; // Vector
            static constexpr std::uintptr_t m_MassProperties     = 0X0034; // matrix3x4_t
            static constexpr std::uintptr_t m_flVolume           = 0X0064; // float32
            static constexpr std::uintptr_t m_flSurfaceArea      = 0X0068; // float32
            static constexpr std::uintptr_t m_Vertices           = 0X0070; // CUtlVector<RnVertex_t>
            static constexpr std::uintptr_t m_VertexPositions    = 0X0088; // CUtlVector<Vector>
            static constexpr std::uintptr_t m_Edges              = 0X00A0; // CUtlVector<RnHalfEdge_t>
            static constexpr std::uintptr_t m_Faces              = 0X00B8; // CUtlVector<RnFace_t>
            static constexpr std::uintptr_t m_FacePlanes         = 0X00D0; // CUtlVector<RnPlane_t>
            static constexpr std::uintptr_t m_nFlags             = 0X00E8; // uint32
            static constexpr std::uintptr_t m_pRegionSVM         = 0X00F0; // CRegionSVM*
        };

        // Construct Allowed
        struct FeModelSelfCollisionLayer_t {
        public:
            static constexpr std::uintptr_t m_Name             = 0X0000; // CUtlString
            static constexpr std::uintptr_t m_Nodes            = 0X0008; // CUtlVector<uint16>
            static constexpr std::uintptr_t m_flParentReaction = 0X0020; // float32
            static constexpr std::uintptr_t m_nFlags           = 0X0024; // uint32
            static constexpr std::uintptr_t m_nEndIdx          = 0X0028; // uint32[4]
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeAntiTunnelGroupBuild_t {
        public:
            static constexpr std::uintptr_t m_nVertexMapHash = 0X0000; // uint32
            static constexpr std::uintptr_t m_nCollisionMask = 0X0004; // uint32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        class CovMatrix3 {
        public:
            static constexpr std::uintptr_t m_vDiag = 0X0000; // Vector
            static constexpr std::uintptr_t m_flXY  = 0X000C; // float32
            static constexpr std::uintptr_t m_flXZ  = 0X0010; // float32
            static constexpr std::uintptr_t m_flYZ  = 0X0014; // float32
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct PhysicsParticleId_t {
        public:
            static constexpr std::uintptr_t m_Value = 0X0000; // uint32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct RnVertex_t {
        public:
            static constexpr std::uintptr_t m_nEdge = 0X0000; // uint8
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct Dop26_t {
        public:
            static constexpr std::uintptr_t m_flSupport = 0X0000; // float32[26]
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct FeDynKinLink_t {
        public:
            static constexpr std::uintptr_t m_nParent = 0X0000; // uint16
            static constexpr std::uintptr_t m_nChild  = 0X0002; // uint16
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct RnFace_t {
        public:
            static constexpr std::uintptr_t m_nEdge = 0X0000; // uint8
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeCtrlOsOffset_t {
        public:
            static constexpr std::uintptr_t nCtrlParent = 0X0000; // uint16
            static constexpr std::uintptr_t nCtrlChild  = 0X0002; // uint16
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeAntiTunnelProbe_t {
        public:
            static constexpr std::uintptr_t flWeight             = 0X0000; // float32
            static constexpr std::uintptr_t nFlags               = 0X0004; // uint32
            static constexpr std::uintptr_t nProbeNode           = 0X0008; // uint16
            static constexpr std::uintptr_t nCount               = 0X000A; // uint16
            static constexpr std::uintptr_t nBegin               = 0X000C; // uint32
            static constexpr std::uintptr_t flActivationDistance = 0X0010; // float32
            static constexpr std::uintptr_t flCurvatureRadius    = 0X0014; // float32
            static constexpr std::uintptr_t flBias               = 0X0018; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeSourceEdge_t {
        public:
            static constexpr std::uintptr_t nNode = 0X0000; // uint16[2]
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeTwistConstraint_t {
        public:
            static constexpr std::uintptr_t nNodeOrient  = 0X0000; // uint16
            static constexpr std::uintptr_t nNodeEnd     = 0X0002; // uint16
            static constexpr std::uintptr_t flTwistRelax = 0X0004; // float32
            static constexpr std::uintptr_t flSwingRelax = 0X0008; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeNodeWindBase_t {
        public:
            static constexpr std::uintptr_t nNodeX0 = 0X0000; // uint16
            static constexpr std::uintptr_t nNodeX1 = 0X0002; // uint16
            static constexpr std::uintptr_t nNodeY0 = 0X0004; // uint16
            static constexpr std::uintptr_t nNodeY1 = 0X0006; // uint16
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeAxialEdgeBend_t {
        public:
            static constexpr std::uintptr_t te       = 0X0000; // float32
            static constexpr std::uintptr_t tv       = 0X0004; // float32
            static constexpr std::uintptr_t flDist   = 0X0008; // float32
            static constexpr std::uintptr_t flWeight = 0X000C; // float32[4]
            static constexpr std::uintptr_t nNode    = 0X001C; // uint16[6]
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        class FourCovMatrices3 {
        public:
            static constexpr std::uintptr_t m_vDiag = 0X0000; // FourVectors
            static constexpr std::uintptr_t m_flXY  = 0X0030; // fltx4
            static constexpr std::uintptr_t m_flXZ  = 0X0040; // fltx4
            static constexpr std::uintptr_t m_flYZ  = 0X0050; // fltx4
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        struct constraint_breakableparams_t {
        public:
            static constexpr std::uintptr_t strength      = 0X0000; // float32
            static constexpr std::uintptr_t forceLimit    = 0X0004; // float32
            static constexpr std::uintptr_t torqueLimit   = 0X0008; // float32
            static constexpr std::uintptr_t bodyMassScale = 0X000C; // float32[2]
            static constexpr std::uintptr_t isActive      = 0X0014; // bool
        };

        // Construct Allowed
        struct CollisionDetailLayerInfo_t__Name_t {
        public:
            static constexpr std::uintptr_t m_nNameToken  = 0X0000; // CUtlStringToken
            static constexpr std::uintptr_t m_sNameString = 0X0008; // CUtlString
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeBuildTaperedCapsuleRigid_t : public FeTaperedCapsuleRigid_t {
        public:
            static constexpr std::uintptr_t m_nPriority            = 0X0030; // int32
            static constexpr std::uintptr_t m_nVertexMapHash       = 0X0034; // uint32
            static constexpr std::uintptr_t m_nAntitunnelGroupBits = 0X0038; // uint32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeSoftParent_t {
        public:
            static constexpr std::uintptr_t nParent = 0X0000; // int32
            static constexpr std::uintptr_t flAlpha = 0X0004; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeTreeChildren_t {
        public:
            static constexpr std::uintptr_t nChild = 0X0000; // uint16[2]
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeRodConstraint_t {
        public:
            static constexpr std::uintptr_t nNode              = 0X0000; // uint16[2]
            static constexpr std::uintptr_t flMaxDist          = 0X0004; // float32
            static constexpr std::uintptr_t flMinDist          = 0X0008; // float32
            static constexpr std::uintptr_t flWeight0          = 0X000C; // float32
            static constexpr std::uintptr_t flRelaxationFactor = 0X0010; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeFitWeight_t {
        public:
            static constexpr std::uintptr_t flWeight = 0X0000; // float32
            static constexpr std::uintptr_t nNode    = 0X0004; // uint16
            static constexpr std::uintptr_t nDummy   = 0X0006; // uint16
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct RnHalfEdge_t {
        public:
            static constexpr std::uintptr_t m_nNext   = 0X0000; // uint8
            static constexpr std::uintptr_t m_nTwin   = 0X0001; // uint8
            static constexpr std::uintptr_t m_nOrigin = 0X0002; // uint8
            static constexpr std::uintptr_t m_nFace   = 0X0003; // uint8
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeSimdTri_t {
        public:
            static constexpr std::uintptr_t nNode = 0X0000; // uint32[4][3]
            static constexpr std::uintptr_t w1    = 0X0030; // fltx4
            static constexpr std::uintptr_t w2    = 0X0040; // fltx4
            static constexpr std::uintptr_t v1x   = 0X0050; // fltx4
            static constexpr std::uintptr_t v2    = 0X0060; // FourVectors2D
        };

        // Has Trivial Destructor
        struct VertexPositionColor_t {
        public:
            static constexpr std::uintptr_t m_vPosition = 0X0000; // Vector
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct FeFitInfluence_t {
        public:
            static constexpr std::uintptr_t nVertexNode = 0X0000; // uint32
            static constexpr std::uintptr_t flWeight    = 0X0004; // float32
            static constexpr std::uintptr_t nMatrixNode = 0X0008; // uint32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeHingeLimitBuild_t {
        public:
            static constexpr std::uintptr_t nNode      = 0X0000; // uint16[6]
            static constexpr std::uintptr_t nFlags     = 0X000C; // uint32
            static constexpr std::uintptr_t flLimitCW  = 0X0010; // float32
            static constexpr std::uintptr_t flLimitCCW = 0X0014; // float32
        };
    }
}

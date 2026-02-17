#pragma once
#include <cstdint>

namespace offsets {
    namespace vphysics2 {
        // Global Type Scope
        enum class JointAxis_t : std::uint32_t {
            JOINT_AXIS_X     = 0x0,
            JOINT_AXIS_Y     = 0x1,
            JOINT_AXIS_Z     = 0x2,
            JOINT_AXIS_COUNT = 0x3
        };

        // Global Type Scope
        enum class JointMotion_t : std::uint32_t {
            JOINT_MOTION_FREE   = 0x0,
            JOINT_MOTION_LOCKED = 0x1,
            JOINT_MOTION_COUNT  = 0x2
        };

        // Global Type Scope
        enum class DynamicContinuousContactBehavior_t : std::uint8_t {
            DYNAMIC_CONTINUOUS_ALLOW_IF_REQUESTED_BY_OTHER_BODY = 0x0,
            DYNAMIC_CONTINUOUS_ALWAYS                           = 0x1,
            DYNAMIC_CONTINUOUS_NEVER                            = 0x2
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        struct constraint_breakableparams_t {
        public:
            static constexpr std::uintptr_t strength      = 0x0000; // float32
            static constexpr std::uintptr_t forceLimit    = 0x0004; // float32
            static constexpr std::uintptr_t torqueLimit   = 0x0008; // float32
            static constexpr std::uintptr_t bodyMassScale = 0x000C; // float32[2]
            static constexpr std::uintptr_t isActive      = 0x0014; // bool
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        struct constraint_axislimit_t {
        public:
            static constexpr std::uintptr_t flMinRotation         = 0x0000; // float32
            static constexpr std::uintptr_t flMaxRotation         = 0x0004; // float32
            static constexpr std::uintptr_t flMotorTargetAngSpeed = 0x0008; // float32
            static constexpr std::uintptr_t flMotorMaxTorque      = 0x000C; // float32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        struct constraint_hingeparams_t {
        public:
            static constexpr std::uintptr_t worldPosition      = 0x0000; // Vector
            static constexpr std::uintptr_t worldAxisDirection = 0x000C; // Vector
            static constexpr std::uintptr_t hingeAxis          = 0x0018; // constraint_axislimit_t
            static constexpr std::uintptr_t constraint         = 0x0028; // constraint_breakableparams_t
        };

        // Has VTable
        // Is Absract
        class IPhysicsPlayerController {
        public:
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CFeJiggleBone {
        public:
            static constexpr std::uintptr_t m_nFlags                = 0x0000; // uint32
            static constexpr std::uintptr_t m_flLength              = 0x0004; // float32
            static constexpr std::uintptr_t m_flTipMass             = 0x0008; // float32
            static constexpr std::uintptr_t m_flYawStiffness        = 0x000C; // float32
            static constexpr std::uintptr_t m_flYawDamping          = 0x0010; // float32
            static constexpr std::uintptr_t m_flPitchStiffness      = 0x0014; // float32
            static constexpr std::uintptr_t m_flPitchDamping        = 0x0018; // float32
            static constexpr std::uintptr_t m_flAlongStiffness      = 0x001C; // float32
            static constexpr std::uintptr_t m_flAlongDamping        = 0x0020; // float32
            static constexpr std::uintptr_t m_flAngleLimit          = 0x0024; // float32
            static constexpr std::uintptr_t m_flMinYaw              = 0x0028; // float32
            static constexpr std::uintptr_t m_flMaxYaw              = 0x002C; // float32
            static constexpr std::uintptr_t m_flYawFriction         = 0x0030; // float32
            static constexpr std::uintptr_t m_flYawBounce           = 0x0034; // float32
            static constexpr std::uintptr_t m_flMinPitch            = 0x0038; // float32
            static constexpr std::uintptr_t m_flMaxPitch            = 0x003C; // float32
            static constexpr std::uintptr_t m_flPitchFriction       = 0x0040; // float32
            static constexpr std::uintptr_t m_flPitchBounce         = 0x0044; // float32
            static constexpr std::uintptr_t m_flBaseMass            = 0x0048; // float32
            static constexpr std::uintptr_t m_flBaseStiffness       = 0x004C; // float32
            static constexpr std::uintptr_t m_flBaseDamping         = 0x0050; // float32
            static constexpr std::uintptr_t m_flBaseMinLeft         = 0x0054; // float32
            static constexpr std::uintptr_t m_flBaseMaxLeft         = 0x0058; // float32
            static constexpr std::uintptr_t m_flBaseLeftFriction    = 0x005C; // float32
            static constexpr std::uintptr_t m_flBaseMinUp           = 0x0060; // float32
            static constexpr std::uintptr_t m_flBaseMaxUp           = 0x0064; // float32
            static constexpr std::uintptr_t m_flBaseUpFriction      = 0x0068; // float32
            static constexpr std::uintptr_t m_flBaseMinForward      = 0x006C; // float32
            static constexpr std::uintptr_t m_flBaseMaxForward      = 0x0070; // float32
            static constexpr std::uintptr_t m_flBaseForwardFriction = 0x0074; // float32
            static constexpr std::uintptr_t m_flRadius0             = 0x0078; // float32
            static constexpr std::uintptr_t m_flRadius1             = 0x007C; // float32
            static constexpr std::uintptr_t m_vPoint0               = 0x0080; // Vector
            static constexpr std::uintptr_t m_vPoint1               = 0x008C; // Vector
            static constexpr std::uintptr_t m_nCollisionMask        = 0x0098; // uint16
        };

        // Construct Allowed
        class CFeNamedJiggleBone {
        public:
            static constexpr std::uintptr_t m_strParentBone = 0x0000; // CUtlString
            static constexpr std::uintptr_t m_transform     = 0x0010; // CTransform
            static constexpr std::uintptr_t m_nJiggleParent = 0x0030; // uint32
            static constexpr std::uintptr_t m_jiggleBone    = 0x0034; // CFeJiggleBone
        };

        // Has Trivial Destructor
        // Construct Allowed
        class CFeIndexedJiggleBone {
        public:
            static constexpr std::uintptr_t m_nNode         = 0x0000; // uint32
            static constexpr std::uintptr_t m_nJiggleParent = 0x0004; // uint32
            static constexpr std::uintptr_t m_jiggleBone    = 0x0008; // CFeJiggleBone
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeNodeBase_t {
        public:
            static constexpr std::uintptr_t nNode   = 0x0000; // uint16
            static constexpr std::uintptr_t nDummy  = 0x0002; // uint16[3]
            static constexpr std::uintptr_t nNodeX0 = 0x0008; // uint16
            static constexpr std::uintptr_t nNodeX1 = 0x000A; // uint16
            static constexpr std::uintptr_t nNodeY0 = 0x000C; // uint16
            static constexpr std::uintptr_t nNodeY1 = 0x000E; // uint16
            static constexpr std::uintptr_t qAdjust = 0x0010; // QuaternionStorage
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeSimdNodeBase_t {
        public:
            static constexpr std::uintptr_t nNode   = 0x0000; // uint16[4]
            static constexpr std::uintptr_t nNodeX0 = 0x0008; // uint16[4]
            static constexpr std::uintptr_t nNodeX1 = 0x0010; // uint16[4]
            static constexpr std::uintptr_t nNodeY0 = 0x0018; // uint16[4]
            static constexpr std::uintptr_t nNodeY1 = 0x0020; // uint16[4]
            static constexpr std::uintptr_t nDummy  = 0x0028; // uint16[4]
            static constexpr std::uintptr_t qAdjust = 0x0030; // FourQuaternions
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeQuad_t {
        public:
            static constexpr std::uintptr_t nNode   = 0x0000; // uint16[4]
            static constexpr std::uintptr_t flSlack = 0x0008; // float32
            static constexpr std::uintptr_t vShape  = 0x000C; // Vector4D[4]
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeSimdQuad_t {
        public:
            static constexpr std::uintptr_t nNode     = 0x0000; // uint16[4][4]
            static constexpr std::uintptr_t f4Slack   = 0x0020; // fltx4
            static constexpr std::uintptr_t vShape    = 0x0030; // FourVectors[4]
            static constexpr std::uintptr_t f4Weights = 0x00F0; // fltx4[4]
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeSimdTri_t {
        public:
            static constexpr std::uintptr_t nNode = 0x0000; // uint32[4][3]
            static constexpr std::uintptr_t w1    = 0x0030; // fltx4
            static constexpr std::uintptr_t w2    = 0x0040; // fltx4
            static constexpr std::uintptr_t v1x   = 0x0050; // fltx4
            static constexpr std::uintptr_t v2    = 0x0060; // FourVectors2D
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeSimdRodConstraint_t {
        public:
            static constexpr std::uintptr_t nNode              = 0x0000; // uint16[4][2]
            static constexpr std::uintptr_t f4MaxDist          = 0x0010; // fltx4
            static constexpr std::uintptr_t f4MinDist          = 0x0020; // fltx4
            static constexpr std::uintptr_t f4Weight0          = 0x0030; // fltx4
            static constexpr std::uintptr_t f4RelaxationFactor = 0x0040; // fltx4
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeSimdRodConstraintAnim_t {
        public:
            static constexpr std::uintptr_t nNode              = 0x0000; // uint16[4][2]
            static constexpr std::uintptr_t f4Weight0          = 0x0010; // fltx4
            static constexpr std::uintptr_t f4RelaxationFactor = 0x0020; // fltx4
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeRodConstraint_t {
        public:
            static constexpr std::uintptr_t nNode              = 0x0000; // uint16[2]
            static constexpr std::uintptr_t flMaxDist          = 0x0004; // float32
            static constexpr std::uintptr_t flMinDist          = 0x0008; // float32
            static constexpr std::uintptr_t flWeight0          = 0x000C; // float32
            static constexpr std::uintptr_t flRelaxationFactor = 0x0010; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeTwistConstraint_t {
        public:
            static constexpr std::uintptr_t nNodeOrient  = 0x0000; // uint16
            static constexpr std::uintptr_t nNodeEnd     = 0x0002; // uint16
            static constexpr std::uintptr_t flTwistRelax = 0x0004; // float32
            static constexpr std::uintptr_t flSwingRelax = 0x0008; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeHingeLimit_t {
        public:
            static constexpr std::uintptr_t nNode          = 0x0000; // uint16[6]
            static constexpr std::uintptr_t nFlags         = 0x000C; // uint32
            static constexpr std::uintptr_t flWeight4      = 0x0010; // float32
            static constexpr std::uintptr_t flWeight5      = 0x0014; // float32
            static constexpr std::uintptr_t flAngleCenter  = 0x0018; // float32
            static constexpr std::uintptr_t flAngleExtents = 0x001C; // float32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct FeDynKinLink_t {
        public:
            static constexpr std::uintptr_t m_nParent = 0x0000; // uint16
            static constexpr std::uintptr_t m_nChild  = 0x0002; // uint16
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeAntiTunnelProbe_t {
        public:
            static constexpr std::uintptr_t flWeight             = 0x0000; // float32
            static constexpr std::uintptr_t nFlags               = 0x0004; // uint32
            static constexpr std::uintptr_t nProbeNode           = 0x0008; // uint16
            static constexpr std::uintptr_t nCount               = 0x000A; // uint16
            static constexpr std::uintptr_t nBegin               = 0x000C; // uint32
            static constexpr std::uintptr_t flActivationDistance = 0x0010; // float32
            static constexpr std::uintptr_t flCurvatureRadius    = 0x0014; // float32
            static constexpr std::uintptr_t flBias               = 0x0018; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeNodeStrayBox_t {
        public:
            static constexpr std::uintptr_t vMin   = 0x0000; // Vector
            static constexpr std::uintptr_t nFlags = 0x000C; // uint32
            static constexpr std::uintptr_t vMax   = 0x0010; // Vector
            static constexpr std::uintptr_t nNode  = 0x001C; // uint16[2]
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeAxialEdgeBend_t {
        public:
            static constexpr std::uintptr_t te       = 0x0000; // float32
            static constexpr std::uintptr_t tv       = 0x0004; // float32
            static constexpr std::uintptr_t flDist   = 0x0008; // float32
            static constexpr std::uintptr_t flWeight = 0x000C; // float32[4]
            static constexpr std::uintptr_t nNode    = 0x001C; // uint16[6]
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeCtrlOffset_t {
        public:
            static constexpr std::uintptr_t vOffset     = 0x0000; // Vector
            static constexpr std::uintptr_t nCtrlParent = 0x000C; // uint16
            static constexpr std::uintptr_t nCtrlChild  = 0x000E; // uint16
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeCtrlOsOffset_t {
        public:
            static constexpr std::uintptr_t nCtrlParent = 0x0000; // uint16
            static constexpr std::uintptr_t nCtrlChild  = 0x0002; // uint16
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeFollowNode_t {
        public:
            static constexpr std::uintptr_t nParentNode = 0x0000; // uint16
            static constexpr std::uintptr_t nChildNode  = 0x0002; // uint16
            static constexpr std::uintptr_t flWeight    = 0x0004; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeCollisionPlane_t {
        public:
            static constexpr std::uintptr_t nCtrlParent = 0x0000; // uint16
            static constexpr std::uintptr_t nChildNode  = 0x0002; // uint16
            static constexpr std::uintptr_t m_Plane     = 0x0004; // RnPlane_t
            static constexpr std::uintptr_t flStrength  = 0x0014; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeNodeIntegrator_t {
        public:
            static constexpr std::uintptr_t flPointDamping              = 0x0000; // float32
            static constexpr std::uintptr_t flAnimationForceAttraction  = 0x0004; // float32
            static constexpr std::uintptr_t flAnimationVertexAttraction = 0x0008; // float32
            static constexpr std::uintptr_t flGravity                   = 0x000C; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeSpringIntegrator_t {
        public:
            static constexpr std::uintptr_t nNode              = 0x0000; // uint16[2]
            static constexpr std::uintptr_t flSpringRestLength = 0x0004; // float32
            static constexpr std::uintptr_t flSpringConstant   = 0x0008; // float32
            static constexpr std::uintptr_t flSpringDamping    = 0x000C; // float32
            static constexpr std::uintptr_t flNodeWeight0      = 0x0010; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeSimdSpringIntegrator_t {
        public:
            static constexpr std::uintptr_t nNode              = 0x0000; // uint16[4][2]
            static constexpr std::uintptr_t flSpringRestLength = 0x0010; // fltx4
            static constexpr std::uintptr_t flSpringConstant   = 0x0020; // fltx4
            static constexpr std::uintptr_t flSpringDamping    = 0x0030; // fltx4
            static constexpr std::uintptr_t flNodeWeight0      = 0x0040; // fltx4
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeWorldCollisionParams_t {
        public:
            static constexpr std::uintptr_t flWorldFriction  = 0x0000; // float32
            static constexpr std::uintptr_t flGroundFriction = 0x0004; // float32
            static constexpr std::uintptr_t nListBegin       = 0x0008; // uint16
            static constexpr std::uintptr_t nListEnd         = 0x000A; // uint16
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeTaperedCapsuleStretch_t {
        public:
            static constexpr std::uintptr_t nNode          = 0x0000; // uint16[2]
            static constexpr std::uintptr_t nCollisionMask = 0x0004; // uint16
            static constexpr std::uintptr_t nDummy         = 0x0006; // uint16
            static constexpr std::uintptr_t flRadius       = 0x0008; // float32[2]
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeTaperedCapsuleRigid_t {
        public:
            static constexpr std::uintptr_t vSphere         = 0x0000; // fltx4[2]
            static constexpr std::uintptr_t nNode           = 0x0020; // uint16
            static constexpr std::uintptr_t nCollisionMask  = 0x0022; // uint16
            static constexpr std::uintptr_t nVertexMapIndex = 0x0024; // uint16
            static constexpr std::uintptr_t nFlags          = 0x0026; // uint16
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeSphereRigid_t {
        public:
            static constexpr std::uintptr_t vSphere         = 0x0000; // fltx4
            static constexpr std::uintptr_t nNode           = 0x0010; // uint16
            static constexpr std::uintptr_t nCollisionMask  = 0x0012; // uint16
            static constexpr std::uintptr_t nVertexMapIndex = 0x0014; // uint16
            static constexpr std::uintptr_t nFlags          = 0x0016; // uint16
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeTreeChildren_t {
        public:
            static constexpr std::uintptr_t nChild = 0x0000; // uint16[2]
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeFitMatrix_t {
        public:
            static constexpr std::uintptr_t bone          = 0x0000; // CTransform
            static constexpr std::uintptr_t vCenter       = 0x0020; // Vector
            static constexpr std::uintptr_t nEnd          = 0x002C; // uint16
            static constexpr std::uintptr_t nNode         = 0x002E; // uint16
            static constexpr std::uintptr_t nBeginDynamic = 0x0030; // uint16
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeFitWeight_t {
        public:
            static constexpr std::uintptr_t flWeight = 0x0000; // float32
            static constexpr std::uintptr_t nNode    = 0x0004; // uint16
            static constexpr std::uintptr_t nDummy   = 0x0006; // uint16
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeNodeReverseOffset_t {
        public:
            static constexpr std::uintptr_t vOffset     = 0x0000; // Vector
            static constexpr std::uintptr_t nBoneCtrl   = 0x000C; // uint16
            static constexpr std::uintptr_t nTargetNode = 0x000E; // uint16
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeAnimStrayRadius_t {
        public:
            static constexpr std::uintptr_t nNode              = 0x0000; // uint16[2]
            static constexpr std::uintptr_t flMaxDist          = 0x0004; // float32
            static constexpr std::uintptr_t flRelaxationFactor = 0x0008; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeSimdAnimStrayRadius_t {
        public:
            static constexpr std::uintptr_t nNode              = 0x0000; // uint16[4][2]
            static constexpr std::uintptr_t flMaxDist          = 0x0010; // fltx4
            static constexpr std::uintptr_t flRelaxationFactor = 0x0020; // fltx4
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeKelagerBend2_t {
        public:
            static constexpr std::uintptr_t flWeight  = 0x0000; // float32[3]
            static constexpr std::uintptr_t flHeight0 = 0x000C; // float32
            static constexpr std::uintptr_t nNode     = 0x0010; // uint16[3]
            static constexpr std::uintptr_t nReserved = 0x0016; // uint16
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeCtrlSoftOffset_t {
        public:
            static constexpr std::uintptr_t nCtrlParent = 0x0000; // uint16
            static constexpr std::uintptr_t nCtrlChild  = 0x0002; // uint16
            static constexpr std::uintptr_t vOffset     = 0x0004; // Vector
            static constexpr std::uintptr_t flAlpha     = 0x0010; // float32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeTri_t {
        public:
            static constexpr std::uintptr_t nNode = 0x0000; // uint16[3]
            static constexpr std::uintptr_t w1    = 0x0008; // float32
            static constexpr std::uintptr_t w2    = 0x000C; // float32
            static constexpr std::uintptr_t v1x   = 0x0010; // float32
            static constexpr std::uintptr_t v2    = 0x0014; // Vector2D
        };

        // Construct Allowed
        struct FeSDFRigid_t {
        public:
            static constexpr std::uintptr_t vLocalMin       = 0x0000; // Vector
            static constexpr std::uintptr_t vLocalMax       = 0x000C; // Vector
            static constexpr std::uintptr_t flBounciness    = 0x0018; // float32
            static constexpr std::uintptr_t nNode           = 0x001C; // uint16
            static constexpr std::uintptr_t nCollisionMask  = 0x001E; // uint16
            static constexpr std::uintptr_t nVertexMapIndex = 0x0020; // uint16
            static constexpr std::uintptr_t nFlags          = 0x0022; // uint16
            static constexpr std::uintptr_t m_Distances     = 0x0028; // CUtlVector<float32>
            static constexpr std::uintptr_t m_nWidth        = 0x0040; // int32
            static constexpr std::uintptr_t m_nHeight       = 0x0044; // int32
            static constexpr std::uintptr_t m_nDepth        = 0x0048; // int32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeBoxRigid_t {
        public:
            static constexpr std::uintptr_t tmFrame2        = 0x0000; // CTransform
            static constexpr std::uintptr_t nNode           = 0x0020; // uint16
            static constexpr std::uintptr_t nCollisionMask  = 0x0022; // uint16
            static constexpr std::uintptr_t vSize           = 0x0024; // Vector
            static constexpr std::uintptr_t nVertexMapIndex = 0x0030; // uint16
            static constexpr std::uintptr_t nFlags          = 0x0032; // uint16
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeRigidColliderIndices_t {
        public:
            static constexpr std::uintptr_t m_nTaperedCapsuleRigidIndex = 0x0000; // uint16
            static constexpr std::uintptr_t m_nSphereRigidIndex         = 0x0002; // uint16
            static constexpr std::uintptr_t m_nBoxRigidIndex            = 0x0004; // uint16
            static constexpr std::uintptr_t m_nSDFRigidIndex            = 0x0006; // uint16
            static constexpr std::uintptr_t m_nCollisionPlaneIndex      = 0x0008; // uint16
        };

        // Construct Allowed
        struct FeMorphLayerDepr_t {
        public:
            static constexpr std::uintptr_t m_Name         = 0x0000; // CUtlString
            static constexpr std::uintptr_t m_nNameHash    = 0x0008; // uint32
            static constexpr std::uintptr_t m_Nodes        = 0x0010; // CUtlVector<uint16>
            static constexpr std::uintptr_t m_InitPos      = 0x0028; // CUtlVector<Vector>
            static constexpr std::uintptr_t m_Gravity      = 0x0040; // CUtlVector<float32>
            static constexpr std::uintptr_t m_GoalStrength = 0x0058; // CUtlVector<float32>
            static constexpr std::uintptr_t m_GoalDamping  = 0x0070; // CUtlVector<float32>
            static constexpr std::uintptr_t m_nFlags       = 0x0088; // uint32
        };

        // Construct Allowed
        struct FeVertexMapDesc_t {
        public:
            static constexpr std::uintptr_t sName                     = 0x0000; // CUtlString
            static constexpr std::uintptr_t nNameHash                 = 0x0008; // uint32
            static constexpr std::uintptr_t nColor                    = 0x000C; // uint32
            static constexpr std::uintptr_t nFlags                    = 0x0010; // uint32
            static constexpr std::uintptr_t nVertexBase               = 0x0014; // uint16
            static constexpr std::uintptr_t nVertexCount              = 0x0016; // uint16
            static constexpr std::uintptr_t nMapOffset                = 0x0018; // uint32
            static constexpr std::uintptr_t nNodeListOffset           = 0x001C; // uint32
            static constexpr std::uintptr_t vCenterOfMass             = 0x0020; // Vector
            static constexpr std::uintptr_t flVolumetricSolveStrength = 0x002C; // float32
            static constexpr std::uintptr_t nScaleSourceNode          = 0x0030; // int16
            static constexpr std::uintptr_t nNodeListCount            = 0x0032; // uint16
        };

        // Construct Allowed
        struct FeEffectDesc_t {
        public:
            static constexpr std::uintptr_t sName     = 0x0000; // CUtlString
            static constexpr std::uintptr_t nNameHash = 0x0008; // uint32
            static constexpr std::uintptr_t nType     = 0x000C; // int32
            static constexpr std::uintptr_t m_Params  = 0x0010; // KeyValues3
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeNodeWindBase_t {
        public:
            static constexpr std::uintptr_t nNodeX0 = 0x0000; // uint16
            static constexpr std::uintptr_t nNodeX1 = 0x0002; // uint16
            static constexpr std::uintptr_t nNodeY0 = 0x0004; // uint16
            static constexpr std::uintptr_t nNodeY1 = 0x0006; // uint16
        };

        // Construct Allowed
        struct FeModelSelfCollisionLayer_t {
        public:
            static constexpr std::uintptr_t m_Name             = 0x0000; // CUtlString
            static constexpr std::uintptr_t m_Nodes            = 0x0008; // CUtlVector<uint16>
            static constexpr std::uintptr_t m_flParentReaction = 0x0020; // float32
            static constexpr std::uintptr_t m_nFlags           = 0x0024; // uint32
            static constexpr std::uintptr_t m_nEndIdx          = 0x0028; // uint32[4]
        };

        // Has Trivial Destructor
        // Construct Allowed
        class FourVectors2D {
        public:
            static constexpr std::uintptr_t x = 0x0000; // fltx4
            static constexpr std::uintptr_t y = 0x0010; // fltx4
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct FeEdgeDesc_t {
        public:
            static constexpr std::uintptr_t nEdge     = 0x0000; // uint16[2]
            static constexpr std::uintptr_t nSide     = 0x0004; // uint16[2][2]
            static constexpr std::uintptr_t nVirtElem = 0x000C; // uint16[2]
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct OldFeEdge_t {
        public:
            static constexpr std::uintptr_t m_flK               = 0x0000; // float32[3]
            static constexpr std::uintptr_t invA                = 0x000C; // float32
            static constexpr std::uintptr_t t                   = 0x0010; // float32
            static constexpr std::uintptr_t flThetaRelaxed      = 0x0014; // float32
            static constexpr std::uintptr_t flThetaFactor       = 0x0018; // float32
            static constexpr std::uintptr_t c01                 = 0x001C; // float32
            static constexpr std::uintptr_t c02                 = 0x0020; // float32
            static constexpr std::uintptr_t c03                 = 0x0024; // float32
            static constexpr std::uintptr_t c04                 = 0x0028; // float32
            static constexpr std::uintptr_t flAxialModelDist    = 0x002C; // float32
            static constexpr std::uintptr_t flAxialModelWeights = 0x0030; // float32[4]
            static constexpr std::uintptr_t m_nNode             = 0x0040; // uint16[4]
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeWeightedNode_t {
        public:
            static constexpr std::uintptr_t nNode   = 0x0000; // uint16
            static constexpr std::uintptr_t nWeight = 0x0002; // uint16
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeStiffHingeBuild_t {
        public:
            static constexpr std::uintptr_t flMaxAngle   = 0x0000; // float32
            static constexpr std::uintptr_t flStrength   = 0x0004; // float32
            static constexpr std::uintptr_t flMotionBias = 0x0008; // float32[3]
            static constexpr std::uintptr_t nNode        = 0x0014; // uint16[3]
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct FeBandBendLimit_t {
        public:
            static constexpr std::uintptr_t flDistMin = 0x0000; // float32
            static constexpr std::uintptr_t flDistMax = 0x0004; // float32
            static constexpr std::uintptr_t nNode     = 0x0008; // uint16[6]
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeHingeLimitBuild_t {
        public:
            static constexpr std::uintptr_t nNode      = 0x0000; // uint16[6]
            static constexpr std::uintptr_t nFlags     = 0x000C; // uint32
            static constexpr std::uintptr_t flLimitCW  = 0x0010; // float32
            static constexpr std::uintptr_t flLimitCCW = 0x0014; // float32
        };

        // Construct Allowed
        struct FeAntiTunnelProbeBuild_t {
        public:
            static constexpr std::uintptr_t flWeight             = 0x0000; // float32
            static constexpr std::uintptr_t flActivationDistance = 0x0004; // float32
            static constexpr std::uintptr_t flBias               = 0x0008; // float32
            static constexpr std::uintptr_t flCurvature          = 0x000C; // float32
            static constexpr std::uintptr_t nFlags               = 0x0010; // uint32
            static constexpr std::uintptr_t nProbeNode           = 0x0014; // uint16
            static constexpr std::uintptr_t targetNodes          = 0x0018; // CUtlVector<uint16>
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeAntiTunnelGroupBuild_t {
        public:
            static constexpr std::uintptr_t m_nVertexMapHash = 0x0000; // uint32
            static constexpr std::uintptr_t m_nCollisionMask = 0x0004; // uint32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeSoftParent_t {
        public:
            static constexpr std::uintptr_t nParent = 0x0000; // int32
            static constexpr std::uintptr_t flAlpha = 0x0004; // float32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct RnPlane_t {
        public:
            static constexpr std::uintptr_t m_vNormal  = 0x0000; // Vector
            static constexpr std::uintptr_t m_flOffset = 0x000C; // float32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        class CovMatrix3 {
        public:
            static constexpr std::uintptr_t m_vDiag = 0x0000; // Vector
            static constexpr std::uintptr_t m_flXY  = 0x000C; // float32
            static constexpr std::uintptr_t m_flXZ  = 0x0010; // float32
            static constexpr std::uintptr_t m_flYZ  = 0x0014; // float32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        class FourCovMatrices3 {
        public:
            static constexpr std::uintptr_t m_vDiag = 0x0000; // FourVectors
            static constexpr std::uintptr_t m_flXY  = 0x0030; // fltx4
            static constexpr std::uintptr_t m_flXZ  = 0x0040; // fltx4
            static constexpr std::uintptr_t m_flYZ  = 0x0050; // fltx4
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct FeFitInfluence_t {
        public:
            static constexpr std::uintptr_t nVertexNode = 0x0000; // uint32
            static constexpr std::uintptr_t flWeight    = 0x0004; // float32
            static constexpr std::uintptr_t nMatrixNode = 0x0008; // uint32
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct FeSourceEdge_t {
        public:
            static constexpr std::uintptr_t nNode = 0x0000; // uint16[2]
        };

        // Construct Allowed
        struct FeVertexMapBuild_t {
        public:
            static constexpr std::uintptr_t m_VertexMapName             = 0x0000; // CUtlString
            static constexpr std::uintptr_t m_nNameHash                 = 0x0008; // uint32
            static constexpr std::uintptr_t m_Color                     = 0x000C; // Color
            static constexpr std::uintptr_t m_flVolumetricSolveStrength = 0x0010; // float32
            static constexpr std::uintptr_t m_nScaleSourceNode          = 0x0014; // int32
            static constexpr std::uintptr_t m_Weights                   = 0x0018; // CUtlVector<float32>
        };

        // Construct Allowed
        class CFeVertexMapBuildArray {
        public:
            static constexpr std::uintptr_t m_Array = 0x0000; // CUtlVector<FeVertexMapBuild_t*>
        };

        // Construct Allowed
        struct FeProxyVertexMap_t {
        public:
            static constexpr std::uintptr_t m_Name     = 0x0000; // CUtlString
            static constexpr std::uintptr_t m_flWeight = 0x0008; // float32
        };

        // Construct Allowed
        class CFeMorphLayer {
        public:
            static constexpr std::uintptr_t m_Name         = 0x0000; // CUtlString
            static constexpr std::uintptr_t m_nNameHash    = 0x0008; // uint32
            static constexpr std::uintptr_t m_Nodes        = 0x0010; // CUtlVector<uint16>
            static constexpr std::uintptr_t m_InitPos      = 0x0028; // CUtlVector<Vector>
            static constexpr std::uintptr_t m_Gravity      = 0x0040; // CUtlVector<float32>
            static constexpr std::uintptr_t m_GoalStrength = 0x0058; // CUtlVector<float32>
            static constexpr std::uintptr_t m_GoalDamping  = 0x0070; // CUtlVector<float32>
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct PhysicsParticleId_t {
        public:
            static constexpr std::uintptr_t m_Value = 0x0000; // uint32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct Dop26_t {
        public:
            static constexpr std::uintptr_t m_flSupport = 0x0000; // float32[26]
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct RnCapsule_t {
        public:
            static constexpr std::uintptr_t m_vCenter  = 0x0000; // Vector[2]
            static constexpr std::uintptr_t m_flRadius = 0x0018; // float32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct RnVertex_t {
        public:
            static constexpr std::uintptr_t m_nEdge = 0x0000; // uint8
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct RnHalfEdge_t {
        public:
            static constexpr std::uintptr_t m_nNext   = 0x0000; // uint8
            static constexpr std::uintptr_t m_nTwin   = 0x0001; // uint8
            static constexpr std::uintptr_t m_nOrigin = 0x0002; // uint8
            static constexpr std::uintptr_t m_nFace   = 0x0003; // uint8
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct RnFace_t {
        public:
            static constexpr std::uintptr_t m_nEdge = 0x0000; // uint8
        };

        // Construct Allowed
        class CRegionSVM {
        public:
            static constexpr std::uintptr_t m_Planes = 0x0000; // CUtlVector<RnPlane_t>
            static constexpr std::uintptr_t m_Nodes  = 0x0018; // CUtlVector<uint32>
        };

        // Construct Allowed
        struct RnHull_t {
        public:
            static constexpr std::uintptr_t m_vCentroid          = 0x0000; // Vector
            static constexpr std::uintptr_t m_flMaxAngularRadius = 0x000C; // float32
            static constexpr std::uintptr_t m_Bounds             = 0x0010; // AABB_t
            static constexpr std::uintptr_t m_vOrthographicAreas = 0x0028; // Vector
            static constexpr std::uintptr_t m_MassProperties     = 0x0034; // matrix3x4_t
            static constexpr std::uintptr_t m_flVolume           = 0x0064; // float32
            static constexpr std::uintptr_t m_flSurfaceArea      = 0x0068; // float32
            static constexpr std::uintptr_t m_Vertices           = 0x0070; // CUtlVector<RnVertex_t>
            static constexpr std::uintptr_t m_VertexPositions    = 0x0088; // CUtlVector<Vector>
            static constexpr std::uintptr_t m_Edges              = 0x00A0; // CUtlVector<RnHalfEdge_t>
            static constexpr std::uintptr_t m_Faces              = 0x00B8; // CUtlVector<RnFace_t>
            static constexpr std::uintptr_t m_FacePlanes         = 0x00D0; // CUtlVector<RnPlane_t>
            static constexpr std::uintptr_t m_nFlags             = 0x00E8; // uint32
            static constexpr std::uintptr_t m_pRegionSVM         = 0x00F0; // CRegionSVM*
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct RnTriangle_t {
        public:
            static constexpr std::uintptr_t m_nIndex = 0x0000; // int32[3]
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct RnWing_t {
        public:
            static constexpr std::uintptr_t m_nIndex = 0x0000; // int32[3]
        };

        // Has Trivial Destructor
        // Construct Allowed
        struct RnNode_t {
        public:
            static constexpr std::uintptr_t m_vMin            = 0x0000; // Vector
            static constexpr std::uintptr_t m_nChildren       = 0x000C; // uint32
            static constexpr std::uintptr_t m_vMax            = 0x0010; // Vector
            static constexpr std::uintptr_t m_nTriangleOffset = 0x001C; // uint32
        };

        // Construct Allowed
        struct RnMesh_t {
        public:
            static constexpr std::uintptr_t m_vMin               = 0x0000; // Vector
            static constexpr std::uintptr_t m_vMax               = 0x000C; // Vector
            static constexpr std::uintptr_t m_Nodes              = 0x0018; // CUtlVector<RnNode_t>
            static constexpr std::uintptr_t m_Vertices           = 0x0030; // CUtlVectorSIMDPaddedVector
            static constexpr std::uintptr_t m_Triangles          = 0x0048; // CUtlVector<RnTriangle_t>
            static constexpr std::uintptr_t m_Wings              = 0x0060; // CUtlVector<RnWing_t>
            static constexpr std::uintptr_t m_TriangleEdgeFlags  = 0x0078; // CUtlVector<uint8>
            static constexpr std::uintptr_t m_Materials          = 0x0090; // CUtlVector<uint8>
            static constexpr std::uintptr_t m_vOrthographicAreas = 0x00A8; // Vector
            static constexpr std::uintptr_t m_nFlags             = 0x00B4; // uint32
            static constexpr std::uintptr_t m_nDebugFlags        = 0x00B8; // uint32
        };

        // Construct Allowed
        struct RnShapeDesc_t {
        public:
            static constexpr std::uintptr_t m_nCollisionAttributeIndex = 0x0000; // uint32
            static constexpr std::uintptr_t m_nSurfacePropertyIndex    = 0x0004; // uint32
            static constexpr std::uintptr_t m_UserFriendlyName         = 0x0008; // CUtlString
            static constexpr std::uintptr_t m_bUserFriendlyNameSealed  = 0x0010; // bool
            static constexpr std::uintptr_t m_bUserFriendlyNameLong    = 0x0011; // bool
            static constexpr std::uintptr_t m_nToolMaterialHash        = 0x0014; // uint32
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct RnBlendVertex_t {
        public:
            static constexpr std::uintptr_t m_nWeight0     = 0x0000; // uint16
            static constexpr std::uintptr_t m_nIndex0      = 0x0002; // uint16
            static constexpr std::uintptr_t m_nWeight1     = 0x0004; // uint16
            static constexpr std::uintptr_t m_nIndex1      = 0x0006; // uint16
            static constexpr std::uintptr_t m_nWeight2     = 0x0008; // uint16
            static constexpr std::uintptr_t m_nIndex2      = 0x000A; // uint16
            static constexpr std::uintptr_t m_nFlags       = 0x000C; // uint16
            static constexpr std::uintptr_t m_nTargetIndex = 0x000E; // uint16
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct Allowed
        struct CastSphereSATParams_t {
        public:
            static constexpr std::uintptr_t m_vRayStart     = 0x0000; // Vector
            static constexpr std::uintptr_t m_vRayDelta     = 0x000C; // Vector
            static constexpr std::uintptr_t m_flRadius      = 0x0018; // float32
            static constexpr std::uintptr_t m_flMaxFraction = 0x001C; // float32
            static constexpr std::uintptr_t m_flScale       = 0x0020; // float32
            static constexpr std::uintptr_t m_pHull         = 0x0028; // RnHull_t*
        };

        // Construct Allowed
        struct RnBodyDesc_t {
        public:
            static constexpr std::uintptr_t m_sDebugName                        = 0x0000; // CUtlString
            static constexpr std::uintptr_t m_vPosition                         = 0x0008; // Vector
            static constexpr std::uintptr_t m_qOrientation                      = 0x0014; // QuaternionStorage
            static constexpr std::uintptr_t m_vLinearVelocity                   = 0x0024; // Vector
            static constexpr std::uintptr_t m_vAngularVelocity                  = 0x0030; // Vector
            static constexpr std::uintptr_t m_vLocalMassCenter                  = 0x003C; // Vector
            static constexpr std::uintptr_t m_LocalInertiaInv                   = 0x0048; // Vector[3]
            static constexpr std::uintptr_t m_flMassInv                         = 0x006C; // float32
            static constexpr std::uintptr_t m_flGameMass                        = 0x0070; // float32
            static constexpr std::uintptr_t m_flMassScaleInv                    = 0x0074; // float32
            static constexpr std::uintptr_t m_flInertiaScaleInv                 = 0x0078; // float32
            static constexpr std::uintptr_t m_flLinearDamping                   = 0x007C; // float32
            static constexpr std::uintptr_t m_flAngularDamping                  = 0x0080; // float32
            static constexpr std::uintptr_t m_flLinearDragScale                 = 0x0084; // float32
            static constexpr std::uintptr_t m_flAngularDragScale                = 0x0088; // float32
            static constexpr std::uintptr_t m_flLinearFluidDragScale            = 0x008C; // float32
            static constexpr std::uintptr_t m_flAngularFluidDragScale           = 0x0090; // float32
            static constexpr std::uintptr_t m_vLastAwakeForceAccum              = 0x0094; // Vector
            static constexpr std::uintptr_t m_vLastAwakeTorqueAccum             = 0x00A0; // Vector
            static constexpr std::uintptr_t m_flBuoyancyScale                   = 0x00AC; // float32
            static constexpr std::uintptr_t m_flGravityScale                    = 0x00B0; // float32
            static constexpr std::uintptr_t m_flTimeScale                       = 0x00B4; // float32
            static constexpr std::uintptr_t m_nBodyType                         = 0x00B8; // int32
            static constexpr std::uintptr_t m_nGameIndex                        = 0x00BC; // uint32
            static constexpr std::uintptr_t m_nGameFlags                        = 0x00C0; // uint32
            static constexpr std::uintptr_t m_nMinVelocityIterations            = 0x00C4; // int8
            static constexpr std::uintptr_t m_nMinPositionIterations            = 0x00C5; // int8
            static constexpr std::uintptr_t m_nMassPriority                     = 0x00C6; // int8
            static constexpr std::uintptr_t m_bEnabled                          = 0x00C7; // bool
            static constexpr std::uintptr_t m_bSleeping                         = 0x00C8; // bool
            static constexpr std::uintptr_t m_bIsContinuousEnabled              = 0x00C9; // bool
            static constexpr std::uintptr_t m_bDragEnabled                      = 0x00CA; // bool
            static constexpr std::uintptr_t m_vGravity                          = 0x00CC; // Vector
            static constexpr std::uintptr_t m_bSpeculativeEnabled               = 0x00D8; // bool
            static constexpr std::uintptr_t m_bHasShadowController              = 0x00D9; // bool
            static constexpr std::uintptr_t m_nDynamicContinuousContactBehavior = 0x00DA; // DynamicContinuousContactBehavior_t
        };

        // Construct Allowed
        struct CollisionDetailLayerInfo_t {
        public:
            static constexpr std::uintptr_t m_sDescription           = 0x0000; // CUtlString
            static constexpr std::uintptr_t m_sFriendlyName          = 0x0008; // CUtlString
            static constexpr std::uintptr_t m_bIsQueryOnly           = 0x0010; // bool
            static constexpr std::uintptr_t m_sParentDetailLayer     = 0x0018; // CUtlString
            static constexpr std::uintptr_t m_vecSubtreeDetailLayers = 0x0020; // CUtlVector<CollisionDetailLayerInfo_t::Name_t>
            static constexpr std::uintptr_t m_bNotPickable           = 0x0038; // bool
        };

        // Construct Allowed
        struct CollisionDetailLayerInfo_t__Name_t {
        public:
            static constexpr std::uintptr_t m_nNameToken  = 0x0000; // CUtlStringToken
            static constexpr std::uintptr_t m_sNameString = 0x0008; // CUtlString
        };

        // Has Trivial Constructor
        // Has Trivial Destructor
        struct VertexPositionNormal_t {
        public:
            static constexpr std::uintptr_t m_vPosition = 0x0000; // Vector
            static constexpr std::uintptr_t m_vNormal   = 0x000C; // Vector
        };

        // Has Trivial Destructor
        struct VertexPositionColor_t {
        public:
            static constexpr std::uintptr_t m_vPosition = 0x0000; // Vector
        };

        // Has Trivial Destructor
        // Construct Allowed
        class FeBuildTaperedCapsuleRigid_t : public FeTaperedCapsuleRigid_t {
        public:
            static constexpr std::uintptr_t m_nPriority            = 0x0030; // int32
            static constexpr std::uintptr_t m_nVertexMapHash       = 0x0034; // uint32
            static constexpr std::uintptr_t m_nAntitunnelGroupBits = 0x0038; // uint32
        };

        // Has Trivial Destructor
        // Construct Allowed
        class FeBuildBoxRigid_t : public FeBoxRigid_t {
        public:
            static constexpr std::uintptr_t m_nPriority            = 0x0040; // int32
            static constexpr std::uintptr_t m_nVertexMapHash       = 0x0044; // uint32
            static constexpr std::uintptr_t m_nAntitunnelGroupBits = 0x0048; // uint32
        };

        // Construct Allowed
        class FeBuildSDFRigid_t : public FeSDFRigid_t {
        public:
            static constexpr std::uintptr_t m_nPriority            = 0x0050; // int32
            static constexpr std::uintptr_t m_nVertexMapHash       = 0x0054; // uint32
            static constexpr std::uintptr_t m_nAntitunnelGroupBits = 0x0058; // uint32
        };

        // Has Trivial Destructor
        // Construct Allowed
        class FeBuildSphereRigid_t : public FeSphereRigid_t {
        public:
            static constexpr std::uintptr_t m_nPriority            = 0x0020; // int32
            static constexpr std::uintptr_t m_nVertexMapHash       = 0x0024; // uint32
            static constexpr std::uintptr_t m_nAntitunnelGroupBits = 0x0028; // uint32
        };

        // Construct Allowed
        class vphysics_save_cphysicsbody_t : public RnBodyDesc_t {
        public:
            static constexpr std::uintptr_t m_nOldPointer = 0x00E0; // uint64
        };

    }
}

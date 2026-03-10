#pragma once
#include <cstdint>

namespace offsets {
    namespace networksystem {
        enum class OutOfPVSUpdates_t : std::uint32_t {
            OOPVSUpdates_OptOut  = 0x0,
            OOPVSUpdates_OptIn   = 0x1,
            OOPVSUpdates_Default = 0x2,
            OOPVSUpdates_Count   = 0x3
        };

        // Has Trivial Destructor
        // Global Type Scope
        struct ChangeAccessorFieldPathIndex_t {
        public:
            static constexpr std::uintptr_t m_Value = 0X0000; // int32
        };
    }
}

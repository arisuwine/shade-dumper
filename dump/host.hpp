#pragma once
#include <cstdint>

namespace offsets {
    namespace host {
        // Has VTable
        // Is Absract
        class CAnimScriptBase {
        public:
            static constexpr std::uintptr_t m_bIsValid = 0x0008; // bool
        };

        // Has VTable
        class EmptyTestScript : public CAnimScriptBase {
        public:
            static constexpr std::uintptr_t m_hTest = 0x0010; // CAnimScriptParam<float32>
        };

    }
}

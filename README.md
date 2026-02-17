# Shade Dumper: Internal CS2 Schema Dumper

An internal offset dumper for Counter-Strike 2 on Windows.

For educational purposes only.

## 🛠️Dump Format
All classes and enums are organized into separate files named after their respective modules. Classes that could not be resolved but are referenced for inheritance are listed at the top of each file under the "Unresolved" section.

Flags (when present) are displayed as comments, indicating:
- Whether the class has a virtual table
- Whether it's abstract
- Whether it has a trivial constructor
- Whether it has a trivial destructor
- Whether construction is allowed
- Whether it has module-local or global type scope

Classes inherit from their parent classes when applicable.
```cpp
namespace offsets {
    namespace client {
        /* --- UNRESOLVED CLASSES --- */
        class CEntitySubclassVDataBase {}; 
        /* --- END --- */

        // Local Type Scope
        enum class PulseCursorCancelPriority_t : std::uint32_t {
            None              = 0x0,
            CancelOnSucceeded = 0x1,
            SoftCancel        = 0x2,
            HardCancel        = 0x3
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
    }
}
```

## ✏️ Contributing
Feel free to open issues or make pull requests to improve the dumper.

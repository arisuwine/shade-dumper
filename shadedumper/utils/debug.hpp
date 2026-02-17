#pragma once
#include <Windows.h>

namespace lg {
        inline void _log_base(WORD color, const char* level_name, const char* tag, const char* fmt, va_list args) {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

            CONSOLE_SCREEN_BUFFER_INFO csbi;
            GetConsoleScreenBufferInfo(hConsole, &csbi);
            WORD originalAttrs = csbi.wAttributes;

            SetConsoleTextAttribute(hConsole, color);

            if (level_name && *level_name) {
                printf("[%s] %s ", level_name, tag);
            }
            else {
                printf("%s ", tag);
            }

            SetConsoleTextAttribute(hConsole, originalAttrs);

            vprintf(fmt, args);
        }

        inline void Success(const char* tag, const char* fmt, ...) {
            va_list args;
            va_start(args, fmt);
            _log_base(FOREGROUND_GREEN | FOREGROUND_INTENSITY, nullptr, tag, fmt, args);
            va_end(args);
        }

        inline void Info(const char* tag, const char* fmt, ...) {
            va_list args;
            va_start(args, fmt);
            _log_base(FOREGROUND_BLUE | FOREGROUND_INTENSITY, "INFO", tag, fmt, args);
            va_end(args);
        }

        inline void Error(const char* tag, const char* fmt, ...) {
            va_list args;
            va_start(args, fmt);
            _log_base(FOREGROUND_RED | FOREGROUND_INTENSITY, "ERROR", tag, fmt, args);
            va_end(args);
        }

        inline void Warn(const char* tag, const char* fmt, ...) {
            va_list args;
            va_start(args, fmt);
            _log_base(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY, "WARN", tag, fmt, args);
            va_end(args);
        }
    
}
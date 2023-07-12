#include "Log.h"

void Log::SetLevel(int level) {
    m_LogLevel = level;
}

void Log::Info(const char* message) {
    if (m_LogLevel >= LogLevelInfo)
        std::cout << "[INFO]: " << message << std::endl;
}

void Log::Warn(const char* message) {
    if (m_LogLevel >= LogLevelWarning)
        std::cout << "[WARNING]: " << message << std::endl;
}

void Log::Error(const char* message) {
    if (m_LogLevel >= LogLevelError)
        std::cout << "[ERROR]: " << message << std::endl;
}

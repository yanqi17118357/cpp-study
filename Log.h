#pragma once
#include <iostream>

class Log {
public:
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2;

    void SetLevel(int level);
    void Info(const char* message);
    void Warn(const char* message);
    void Error(const char* message);

private:
    int m_LogLevel = LogLevelInfo;
};

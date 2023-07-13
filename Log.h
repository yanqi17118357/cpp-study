#pragma once
#include <iostream>

class Log {
public:
    enum Level {
        LevelError, LevelWarning, LevelInfo
    };

    void SetLevel(int level);
    void Info(const char* message);
    void Warn(const char* message);
    void Error(const char* message);

private:
    int m_LogLevel = LevelInfo;
};

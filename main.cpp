#include <iostream>

class Log {
public:
    int LogLevelError = 0;
    int LogLevelWarning = 1;
    int LogLevelInfo = 2;
private:
    int m_LogLevel = LogLevelInfo;
public:
    void setLevel(int level) {
        m_LogLevel = level;
    }

    void error(const char* message) {
        if (m_LogLevel >= LogLevelError)
            std::cout << "[ERROR]: " << message << std::endl;
    }

    void warn(const char* message) {
        if (m_LogLevel >= LogLevelWarning)
            std::cout << "[WARNING]: " << message << std::endl;
    }

    void info(const char* message) {
        if (m_LogLevel >= LogLevelInfo)
            std::cout << "[INFO]: " << message << std::endl;
    }
};

int main() {
    Log log;
    log.setLevel(log.LogLevelWarning);
    log.warn("Hello!");
    log.error("Hello!");
    log.info("Hello!");
    std::cin.get();
}

#include <iostream>
#include "Log.h"

// 类型必须是整数类型
enum Example : unsigned char {
    A, B, C
};

int a = 0;
int b = 1;
int c = 2;

int main() {

    Log log;
    log.SetLevel(Log::LevelError);
    log.Warn("Hello!");
    log.Error("Hello!");
    log.Info("Hello!");

    std::cin.get();
}

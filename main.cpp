#include <iostream>
#include "Log.h"

int main() {
    int x = 5;
    const char* ptr = nullptr;
    // ptr是有效值，则输出ptr的值
    if (ptr)
        Log(ptr);
    // 只有当前面的if语句为false时，才会执行else if语句
    // else if just is else + if
    // else {
    //     if (ptr == "Hello")
    //         Log("ptr is Hello");
    // }
    else if (ptr == "Hello")
        Log("ptr is Hello");
    else
        Log("ptr is null!");

    std::cin.get();
}

#include <iostream>

int main() {
    std::cout << sizeof(bool) << std::endl; // 1 byte
    std::cout << sizeof(char) << std::endl; // 1 byte
    std::cout << sizeof(short) << std::endl; // 2 bytes
    std::cout << sizeof(int) << std::endl; // 4 bytes
    std::cout << sizeof(long) << std::endl; // 4 bytes
    std::cout << sizeof(long long) << std::endl; // 8 bytes
    std::cout << sizeof(float) << std::endl; // 4 bytes
    std::cout << sizeof(double) << std::endl; // 8 bytes
    std::cout << sizeof(long double) << std::endl; // 8 bytes
    std::cin.get();
}


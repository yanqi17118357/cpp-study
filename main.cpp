#include <iostream>
#include <cstring>

int main() {
    char* buffer = new char[8];
    memset(buffer, 0, 8);

    char** ptr = &buffer;
    std::cin.get();
}

#include <iostream>

class StaticTest {
public:
    static int x;
    void print() {
        std::cout << x << std::endl;
    }
};

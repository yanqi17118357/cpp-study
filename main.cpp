#include <iostream>

void Increment(int & value) {
    value++;
}

int main() {
    int a = 8;
    int    *        ref = &      a;
    std::cout << * ref << std::endl;
    Increment(a);
    std::cout << a << std::endl;
    std::cin.get();
}

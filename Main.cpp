#include <iostream>

class Entity {
public:
    float X, Y;

    Entity() {
        X = 0.0f;
        Y = 0.0f;
    }

    void print() {
        std::cout << X << ", " << Y << std::endl;
    }
};

int main() {

    Entity e;
    e.print();

    std::cin.get();
}

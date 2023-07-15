#include <iostream>

class Entity {
public:
    float X, Y;

    Entity() {
        X = 10.0f;
        Y = 10.0f;
        std::cout << "Created Entity!" << std::endl;
    }

    ~Entity() {
        std::cout << "Destroyed Entity!" << std::endl;
    }

    void print() {
        std::cout << X << ", " << Y << std::endl;
    }
};

void Function() {
    Entity e;
    e.print();
}

int main() {

    Function();

    std::cin.get();
}

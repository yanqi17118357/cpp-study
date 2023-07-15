#include <iostream>

class Entity {
public:
    float X, Y;

    void Move(float xa, float ya) {
        X += xa;
        Y += ya;
    }

};

class Player : public Entity {
public:
    const char* Name;

    void PrintName() {
        std::cout << Name << std::endl;
    }
};

int main() {

    // X Y Name -> 4 + 4 + 8 = 16 bytes
    std::cout << sizeof(Player) << std::endl;

    std::cin.get();
}

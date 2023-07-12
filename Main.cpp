#include <iostream>
#include "StaticTest.cpp"

struct Entity {
    static int x, y;

    static void print() {
        std::cout << x << ", " << y << std::endl;
    }
};

// Static variables must be defined outside the class
int Entity::x;
int Entity::y;
int StaticTest::x;

int main() {

    Entity e;
    e.x = 2;
    e.y = 3;

    Entity e1;
    e1.x = 5;
    e1.y = 8;
    e.print();
    e1.print();


    StaticTest::x = 5;
    StaticTest sta;
    sta.print();

    std::cin.get();

}

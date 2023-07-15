#include <iostream>
#include <string>

class Entity {
public:
    // 定义为虚函数，子类可以重写
    virtual std::string GetName() { return "Entity"; }
};

class Player : public Entity {
private:
    std::string m_Name;
public:

    Player(const std::string &name)
            : m_Name(name) {}

    // 重写父类的虚函数
    std::string GetName() override { return m_Name; }
};

void PrintName(Entity *entity) {
    std::cout << entity->GetName() << std::endl;
}

int main() {

    Entity *e = new Entity();
    PrintName(e);

    Player *p = new Player("Yanqi");
    PrintName(p);

    std::cin.get();
}

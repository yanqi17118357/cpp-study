#include <iostream>
#include <string>

class Printable {
public:
    virtual std::string GetClassName() = 0;
};

// public继承，基类的public成员在派生类中仍然是public成员，此为默认继承方式
// protected继承，基类的public成员在派生类中变为protected成员
// private继承，基类的public成员在派生类中变为private成员
class Entity : public Printable {
public:
    // 定义为虚函数，子类可以重写
    virtual std::string GetName() { return "Entity"; }
    std::string GetClassName() override { return "Entity"; }
};

// 注意Entity继承自Printable, Player不需要继承Printable
class Player : public Entity{
private:
    std::string m_Name;
public:

    Player(const std::string &name)
            : m_Name(name) {}

    std::string GetName() override { return m_Name; }
    std::string GetClassName() override { return "Player"; }
};

class A : public Printable {
public:
    std::string GetClassName() override { return "A"; }
};

void PrintName(Entity *entity) {
    std::cout << entity->GetName() << std::endl;
}

void Print(Printable *obj) {
    std::cout << obj->GetClassName() << std::endl;
}

int main() {

    Entity* entity = new Entity();

    Player* player = new Player("yanqi");

    Print(entity);
    Print(player);
    // 可能造成内存泄漏
    Print(new A());

    std::cin.get();
}

#include <iostream>

void Function() {
    static int i = 0;
    i++;
    std::cout << i << std::endl;
}

class Singletion {
public:
    static Singletion& Get() {
        static Singletion instance;
        return instance;
    }

    void Hello() {
        std::cout << "Hello, World!" << std::endl;
    }
};

int main() {

    Singletion::Get().Hello();

    std::cin.get();

}

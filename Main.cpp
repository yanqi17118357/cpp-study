#include <iostream>
#include "Log.h"

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

    Log log;
    log.Warn("Hello!");
    log.Error("Hello!");
    log.Info("Hello!");

    std::cin.get();

}

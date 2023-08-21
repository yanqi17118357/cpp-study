#include <iostream>
#include <string>

// 字符串复制速度很慢，所以确保使用常量引用传递它
void PrintString(const std::string& string) {
    std::cout << string << std::endl;
}

int main() {
    std::string str = std::string("yan") + "qi";
    str += "qi";
    // 由于iostream中已经隐式的包含了string头文件，所以可以直接打印str，不过不建议隐式的调用
    std::cout << str << std::endl;

    PrintString(str);

    std::string name = "yanqi";
    bool contains = name.find("qi") != std::string::npos;
    std::cout << contains << std::endl;

    bool equal = name == str;
    std::cout << equal << std::endl;
    std::cout << str.size() << std::endl;

    std::cin.get();
}

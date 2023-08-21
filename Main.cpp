#include <iostream>
#include <string>
#include <locale>
#include <codecvt>
#include <cstring>

int main() {

    using namespace std::string_literals;

    // 使用string_literals命名空间的s字面量后缀来创建std::string类型的字符串对象
    std::u32string name0 = U"YanQi"s + U" hello";

    // 将 UTF-32 字符串转换为 UTF-8 字符串
    std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> converter;
    std::string utf8_name0 = converter.to_bytes(name0);

    // 输出 UTF-8 字符串
    std::cout << utf8_name0 << std::endl;

    // utf-8字符指针
    const char* str = u8"John";
    // 宽字符类型指针
    const wchar_t* str2 = L"John";
    // utf-16字符指针
    const char16_t* str3 = u"John";
    // utf-32字符指针
    const char32_t* str4 = U"John";

    std::wstring h1 = str2;
    std::u16string h2 = str3;
    std::u32string h3 = str4;

    const char name[8] = "Yan\0Qi";
    // 结果是3，因为strlen会从\0处结束计算
    std::cout << strlen(name) << std::endl;

    std::cin.get();
}

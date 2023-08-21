## 最好的C++教程学习指南

### 变量
变量的唯一区别就是占用多少的内存

### 头文件
使用#parma once指令可以防止头文件被多次引入

### 条件分支
使用条件分支语句是比较消耗性能的

### 循环
Loops is just easy

### 流程控制
continue: 跳过本次循环<br>
break: 跳出循环<br>
return: 从任何地方跳出函数<br>

### 指针
**the pointer is an integer, a number, which stores the memory address!!!**<br>
而指针的指针存储的就是指针的地址，也是只是一个数字而已

### 引用
引用的符号是&<br>
引用是指针的语法糖，在使用的时候不需要使用*来解引用

### 类
类和结构体的区别就是类的成员默认是private的，而结构体的成员默认是public的

### static
在类外边使用，表示这个变量只能在这个文件中使用，不能在其他文件中使用<br>
在类里边使用，表示这个变量是属于这个类的，实例之间共享

### 类和结构体中的static
静态函数不能访问非静态成员变量
静态变量必须在类外被定义，在类内只能声明

### 本地作用域中的static

```c++
// 每次调用此函数，都是用的是同一个i
void Function() {
    // 没有static的话，i创建在堆栈上，退出{}就会被摧毁
    static int i = 0;
    i++;
    std::cout << i << std::endl;
}
```

```c++
// 单例简写代码
class Singletion {
public:
    static Singletion& Get() {
        // 使用本地static，不必定义类的私有属性
        static Singletion instance;
        return instance;
    }

    void Hello() {
        std::cout << "Hello, World!" << std::endl;
    }
};
```

### 枚举
只要是一组可以用整数表示的常量，枚举就是一种方式

### 构造函数
构造函数的作用就是初始化类的成员变量
如果想使构造函数失效有两种方法：
1. 将构造函数声明为private
2. 将构造函数声明为delete

### 析构函数
析构函数的作用就是在对象被销毁的时候，释放资源

### 继承

```cpp
class A {
public:
    float X, Y;
}
class B: public A {
public:
    const char* Name;
}
```

### 虚函数
虚函数的作用就是在子类中重写父类的方法

### 纯虚函数

```cpp
// 语法
virtual void Function() = 0;
```

纯虚函数的作用就是在父类中定义一个**接口**，让子类去实现，从而达到多态的目的

### 访问权限控制
访问控制符有三种：public, protected, private
类中和结构体中不写，不代表没有，只是默认的访问权限不同
这是定义类的时候使用class和struct的仅有的区别
```cpp
// 结构体中默认为public
struct A {
    int X;
    int Y;
}
// 类中默认为private
class B {
    int X;
    int Y;
}
```

### 数组
数组就是一个指针，如`int example[5]`，example就是指向包含5个整数的内存块的指针
**index指的是相对于数组开头的偏移量**
```c++
#include <stdio.h>

// 数组下标注意不要越界，虽然可以通过编译，但是会给出警告，这些数据是毫无意义的
int main() {
    int arr[] = {111, 222, 333};
    printf("%d", arr[3]);  //不能去访问超出数组长度的元素，很明显这里根本就没有第四个元素
}
```

### 字符串
字符串就是一个字符数组，以\0结尾，以这种形式可以非常方便的表示文本内容

### 字符串字面量
C++11 引入了字符串字面量后缀，可以使用后缀来指定字符串的类型
```c++
#include <string>
int main() {
    using namespace std::string_literals;
    std::string str1 = "Hello, World!"s; // 使用 s 后缀表示 std::string 类型的字符串
    std::wstring str2 = L"你好，世界！"s; // 使用 s 后缀表示 std::wstring 类型的字符串
    std::u16string str3 = u"你好，世界！"s; // 使用 s 后缀表示 std::u16string 类型的字符串
    std::u32string str4 = U"你好，世界！"s; // 使用 s 后缀表示 std::u32string 类型的字符串
}
```

对应的字符指针如下：
```c++
#include <string>
int main() {
    const char* str1 = "Hello, World!"; // 使用 s 后缀表示 std::string 类型的字符串
    const wchar_t* str2 = L"你好，世界！"; // 使用 s 后缀表示 std::wstring 类型的字符串
    const char16_t* str3 = u"你好，世界！"; // 使用 s 后缀表示 std::u16string 类型的字符串
    const char32_t* str4 = U"你好，世界！"; // 使用 s 后缀表示 std::u32string 类型的字符串
}
```

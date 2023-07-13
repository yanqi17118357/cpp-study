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
the pointer is an integer, a number, which stores the memory address!!!<br>
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



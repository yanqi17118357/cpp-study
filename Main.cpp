#include <iostream>
#include <array>

class Entity {
public:
    std::array<int, 5> example;
    Entity() {
        int temp = 1;
        for (int & i : example) {
            i = temp;
            temp++;
        }
    }
};

int main() {
    // 和变量一样，如果只是创建数组但是不赋初始值的话，因为是在内存中随机申请的一块空间，有可能之前其他地方使用过，保存了一些数据，所以数组内部的元素值并不一定都是0
    int arr[10];
    for (int i = 0; i < 10; ++i) {
        printf("%d\n", arr[i]);
    }

    int example[5];
    int* ptr = example;
    for (int i = 0; i < 5; ++i) {
        example[i] = 2;
    }
    // 内存偏移量为8的地方进行赋值
    example[2] = 5;
    // 这里的ptr + 2，而不是8，是因为ptr是int类型的指针，所以加2就是加两个int的长度
    *(ptr + 2) = 6;
    // 花里胡哨写法
    *(int *)((char *)ptr + 8) = 7;

    Entity e;
    // size()返回的是size_t类型
    printf("the array size is %zu\n", e.example.size());
    e.example[6] = 2;
    // 打印数组
    for (int i = 0; i < e.example.size(); i++) {
        printf("the index of %d is %d \n", i, e.example[i]);
    }

    std::cin.get();
}

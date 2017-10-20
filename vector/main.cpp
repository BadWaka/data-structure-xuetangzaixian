#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

typedef int Rank;   // 定义秩
#define DEFAULT_CAPACITY 3;  // 默认初始容量

template<typename T>
class Vector {
private:
    Rank _size; // 元素数量
    int _capacity;  // 向量容量
    T *_elem;   // 连续的一段地址空间，其实就是数组啦
};
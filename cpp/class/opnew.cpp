#include<cstddef>
#include<cstdlib>
#include<iostream>
using namespace std;
class A {
    int a, b;

public:
    void * operator new(size_t sz) {
        cout << "doing custom operator new" << endl;
        return ::operator new(sz);
    }
    void operator delete(void* ptr) {
        cout << "doing custom operator delete" << endl;
        ::operator delete(ptr);
    }


    // 可以在ptr的位置上，分配一个A对象
    // C++中 容器有这样的需求
    void* operator new(size_t sz, void * ptr) {
        cout << "doing customer operator new with second parameter: ptr" << endl;
        return ::operator new(sz, ptr);
    }
}; 


int main() {
   auto arr = new A[10];
   auto a1 = new(arr) A;

    return 0;
}
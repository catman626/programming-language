using namespace std;
#include<iostream>

class A{
public:
    A(){
        // typeid will return a typeinfo Obj
        cout << typeid(*this).name() << endl;
    }
};


int main(){


    A a;

    return 0;
}